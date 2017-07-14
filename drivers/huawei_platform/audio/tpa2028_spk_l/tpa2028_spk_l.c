#include <linux/i2c.h>
#include <linux/slab.h>
#include <linux/gpio.h>
#include <linux/input.h>
#include <linux/mutex.h>
#include <linux/miscdevice.h>
#include <linux/uaccess.h>
#include <linux/module.h>
#include <linux/device.h>
#include <linux/delay.h>
#include <linux/string.h>
#include <linux/of.h>
#include <linux/of_device.h>
#include <linux/of_platform.h>
#include <linux/ioctl.h>
#include <linux/io.h>
#include <linux/of_gpio.h>



#include "tpa2028_spk_l.h"
#define LOG_TAG "TPA2028_L"
#define MAX_BUFFER_LEN 32
#define TPA2028_SWS_ENABLE  (0xc3)
#define TPA2028_SWS_DISABLE (0xe3)

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

enum TPA2028_STATUS {
    TPA2028_NO_SUSPEND = 0,
    TPA2028_SUSPEND = 1,
};

enum TPA2028_REG_ADDR{
    TPA2028_FUNCTION_CTL    = 1,
    TPA2028_AGC_ATTACK_CTL  = 2,
    TPA2028_AGC_RELEASE_CTL = 3,
    TPA2028_HOLD_TIME_CTL   = 4,
    TPA2028_FIXED_GAIN_CTL  = 5,
    TPA2028_AGC_CTL1        = 6,
    TPA2028_AGC_CTL2        = 7,
};

static struct mutex tpa2028_l_lock;
static struct tpa2028_l_platform_data *pdata = NULL;
static struct i2c_client *this_client;

extern void boost5v_extern_audio_speaker_pa_enable(bool enable);

static int tpa2028_l_i2c_read(unsigned char *rxData, int length)
{
    int ret = 0;
    struct i2c_msg msgs[] = {
        {
            .addr  = this_client->addr,
            .flags = I2C_M_RD,
            .len   = length,
            .buf   = rxData,
        },
    };

    ret = i2c_transfer(this_client->adapter, msgs, 1);
    if (ret < 0)
        loge("%s: transfer error %d", __FUNCTION__, ret);

    return ret;
}

static int tpa2028_l_i2c_write(unsigned char *txData, int length)
{
    int ret = 0;
    struct i2c_msg msg[] = {
        {
            .addr  = this_client->addr,
            .flags = 0,
            .len   = length,
            .buf   = txData,
        },
    };

    ret = i2c_transfer(this_client->adapter, msg, 1);
    if (ret < 0)
        loge("%s: transfer error %d", __FUNCTION__, ret);

    return ret;
}


static void enable_boost(bool enable)
{
    mutex_lock(&pdata->boost_mutex);

    /* use boost_flag to void un-balance call */
    if (enable) {
        if (!pdata->boost_flag) {
            boost5v_extern_audio_speaker_pa_enable(true);
            pdata->boost_flag = true;
        }
    }
    else {
        if (pdata->boost_flag) {
            boost5v_extern_audio_speaker_pa_enable(false);
            pdata->boost_flag = false;
        }
    }

    mutex_unlock(&pdata->boost_mutex);
}

static bool tpa2028_l_get_standby_status()
{
    int addr, ret;
    unsigned char r_buf[] = {0};

    addr = TPA2028_FUNCTION_CTL;

    ret = gpio_get_value(pdata->gpio_tpa2028_en);
    if(!ret){
        logi("%s: gpio_tpa2028_en not set high", __FUNCTION__);
        return true;
    }

    ret = tpa2028_l_i2c_write((unsigned char *)&addr, 1);
    if (ret < 0) {
        loge("%s: i2c write error", __FUNCTION__);
        return true;
    }

    ret = tpa2028_l_i2c_read(r_buf, 1);
    if (ret < 0) {
        loge("%s: i2c read error", __FUNCTION__);
        return true;
    }

    logi("%s: read reg[1] = 0x%x", __FUNCTION__,r_buf[0]);

    if(TPA2028_SWS_ENABLE == r_buf[0]){
        return false;
    }else{
        return true;
    }
}

