
#include <linux/clk.h>
#include <linux/delay.h>
#include <linux/gpio.h>
#include <linux/input.h>
#include <linux/interrupt.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/mutex.h>
#include <linux/of.h>
#include <linux/of_gpio.h>
#include <linux/regulator/consumer.h>
#include <linux/spi/spi.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/uaccess.h>
#include <linux/platform_device.h>
#include <linux/wakelock.h>
#include "fingerprint.h"

#define HWLOG_TAG fingerprint
HWLOG_REGIST();

/**
 * sysf node to check the interrupt status of the sensor, the interrupt
 * handler should perform sysf_notify to allow userland to poll the node.
 */
static ssize_t irq_get(struct device* device,
                       struct device_attribute* attribute,
                       char* buffer)
{
    struct fp_data* fingerprint = dev_get_drvdata(device);
    int irq = gpio_get_value(fingerprint->irq_gpio);
    return scnprintf(buffer, PAGE_SIZE, "%i\n", irq);
}


/**
 * writing to the irq node will just drop a printk message
 * and return success, used for latency measurement.
 */
static ssize_t irq_ack(struct device* device,
                       struct device_attribute* attribute,
                       const char* buffer, size_t count)
{
    struct fp_data* fingerprint = dev_get_drvdata(device);
    hwlog_info("%s\n", __func__);
    return count;
}

static DEVICE_ATTR(irq, S_IRUSR | S_IWUSR, irq_get, irq_ack);

static struct attribute* attributes[] =
{
    &dev_attr_irq.attr,
    NULL
};

static const struct attribute_group attribute_group =
{
    .attrs = attributes,
};
static struct fp_data* g_fingerprint = NULL;
int tui_fp_notify(void)
{
    struct fp_data* fingerprint = g_fingerprint;

    if (!fingerprint)
    {
        hwlog_err("%s failed g_fingerprint is NULL\n", __func__);
        return -EINVAL;
    }

    input_event(fingerprint->input_dev, EV_MSC, MSC_SCAN, ++fingerprint->irq_num);
    /* Send irq event and possible wakeup key event */
    input_sync(fingerprint->input_dev);
    hwlog_info("%s fingerprint->irq_num = %d\n", __func__, fingerprint->irq_num);
    return 0;
}
static irqreturn_t fingerprint_irq_handler(int irq, void* handle)
{
    struct fp_data* fingerprint = handle;

    smp_rmb();

    if (fingerprint->wakeup_enabled)
    {
        wake_lock_timeout(&fingerprint->ttw_wl, msecs_to_jiffies(FPC_TTW_HOLD_TIME));
    }

    sysfs_notify(&fingerprint->pf_dev->dev.kobj, NULL, dev_attr_irq.attr.name);
    //hwlog_info("%s \n", __func__);
    return IRQ_HANDLED;
}

static int fingerprint_request_named_gpio(struct fp_data* fingerprint,
        const char* label, int* gpio)
{
    struct device* dev = fingerprint->dev;
    struct device_node* np = dev->of_node;
    int rc = of_get_named_gpio(np, label, 0);

    if (rc < 0)
    {
        hwlog_err("%s failed label:%s\n", __func__, label);
        return rc;
    }

    *gpio = rc;
    rc = devm_gpio_request(dev, *gpio, label);

    if (rc)
    {
        hwlog_err("%s failed *gpio = %d\n", __func__, *gpio);
        return rc;
    }

    hwlog_info("%s label:%s *gpio = %d\n", __func__, label, *gpio);
    return 0;
}

int fingerprint_get_dts_data(struct device* dev, struct fp_data* fp_data)
{
    struct device_node* np;
    int ret = 0;

    if (!dev || !dev->of_node)
    {
        hwlog_err("%s failed dev or dev node is NULL\n", __func__);
        return -EINVAL;
    }

    np = dev->of_node;

    ret = of_property_read_u32(np, "fingerprint,cs_gpio",
                               &fp_data->cs0_gpio);
    if (ret)
    {
        fp_data->cs0_gpio = -EINVAL;
        hwlog_err("%s failed to get cs gpio from device tree\n", __func__);
        goto exit;
    }

    ret = of_property_read_u32(np, "fingerprint,reset_gpio",
                               &fp_data->rst_gpio);

    if (ret)
    {
        fp_data->rst_gpio = -EINVAL;
        hwlog_err("%s failed to get reset gpio from device tree\n", __func__);
        goto exit;
    }

    ret = of_property_read_u32(np, "fingerprint,irq_gpio",
                               &fp_data->irq_gpio);

    if (ret)
    {
        fp_data->irq_gpio = -EINVAL;
        hwlog_err("%s failed to get irq gpio from device tree\n", __func__);
        goto exit;
    }

    fp_data->moduleID_gpio = of_get_named_gpio(np, "fingerprint,moduleid_gpio", 0);

    if ((int)(fp_data->moduleID_gpio) < 0)
    {
        ret = of_property_read_u32(np, "fingerprint,moduleid_gpio",
                                   &fp_data->moduleID_gpio);

        if (ret)
        {
            fp_data->moduleID_gpio = -EINVAL;
            hwlog_err("%s failed to moduleID_gpio gpio from device tree\n", __func__);
            //goto exit;
        }

        hwlog_info("%s moduleID_gpio=%u\n", __func__, fp_data->moduleID_gpio);
    }
    else
    {
        hwlog_info("%s moduleID_gpio=%u\n", __func__, fp_data->moduleID_gpio);
    }

    return 0;

exit:
    return -EINVAL;
}


