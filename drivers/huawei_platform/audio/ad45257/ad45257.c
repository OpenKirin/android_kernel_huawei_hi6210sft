#include <linux/init.h>
#include <linux/module.h>
#include <linux/version.h>
#include <linux/errno.h>
#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/delay.h>
#include <linux/notifier.h>
#include <linux/mutex.h>
#include <linux/proc_fs.h>
#include <linux/kthread.h>
#include <linux/clk.h>
#include <linux/gpio.h>
#include <linux/slab.h>
#include <linux/miscdevice.h>
#include <linux/uaccess.h>
#include <linux/string.h>
#include <linux/of.h>
#include <linux/of_device.h>
#include <linux/of_platform.h>
#include <linux/ioctl.h>
#include <linux/io.h>
#include <linux/of_gpio.h>



#include "ad45257.h"

#define LOG_TAG "AD45257"

#define PRINT_INFO  1
#define PRINT_WARN  0
#define PRINT_DEBUG 0
#define PRINT_ERR   1

#if PRINT_INFO
#define logi(fmt, ...) printk("[" LOG_TAG "][I]" fmt "\n", ##__VA_ARGS__)
#else
#define logi(fmt, ...)
#endif

#if PRINT_WARN
#define logw(fmt, ...) printk("[" LOG_TAG "][W]" fmt "\n", ##__VA_ARGS__)
#else
#define logw(fmt, ...)
#endif

#if PRINT_DEBUG
#define logd(fmt, ...) printk("[" LOG_TAG "][D]" fmt "\n", ##__VA_ARGS__)
#else
#define logd(fmt, ...)
#endif

#if PRINT_ERR
#define loge(fmt, ...) printk("[" LOG_TAG "][E]" fmt "\n", ##__VA_ARGS__)
#else
#define loge(fmt, ...)
#endif

#define IOMUX_BLOCK_NAME "block_audio_eph"

static struct ad45257_platform_data *pdata = NULL;
static struct mutex ad45257_lock;

static ssize_t ad45257_gpio_en_show(struct device* dev,
                                struct device_attribute* attr, char* buf)
{
    return snprintf(buf, 32, "%d\n", gpio_get_value(pdata->gpio_ad45257_en));
}

static ssize_t ad45257_gpio_en_store(struct device* dev,
                                 struct device_attribute* attr,
                                 const char* buf, size_t count)
{
    int ret, value;

    ret = kstrtoint(buf, 10, &value);
    if (ret) {
        loge("%s : convert to int type failed\n", __FUNCTION__);
        return ret;
    }
    if (value) {
        gpio_set_value(pdata->gpio_ad45257_en, 1);
    }
    else {
        gpio_set_value(pdata->gpio_ad45257_en, 0);
    }

    return count;
}


static DEVICE_ATTR(gpio_en, 0664, ad45257_gpio_en_show,
                   ad45257_gpio_en_store);

static struct attribute* ad45257_attributes[] =
{
    &dev_attr_gpio_en.attr,
    NULL
};

static const struct attribute_group ad45257_attr_group =
{
    .attrs = ad45257_attributes,
};

static int ad45257_open(struct inode *inode, struct file *file)
{
    return 0;
}

static int ad45257_release(struct inode *inode, struct file *file)
{
    return 0;
}

static long ad45257_ioctl_do_ioctl(struct file *file, 
                                   unsigned int cmd, 
                                   void __user * arg,
                                   int compat_mode)
{
    int ret = 0;

    mutex_lock(&ad45257_lock);
    switch (cmd) {
    case AD45257_ENABLE:
        gpio_set_value(pdata->gpio_ad45257_en, 1);
        break;
    case AD45257_DISABLE:
        gpio_set_value(pdata->gpio_ad45257_en, 0);
        break;
    default:
        loge("%s: invalid command %d", __FUNCTION__, _IOC_NR(cmd));
        ret = -EINVAL;
        break;
    }

    mutex_unlock(&ad45257_lock);
    return ret;
}

