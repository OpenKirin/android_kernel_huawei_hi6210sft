/*
 * Copyright (C) 2012-2015 HUAWEI, Inc.
 * Author: HUAWEI, Inc.
 *
 * This package is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/
#ifndef _CPU_BUCK__H_
#define _CPU_BUCK__H_

#define ERROR_NO_CPU_BUCK_BASE 10450
#define REG_NUMBERS 4
enum error_number
{
/********for lp8754 and lp8755**************/
    /*for reg FLAGS_0*/
    LP8754_BUCK3_FAULT = 0,
    LP8754_BUCK0_FAULT,
    LP8754_TEMP_BETWEEN_85_120,
    LP8754_TEMP_BETWEEN_120_150,
    LP8754_TEMP_OVER_150,
    /*for reg FLAGS_1*/
    LP8754_UVLO,
    LP8754_THERMAL_WARNING,
    LP8754_THERMAL_SHUTDOWN,
    LP8754_OVP,
    LP8754_SCP,
/*******add new ones below*******************/
};

struct cpu_buck_info
{
    enum error_number err_no;
    char error_mask;
    int reg_number;
    char* error_info;
};

struct cpu_buck_device_info {
    struct device   *dev;
    struct delayed_work cpu_buck_delayed_work;
};
int cpu_buck_info_register(struct cpu_buck_info* p, int size);
int cpu_buck_info_unregister(struct cpu_buck_info* p, int size);
#endif