static void fingerprint_input_report(struct fp_data* fingerprint, int key)
{
    hwlog_info("%s key=%d\n", __func__, key);
    input_report_key(fingerprint->input_dev, key, 1);
    input_sync(fingerprint->input_dev);
    input_report_key(fingerprint->input_dev, key, 0);
    input_sync(fingerprint->input_dev);
}

static int fingerprint_open(struct inode* inode, struct file* file)
{
    struct fp_data* fingerprint;
    hwlog_info("%s\n", __func__);
    fingerprint = container_of(inode->i_cdev, struct fp_data, cdev);
    file->private_data = fingerprint;
    return 0;
}

static int fingerprint_write(struct file* file, char* buff, size_t count, loff_t* ppos)
{
    hwlog_info("%s\n", __func__);
    return 0;
}

static int fingerprint_read(struct file* file, char* buff, size_t count, loff_t* ppos)
{
    hwlog_info("%s\n", __func__);
    return 0;
}

static int fingerprint_get_irq_status(struct fp_data* fingerprint )
{
    int status = 0;
    status = gpio_get_value_cansleep(fingerprint->irq_gpio);
    return status;
}

static long fingerprint_ioctl(struct file* file, unsigned int cmd, unsigned long arg)
{

    int error = 0;

    struct fp_data* fingerprint;
    void __user* argp = (void __user*)arg;
    int key;
    int status;
    fingerprint = (struct fp_data*)file->private_data;

    if (_IOC_TYPE(cmd) != FP_IOC_MAGIC)
    { return -ENOTTY; }

    switch (cmd)
    {
        case FP_IOC_CMD_ENABLE_IRQ:
            hwlog_info("%s FP_IOC_CMD_ENABLE_IRQ\n", __func__);
            enable_irq(gpio_to_irq(fingerprint->irq_gpio ));
            break;

        case FP_IOC_CMD_DISABLE_IRQ:
            hwlog_info("%s FP_IOC_CMD_DISABLE_IRQ\n", __func__);
            disable_irq(gpio_to_irq(fingerprint->irq_gpio ));
            break;

        case FP_IOC_CMD_SEND_UEVENT:
            if (copy_from_user(&key, argp, sizeof(key)))
            {
                hwlog_err("%s copy_from_user failed.\n", __func__);
                return -EFAULT;
            }

            fingerprint_input_report(fingerprint, key);
            hwlog_info("%s FP_IOC_CMD_SEND_UEVENT\n", __func__);
            break;

        case FP_IOC_CMD_GET_IRQ_STATUS:

            status = fingerprint_get_irq_status(fingerprint);

            error = copy_to_user(argp, &status, sizeof(status));

            if (error)
            {
                hwlog_err("%s copy_to_user failed error=%d.\n", __func__, error);
                return -EFAULT;
            }

            hwlog_info("%s FP_IOC_CMD_GET_IRQ_STATUS status=%d\n", __func__, status);
            break;

        case FP_IOC_CMD_SET_WAKELOCK_STATUS:
            if (copy_from_user(&key, argp, sizeof(key)))
            {
                hwlog_err("%s copy_from_user failed.\n", __func__);
                return -EFAULT;
            }

            if (key == 1)
            { fingerprint->wakeup_enabled = true; }
            else
            { fingerprint->wakeup_enabled = false; }

            hwlog_info("%s FP_IOC_CMD_SET_WAKELOCK_STATUS key =%d\n", __func__, key);

            break;

        default:
            hwlog_err("%s error = -EFAULT.\n", __func__);
            error = -EFAULT;
            break;
    }

    return error;
}

