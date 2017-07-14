/*
 * Wacom Penabled Driver for I2C
 *
 * Copyright (c) 2011-2014 Tatsunosuke Tobita, Wacom.
 * <tobita.tatsunosuke@wacom.co.jp>
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General
 * Public License as published by the Free Software
 * Foundation; either version of 2 of the License,
 * or (at your option) any later version.
 */

#ifndef WACOM_I2C_H
#define WACOM_I2C_H

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/time.h>
#include <linux/delay.h>
#include <linux/device.h>
#include <linux/i2c.h>
#include <linux/input.h>
#include <linux/interrupt.h>
#include <linux/io.h>
#include <linux/platform_device.h>
#include <linux/irq.h>
#include <linux/gpio.h>
#include <linux/regulator/consumer.h>
#include <linux/proc_fs.h>
#include <linux/unistd.h>
#include <linux/of_gpio.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <asm/uaccess.h>
#include <linux/slab.h>
#include <linux/input.h>
#include <linux/input/mt.h>
#include <linux/firmware.h>
#include <linux/power_supply.h> //for a battery in a pen
#include <asm/unaligned.h>
 #ifdef CONFIG_FB	
#include <linux/notifier.h>
#include <linux/fb.h>
 #endif
#include <linux/version.h>
#ifdef CONFIG_HAS_EARLYSUSPEND
#include <linux/earlysuspend.h>
#endif
#include <../../huawei_touchscreen_chips.h>
#include <linux/hisi/hi6xxx-lcd_type.h>
#include <huawei_platform/log/log_jank.h>
#include "../../huawei_touchscreen_algo.h"
#if defined (CONFIG_HUAWEI_DSM)
#include <dsm/dsm_pub.h>
#endif

#include <huawei_platform/touthscreen/huawei_touchscreen.h>

#define WAC_I2C_NAME "wacom_i2c_ts"

#define WACOM_TOUCH_INPUTSIZE   42
#define WACOM_AES_INPUTSIZE     18
#define WACOM_EMR_INPUTSIZE     10

/*For multi-touch operation**/
#define TOUCH_DATA_OFFSET       7
#define G9_FINGER_NUM_FORMAT    2
#define G11_FINGER_NUM_FORMAT   5
#define FINGERNUM_IN_PACKET     G11_FINGER_NUM_FORMAT

#define CMD_SET_FEATURE         0x03
#define CMD_GET_FEATURE         0x02

/*Added for using this prog. in Linux user-space program*/
#define RTYPE_FEATURE           0x03 /*: Report type -> feature(11b)*/
#define GET_FEATURE             0x02
#define SET_FEATURE             0x03
#define GFEATURE_SIZE           6
#define SFEATURE_SIZE           8

/*ReportID for GET/SET features*/
#define TOUCH_QUERY             0x04
#define TOUCH_QUERY_SIZE        16
#define AES_QUERY               0x05
#define AES_QUERY_SIZE          9

/*HID over I2C spec*/
#define HID_DESC_REGISTER       0x01
#define USAGE_PAGE              0x05
#define USAGE_PAGE_DIGITIZERS   0x0d
#define USAGE_PAGE_DESKTOP      0x01
#define USAGE                   0x09
#define USAGE_PEN               0x02
#define USAGE_MOUSE             0x02
#define USAGE_FINGER            0x22
#define USAGE_STYLUS            0x20
#define USAGE_TOUCHSCREEN       0x04
#define USAGE_X                 0x30
#define USAGE_TIPPRESSURE       0x30
#define USAGE_Y                 0x31

#define REPORT_ABS_X_MAX	1199
#define REPORT_ABS_Y_MAX	1919
#define WACOM_ABS_X_MAX		5415
#define WACOM_ABS_Y_MAX		8663
#define WACOM_PEN_ABS_X_MAX	13535
#define WACOM_PEN_ABS_Y_MAX	21657
#define WACOM_ABS_PRESSURE     2047


/*For battery usage*/
#define BATTERY_MAX             255

typedef struct hid_descriptor {
	u16 wHIDDescLength;
	u16 bcdVersion;
	u16 wReportDescLength;
	u16 wReportDescRegister;
	u16 wInputRegister;
	u16 wMaxInputLength;
	u16 wOutputRegister;
	u16 wMaxOutputLength;
	u16 wCommandRegister;
	u16 wDataRegister;
	u16 wVendorID;
	u16 wProductID;
	u16 wVersion;
	u16 RESERVED_HIGH;
	u16 RESERVED_LOW;
} HID_DESC;

struct wacom_features {
	HID_DESC hid_desc;
	unsigned int input_size;
	int x_max;
	int y_max;
	int x_touch;
	int y_touch;
	int pressure_max;
	int fw_version;
	int vendorId;
	int productId;
};

struct wacom_id {
	u32 uniqueId; 
	u16 deviceId;
	u8 designId;
	u8 customerId;
};

struct wacom_i2c {
	struct ts_device_data *wacom_chip_data;
	struct platform_device *wacom_dev;
	struct i2c_client *client;
	struct input_dev *input;
	struct wacom_features *features;
	struct wacom_id ids;
	struct power_supply battery;
	int finger_num;
	int tool;
	unsigned char battery_cap;
	u8 data[WACOM_TOUCH_INPUTSIZE];
	bool rdy;
	int irq_gpio;
	int reset_gpio;
	int vci_gpio;
	struct regulator *tp_vci;
	struct regulator *tp_vddio;
	struct pinctrl *pctrl;
	struct pinctrl_state *pins_default;
	struct pinctrl_state *pins_idle;
 #ifdef CONFIG_FB	
	struct notifier_block fb_notifier;
 #endif
};

bool wacom_i2c_set_feature(struct i2c_client *client, u8 report_id, unsigned int buf_size, u8 *data, 
			   u16 cmdreg, u16 datareg);
bool wacom_i2c_get_feature(struct i2c_client *client, u8 report_id, unsigned int buf_size, u8 *data, 
			   u16 cmdreg, u16 datareg);
int wacom_query_device(struct i2c_client *client, struct wacom_features *features);
void wacom_i2c_setup_battery(struct i2c_client *client);
void wacom_i2c_cleanup_battery(struct i2c_client *client);
#endif