static ssize_t tpa2028_l_gpio_en_show(struct device* dev,
                                struct device_attribute* attr, char* buf)
{
    return snprintf(buf, 32, "%d\n", gpio_get_value(pdata->gpio_tpa2028_en));
}

static ssize_t tpa2028_l_gpio_en_store(struct device* dev,
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
        gpio_set_value(pdata->gpio_tpa2028_en, 1);
    }
    else {
        gpio_set_value(pdata->gpio_tpa2028_en, 0);
    }

    return count;
}


static DEVICE_ATTR(gpio_en, 0664, tpa2028_l_gpio_en_show,
                   tpa2028_l_gpio_en_store);


static ssize_t tpa2028_l_reg_show(struct device *dev,
	struct device_attribute *attr,
	char *buf)
{
	int ret, i;
    unsigned char r_buf[] = {0};
	char str[20];
    
	for (i = TPA2028_FUNCTION_CTL; i <= TPA2028_AGC_CTL2; i++){
	    ret = tpa2028_l_i2c_write((unsigned char *)&i, 1);
	    if (ret < 0) {
	        loge("%s: i2c write error", __FUNCTION__);
	        return strlen(buf);
	    }
        
	    ret = tpa2028_l_i2c_read(r_buf, 1);
	    if (ret < 0) {
	        loge("%s: i2c read error", __FUNCTION__);
	        return strlen(buf);
	    }
        
	    memset(str ,0 ,sizeof(str));
		sprintf(str, "reg[%d] = 0x%02x\n", i, r_buf[0]);

		strcat(buf, str);
	}

	return strlen(buf);
}


static DEVICE_ATTR(reg_ctrl, 0664, tpa2028_l_reg_show, NULL);


static struct attribute* tpa2028_l_attributes[] =
{
    &dev_attr_gpio_en.attr,
    &dev_attr_reg_ctrl.attr,
    NULL
};

static const struct attribute_group tpa2028_l_attr_group =
{
    .attrs = tpa2028_l_attributes,
};


static int tpa2028_l_open(struct inode *inode, struct file *file)
{
    return 0;
}

static int tpa2028_l_release(struct inode *inode, struct file *file)
{
    return 0;
}

static long tpa2028_l_do_ioctl(struct file *file,
                            unsigned int cmd,
                            void __user * arg,
                            int compat_mode)
{
    long ret = 0;
    unsigned char w_buf[] = {0, 0};
    unsigned char r_buf[] = {0};
    void __user *argp = (void __user *)arg;

    logd("%s: cmd = %#x", __FUNCTION__, _IOC_NR(cmd));

    mutex_lock(&tpa2028_l_lock);
    switch (cmd) {
    case TPA2028_ENABLE:
        if (pdata->gpio_tpa2028_en) {            
            gpio_set_value(pdata->gpio_tpa2028_en, 1);
        }
        ret = 0;
        break;
    case TPA2028_DISABLE:
        if (pdata->gpio_tpa2028_en) {
            gpio_set_value(pdata->gpio_tpa2028_en, 0);
        }
        ret = 0;
        break;
    case TPA2028_SET_REG:
        if (copy_from_user(w_buf, argp, sizeof(w_buf))) {
            loge("%s: copy args form user error", __FUNCTION__);
            ret = -EFAULT;
            goto err_exit;
        }

        /* check register only 1-7 can be r/w */
        if (w_buf[0] < TPA2028_FUNCTION_CTL || w_buf[0] > TPA2028_AGC_CTL2) {
            loge("%s: invalid reg 0x%02x", __FUNCTION__, w_buf[0]);
            ret = -EINVAL;
            goto err_exit;
        }

        logd("%s: set reg %#x %#x", __FUNCTION__, w_buf[0], w_buf[1]);


        ret = tpa2028_l_i2c_write(w_buf, 2);
        break;
    case TPA2028_GET_REG:
        if (copy_from_user(r_buf, argp, sizeof(r_buf))) {
            loge("%s: copy args form user error", __FUNCTION__);
            ret = -EFAULT;
            goto err_exit;
        }

        /* check register only 1-7 can be r/w */
        if (r_buf[0] < TPA2028_FUNCTION_CTL || r_buf[0] > TPA2028_AGC_CTL2) {
            loge("%s: invalid reg 0x%02x", __FUNCTION__, r_buf[0]);
            ret = -EINVAL;
            goto err_exit;
        }

        logd("%s: get reg %#x", __FUNCTION__, r_buf[0]);

        ret = tpa2028_l_i2c_write(r_buf, 1);
        if (ret < 0) {
            loge("%s: i2c write error", __FUNCTION__);
            ret = -EFAULT;
            goto err_exit;
        }
        ret = tpa2028_l_i2c_read(r_buf, 1);

        logd("%s: get value %#x", __FUNCTION__, r_buf[0]);

        if (copy_to_user(argp, &r_buf, 1)) {
            loge("%s: copy args to user error", __FUNCTION__);
            ret = -EFAULT;
        }
        break;
    default:
        loge("%s: invalid command %d", __FUNCTION__, _IOC_NR(cmd));
        ret = -EINVAL;
        break;
    }

err_exit:
    mutex_unlock(&tpa2028_l_lock);
    return ret;
}


