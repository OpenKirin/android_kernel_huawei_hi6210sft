/************************************************************
*
* Copyright (C), 1988-1999, Huawei Tech. Co., Ltd.
* FileName: hw_typec.c
* Author: wangjing(00270068)       Version : 0.1      Date:  2015-5-28
*
* This software is licensed under the terms of the GNU General Public
* License version 2, as published by the Free Software Foundation, and
* may be copied, distributed, and modified under those terms.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
*  Description:    .c file for type-c core layer which is used to handle
*                  pulic logic management for different chips and to
*                  provide interfaces for exteranl modules.
*  Version:
*  Function List:
*  History:
*  <author>  <time>   <version >   <desc>
***********************************************************/

#include <linux/init.h>
#include <linux/module.h>
#include <linux/device.h>
#include <linux/platform_device.h>
#include <linux/slab.h>
#include <linux/delay.h>
#include <linux/jiffies.h>
#include <linux/wakelock.h>
#include <linux/io.h>
#include <linux/gpio.h>
#include <linux/interrupt.h>
#include <linux/irq.h>
#include <linux/notifier.h>
#include <linux/mutex.h>
#include <huawei_platform/log/hw_log.h>
#include <huawei_platform/usb/hw_typec_dev.h>
#include <huawei_platform/usb/hw_typec_platform.h>
#include <linux/huawei/usb/hisi_usb.h>
#include "../switch/switch_usb_class.h"
#ifdef CONFIG_HUAWEI_HW_DEV_DCT
#include <linux/hw_dev_dec.h>
#endif
#define HWLOG_TAG huawei_typec
HWLOG_REGIST();

struct typec_device_info *g_typec_dev = NULL;
struct class *typec_class = NULL;
struct device *typec_dev = NULL;

/**
 * typec_detect_attachment_status() - detect the usb state(attach or detach).
 */
static int typec_detect_attachment_status(void)
{
    struct typec_device_info *di = g_typec_dev;

    if (NULL == di->ops || NULL == di->ops->detect_attachment_status) {
        hwlog_err("%s: NULL pointer!!!\n", __func__);
        return -ENOMEM;
    }

    return di->ops->detect_attachment_status();
}

/**
 * typec_detect_port_mode() - detect port mode as a result of ID detection on cc pins.
 * DFP means host, while UFP means slave. As a distinctive mode of type-c protocol,
 * DRP can switch between DFP and UFP alternatively with the management of driver.
 */
static int typec_detect_port_mode(void)
{
    struct typec_device_info *di = g_typec_dev;

    if (NULL == di->ops || NULL == di->ops->detect_port_mode) {
        hwlog_err("%s: NULL pointer!!!\n", __func__);
        return -ENOMEM;
    }

    return di->ops->detect_port_mode();
}

/**
 * typec_detect_cc_orientation() - detect inserted plug orientation of type-c devices.
 */
int typec_detect_cc_orientation(void)
{
    struct typec_device_info *di = g_typec_dev;

    if (NULL == di->ops || NULL == di->ops->detect_cc_orientation) {
        hwlog_err("%s: NULL pointer!!!\n", __func__);
        return -ENOMEM;
    }

    return di->ops->detect_cc_orientation();
}
EXPORT_SYMBOL_GPL(typec_detect_cc_orientation);

/**
 * typec_detect_input_current() - detect type-c protocol defined current,
 * which may be called by Charge IC or other related modules.
 */
int typec_detect_input_current(void)
{
    struct typec_device_info *di = g_typec_dev;

    if (NULL == di->ops || NULL == di->ops->detect_input_current) {
        hwlog_err("%s: NULL pointer!!!\n", __func__);
        return -ENOMEM;
    }

    return di->ops->detect_input_current();
}
EXPORT_SYMBOL_GPL(typec_detect_input_current);

/**
 * typec_clean_int_mask() - clean interrupt mask and wait for the next interrupt.
 */
static int typec_clean_int_mask(void)
{
    struct typec_device_info *di = g_typec_dev;

    if (NULL == di->ops || NULL == di->ops->clean_int_mask) {
        hwlog_err("%s: NULL pointer!!!\n", __func__);
        return -ENOMEM;
    }

    return di->ops->clean_int_mask();
}