static long ad45257_ioctl(struct file *file, unsigned int command,
				unsigned long arg)
{
	return ad45257_ioctl_do_ioctl(file, command, (void __user *)arg, 0);
}

#ifdef CONFIG_COMPAT
static long ad45257_ioctl_compat(struct file *file, unsigned int command,
				unsigned long arg)
{
	return ad45257_ioctl_do_ioctl(file, command, compat_ptr(arg), 1);
}
#else
#define ad45257_ioctl_compat NULL
#endif

static const struct file_operations ad45257_fops = {
    .owner          = THIS_MODULE,
    .open           = ad45257_open,
    .release        = ad45257_release,
    .unlocked_ioctl = ad45257_ioctl,
#ifdef CONFIG_COMPAT
    .compat_ioctl   = ad45257_ioctl_compat,
#endif
};

static struct miscdevice ad45257_device = {
    .minor  = MISC_DYNAMIC_MINOR,
    .name   = AD45257_NAME,
    .fops   = &ad45257_fops,
};

static const struct of_device_id ad45257_of_match[] =
{
    { .compatible = "huawei,ad45257_hs_pa", },
    { },
};
MODULE_DEVICE_TABLE(of, ad45257_of_match);


static int  ad45257_probe(struct platform_device *pdev)
{
    int ret = -ENODEV;

    struct device* dev = &pdev->dev;
    struct device_node* node =  dev->of_node;

    logi("%s", __FUNCTION__);
    pdata = kzalloc(sizeof(struct ad45257_platform_data), GFP_KERNEL);
	if (NULL == pdata){
        loge("%s:pdata is NULL", __FUNCTION__);
        return -ENOMEM;
    }

    /* get switch chip control gpio */
    pdata->gpio_ad45257_en = of_get_named_gpio(node, "gpios", 0);
    if (pdata->gpio_ad45257_en < 0) {
        loge("gpio_ad45257_en is unvalid!\n");
        return -ENOENT;
    }

    if (!gpio_is_valid(pdata->gpio_ad45257_en)) {
        loge("gpio is unvalid!\n");
        return -ENOENT;
    }

    /* request gpio */
    ret = gpio_request(pdata->gpio_ad45257_en, AD45257_NAME);
    if (0 > ret) {
        loge("%s: gpio request enable pin failed", __FUNCTION__);
        goto err_out;
    }

    /* set gpio output & set value low */
    ret = gpio_direction_output(pdata->gpio_ad45257_en, 0);
    if (0 > ret) {
        loge("%s: set gpio direction failed", __FUNCTION__);
        goto err_free_gpio;
    }

    ret = misc_register(&ad45257_device);
    if (ret) {
        loge("%s: ad45257_device register failed", __FUNCTION__);
        goto err_free_gpio;
    }
    
	/* create sysfs for debug function */
	if ((ret = sysfs_create_group(&dev->kobj, &ad45257_attr_group)) < 0) {
	    loge("failed to register sysfs\n");
	}
    return 0;
    
err_free_gpio :
        gpio_free(pdata->gpio_ad45257_en);
err_out:
        kfree(pdata);

    return ret;
}

static int  ad45257_remove(struct platform_device *pdev)
{
    logi("%s", __FUNCTION__);
    gpio_free(pdata->gpio_ad45257_en);
    kfree(pdata);
    return 0;
}

static struct platform_driver ad45257_driver = {
    .driver = {
        .name  = AD45257_NAME,
        .owner = THIS_MODULE,
        .of_match_table = ad45257_of_match,
    },
    .probe  = ad45257_probe,
    .remove = ad45257_remove,
};


static int __init ad45257_init(void)
{
    logi("%s", __FUNCTION__);
    mutex_init(&ad45257_lock);
    return platform_driver_register(&ad45257_driver);
}

static void __exit ad45257_exit(void)
{
    logi("%s", __FUNCTION__);
    platform_driver_unregister(&ad45257_driver);
}

module_init(ad45257_init);
module_exit(ad45257_exit);

MODULE_DESCRIPTION("ad45257 driver");
MODULE_LICENSE("GPL");