static long tpa2028_l_ioctl(struct file *file, unsigned int command,
				unsigned long arg)
{
	return tpa2028_l_do_ioctl(file, command, (void __user *)arg, 0);
}

#ifdef CONFIG_COMPAT
static long tpa2028_l_ioctl_compat(struct file *file, unsigned int command,
				unsigned long arg)
{
	return tpa2028_l_do_ioctl(file, command, compat_ptr(arg), 1);
}
#else
#define tpa2028_l_ioctl_compat NULL
#endif

static const struct file_operations tpa2028_spk_l_fops = {
    .owner          = THIS_MODULE,
    .open           = tpa2028_l_open,
    .release        = tpa2028_l_release,
    .unlocked_ioctl = tpa2028_l_ioctl,
#ifdef CONFIG_COMPAT
    .compat_ioctl	= tpa2028_l_ioctl_compat,
#endif
};

static struct miscdevice tpa2028_l_device = {
    .minor  = MISC_DYNAMIC_MINOR,
    .name   = TPA2028_L_NAME,
    .fops   = &tpa2028_spk_l_fops,
};

static struct of_device_id tpa2028_l_i2c_of_match[] = {
	{ .compatible = "huawei,tpa2028_l", },
	{},
};

MODULE_DEVICE_TABLE(of, tpa2028_l_i2c_of_match);


static int tpa2028_l_probe(struct i2c_client *client,
                           const struct i2c_device_id *id)
{
    int ret = 0;
    
    struct device* dev = &client->dev;
    struct device_node* node =  dev->of_node;

    logi("%s", __FUNCTION__);
	pdata = kzalloc(sizeof(struct tpa2028_l_platform_data), GFP_KERNEL);
	if (NULL == pdata){
        loge("%s:pdata is NULL", __FUNCTION__);
		return -ENOMEM;
    }

    /* get switch chip control gpio */
    pdata->gpio_tpa2028_en =  of_get_named_gpio(node, "gpios", 0);
    if (pdata->gpio_tpa2028_en < 0) {
        loge("gpio_tpa2028_en is unvalid!\n");
        goto err_out;
    }

    if (!gpio_is_valid(pdata->gpio_tpa2028_en)) {
        loge("gpio is unvalid!\n");
        goto err_out;
    }

    this_client = client;

    if (pdata->gpio_tpa2028_en) {
        logd("%s: gpio_tpa2028_en is not null", __FUNCTION__);
        /* request gpio */
        ret = gpio_request(pdata->gpio_tpa2028_en, TPA2028_L_NAME);
        if (ret < 0) {
            loge("%s: gpio request enable pin failed", __FUNCTION__);
            goto err_out;
        }
      
        /* set gpio output & set value low */
        ret = gpio_direction_output(pdata->gpio_tpa2028_en, 0);
        if (ret < 0) {
            loge("%s: request enable gpio direction failed", __FUNCTION__);
            goto err_free_gpio;
        }
    } else {
        loge("%s: gpio_tpa2028_en is null", __FUNCTION__);
        goto err_out;
    }

    ret = misc_register(&tpa2028_l_device);
    if (ret) {
        loge("%s: tpa2028_l_device register failed", __FUNCTION__);
        goto err_free_gpio;
    }
	/* create sysfs for debug function */
	if ((ret = sysfs_create_group(&dev->kobj, &tpa2028_l_attr_group)) < 0) {
	    loge("failed to register sysfs\n");
	}
    mutex_init(&pdata->boost_mutex);

    pdata->boost_flag = false;

    enable_boost(true);

    return 0;
    
err_free_gpio :
    gpio_free(pdata->gpio_tpa2028_en);
err_out:
    kfree(pdata);
    return ret;
}

