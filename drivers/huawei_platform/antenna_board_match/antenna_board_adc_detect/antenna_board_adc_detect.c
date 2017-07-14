/*
 * Copyright (C) 2012-2015 HUAWEI, Inc.
 * antenna board detect driver
 * Author:l00345350
 *
 * This program detect the antenna board by adc
 *
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/device.h>
#include <linux/platform_device.h>
#include <linux/of.h>
#include <linux/huawei/hisi_adc.h>
#include <huawei_platform/log/hw_log.h>
#include "antenna_board_adc_detect.h"

#define HWLOG_TAG antenna_board_detect
HWLOG_REGIST();

#define ANTENNA_SYSFS_FIELD(_name, n, m, store)      \
{                                                    \
    .attr = __ATTR(_name, m, antenna_show, store),    \
    .name = ANTENNA_##n,                            \
}

#define ANTENNA_SYSFS_FIELD_RO(_name, n)            \
        ANTENNA_SYSFS_FIELD(_name, n, S_IRUGO, NULL)

extern int get_voltage_by_hkadc(unsigned char ucChan, unsigned short *voltage);

static ssize_t antenna_show(struct device *dev,
        struct device_attribute *attr, char *buf);

struct antenna_detect_info {
    struct device_attribute attr;
    u8 name;
};

static int board_adc_channel = DEFAULT_ANTENNA_BOARD_ADC_CHANNEL;
static int antenna_adc_match_range[2] = {820,975};//ADC match range


static struct antenna_detect_info antenna_tb[] = {
    ANTENNA_SYSFS_FIELD_RO(antenna_board_match,    BOARD_ADC_DETECT),
};

static struct attribute *antenna_sysfs_attrs[ARRAY_SIZE(antenna_tb) + 1];
static const struct attribute_group antenna_sysfs_attr_group = {
    .attrs = antenna_sysfs_attrs,
};
static void antenna_sysfs_init_attrs(void)
{
    int i, limit = ARRAY_SIZE(antenna_tb);

    for (i = 0; i < limit; i++)
    {
        antenna_sysfs_attrs[i] = &antenna_tb[i].attr.attr;
    }
    antenna_sysfs_attrs[limit] = NULL;
}

static struct antenna_detect_info *antenna_board_lookup(const char *name)
{
    int i, limit = ARRAY_SIZE(antenna_tb);

    for (i = 0; i< limit; i++)
    {
        if (!strncmp(name, antenna_tb[i].attr.attr.name,strlen(name)))
            break;
    }
    if (i >= limit)
        return NULL;
    return &antenna_tb[i];
}

static int antenna_detect_sysfs_create_group(struct antenna_device_info *di)
{
    antenna_sysfs_init_attrs();
    return sysfs_create_group(&di->dev->kobj, &antenna_sysfs_attr_group);
}

static inline void antenna_detect_sysfs_remove_group(struct antenna_device_info *di)
{
    sysfs_remove_group(&di->dev->kobj, &antenna_sysfs_attr_group);
}

/*********************************************************
*  Function:       check_match_by_adc
*  Discription:    check if main board is match with the rf board
*  Parameters:     none
*  Return value:   0-not match or 1-match
*********************************************************/
static int check_match_by_adc()
{
    int ret = 0;
    unsigned short rf_voltage = 0;

    get_voltage_by_hkadc(board_adc_channel,&rf_voltage);
    hwlog_info("Antenna board adc voltage = %d\n", rf_voltage);

    if(rf_voltage >= antenna_adc_match_range[0] && rf_voltage <= antenna_adc_match_range[1]){
        ret = 1;
    }else{
        hwlog_err("adc voltage is not in range, Antenna_board_match error!\n");
        ret = 0;
    }

    return ret;
}

static ssize_t antenna_show(struct device *dev,
         struct device_attribute *attr, char *buf)
{
    int adc_ret = 0;
    struct antenna_detect_info *info = NULL;

    info = antenna_board_lookup(attr->attr.name);
    if (!info)
        return -EINVAL;
    switch(info->name){
        case ANTENNA_BOARD_ADC_DETECT:
            adc_ret = check_match_by_adc();
            hwlog_info("%s Get adc match status is %d\n", __func__, adc_ret);
            return snprintf(buf, PAGE_SIZE, "%d\n", adc_ret);
        default:
            hwlog_err("(%s)NODE ERR!!HAVE NO THIS NODE:(%d)\n",__func__,info->name);
            break;
    }
    return 0;
}

