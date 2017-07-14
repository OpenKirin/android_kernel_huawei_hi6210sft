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


#include "tpa2028_spk_r.h"

#define LOG_TAG "TPA2028_R"

#define PRINT_INFO  1
#define PRINT_WARN  0
#define PRINT_DEBUG 0
#define PRINT_ERR   1

#define TPA2028_SWS_ENABLE  (0xc3)
#define TPA2028_SWS_DISABLE (0xe3)

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

static struct mutex tpa2028_r_lock;
static struct i2c_client *this_client;

static int tpa2028_r_i2c_read(unsigned char *rxData, int length)
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

static int tpa2028_r_i2c_write(unsigned char *txData, int length)
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


static bool tpa2028_r_get_standby_status()
{
    int addr, ret;
    unsigned char r_buf[] = {0};

    addr = TPA2028_FUNCTION_CTL;

    ret = tpa2028_r_i2c_write((unsigned char *)&addr, 1);
    if (ret < 0) {
        loge("%s: i2c write error", __FUNCTION__);
        return true;
    }

    ret = tpa2028_r_i2c_read(r_buf, 1);
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


static ssize_t tpa2028_r_reg_show(struct device *dev,
	struct device_attribute *attr,
	char *buf)
{
	int ret, i;
    unsigned char r_buf[] = {0};
	char str[20];
    
	for (i = TPA2028_FUNCTION_CTL; i <= TPA2028_AGC_CTL2; i++){
	    ret = tpa2028_r_i2c_write((unsigned char *)&i, 1);
	    if (ret < 0) {
	        loge("%s: i2c write error", __FUNCTION__);
	        return strlen(buf);
	    }
        
	    ret = tpa2028_r_i2c_read(r_buf, 1);
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

static DEVICE_ATTR(reg_ctrl, 0664, tpa2028_r_reg_show, NULL);

static int tpa2028_r_open(struct inode *inode, struct file *file)
{  
    return 0;
}

static int tpa2028_r_release(struct inode *inode, struct file *file)
{
    return 0;
}

static long tpa2028_r_do_ioctl(struct file *file,
                            unsigned int cmd,
                            void __user * arg,
                            int compat_mode)
{
    int ret = 0;
    unsigned char w_buf[] = {0, 0};
    unsigned char r_buf[] = {0};
    void __user *argp = (void __user *)arg;

    logd("%s: cmd = %#x", __FUNCTION__, _IOC_NR(cmd));

    mutex_lock(&tpa2028_r_lock);
    switch (cmd) {
    case TPA2028_ENABLE:
        break;
    case TPA2028_DISABLE:
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


        ret = tpa2028_r_i2c_write(w_buf, 2);
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

        ret = tpa2028_r_i2c_write(r_buf, 1);
        if (ret < 0) {
            loge("%s: i2c write error", __FUNCTION__);
            ret = -EFAULT;
            goto err_exit;
        }
        ret = tpa2028_r_i2c_read(r_buf, 1);

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
    mutex_unlock(&tpa2028_r_lock);
    return ret;
}

static long tpa2028_r_ioctl(struct file *file, unsigned int command,
				unsigned long arg)
{
	return tpa2028_r_do_ioctl(file, command, (void __user *)arg, 0);
}


#ifdef CONFIG_COMPAT
static long tpa2028_r_ioctl_compat(struct file *file, unsigned int command,
				unsigned long arg)
{
	return tpa2028_r_do_ioctl(file, command, compat_ptr(arg), 1);
}
#else
#define tpa2028_r_ioctl_compat NULL
#endif


static const struct file_operations tpa2028_spk_r_fops = {
    .owner          = THIS_MODULE,
    .open           = tpa2028_r_open,
    .release        = tpa2028_r_release,
    .unlocked_ioctl = tpa2028_r_ioctl,
#ifdef CONFIG_COMPAT 
    .compat_ioctl	= tpa2028_r_ioctl_compat,
#endif
};

static struct miscdevice tpa2028_r_device = {
    .minor  = MISC_DYNAMIC_MINOR,
    .name   = TPA2028_R_NAME,
    .fops   = &tpa2028_spk_r_fops,
};

static struct of_device_id tpa2028_r_i2c_of_match[] = {
	{ .compatible = "huawei,tpa2028_r", },
	{},
};

MODULE_DEVICE_TABLE(of, tpa2028_r_i2c_of_match);


static int tpa2028_r_probe(struct i2c_client *client,
                           const struct i2c_device_id *id)
{
    int ret = 0;
    struct device* dev = &client->dev;

    logi("%s", __FUNCTION__);

    this_client = client;

    ret = misc_register(&tpa2028_r_device);
    if (ret) {
        loge("%s: tpa2028_r_device register failed", __FUNCTION__);
        return ret;
    }
    sysfs_create_file(&dev->kobj, &dev_attr_reg_ctrl.attr);

    return 0;
}

static int tpa2028_r_remove(struct i2c_client *client)
{
    misc_deregister(&tpa2028_r_device);
    return 0;
}

static void tpa2028_r_shutdown(struct i2c_client *client)
{
	int  ret = 0;
	unsigned char w_buf[] = {0, 0};

	if(!tpa2028_r_get_standby_status()){
		logi("%s: shut down for tpa2028_r", __FUNCTION__);
		w_buf[0] = TPA2028_FUNCTION_CTL;
		w_buf[1] = TPA2028_SWS_DISABLE;

		ret = tpa2028_r_i2c_write(w_buf, 2);
		if (ret < 0)
			loge("%s: i2c write error", __FUNCTION__);
	}

	return;
}

static const struct i2c_device_id tpa2028_r_id[] = {
    { TPA2028_R_NAME, 0 },
    { }
};

static struct i2c_driver tpa2028_spk_r_driver = {
    .probe    = tpa2028_r_probe,
    .remove   = tpa2028_r_remove,
    .shutdown = tpa2028_r_shutdown,
    .id_table = tpa2028_r_id,
    .driver     = {
        .name = TPA2028_R_NAME,
		.owner = THIS_MODULE,
		.of_match_table = of_match_ptr(tpa2028_r_i2c_of_match),
    },
};

static int __init tpa2028_spk_r_init(void)
{
    logi("%s", __FUNCTION__);
    mutex_init(&tpa2028_r_lock);
    return i2c_add_driver(&tpa2028_spk_r_driver);
}

static void __exit tpa2028_spk_r_exit(void)
{
    logi("%s", __FUNCTION__);
    i2c_del_driver(&tpa2028_spk_r_driver);
}

module_init(tpa2028_spk_r_init);
module_exit(tpa2028_spk_r_exit);

MODULE_DESCRIPTION("tpa2028_spk_r driver");
MODULE_LICENSE("GPL");