/**
 * typec_open_otg() - start otg work by calling related modules.
 * fsa9685_manual_sw() is to connect USB signal path.
 * hisi_usb_id_change() is to open VBUS to charge slave devices.
 */
static void typec_open_otg(void)
{
    fsa9685_manual_sw(FSA9685_USB1_ID_TO_IDBYPASS);
    mdelay(10);
    hisi_usb_id_change(ID_FALL_EVENT);
}

/**
 * typec_close_otg() - stop otg work as a pair of typec_open_otg().
 */
static void typec_close_otg(void)
{
    hisi_usb_id_change(ID_RISE_EVENT);
}

/**
 * typec_output_current_store() - create a device node to control type-c protocol current
 * when as a DFP host, charging the UFP slave one.
 */
static ssize_t typec_output_current_store(struct device *dev,
            struct device_attribute *attr, const char *buf, size_t size)
{
    int value;
    struct typec_device_info *di = g_typec_dev;

    if (NULL == di->ops || NULL == di->ops->ctrl_output_current) {
        hwlog_err("%s: NULL pointer!!!\n", __func__);
        return -ENOMEM;
    }

    if (sscanf(buf, "%d", &value) != 1) {
         hwlog_err("%s: write regs failed, invalid input!\n", __func__);
         return -EINVAL;
    }

    switch (value) {
        case TYPEC_HOST_CURRENT_DEFAULT:
            di->ops->ctrl_output_current(TYPEC_HOST_CURRENT_DEFAULT);
            break;
        case TYPEC_HOST_CURRENT_MID:
            di->ops->ctrl_output_current(TYPEC_HOST_CURRENT_MID);
            break;
        case TYPEC_HOST_CURRENT_HIGH:
            di->ops->ctrl_output_current(TYPEC_HOST_CURRENT_HIGH);
            break;
        default:
            hwlog_err("%s: wrong input action!\n", __func__);
            return -EINVAL;
    }

    return size;
}

/**
 * typec_port_mode_store() - create a device node to control port mode, which can be
 * used to choose host and slave alternatively.
 */
static ssize_t typec_port_mode_store(struct device *dev,
            struct device_attribute *attr, const char *buf, size_t size)
{
    int value;
    struct typec_device_info *di = g_typec_dev;

    if (NULL == di->ops || NULL == di->ops->ctrl_port_mode) {
        hwlog_err("%s: NULL pointer!!!\n", __func__);
        return -ENOMEM;
    }

    if (sscanf(buf, "%d", &value) != 1) {
         hwlog_err("%s: write regs failed, invalid input!\n", __func__);
         return -EINVAL;
    }

    switch (value) {
        case TYPEC_HOST_PORT_MODE_DFP:
            di->ops->ctrl_port_mode(TYPEC_HOST_PORT_MODE_DFP);
            break;
        case TYPEC_HOST_PORT_MODE_UFP:
            di->ops->ctrl_port_mode(TYPEC_HOST_PORT_MODE_UFP);
            break;
        case TYPEC_HOST_PORT_MODE_DRP:
            di->ops->ctrl_port_mode(TYPEC_HOST_PORT_MODE_DRP);
            break;
        default:
            hwlog_err("%s: wrong input action!\n", __func__);
            return -EINVAL;
    }

    return size;
}

static DEVICE_ATTR(ctrl_output_current, S_IWUSR, NULL, typec_output_current_store);
static DEVICE_ATTR(ctrl_port_mode, S_IWUSR, NULL, typec_port_mode_store);

static struct attribute *typec_ctrl_attributes[] = {
    &dev_attr_ctrl_output_current.attr,
    &dev_attr_ctrl_port_mode.attr,
    NULL,
};

static const struct attribute_group typec_attr_group = {
    .attrs = typec_ctrl_attributes,
};

/**
 * hw_typec_get_class() - create a class for both core layer and chip layers.
 */
struct class *hw_typec_get_class(void)
{
    if (NULL == typec_class) {
        typec_class = class_create(THIS_MODULE, "hw_typec");
        if (NULL == typec_class) {
            hwlog_err("%s: typec_class create error\n", __func__);
            return NULL;
        }
    }

    return typec_class;
}
EXPORT_SYMBOL_GPL(hw_typec_get_class);

/**
 * typec_intb_work() - handle the public interrupt work which is triggered by interrupts from type-c chips.
 */