static int fingerprint_release(struct inode* inode, struct file* file)
{
    hwlog_info("%s\n", __func__);
    return 0;
}

static const struct file_operations fingerprint_fops =
{
    .owner          = THIS_MODULE,
    .open            = fingerprint_open,
    .write            = fingerprint_write,
    .read             = fingerprint_read,
    .release         = fingerprint_release,
    .unlocked_ioctl = fingerprint_ioctl,
};

static int fingerprint_reset_gpio_init(struct fp_data* fingerprint)
{
    int error = 0;

    if (gpio_is_valid(fingerprint->rst_gpio))
    {

        hwlog_info("%s Assign HW reset -> GPIO%d\n", __func__, fingerprint->rst_gpio);
        error = gpio_request(fingerprint->rst_gpio, "fingerprint_reset");

        if (error)
        {
            hwlog_err("%s gpio_request (reset) failed.\n", __func__);
            return error;
        }

        error = gpio_direction_output(fingerprint->rst_gpio, 0);

        if (error)
        {
            hwlog_err("%s reset pin gpio_direction_output failed.\n", __func__);
            return error;
        }
    }
    else
    {
        hwlog_info("%s Using soft reset\n", __func__);
    }
    return error;
}

static int finerprint_get_module_info(struct fp_data* fingerprint)
{
    int error = 0;
    int val = 0;

    if (gpio_is_valid(fingerprint->moduleID_gpio))
    {
        hwlog_info("%s Assign moduleID -> GPIO%d\n", __func__, fingerprint->moduleID_gpio);
        error = gpio_request(fingerprint->moduleID_gpio, "fingerprint_moduleID_gpio");

        if (error)
        {
            hwlog_err("%s gpio_request (moduleID_gpio) failed.\n", __func__);
            return error;
        }


        error = gpio_direction_input(fingerprint->moduleID_gpio);

        if (error < 0)
        {
            hwlog_err("%s set input mode error, %d\n", __func__, error);
            error = -EINVAL;
            return error;
        }
        mdelay(10);

        val = gpio_get_value_cansleep(fingerprint->moduleID_gpio);
        if(val)
        {
            fingerprint->module_vendor_info = MODULEID_HIGT;
            hwlog_err("%s fingerprint moduleID pin is HIGT and moduleID is CT\n", __func__);
        }
        else
        {
            fingerprint->module_vendor_info = MODULEID_LOW;
            hwlog_err("%s fingerprint moduleID pin is LOW and moduleID is OF\n", __func__);
        }
    }

    return error;
}

static int fingerprint_spi_setup(struct fp_data* fingerprint)
{
    int error = 0;

    hwlog_info("%s \n", __func__);

    fingerprint->spi->mode = SPI_MODE_0;
    fingerprint->spi->bits_per_word = 8;
    error = spi_setup(fingerprint->spi);

    if (error) {
        hwlog_err("%s spi_setup failed\n", __func__);
        goto out_err;
    }

    if (gpio_is_valid(fingerprint->cs0_gpio)) {

        hwlog_info("%s Assign SPI.CS -> GPIO%d\n", __func__,
            fingerprint->cs0_gpio);

        error = gpio_request(fingerprint->cs0_gpio, "fingerprint_cs");
        if (error) {
            hwlog_err("%s gpio_request (cs) failed.\n", __func__);
            goto out_err;
        }

        error = gpio_direction_output(fingerprint->cs0_gpio, 1);
        if (error) {
            hwlog_err("%s gpio_direction_output(cs) failed.\n", __func__);
            goto out_err;
        }
    } else {
        hwlog_err("%s cs0_gpio is not valid\n", __func__);
        error = -EINVAL;
    }
out_err:
    return error;
}

static int fingerprint_irq_init(struct fp_data* fingerprint)
{
    int error = 0;

    if (gpio_is_valid(fingerprint->irq_gpio))
    {
        hwlog_info("%s Assign IRQ -> GPIO%d\n", __func__, fingerprint->irq_gpio);

        error = gpio_request(fingerprint->irq_gpio, "fingerprint_irq");
        if (error)
        {
            hwlog_err("%s gpio_request (irq) failed.\n", __func__);

            return error;
        }

        error = gpio_direction_input(fingerprint->irq_gpio);
        if (error)
        {
            hwlog_err("%s gpio_direction_input (irq) failed.\n", __func__);
            return error;
        }
    }
    else
    {
        hwlog_err("%s irq_gpio is not valid\n", __func__);
        return -EINVAL;
    }

    return error;
}