static struct class *hw_antenna_class = NULL;
static struct class *antenna_board_detect_class = NULL;
struct device * antenna_dev = NULL;

/*get new class*/
struct class *hw_antenna_get_class(void)
{
    if (NULL == hw_antenna_class)
    {
        hw_antenna_class = class_create(THIS_MODULE, "hw_antenna");
        if (NULL == hw_antenna_class)
        {
            hwlog_err("hw_antenna_class create fail");
            return NULL;
        }
    }
    return hw_antenna_class;
}

static void antenna_board_get_dts(struct antenna_device_info *di)
{
    int ret;
    struct device_node* np;

    np = di->dev->of_node;
    if(NULL == np){
        hwlog_err("%s np is null!\n",__FUNCTION__);
        return;
    }

    //adc channel
    if (of_property_read_u32(np, "antenna_board_adc_channel",&board_adc_channel)){
        hwlog_err("dts:can not get rf board adc channel,use default channel: %d!\n",board_adc_channel);
    }
    hwlog_info("dts:get antenna board adc channel = %d! \n",board_adc_channel);

    //match range
    if(of_property_read_u32_array(np, "antenna_board_match_range", antenna_adc_match_range, 2))
    {
        hwlog_err("%s, antenna_board_match_range not exist, use default array!\n", __func__);
    }
    hwlog_info("antenna_adc_match_range: min = %d,max = %d\n",antenna_adc_match_range[0],antenna_adc_match_range[1]);
}


static int antenna_board_detect_probe(struct platform_device *pdev)
{
    int ret;
    struct antenna_device_info *di;

    di = kzalloc(sizeof(*di), GFP_KERNEL);
    if (!di)
    {
        hwlog_err("alloc di failed\n");
        return -ENOMEM;
    }
    di->dev = &pdev->dev;

    /*get dts data*/
    antenna_board_get_dts(di);

    ret = antenna_detect_sysfs_create_group(di);
    if (ret) {
        hwlog_err("can't create antenna_detect sysfs entries\n");
        goto Antenna_board_failed;
    }
    antenna_board_detect_class = hw_antenna_get_class();
    if(antenna_board_detect_class)
    {
        if(antenna_dev == NULL)
        antenna_dev = device_create(antenna_board_detect_class, NULL, 0, NULL,"antenna_board");
        if(IS_ERR(antenna_dev))
        {
            antenna_dev = NULL;
            hwlog_err("create rf_dev failed!\n");
            goto Antenna_board_failed;
        }
        ret = sysfs_create_link(&antenna_dev->kobj, &di->dev->kobj, "antenna_board_data");
        if(ret)
        {
            hwlog_err("create link to board_detect fail.\n");
            goto Antenna_board_failed;
        }
    }else{
        hwlog_err("get antenna_detect_class fail.\n");
        goto Antenna_board_failed;
    }
    hwlog_info("huawei antenna board detect probe ok!\n");
    return 0;

Antenna_board_failed:
    kfree(di);
    di = NULL;
    return -1;
}

/*
 *probe match table
*/
static struct of_device_id antenna_board_table[] = {
    {
        .compatible = "huawei,antenna_board_detect",
        .data = NULL,
    },
    {},
};

/*
 *antenna board detect driver
 */
static struct platform_driver antenna_board_detect_driver = {
    .probe = antenna_board_detect_probe,
    .driver = {
        .name = "huawei,antenna_board_detect",
        .owner = THIS_MODULE,
        .of_match_table = of_match_ptr(antenna_board_table),
    },
};
/***************************************************************
 * Function: antenna_board_detect_init
 * Description: antenna board detect module initialization
 * Parameters:  Null
 * return value: 0-sucess or others-fail
 * **************************************************************/
static int __init antenna_board_detect_init(void)
{
    return platform_driver_register(&antenna_board_detect_driver);
}
/*******************************************************************
 * Function:       antenna_board_detect_exit
 * Description:    antenna board detect module exit
 * Parameters:   NULL
 * return value:  NULL
 * *********************************************************/
static void __exit antenna_board_detect_exit(void)
{
    platform_driver_unregister(&antenna_board_detect_driver);
}
module_init(antenna_board_detect_init);
module_exit(antenna_board_detect_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("huawei antenna board detect driver");
MODULE_AUTHOR("HUAWEI Inc");
