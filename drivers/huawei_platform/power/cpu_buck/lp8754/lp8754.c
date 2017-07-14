/*
 * Copyright (C) 2012-2015 HUAWEI, Inc.
 * Author: HUAWEI, Inc.
 *
 * This package is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/module.h>
#include <linux/device.h>
#include <linux/slab.h>
#include <linux/of.h>
#include <linux/platform_device.h>
#include <huawei_platform/log/hw_log.h>
#include <../cpu_buck.h>

#define HWLOG_TAG lp8754
HWLOG_REGIST();

static struct cpu_buck_info lp8754_error_array[] =
{
    {LP8754_BUCK3_FAULT, 0x20, 0, "LP8754_BUCK3_FAULT"},
    {LP8754_BUCK0_FAULT, 0x04, 0, "LP8754_BUCK0_FAULT"},
    {LP8754_TEMP_BETWEEN_85_120, 0x03, 0, "LP8754_TEMP_BETWEEN_85_120"},
    {LP8754_TEMP_BETWEEN_120_150, 0x02, 0, "LP8754_TEMP_BETWEEN_120_150"},
    {LP8754_TEMP_OVER_150, 0x01, 0, "LP8754_TEMP_OVER_150"},
    {LP8754_UVLO, 0x10, 1, "LP8754_UVLO"},
    {LP8754_THERMAL_WARNING, 0x08, 1, "LP8754_THERMAL_WARNING"},
    {LP8754_THERMAL_SHUTDOWN, 0x04, 1, "LP9754_THERMAL_SHUTDOWN"},
    {LP8754_OVP, 0x02, 1, "LP8754_OVP"},
    {LP8754_SCP, 0x01, 1, "LP8754_SCP"},
};

static int lp8754_probe(struct platform_device *pdev)
{
    struct device_node* np;
    struct cpu_buck_info* p = lp8754_error_array;

    np = pdev->dev.of_node;
    if (NULL == np)
    {
        hwlog_err("np is NULL\n");
        return -1;
    }
    if (cpu_buck_info_register(p, sizeof(lp8754_error_array) / sizeof(struct cpu_buck_info)))
    {
        hwlog_err("register fail\n");
        return -1;
    }
    hwlog_info("register success\n");
    return 0;
}

static struct of_device_id lp8754_match_table[] =
{
    {
        .compatible = "huawei,lp8754",
        .data = NULL,
    },
    {
    },
};
static struct platform_driver lp8754_driver = {
    .probe = lp8754_probe,
    .driver = {
        .name = "huawei,lp8754",
        .owner = THIS_MODULE,
        .of_match_table = of_match_ptr(lp8754_match_table),
    },
};

static int __init lp8754_init(void)
{
    return platform_driver_register(&lp8754_driver);
}

fs_initcall_sync(lp8754_init);

static void __exit lp8754_exit(void)
{
    platform_driver_unregister(&lp8754_driver);
}

module_exit(lp8754_exit);

MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:lp8754");
MODULE_AUTHOR("HUAWEI Inc");