static int fingerprint_probe(struct spi_device* spi)
{
    struct device* dev = &spi->dev;
    int rc = 0 , error;
    size_t i;
    int irqf;
    struct device_node* np = dev->of_node;
    u32 val;
    const char* idev_name;
    struct fp_data* fingerprint = devm_kzalloc(dev, sizeof(*fingerprint),
                                  GFP_KERNEL);

    if (!fingerprint)
    {
        hwlog_err("%s failed to allocate memory for struct fp_data.\n", __func__);
        rc = -ENOMEM;
        goto exit;
    }

    hwlog_info("%s fingerprint driver v3.0 for Android M ", __func__);

    fingerprint->dev = dev;
    dev_set_drvdata(dev, fingerprint);
    fingerprint->spi = spi;

    if (!np)
    {
        hwlog_err("%s dev->of_node not found.\n", __func__);
        rc = -EINVAL;
        goto exit;
    }

    rc = fingerprint_get_dts_data(&spi->dev, fingerprint);

    if (rc)
    {
        hwlog_err("%s something wrong in fingerprint_get_dts_data error=%d\n", __func__, rc);
        rc = -EINVAL;
        goto exit;
    }

    rc = fingerprint_spi_setup(fingerprint);
    if (rc)
    {
        hwlog_err("%s something wrong in spi setup error=%d\n", __func__, rc);
        rc = -EINVAL;
        goto exit;
    }

    rc = fingerprint_reset_gpio_init(fingerprint);
    if (rc)
    {
        hwlog_err("%s something wrong in reset gpio init error=%d\n", __func__, rc);
        rc = -EINVAL;
        goto exit;
    }

    rc = fingerprint_irq_init(fingerprint);
    if (rc)
    {
        hwlog_err("%s something wrong in irq gpio init error=%d\n", __func__, rc);
        rc = -EINVAL;
        goto exit;
    }

    rc = finerprint_get_module_info(fingerprint);

    if (rc < 0)
    {
        hwlog_err("%s unknow vendor info error=%d\n", __func__, rc);
        goto exit;
    }

    fingerprint->class = class_create(THIS_MODULE, FP_CLASS_NAME);


    rc = alloc_chrdev_region(&fingerprint->devno, 0, 1, FP_DEV_NAME);

    if (rc)
    {
        hwlog_err("%s alloc_chrdev_region failed rc=%d.\n", __func__, rc);
        goto exit;
    }

    fingerprint->device = device_create(fingerprint->class, NULL, fingerprint->devno,
                                        NULL, "%s", FP_DEV_NAME);

    cdev_init(&fingerprint->cdev, &fingerprint_fops);
    fingerprint->cdev.owner = THIS_MODULE;

    rc = cdev_add(&fingerprint->cdev, fingerprint->devno, 1);

    if (rc)
    {
        hwlog_err("%s cdev_add failed rc=%d.\n", __func__, rc);
        rc = -ENOMEM;
        goto exit;
    }

    fingerprint->input_dev = devm_input_allocate_device(dev);

    if (!fingerprint->input_dev)
    {
        hwlog_err("%s failed to allocate input device.\n", __func__);
        rc = -ENOMEM;
        goto exit;
    }


    fingerprint->input_dev->name = "fingerprint";
    /* Also register the key for wake up */
    input_set_capability(fingerprint->input_dev, EV_KEY, EVENT_UP);
    input_set_capability(fingerprint->input_dev, EV_KEY, EVENT_DOWN);
    input_set_capability(fingerprint->input_dev, EV_KEY, EVENT_LEFT);
    input_set_capability(fingerprint->input_dev, EV_KEY, EVENT_RIGHT);
    input_set_capability(fingerprint->input_dev, EV_KEY, EVENT_HOLD);
    input_set_capability(fingerprint->input_dev, EV_KEY, EVENT_CLICK);
    input_set_capability(fingerprint->input_dev, EV_KEY, EVENT_HOLD);
    input_set_capability(fingerprint->input_dev, EV_KEY, EVENT_DCLICK);
    set_bit(EV_KEY, fingerprint->input_dev->evbit);
    set_bit(EVENT_UP, fingerprint->input_dev->evbit);
    set_bit(EVENT_DOWN, fingerprint->input_dev->evbit);
    set_bit(EVENT_LEFT, fingerprint->input_dev->evbit);
    set_bit(EVENT_RIGHT, fingerprint->input_dev->evbit);
    set_bit(EVENT_CLICK, fingerprint->input_dev->evbit);
    set_bit(EVENT_HOLD, fingerprint->input_dev->evbit);
    set_bit(EVENT_DCLICK, fingerprint->input_dev->evbit);
    rc = input_register_device(fingerprint->input_dev);

    if (rc)
    {
        hwlog_err("%s input_register_device failed rc=%d.\n", __func__, rc);
        goto exit;
    }


    fingerprint->wakeup_enabled = false;

    fingerprint->pf_dev = platform_device_alloc(FP_DEV_NAME, -1);

    if (!fingerprint->pf_dev)
    {
        hwlog_err("%s failed fingerprint->pf_dev is NULL.\n", __func__);
        goto exit;
    }

    rc = platform_device_add(fingerprint->pf_dev);

    if (rc)
    {
        hwlog_err("%s platform_device_add failed.\n", __func__);
        platform_device_del(fingerprint->pf_dev);
        goto exit;
    }
    else
    {
        dev_set_drvdata(&fingerprint->pf_dev->dev, fingerprint);

        rc = sysfs_create_group(&fingerprint->pf_dev->dev.kobj, &attribute_group);

        if (rc)
        {
            hwlog_err("%s sysfs_create_group failed rc=%d.\n", __func__, rc);
            goto exit;
        }
    }

    irqf = IRQF_TRIGGER_RISING | IRQF_ONESHOT | IRQF_NO_SUSPEND;

    device_init_wakeup(dev, 1);
    wake_lock_init(&fingerprint->ttw_wl, WAKE_LOCK_SUSPEND, "fpc_ttw_wl");

    mutex_init(&fingerprint->lock);
    rc = devm_request_threaded_irq(dev, gpio_to_irq(fingerprint->irq_gpio),
                                   NULL, fingerprint_irq_handler, irqf,
                                   dev_name(dev), fingerprint);

    if (rc)
    {
        hwlog_err("%s failed could not request irq %d.\n", __func__, gpio_to_irq(fingerprint->irq_gpio));
        goto exit;
    }

    //dev_dbg(dev, "requested irq %d\n", gpio_to_irq(fingerprint->irq_gpio));

    /* Request that the interrupt should be wakeable */
    enable_irq_wake(gpio_to_irq( fingerprint->irq_gpio ) );
    fingerprint->wakeup_enabled = true;

    g_fingerprint = fingerprint;
    hwlog_info("%s OK.\n", __func__);
exit:
    return rc;
}