static int tpa2028_l_remove(struct i2c_client *client)
{
    misc_deregister(&tpa2028_l_device);
    gpio_free(pdata->gpio_tpa2028_en);
    mutex_destroy(&pdata->boost_mutex);
    kfree(pdata);
    return 0;
}

static void tpa2028_l_shutdown(struct i2c_client *client)
{
	int  ret = 0;
	unsigned char w_buf[] = {0, 0};

	if(NULL == pdata)
		return;

	if(!tpa2028_l_get_standby_status()){
		logi("%s: shut down for tpa2028_l", __FUNCTION__);
		w_buf[0] = TPA2028_FUNCTION_CTL;
		w_buf[1] = TPA2028_SWS_DISABLE;

		ret = tpa2028_l_i2c_write(w_buf, 2);
		if (ret < 0)
			loge("%s: i2c write error", __FUNCTION__);
	}

	return;
}

#ifdef CONFIG_PM_SLEEP
static int tpa2028_l_suspend(struct i2c_client *client, pm_message_t message)
{
    logi("%s", __FUNCTION__);
    if(tpa2028_l_get_standby_status()){
        logi("%s: instandby status to suspend", __FUNCTION__);
        gpio_set_value(pdata->gpio_tpa2028_en, 0);
        gpio_direction_input(pdata->gpio_tpa2028_en);
        enable_boost(false);
    }
    return 0;
}

static int tpa2028_l_resume(struct i2c_client *client)
{
    logi("%s", __FUNCTION__);

    if(tpa2028_l_get_standby_status()){
        logi("%s: instandby status to resume", __FUNCTION__);
        enable_boost(true);
        gpio_direction_output(pdata->gpio_tpa2028_en, 0);
    }
    return 0;
}
#else
#define tpa2028_l_suspend NULL
#define tpa2028_l_resume NULL
#endif

static const struct i2c_device_id tpa2028_l_id[] = {
    { TPA2028_L_NAME, 0 },
    { }
};

static struct i2c_driver tpa2028_spk_l_driver = {
    .probe    = tpa2028_l_probe,
    .remove   = tpa2028_l_remove,
    .suspend  = tpa2028_l_suspend,
    .resume   = tpa2028_l_resume,
    .shutdown = tpa2028_l_shutdown,
    .id_table = tpa2028_l_id,
    .driver     = {
        .name = TPA2028_L_NAME,
		.owner = THIS_MODULE,
		.of_match_table = of_match_ptr(tpa2028_l_i2c_of_match),
    },
};

static int __init tpa2028_spk_l_init(void)
{
    logi("%s", __FUNCTION__);
    mutex_init(&tpa2028_l_lock);
    return i2c_add_driver(&tpa2028_spk_l_driver);
}

static void __exit tpa2028_spk_l_exit(void)
{
    logi("%s", __FUNCTION__);
    i2c_del_driver(&tpa2028_spk_l_driver);
}

module_init(tpa2028_spk_l_init);
module_exit(tpa2028_spk_l_exit);

MODULE_DESCRIPTION("tpa2028_spk_l driver");
MODULE_LICENSE("GPL");
