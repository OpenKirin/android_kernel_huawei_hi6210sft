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
#include <dsm/dsm_pub.h>
#include <cpu_buck.h>

#define HWLOG_TAG cpu_buck
HWLOG_REGIST();

static char regs[REG_NUMBERS];
static unsigned int fault_happened = 0;
static struct dsm_client *cpu_buck_client = NULL;
static struct cpu_buck_info* p_array = NULL;
static int array_size = 0;

static struct dsm_dev dsm_cpu_buck = {
    .name = "dsm_cpu_buck",
    .fops = NULL,
    .buff_size = 1024,
};

int cpu_buck_info_register(struct cpu_buck_info* p, int size)
{
    if(NULL != p_array || 0 != array_size)
    {
        hwlog_err("already been registered\n");
        return -1;
    }
    p_array = p;
    array_size = size;
    hwlog_info("array_size = %d\n", size);
    return 0;
}

int cpu_buck_info_unregister(struct cpu_buck_info* p, int size)
{
    if(p_array == p && array_size == size)
    {
        p_array = NULL;
        array_size = 0;
        hwlog_info("unregister success\n");
        return 0;
    }
    hwlog_err("unregister fail\n");
    return -1;
}

static int __init early_parse_cpu_buck_reg_cmdline(char * p)
{
    char* start;
    int i;

    memset(regs, 0, sizeof(regs));

    if (p)
    {
        start = p + 2;
        for (i = 0; i < REG_NUMBERS; ++i)
        {
            char high4, low4;
            high4 = *(start + 2 * i);
            high4 = (high4 > '9') ? (high4 - 'a' + 0x0a) : (high4 - '0');
            low4 = *(start + 2 * i + 1);
            low4 = (low4 > '9') ? (low4 - 'a' + 0x0a) : (low4 - '0');
            regs[i] = ((high4 & 0x0F) << 4) | (low4 & 0x0F);
            hwlog_info("reg[%d] = 0x%x\n", i, regs[i]);
        }
    }
    return 0;
}
early_param("cpu_buck_reg", early_parse_cpu_buck_reg_cmdline);

static int __init early_parse_normal_reset_type_cmdline(char * p)
{
    if (p)
    {
        if (!strncmp(p,"CPU_BUCK", 5))
        {
            fault_happened = 1;
        }
    }
    hwlog_info("fault happened = %d\n", fault_happened);
    return 0;
}
early_param("normal_reset_type", early_parse_normal_reset_type_cmdline);

static void cpu_buck_work(struct work_struct *work)
{
    int i = 0;
    struct cpu_buck_info* p = p_array;

    if (fault_happened)
    {
        for (i = 0; i < array_size; ++i)
        {
            if (((p + i)->error_mask & regs[(p + i)->reg_number]) == (p + i)->error_mask)
            {
                if (!dsm_client_ocuppy(cpu_buck_client))
                {
                    hwlog_info("cpu_buck record and notify: %s\n", (p + i)->error_info);
                    dsm_client_record(cpu_buck_client, "cpu_buck %s happened!\n", (p + i)->error_info);
                    dsm_client_notify(cpu_buck_client, ERROR_NO_CPU_BUCK_BASE + (p + i)->err_no);
                    break;
                }
            }
        }
    }
}

static int cpu_buck_probe(struct platform_device *pdev)
{
    struct device_node* np;
    struct cpu_buck_device_info* di;

    np = pdev->dev.of_node;
    if(NULL == np)
    {
        hwlog_err("np is NULL\n");
        return -1;
    }
    di = kzalloc(sizeof(*di), GFP_KERNEL);
    if (!di)
    {
        hwlog_err("di is NULL\n");
        return -ENOMEM;
    }
    if (!cpu_buck_client)
    {
        cpu_buck_client = dsm_register_client(&dsm_cpu_buck);
    }
    if (NULL == cpu_buck_client)
    {
        hwlog_err("cpu_buck register dsm fail\n");
        return -1;
    }
    INIT_DELAYED_WORK(&di->cpu_buck_delayed_work, cpu_buck_work);
    schedule_delayed_work(&di->cpu_buck_delayed_work, 10);
    hwlog_info("cpu_buck probe ok!\n");
    return 0;
}

static struct of_device_id cpu_buck_match_table[] =
{
    {
        .compatible = "huawei,cpu_buck",
        .data = NULL,
    },
    {
    },
};
static struct platform_driver cpu_buck_driver = {
    .probe = cpu_buck_probe,
    .driver = {
        .name = "huawei,cpu_buck",
        .owner = THIS_MODULE,
        .of_match_table = of_match_ptr(cpu_buck_match_table),
    },
};

static int __init cpu_buck_init(void)
{
    return platform_driver_register(&cpu_buck_driver);
}

module_init(cpu_buck_init);

static void __exit cpu_buck_exit(void)
{
    platform_driver_unregister(&cpu_buck_driver);
}

module_exit(cpu_buck_exit);

MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:cpu_buck");
MODULE_AUTHOR("HUAWEI Inc");