static int fingerprint_remove(struct spi_device* spi)
{
    struct  fp_data* fingerprint = dev_get_drvdata(&spi->dev);
    sysfs_remove_group(&fingerprint->pf_dev->dev.kobj, &attribute_group);
    cdev_del(&fingerprint->cdev);
    unregister_chrdev_region(fingerprint->devno, 1);
    input_free_device(fingerprint->input_dev);
    mutex_destroy(&fingerprint->lock);
    wake_lock_destroy(&fingerprint->ttw_wl);
    hwlog_info("%s\n", __func__);
    return 0;
}

/* -------------------------------------------------------------------- */
static int fingerprint_suspend(struct device* dev)
{
    hwlog_info("%s\n", __func__);
    return 0;
}
/* -------------------------------------------------------------------- */
static int fingerprint_resume(struct device* dev)
{
    hwlog_info("%s\n", __func__);
    return 0;
}

static const struct dev_pm_ops fingerprint_pm =
{
    .suspend = fingerprint_suspend,
    .resume = fingerprint_resume
};

static struct of_device_id fingerprint_of_match[] =
{
    { .compatible = "fpc,fingerprint", },
    {}
};
MODULE_DEVICE_TABLE(of, fingerprint_of_match);

static struct spi_driver fingerprint_driver =
{
    .driver = {
        .name = "fingerprint",
        .owner = THIS_MODULE,
        .of_match_table = fingerprint_of_match,
        .pm = &fingerprint_pm
    },
    .probe = fingerprint_probe,
    .remove = fingerprint_remove
};

static int __init fingerprint_init(void)
{
    int rc = spi_register_driver(&fingerprint_driver);

    if (!rc)
    { hwlog_info("%s OK\n", __func__); }
    else
    { hwlog_err("%s %d\n", __func__, rc); }

    return rc;
}

static void __exit fingerprint_exit(void)
{
    hwlog_info("%s\n", __func__);
    spi_unregister_driver(&fingerprint_driver);
}

module_init(fingerprint_init);
module_exit(fingerprint_exit);
EXPORT_SYMBOL(tui_fp_notify);

MODULE_LICENSE("GPL v2");