void typec_intb_work(struct work_struct *work)
{
    int attach_status, port_mode, input_current, cc_orient;
    static int otg_attach = 0;
    struct typec_device_info *di = container_of(work, struct typec_device_info, g_intb_work);

    mutex_lock(&di->typec_lock);

    attach_status = typec_detect_attachment_status();
    if (TYPEC_ATTACH == attach_status) {
        hwlog_info("%s: typec attach\n", __func__);

        port_mode = typec_detect_port_mode();
        if (TYPEC_DEV_PORT_MODE_DFP == port_mode) {
            hwlog_info("%s: UFP OTG detected\n", __func__);
            otg_attach = 1;
            typec_open_otg();
        } else if (TYPEC_DEV_PORT_MODE_UFP == port_mode) {
            hwlog_info("%s: DFP HOST detected\n", __func__);
        } else {
            hwlog_err("%s: cannot detect a correct port mode\n", __func__);
        }

        input_current = typec_detect_input_current();
        if (TYPEC_DEV_CURRENT_HIGH == input_current) {
            hwlog_info("%s: detected type c current is 3A\n", __func__);
        } else if (TYPEC_DEV_CURRENT_MID == input_current) {
            hwlog_info("%s: detected type c current is 1.5A\n", __func__);
        } else if (TYPEC_DEV_CURRENT_DEFAULT == input_current) {
            hwlog_info("%s: detected type c current is default\n", __func__);
        } else {
            hwlog_err("%s: cannot detect a correct input current\n", __func__);
        }

        cc_orient = typec_detect_cc_orientation();
        if (TYPEC_ORIENT_CC1 == cc_orient) {
            hwlog_info("%s: CC1 detected\n", __func__);
        } else if (TYPEC_ORIENT_CC2 == cc_orient) {
            hwlog_info("%s: CC2 detected\n", __func__);
        } else {
            hwlog_err("%s: cannot detect a cc orientation\n", __func__);
        }
    } else if (TYPEC_DETACH == attach_status) {
        hwlog_info("%s: typec detach\n", __func__);

        if (1 == otg_attach) {
            hwlog_info("%s: UFP OTG detach\n", __func__);
            otg_attach = 0;
            typec_close_otg();
        }
    } else {
        hwlog_err("%s: cannot detect a correct attachment status\n", __func__);
    }

    mutex_unlock(&di->typec_lock);

    typec_clean_int_mask();
}

/**
 * typec_chip_register() - register ops pointer for chip layer.
 * So the external modules can operate chips directly from core layer.
 * Return value is a struct pointer to deliver interrupt message.
 */
struct typec_device_info *typec_chip_register(struct device *dev,
            struct typec_device_ops *ops, struct module *owner)
{
    int ret = 0;
    struct typec_device_info *di = g_typec_dev;

    di->ops = ops;
    di->owner = owner;

    mutex_init(&di->typec_lock);
    INIT_WORK(&di->g_intb_work, typec_intb_work);

    //only after the register, can the device nodes be created.
    if (typec_class) {
        typec_dev = device_create(typec_class, NULL, 0, NULL, "typec");
        ret = sysfs_create_group(&typec_dev->kobj, &typec_attr_group);
        if (ret) {
            hwlog_err("%s: typec sysfs group create error\n", __func__);
            goto typec_create_sysfs_fail;
        }
    }

    return di;

typec_create_sysfs_fail:
    sysfs_remove_group(&typec_dev->kobj, &typec_attr_group);
    return NULL;
}
EXPORT_SYMBOL_GPL(typec_chip_register);

static int __init typec_init(void)
{
    struct typec_device_info *di;

    di = kzalloc(sizeof(*di), GFP_KERNEL);
    if (!di) {
        hwlog_err("%s: alloc di failed\n", __func__);
        return -ENOMEM;
    }

    g_typec_dev = di;

    typec_class = class_create(THIS_MODULE, "hw_typec");
    if (IS_ERR(typec_class)) {
        hwlog_err("%s: cannot create class\n", __func__);
        return PTR_ERR(typec_class);
    }

    return 0;
}

static void __exit typec_exit(void)
{
    class_destroy(typec_class);
    sysfs_remove_group(&typec_dev->kobj, &typec_attr_group);
}

subsys_initcall(typec_init);
module_exit(typec_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("huawei typec core");
MODULE_AUTHOR("WangJing<wangjing6@huawei.com>");
