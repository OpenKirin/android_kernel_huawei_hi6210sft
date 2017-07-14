/* Copyright (c) 2008-2014, Hisilicon Tech. Co., Ltd. All rights reserved.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 and
* only version 2 as published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	See the
* GNU General Public License for more details.
*
*/

#include "hisi_fb.h"
//#include "k3_mipi_dsi.h"
#include <linux/lcd_tuning.h>
#include "hisi_fb_panel.h"
//#include <linux/of.h>
//#include <linux/log_jank.h>
#include <linux/huawei/hisi_adc.h>
#include <huawei_platform/touthscreen/huawei_touchscreen.h>
#include "mipi_jdi_NT35695.h"
#include <linux/hisi/hw_cmdline_parse.h>
//#include <asm/hw_cmdline_parse.h>
#include <huawei_platform/log/log_jank.h>
#include <linux/hisi/hi3xxx-lcd_type.h>

#define DTS_COMP_JDI_NT35695 "hisilicon,mipi_jdi_NT35695_PINE"
#define LCD_VDDIO_TYPE_NAME	"lcd-vddio-type"

/******************************************************************************
** DEFECT_CHECK_STEPS_CHOICE: 0 for 8 steps; 1 for last 4 steps; 2 for first 4 steps
*/
#ifdef CONFIG_LCD_DEFECT_CHECK
#define DEFECT_CHECK_STEPS_CHOICE 2
#endif
#define CABC_OFF 0
#define CABC_UI_MODE 1
#define CABC_STILL_MODE 2
#define CABC_MOVING_MODE 3

static struct hisi_fb_panel_data jdi_panel_data;
extern u32 frame_count;
static bool debug_enable = false;
static int hkadc_buf = 0;
extern bool gesture_func;
extern int fastboot_set_needed;

static uint32_t g_vddio_type = 0;

enum {
        LCD_CHECK_REG_FAIL = -1,
        LCD_CHECK_REG_PASS = 0,
};

enum {
        LCD_GRAM_CHECKSUM_FAIL = -1,
        LCD_GRAM_CHECKSUM_PASS = 0,
};

enum {
        LCD_GRAM_CHECKSUM_ENABLE = 1,
        LCD_GRAM_CHECKSUM_DISABLE = 2,
        LCD_GRAM_CHECKSUM_READ = 3,
};
/*******************************************************************************
** Power ON Sequence(sleep mode to Normal mode)
*/
static char caset_data[] = {
	0x2A,
	0x00,0x00,0x04, 0x37,
};

static char paset_data[] = {
	0x2B,
	0x00,0x00,0x07,0x7f,
};

static char tear_on_00[] = {
	0x35,
	0x00,
};

static char tear_on_f0[] = {
	0x35,
	0xf0,
};


static char display_on[] = {
	0x29,
};

static char exit_sleep[] = {
	0x11,
};

static char bl_enable[] = {
	0x53,
	0x24,
};

static char te_line[] = {
	0x44,
	0x03, 0x80,
};

/*******************************************************************************
** setting PWM frequency to 58KHZ
*/

static char set_page3[] = {
	0xFF,
	0x23,
};

static char set_pwm_freq[] = {
	0x08,
	0x03,
};

static char set_page0[] = {
	0xFF,
	0x10,
};

/*******************************************************************************
** Power OFF Sequence(Normal to power off)
*/
static char bl_disable[] = {
	0x53,
	0x00,
};

static char display_off[] = {
	0x28,
};

static char enter_sleep[] = {
	0x10,
};
/*******************************************************************************
** Display Effect Sequence(smart color, edge enhancement, smart contrast, cabc)
*/
static char page_selection_0xFF_0x20[] = {
	0xFF,
	0x20,
};

static char page_selection_0xFB_0x01[] = {
	0xFB,
	0x01,
};

static char gamma_dither_0x68[] = {
	0x68,
	0x03,
};

//R(+) MCR cmd
static char gamma_r_positive_0x75[] = {
	0x75,
	0x00,
};

static char gamma_r_positive_0x76[] = {
	0x76,
	0x00,
};

static char gamma_r_positive_0x77[] = {
	0x77,
	0x00,
};

static char gamma_r_positive_0x78[] = {
	0x78,
	0x03,
};

static char gamma_r_positive_0x79[] = {
	0x79,
	0x00,
};

static char gamma_r_positive_0x7A[] = {
	0x7A,
	0x0B,
};

static char gamma_r_positive_0x7B[] = {
	0x7B,
	0x00,
};

static char gamma_r_positive_0x7C[] = {
	0x7C,
	0x40,
};

static char gamma_r_positive_0x7D[] = {
	0x7D,
	0x00,
};

static char gamma_r_positive_0x7E[] = {
	0x7E,
	0x68,
};

static char gamma_r_positive_0x7F[] = {
	0x7F,
	0x00,
};

static char gamma_r_positive_0x80[] = {
	0x80,
	0x8C,
};

static char gamma_r_positive_0x81[] = {
	0x81,
	0x00,
};

static char gamma_r_positive_0x82[] = {
	0x82,
	0xA6,
};

static char gamma_r_positive_0x83[] = {
	0x83,
	0x00,
};

static char gamma_r_positive_0x84[] = {
	0x84,
	0xC0,
};

static char gamma_r_positive_0x85[] = {
	0x85,
	0x00,
};

static char gamma_r_positive_0x86[] = {
	0x86,
	0xD7,
};

static char gamma_r_positive_0x87[] = {
	0x87,
	0x01,
};

static char gamma_r_positive_0x88[] = {
	0x88,
	0x1C,
};

static char gamma_r_positive_0x89[] = {
	0x89,
	0x01,
};

static char gamma_r_positive_0x8A[] = {
	0x8A,
	0x4F,
};

static char gamma_r_positive_0x8B[] = {
	0x8B,
	0x01,
};

static char gamma_r_positive_0x8C[] = {
	0x8C,
	0x96,
};

static char gamma_r_positive_0x8D[] = {
	0x8D,
	0x01,
};

static char gamma_r_positive_0x8E[] = {
	0x8E,
	0xCC,
};

static char gamma_r_positive_0x8F[] = {
	0x8F,
	0x02,
};

static char gamma_r_positive_0x90[] = {
	0x90,
	0x1D,
};

static char gamma_r_positive_0x91[] = {
	0x91,
	0x02,
};

static char gamma_r_positive_0x92[] = {
	0x92,
	0x5C,
};

static char gamma_r_positive_0x93[] = {
	0x93,
	0x02,
};

static char gamma_r_positive_0x94[] = {
	0x94,
	0x5D,
};

static char gamma_r_positive_0x95[] = {
	0x95,
	0x02,
};

static char gamma_r_positive_0x96[] = {
	0x96,
	0x98,
};

static char gamma_r_positive_0x97[] = {
	0x97,
	0x02,
};

static char gamma_r_positive_0x98[] = {
	0x98,
	0xD5,
};

static char gamma_r_positive_0x99[] = {
	0x99,
	0x02,
};

static char gamma_r_positive_0x9A[] = {
	0x9A,
	0xFC,
};

static char gamma_r_positive_0x9B[] = {
	0x9B,
	0x03,
};

static char gamma_r_positive_0x9C[] = {
	0x9C,
	0x2B,
};

static char gamma_r_positive_0x9D[] = {
	0x9D,
	0x03,
};

static char gamma_r_positive_0x9E[] = {
	0x9E,
	0x47,
};

static char gamma_r_positive_0x9F[] = {
	0x9F,
	0x03,
};

static char gamma_r_positive_0xA0[] = {
	0xA0,
	0x6C,
};

static char gamma_r_positive_0xA2[] = {
	0xA2,
	0x03,
};

static char gamma_r_positive_0xA3[] = {
	0xA3,
	0x77,
};

static char gamma_r_positive_0xA4[] = {
	0xA4,
	0x03,
};

static char gamma_r_positive_0xA5[] = {
	0xA5,
	0x81,
};

static char gamma_r_positive_0xA6[] = {
	0xA6,
	0x03,
};

static char gamma_r_positive_0xA7[] = {
	0xA7,
	0x8F,
};

static char gamma_r_positive_0xA9[] = {
	0xA9,
	0x03,
};

static char gamma_r_positive_0xAA[] = {
	0xAA,
	0x9E,
};

static char gamma_r_positive_0xAB[] = {
	0xAB,
	0x03,
};

static char gamma_r_positive_0xAC[] = {
	0xAC,
	0xB0,
};

static char gamma_r_positive_0xAD[] = {
	0xAD,
	0x03,
};

static char gamma_r_positive_0xAE[] = {
	0xAE,
	0xC8,
};

static char gamma_r_positive_0xAF[] = {
	0xAF,
	0x03,
};

static char gamma_r_positive_0xB0[] = {
	0xB0,
	0xEB,
};

static char gamma_r_positive_0xB1[] = {
	0xB1,
	0x03,
};

static char gamma_r_positive_0xB2[] = {
	0xB2,
	0xFF,
};

//R(-) MCR cmd
static char gamma_r_negative_0xB3[] = {
	0xB3,
	0x00,
};

static char gamma_r_negative_0xB4[] = {
	0xB4,
	0x00,
};

static char gamma_r_negative_0xB5[] = {
	0xB5,
	0x00,
};

static char gamma_r_negative_0xB6[] = {
	0xB6,
	0x03,
};

static char gamma_r_negative_0xB7[] = {
	0xB7,
	0x00,
};

static char gamma_r_negative_0xB8[] = {
	0xB8,
	0x0B,
};

static char gamma_r_negative_0xB9[] = {
	0xB9,
	0x00,
};

static char gamma_r_negative_0xBA[] = {
	0xBA,
	0x40,
};

static char gamma_r_negative_0xBB[] = {
	0xBB,
	0x00,
};

static char gamma_r_negative_0xBC[] = {
	0xBC,
	0x68,
};

static char gamma_r_negative_0xBD[] = {
	0xBD,
	0x00,
};

static char gamma_r_negative_0xBE[] = {
	0xBE,
	0x8C,
};

static char gamma_r_negative_0xBF[] = {
	0xBF,
	0x00,
};

static char gamma_r_negative_0xC0[] = {
	0xC0,
	0xA6,
};

static char gamma_r_negative_0xC1[] = {
	0xC1,
	0x00,
};

static char gamma_r_negative_0xC2[] = {
	0xC2,
	0xC0,
};

static char gamma_r_negative_0xC3[] = {
	0xC3,
	0x00,
};

static char gamma_r_negative_0xC4[] = {
	0xC4,
	0xD7,
};

static char gamma_r_negative_0xC5[] = {
	0xC5,
	0x01,
};

static char gamma_r_negative_0xC6[] = {
	0xC6,
	0x1C,
};

static char gamma_r_negative_0xC7[] = {
	0xC7,
	0x01,
};

static char gamma_r_negative_0xC8[] = {
	0xC8,
	0x4F,
};

static char gamma_r_negative_0xC9[] = {
	0xC9,
	0x01,
};

static char gamma_r_negative_0xCA[] = {
	0xCA,
	0x96,
};

static char gamma_r_negative_0xCB[] = {
	0xCB,
	0x01,
};

static char gamma_r_negative_0xCC[] = {
	0xCC,
	0xCC,
};

static char gamma_r_negative_0xCD[] = {
	0xCD,
	0x02,
};

static char gamma_r_negative_0xCE[] = {
	0xCE,
	0x1D,
};

static char gamma_r_negative_0xCF[] = {
	0xCF,
	0x02,
};

static char gamma_r_negative_0xD0[] = {
	0xD0,
	0x5C,
};

static char gamma_r_negative_0xD1[] = {
	0xD1,
	0x02,
};

static char gamma_r_negative_0xD2[] = {
	0xD2,
	0x5D,
};

static char gamma_r_negative_0xD3[] = {
	0xD3,
	0x02,
};

static char gamma_r_negative_0xD4[] = {
	0xD4,
	0x98,
};

static char gamma_r_negative_0xD5[] = {
	0xD5,
	0x02,
};

static char gamma_r_negative_0xD6[] = {
	0xD6,
	0xD5,
};

static char gamma_r_negative_0xD7[] = {
	0xD7,
	0x02,
};

static char gamma_r_negative_0xD8[] = {
	0xD8,
	0xFC,
};

static char gamma_r_negative_0xD9[] = {
	0xD9,
	0x03,
};

static char gamma_r_negative_0xDA[] = {
	0xDA,
	0x2B,
};

static char gamma_r_negative_0xDB[] = {
	0xDB,
	0x03,
};

static char gamma_r_negative_0xDC[] = {
	0xDC,
	0x47,
};

static char gamma_r_negative_0xDD[] = {
	0xDD,
	0x03,
};

static char gamma_r_negative_0xDE[] = {
	0xDE,
	0x6C,
};

static char gamma_r_negative_0xDF[] = {
	0xDF,
	0x03,
};

static char gamma_r_negative_0xE0[] = {
	0xE0,
	0x77,
};

static char gamma_r_negative_0xE1[] = {
	0xE1,
	0x03,
};

static char gamma_r_negative_0xE2[] = {
	0xE2,
	0x81,
};

static char gamma_r_negative_0xE3[] = {
	0xE3,
	0x03,
};

static char gamma_r_negative_0xE4[] = {
	0xE4,
	0x8F,
};

static char gamma_r_negative_0xE5[] = {
	0xE5,
	0x03,
};

static char gamma_r_negative_0xE6[] = {
	0xE6,
	0x9E,
};

static char gamma_r_negative_0xE7[] = {
	0xE7,
	0x03,
};

static char gamma_r_negative_0xE8[] = {
	0xE8,
	0xB0,
};

static char gamma_r_negative_0xE9[] = {
	0xE9,
	0x03,
};

static char gamma_r_negative_0xEA[] = {
	0xEA,
	0xC8,
};

static char gamma_r_negative_0xEB[] = {
	0xEB,
	0x03,
};

static char gamma_r_negative_0xEC[] = {
	0xEC,
	0xEB,
};

static char gamma_r_negative_0xED[] = {
	0xED,
	0x03,
};

static char gamma_r_negative_0xEE[] = {
	0xEE,
	0xFF,
};

//G(+) MCR cmd
static char gamma_g_positive_0xEF[] = {
	0xEF,
	0x00,
};

static char gamma_g_positive_0xF0[] = {
	0xF0,
	0xC4,
};

static char gamma_g_positive_0xF1[] = {
	0xF1,
	0x00,
};

static char gamma_g_positive_0xF2[] = {
	0xF2,
	0xD1,
};

static char gamma_g_positive_0xF3[] = {
	0xF3,
	0x00,
};

static char gamma_g_positive_0xF4[] = {
	0xF4,
	0xE9,
};

static char gamma_g_positive_0xF5[] = {
	0xF5,
	0x00,
};

static char gamma_g_positive_0xF6[] = {
	0xF6,
	0xFB,
};

static char gamma_g_positive_0xF7[] = {
	0xF7,
	0x01,
};

static char gamma_g_positive_0xF8[] = {
	0xF8,
	0x0B,
};

static char gamma_g_positive_0xF9[] = {
	0xF9,
	0x01,
};

static char gamma_g_positive_0xFA[] = {
	0xFA,
	0x19,
};

//page selection cmd start
static char page_selection_0xFF_0x21[] = {
	0xFF,
	0x21,
};

//G(+) MCR cmd
static char gamma_g_positive_0x00[] = {
	0x00,
	0x01,
};

static char gamma_g_positive_0x01[] = {
	0x01,
	0x27,
};

static char gamma_g_positive_0x02[] = {
	0x02,
	0x01,
};

static char gamma_g_positive_0x03[] = {
	0x03,
	0x33,
};

static char gamma_g_positive_0x04[] = {
	0x04,
	0x01,
};

static char gamma_g_positive_0x05[] = {
	0x05,
	0x3F,
};

static char gamma_g_positive_0x06[] = {
	0x06,
	0x01,
};

static char gamma_g_positive_0x07[] = {
	0x07,
	0x67,
};

static char gamma_g_positive_0x08[] = {
	0x08,
	0x01,
};

static char gamma_g_positive_0x09[] = {
	0x09,
	0x89,
};

static char gamma_g_positive_0x0A[] = {
	0x0A,
	0x01,
};

static char gamma_g_positive_0x0B[] = {
	0x0B,
	0xC0,
};

static char gamma_g_positive_0x0C[] = {
	0x0C,
	0x01,
};

static char gamma_g_positive_0x0D[] = {
	0x0D,
	0xEB,
};

static char gamma_g_positive_0x0E[] = {
	0x0E,
	0x02,
};

static char gamma_g_positive_0x0F[] = {
	0x0F,
	0x2F,
};

static char gamma_g_positive_0x10[] = {
	0x10,
	0x02,
};

static char gamma_g_positive_0x11[] = {
	0x11,
	0x68,
};

static char gamma_g_positive_0x12[] = {
	0x12,
	0x02,
};

static char gamma_g_positive_0x13[] = {
	0x13,
	0x69,
};

static char gamma_g_positive_0x14[] = {
	0x14,
	0x02,
};

static char gamma_g_positive_0x15[] = {
	0x15,
	0xA0,
};

static char gamma_g_positive_0x16[] = {
	0x16,
	0x02,
};

static char gamma_g_positive_0x17[] = {
	0x17,
	0xDE,
};

static char gamma_g_positive_0x18[] = {
	0x18,
	0x03,
};

static char gamma_g_positive_0x19[] = {
	0x19,
	0x02,
};

static char gamma_g_positive_0x1A[] = {
	0x1A,
	0x03,
};

static char gamma_g_positive_0x1B[] = {
	0x1B,
	0x30,
};

static char gamma_g_positive_0x1C[] = {
	0x1C,
	0x03,
};

static char gamma_g_positive_0x1D[] = {
	0x1D,
	0x4E,
};

static char gamma_g_positive_0x1E[] = {
	0x1E,
	0x03,
};

static char gamma_g_positive_0x1F[] = {
	0x1F,
	0x71,
};

static char gamma_g_positive_0x20[] = {
	0x20,
	0x03,
};

static char gamma_g_positive_0x21[] = {
	0x21,
	0x7C,
};

static char gamma_g_positive_0x22[] = {
	0x22,
	0x03,
};

static char gamma_g_positive_0x23[] = {
	0x23,
	0x87,
};

static char gamma_g_positive_0x24[] = {
	0x24,
	0x03,
};

static char gamma_g_positive_0x25[] = {
	0x25,
	0x92,
};

static char gamma_g_positive_0x26[] = {
	0x26,
	0x03,
};

static char gamma_g_positive_0x27[] = {
	0x27,
	0xA1,
};

static char gamma_g_positive_0x28[] = {
	0x28,
	0x03,
};

static char gamma_g_positive_0x29[] = {
	0x29,
	0xB1,
};

static char gamma_g_positive_0x2A[] = {
	0x2A,
	0x03,
};

static char gamma_g_positive_0x2B[] = {
	0x2B,
	0xC7,
};

static char gamma_g_positive_0x2D[] = {
	0x2D,
	0x03,
};

static char gamma_g_positive_0x2F[] = {
	0x2F,
	0xE6,
};

static char gamma_g_positive_0x30[] = {
	0x30,
	0x03,
};

static char gamma_g_positive_0x31[] = {
	0x31,
	0xFF,
};

//G(-) MCR cmd
static char gamma_g_negative_0x32[] = {
	0x32,
	0x00,
};

static char gamma_g_negative_0x33[] = {
	0x33,
	0xC4,
};

static char gamma_g_negative_0x34[] = {
	0x34,
	0x00,
};

static char gamma_g_negative_0x35[] = {
	0x35,
	0xD1,
};

static char gamma_g_negative_0x36[] = {
	0x36,
	0x00,
};

static char gamma_g_negative_0x37[] = {
	0x37,
	0xE9,
};

static char gamma_g_negative_0x38[] = {
	0x38,
	0x00,
};

static char gamma_g_negative_0x39[] = {
	0x39,
	0xFB,
};

static char gamma_g_negative_0x3A[] = {
	0x3A,
	0x01,
};

static char gamma_g_negative_0x3B[] = {
	0x3B,
	0x0B,
};

static char gamma_g_negative_0x3D[] = {
	0x3D,
	0x01,
};

static char gamma_g_negative_0x3F[] = {
	0x3F,
	0x19,
};

static char gamma_g_negative_0x40[] = {
	0x40,
	0x01,
};

static char gamma_g_negative_0x41[] = {
	0x41,
	0x27,
};

static char gamma_g_negative_0x42[] = {
	0x42,
	0x01,
};

static char gamma_g_negative_0x43[] = {
	0x43,
	0x33,
};

static char gamma_g_negative_0x44[] = {
	0x44,
	0x01,
};

static char gamma_g_negative_0x45[] = {
	0x45,
	0x3F,
};

static char gamma_g_negative_0x46[] = {
	0x46,
	0x01,
};

static char gamma_g_negative_0x47[] = {
	0x47,
	0x67,
};

static char gamma_g_negative_0x48[] = {
	0x48,
	0x01,
};

static char gamma_g_negative_0x49[] = {
	0x49,
	0x89,
};

static char gamma_g_negative_0x4A[] = {
	0x4A,
	0x01,
};

static char gamma_g_negative_0x4B[] = {
	0x4B,
	0xC0,
};

static char gamma_g_negative_0x4C[] = {
	0x4C,
	0x01,
};

static char gamma_g_negative_0x4D[] = {
	0x4D,
	0xEB,
};

static char gamma_g_negative_0x4E[] = {
	0x4E,
	0x02,
};

static char gamma_g_negative_0x4F[] = {
	0x4F,
	0x2F,
};

static char gamma_g_negative_0x50[] = {
	0x50,
	0x02,
};

static char gamma_g_negative_0x51[] = {
	0x51,
	0x68,
};

static char gamma_g_negative_0x52[] = {
	0x52,
	0x02,
};

static char gamma_g_negative_0x53[] = {
	0x53,
	0x69,
};

static char gamma_g_negative_0x54[] = {
	0x54,
	0x02,
};

static char gamma_g_negative_0x55[] = {
	0x55,
	0xA0,
};

static char gamma_g_negative_0x56[] = {
	0x56,
	0x02,
};

static char gamma_g_negative_0x58[] = {
	0x58,
	0xDE,
};

static char gamma_g_negative_0x59[] = {
	0x59,
	0x03,
};

static char gamma_g_negative_0x5A[] = {
	0x5A,
	0x02,
};

static char gamma_g_negative_0x5B[] = {
	0x5B,
	0x03,
};

static char gamma_g_negative_0x5C[] = {
	0x5C,
	0x30,
};

static char gamma_g_negative_0x5D[] = {
	0x5D,
	0x03,
};

static char gamma_g_negative_0x5E[] = {
	0x5E,
	0x4E,
};

static char gamma_g_negative_0x5F[] = {
	0x5F,
	0x03,
};

static char gamma_g_negative_0x60[] = {
	0x60,
	0x71,
};

static char gamma_g_negative_0x61[] = {
	0x61,
	0x03,
};

static char gamma_g_negative_0x62[] = {
	0x62,
	0x7C,
};

static char gamma_g_negative_0x63[] = {
	0x63,
	0x03,
};

static char gamma_g_negative_0x64[] = {
	0x64,
	0x87,
};

static char gamma_g_negative_0x65[] = {
	0x65,
	0x03,
};

static char gamma_g_negative_0x66[] = {
	0x66,
	0x92,
};

static char gamma_g_negative_0x67[] = {
	0x67,
	0x03,
};

static char gamma_g_negative_0x68[] = {
	0x68,
	0xA1,
};

static char gamma_g_negative_0x69[] = {
	0x69,
	0x03,
};

static char gamma_g_negative_0x6A[] = {
	0x6A,
	0xB1,
};

static char gamma_g_negative_0x6B[] = {
	0x6B,
	0x03,
};

static char gamma_g_negative_0x6C[] = {
	0x6C,
	0xC7,
};

static char gamma_g_negative_0x6D[] = {
	0x6D,
	0x03,
};

static char gamma_g_negative_0x6E[] = {
	0x6E,
	0xE6,
};

static char gamma_g_negative_0x6F[] = {
	0x6F,
	0x03,
};

static char gamma_g_negative_0x70[] = {
	0x70,
	0xFF,
};

//B(+) MCR cmd
static char gamma_b_positive_0x71[] = {
	0x71,
	0x00,
};

static char gamma_b_positive_0x72[] = {
	0x72,
	0xEA,
};

static char gamma_b_positive_0x73[] = {
	0x73,
	0x00,
};

static char gamma_b_positive_0x74[] = {
	0x74,
	0xED,
};

static char gamma_b_positive_0x75[] = {
	0x75,
	0x01,
};

static char gamma_b_positive_0x76[] = {
	0x76,
	0x00,
};

static char gamma_b_positive_0x77[] = {
	0x77,
	0x01,
};

static char gamma_b_positive_0x78[] = {
	0x78,
	0x10,
};

static char gamma_b_positive_0x79[] = {
	0x79,
	0x01,
};

static char gamma_b_positive_0x7A[] = {
	0x7A,
	0x1F,
};

static char gamma_b_positive_0x7B[] = {
	0x7B,
	0x01,
};

static char gamma_b_positive_0x7C[] = {
	0x7C,
	0x2C,
};

static char gamma_b_positive_0x7D[] = {
	0x7D,
	0x01,
};

static char gamma_b_positive_0x7E[] = {
	0x7E,
	0x39,
};

static char gamma_b_positive_0x7F[] = {
	0x7F,
	0x01,
};

static char gamma_b_positive_0x80[] = {
	0x80,
	0x45,
};

static char gamma_b_positive_0x81[] = {
	0x81,
	0x01,
};

static char gamma_b_positive_0x82[] = {
	0x82,
	0x50,
};

static char gamma_b_positive_0x83[] = {
	0x83,
	0x01,
};

static char gamma_b_positive_0x84[] = {
	0x84,
	0x77,
};

static char gamma_b_positive_0x85[] = {
	0x85,
	0x01,
};

static char gamma_b_positive_0x86[] = {
	0x86,
	0x97,
};

static char gamma_b_positive_0x87[] = {
	0x87,
	0x01,
};

static char gamma_b_positive_0x88[] = {
	0x88,
	0xCA,
};

static char gamma_b_positive_0x89[] = {
	0x89,
	0x01,
};

static char gamma_b_positive_0x8A[] = {
	0x8A,
	0xF4,
};

static char gamma_b_positive_0x8B[] = {
	0x8B,
	0x02,
};

static char gamma_b_positive_0x8C[] = {
	0x8C,
	0x36,
};

static char gamma_b_positive_0x8D[] = {
	0x8D,
	0x02,
};

static char gamma_b_positive_0x8E[] = {
	0x8E,
	0x6D,
};

static char gamma_b_positive_0x8F[] = {
	0x8F,
	0x02,
};

static char gamma_b_positive_0x90[] = {
	0x90,
	0x6F,
};

static char gamma_b_positive_0x91[] = {
	0x91,
	0x02,
};

static char gamma_b_positive_0x92[] = {
	0x92,
	0xA4,
};

static char gamma_b_positive_0x93[] = {
	0x93,
	0x02,
};

static char gamma_b_positive_0x94[] = {
	0x94,
	0xE1,
};

static char gamma_b_positive_0x95[] = {
	0x95,
	0x03,
};

static char gamma_b_positive_0x96[] = {
	0x96,
	0x05,
};

static char gamma_b_positive_0x97[] = {
	0x97,
	0x03,
};

static char gamma_b_positive_0x98[] = {
	0x98,
	0x34,
};

static char gamma_b_positive_0x99[] = {
	0x99,
	0x03,
};

static char gamma_b_positive_0x9A[] = {
	0x9A,
	0x52,
};

static char gamma_b_positive_0x9B[] = {
	0x9B,
	0x03,
};

static char gamma_b_positive_0x9C[] = {
	0x9C,
	0x7B,
};

static char gamma_b_positive_0x9D[] = {
	0x9D,
	0x03,
};

static char gamma_b_positive_0x9E[] = {
	0x9E,
	0x88,
};

static char gamma_b_positive_0x9F[] = {
	0x9F,
	0x03,
};

static char gamma_b_positive_0xA0[] = {
	0xA0,
	0x98,
};

static char gamma_b_positive_0xA2[] = {
	0xA2,
	0x03,
};

static char gamma_b_positive_0xA3[] = {
	0xA3,
	0xB0,
};

static char gamma_b_positive_0xA4[] = {
	0xA4,
	0x03,
};

static char gamma_b_positive_0xA5[] = {
	0xA5,
	0xB8,
};

static char gamma_b_positive_0xA6[] = {
	0xA6,
	0x03,
};

static char gamma_b_positive_0xA7[] = {
	0xA7,
	0xC8,
};

static char gamma_b_positive_0xA9[] = {
	0xA9,
	0x03,
};

static char gamma_b_positive_0xAA[] = {
	0xAA,
	0xDF,
};

static char gamma_b_positive_0xAB[] = {
	0xAB,
	0x03,
};

static char gamma_b_positive_0xAC[] = {
	0xAC,
	0xF3,
};

static char gamma_b_positive_0xAD[] = {
	0xAD,
	0x03,
};

static char gamma_b_positive_0xAE[] = {
	0xAE,
	0xFF,
};

//B(-) MCR cmd
static char gamma_b_negative_0xAF[] = {
	0xAF,
	0x00,
};

static char gamma_b_negative_0xB0[] = {
	0xB0,
	0xEA,
};

static char gamma_b_negative_0xB1[] = {
	0xB1,
	0x00,
};

static char gamma_b_negative_0xB2[] = {
	0xB2,
	0xED,
};

static char gamma_b_negative_0xB3[] = {
	0xB3,
	0x01,
};

static char gamma_b_negative_0xB4[] = {
	0xB4,
	0x00,
};

static char gamma_b_negative_0xB5[] = {
	0xB5,
	0x01,
};

static char gamma_b_negative_0xB6[] = {
	0xB6,
	0x10,
};

static char gamma_b_negative_0xB7[] = {
	0xB7,
	0x01,
};

static char gamma_b_negative_0xB8[] = {
	0xB8,
	0x1F,
};

static char gamma_b_negative_0xB9[] = {
	0xB9,
	0x01,
};

static char gamma_b_negative_0xBA[] = {
	0xBA,
	0x2C,
};

static char gamma_b_negative_0xBB[] = {
	0xBB,
	0x01,
};

static char gamma_b_negative_0xBC[] = {
	0xBC,
	0x39,
};

static char gamma_b_negative_0xBD[] = {
	0xBD,
	0x01,
};

static char gamma_b_negative_0xBE[] = {
	0xBE,
	0x45,
};

static char gamma_b_negative_0xBF[] = {
	0xBF,
	0x01,
};

static char gamma_b_negative_0xC0[] = {
	0xC0,
	0x50,
};

static char gamma_b_negative_0xC1[] = {
	0xC1,
	0x01,
};

static char gamma_b_negative_0xC2[] = {
	0xC2,
	0x77,
};

static char gamma_b_negative_0xC3[] = {
	0xC3,
	0x01,
};

static char gamma_b_negative_0xC4[] = {
	0xC4,
	0x97,
};

static char gamma_b_negative_0xC5[] = {
	0xC5,
	0x01,
};

static char gamma_b_negative_0xC6[] = {
	0xC6,
	0xCA,
};

static char gamma_b_negative_0xC7[] = {
	0xC7,
	0x01,
};

static char gamma_b_negative_0xC8[] = {
	0xC8,
	0xF4,
};

static char gamma_b_negative_0xC9[] = {
	0xC9,
	0x02,
};

static char gamma_b_negative_0xCA[] = {
	0xCA,
	0x36,
};

static char gamma_b_negative_0xCB[] = {
	0xCB,
	0x02,
};

static char gamma_b_negative_0xCC[] = {
	0xCC,
	0x6D,
};

static char gamma_b_negative_0xCD[] = {
	0xCD,
	0x02,
};

static char gamma_b_negative_0xCE[] = {
	0xCE,
	0x6F,
};

static char gamma_b_negative_0xCF[] = {
	0xCF,
	0x02,
};

static char gamma_b_negative_0xD0[] = {
	0xD0,
	0xA4,
};

static char gamma_b_negative_0xD1[] = {
	0xD1,
	0x02,
};

static char gamma_b_negative_0xD2[] = {
	0xD2,
	0xE1,
};

static char gamma_b_negative_0xD3[] = {
	0xD3,
	0x03,
};

static char gamma_b_negative_0xD4[] = {
	0xD4,
	0x05,
};

static char gamma_b_negative_0xD5[] = {
	0xD5,
	0x03,
};

static char gamma_b_negative_0xD6[] = {
	0xD6,
	0x34,
};

static char gamma_b_negative_0xD7[] = {
	0xD7,
	0x03,
};

static char gamma_b_negative_0xD8[] = {
	0xD8,
	0x52,
};

static char gamma_b_negative_0xD9[] = {
	0xD9,
	0x03,
};

static char gamma_b_negative_0xDA[] = {
	0xDA,
	0x7B,
};

static char gamma_b_negative_0xDB[] = {
	0xDB,
	0x03,
};

static char gamma_b_negative_0xDC[] = {
	0xDC,
	0x88,
};

static char gamma_b_negative_0xDD[] = {
	0xDD,
	0x03,
};

static char gamma_b_negative_0xDE[] = {
	0xDE,
	0x98,
};

static char gamma_b_negative_0xDF[] = {
	0xDF,
	0x03,
};

static char gamma_b_negative_0xE0[] = {
	0xE0,
	0xB0,
};

static char gamma_b_negative_0xE1[] = {
	0xE1,
	0x03,
};

static char gamma_b_negative_0xE2[] = {
	0xE2,
	0xB8,
};

static char gamma_b_negative_0xE3[] = {
	0xE3,
	0x03,
};

static char gamma_b_negative_0xE4[] = {
	0xE4,
	0xC8,
};

static char gamma_b_negative_0xE5[] = {
	0xE5,
	0x03,
};

static char gamma_b_negative_0xE6[] = {
	0xE6,
	0xDF,
};

static char gamma_b_negative_0xE7[] = {
	0xE7,
	0x03,
};

static char gamma_b_negative_0xE8[] = {
	0xE8,
	0xF3,
};

static char gamma_b_negative_0xE9[] = {
	0xE9,
	0x03,
};

static char gamma_b_negative_0xEA[] = {
	0xEA,
	0xFF,
};

//CMD2 Page2
static char page_selection_0xFF_0x22[] = {
	0xFF,
	0x22,
};

//Color Enhancement Coefficient
static char color_enhancement_0x00[] = {
	0x00,
	0x50,
};

static char color_enhancement_0x01[] = {
	0x01,
	0x50,
};

static char color_enhancement_0x02[] = {
	0x02,
	0x50,
};

static char color_enhancement_0x03[] = {
	0x03,
	0x50,
};

static char color_enhancement_0x04[] = {
	0x04,
	0x50,
};

static char color_enhancement_0x05[] = {
	0x05,
	0x50,
};

static char color_enhancement_0x06[] = {
	0x06,
	0x4C,
};

static char color_enhancement_0x07[] = {
	0x07,
	0x48,
};

static char color_enhancement_0x08[] = {
	0x08,
	0x44,
};

static char color_enhancement_0x09[] = {
	0x09,
	0x40,
};

static char color_enhancement_0x0A[] = {
	0x0A,
	0x3C,
};

static char color_enhancement_0x0B[] = {
	0x0B,
	0x38,
};

static char color_enhancement_0x0C[] = {
	0x0C,
	0x38,
};

static char color_enhancement_0x0D[] = {
	0x0D,
	0x30,
};

static char color_enhancement_0x0E[] = {
	0x0E,
	0x28,
};

static char color_enhancement_0x0F[] = {
	0x0F,
	0x20,
};

static char color_enhancement_0x10[] = {
	0x10,
	0x10,
};

static char color_enhancement_0x11[] = {
	0x11,
	0x00,
};

static char color_enhancement_0x12[] = {
	0x12,
	0x00,
};

static char color_enhancement_0x13[] = {
	0x13,
	0x00,
};

static char color_enhancement_0x1B[] = {
	0x1B,
	0x4C,
};

static char color_enhancement_0x1C[] = {
	0x1C,
	0x48,
};

static char color_enhancement_0x1D[] = {
	0x1D,
	0x44,
};

static char color_enhancement_0x1E[] = {
	0x1E,
	0x40,
};

static char color_enhancement_0x1F[] = {
	0x1F,
	0x3C,
};

static char color_enhancement_0x20[] = {
	0x20,
	0x38,
};

static char color_enhancement_0x21[] = {
	0x21,
	0x38,
};

static char color_enhancement_0x22[] = {
	0x22,
	0x38,
};

static char color_enhancement_0x23[] = {
	0x23,
	0x38,
};

static char color_enhancement_0x24[] = {
	0x24,
	0x38,
};

static char color_enhancement_0x25[] = {
	0x25,
	0x38,
};

static char color_enhancement_0x26[] = {
	0x26,
	0x38,
};

static char color_enhancement_0x27[] = {
	0x27,
	0x38,
};

static char color_enhancement_0x28[] = {
	0x28,
	0x30,
};

static char color_enhancement_0x29[] = {
	0x29,
	0x28,
};

static char color_enhancement_0x2A[] = {
	0x2A,
	0x20,
};

static char color_enhancement_0x2B[] = {
	0x2B,
	0x10,
};

static char color_enhancement_0x2F[] = {
	0x2F,
	0x00,
};

static char color_enhancement_0x30[] = {
	0x30,
	0x00,
};

static char color_enhancement_0x31[] = {
	0x31,
	0x00,
};

static char color_enhancement_0x32[] = {
	0x32,
	0x80,
};

static char color_enhancement_0x33[] = {
	0x33,
	0x80,
};

static char color_enhancement_0x34[] = {
	0x34,
	0x80,
};

static char color_enhancement_0x35[] = {
	0x35,
	0x83,
};

static char color_enhancement_0x36[] = {
	0x36,
	0x85,
};

static char color_enhancement_0x37[] = {
	0x37,
	0x88,
};

static char color_enhancement_0x38[] = {
	0x38,
	0x8A,
};

static char color_enhancement_0x39[] = {
	0x39,
	0x8B,
};

static char color_enhancement_0x3A[] = {
	0x3A,
	0x8B,
};

static char color_enhancement_0x3B[] = {
	0x3B,
	0x8D,
};

static char color_enhancement_0x3F[] = {
	0x3F,
	0x90,
};

static char color_enhancement_0x40[] = {
	0x40,
	0x8D,
};

static char color_enhancement_0x41[] = {
	0x41,
	0x8A,
};

static char color_enhancement_0x42[] = {
	0x42,
	0x87,
};

static char color_enhancement_0x43[] = {
	0x43,
	0x8A,
};

static char color_enhancement_0x44[] = {
	0x44,
	0x8D,
};

static char color_enhancement_0x45[] = {
	0x45,
	0x90,
};

static char color_enhancement_0x46[] = {
	0x46,
	0x92,
};

static char color_enhancement_0x47[] = {
	0x47,
	0x8F,
};

static char color_enhancement_0x48[] = {
	0x48,
	0x8C,
};

static char color_enhancement_0x49[] = {
	0x49,
	0x89,
};

static char color_enhancement_0x4A[] = {
	0x4A,
	0x86,
};

static char color_enhancement_0x4B[] = {
	0x4B,
	0x83,
};

static char color_enhancement_0x4C[] = {
	0x4C,
	0x80,
};

//Smart Color Ratio
static char smart_color_ratio_0x4D[] = {
	0x4D,
	0x00,
};

static char smart_color_ratio_0x4E[] = {
	0x4E,
	0x03,
};

static char smart_color_ratio_0x4F[] = {
	0x4F,
	0x0A,
};

//Vivid Color Disable
static char vivid_color_disable_0x1A[] = {
	0x1A,
	0x00,
};

//Smart Color Enable
static char smart_color_enable_0x53[] = {
	0x53,
	0x77,
};

//Skin protection Enable
static char skin_protection_enable_0x54[] = {
	0x54,
	0x03,
};

static char V_constrain_enable_0x55[] = {
	0x55,
	0x77,
};

//Contrast Disable
static char contrast_disable_0x56[] = {
	0x56,
	0x00,
};

//Sharpness
static char sharpness_disable_0x68[] = {
	0x68,
	0x00,
};

static char sharpness_0x65[] = {
	0x65,
	0xA3,
};

static char sharpness_0x66[] = {
	0x66,
	0xC1,
};

static char sharpness_0x67[] = {
	0x67,
	0xF8,
};

static char sharpness_0x69[] = {
	0x69,
	0xF2,
};

static char sharpness_0x97[] = {
	0x97,
	0xFF,
};

static char sharpness_0x98[] = {
	0x98,
	0x1C,
};

//Dither Enable
static char dither_enable_0xA2[] = {
	0xA2,
	0x20,
};

//page selection cmd
static char page_selection_0xFF_0x23[] = {
	0xFF,
	0x23,
};

static char cabc_endimming_0x00[] = {
	0x00,
	0x02,
};

static char cabc_0x32[] = {
	0x32,
	0x03,
};

//CMD1
static char page_selection_0xFF_0x10[] = {
	0xFF,
	0x10,
};

static char cabc_set_mode_UI[] = {
	0x55,
	0x91,
};

/*static char cabc_set_mode_STILL[] = {
	0x55,
	0x92,
};*/

static char cabc_set_mode_MOVING[] = {
	0x55,
	0x93,
};

static char cmd1_page0_0x5E[] = {
	0x5E,
	0x04,
};

static char cmd2_page0_0xFB[] = {
	0xFB,
	0x01,
};
/******************************************
* LCD IC software solution
*/
static char page_selection_0xFF_0xE0[] = {
	0xFF,
	0xE0,
};

static char pageE_0xB5[] = {
	0xB5,
	0x86,
};

static char pageE_0xB6[] = {
	0xB6,
	0x77,
};

static char pageE_0xB8[] = {
	0xB8,
	0xAD,
};

static char pageE_0xFB[] = {
	0xFB,
	0x01,
};

#ifdef CONFIG_LCD_DEFECT_CHECK
/******************************************
* LCD defect check code
*/
static char defect_check_rst0[] = {
	0xFF,
	0x10,
};
static char defect_check_rst1[] = {
	0x28,
	0x00,
};//delay 50
static char defect_check_rst2[] = {
	0x10,
	0x00,
};//delay 100
static char defect_step1_0[] = {
	0xFF,
	0x24,
};
static char defect_step1_1[] = {
	0xE3,
	0x00,
};
static char defect_step1_2[] = {
	0xFB,
	0x01,
};
static char defect_step1_3[] = {
	0xFF,
	0x25,
};
static char defect_step1_4[] = {
	0x2F,
	0x03,
};
static char defect_step1_5[] = {
	0x30,
	0x0F,
};
static char defect_step1_6[] = {
	0xFB,
	0x01,
};
static char defect_step1_7[] = {
	0xFF,
	0x10,
};
static char defect_step1_8[] = {
	0x11,
	0x00,
};//delay 200
static char defect_step1_9[] = {
	0xFF,
	0xE0,
};
static char defect_step1_10[] = {
	0xB8,
	0XAD,
};
static char defect_step1_11[] = {
	0x2F,
	0xFF,
};
static char defect_step1_12[] = {
	0x30,
	0xFF,
};
static char defect_step1_13[] = {
	0x31,
	0x1F,
};
static char defect_step1_14[] = {
	0x34,
	0x10,
};
static char defect_step1_15[] = {
	0xB5,
	0xEE,
};
static char defect_step1_16[] = {
	0xFF,
	0xF0,
};
static char defect_step1_17[] = {
	0xBD,
	0X02,
};
static char defect_step2_0[] = {
	0xC6,
	0x80,
};
static char defect_step2_1[] = {
	0xB9,
	0xA2,
};//delay 800
static char defect_step2_2[] = {
	0xB9,
	0xA1,
};//delay 800
//REGR 0xD8,0xFF
//REGR 0xD9,0x3F
//REGR 0xBC,0x68

static char defect_step3_0[] = {
	0xB9,
	0x80,
};//delay 40
static char defect_step3_1[] = {
	0xC6,
	0x00,
};
static char defect_step3_2[] = {
	0xB3,
	0xFF,
};
static char defect_step3_3[] = {
	0xB4,
	0xFF,
};
static char defect_step3_4[] = {
	0xB5,
	0xFF,
};
static char defect_step3_5[] = {
	0xB6,
	0xFF,
};
static char defect_step3_6[] = {
	0xB7,
	0xFF,
};
static char defect_step3_7[] = {
	0xB8,
	0xFF,
};
static char defect_step3_8[] = {
	0xB9,
	0xA4,
};//delay 800
//REGR 0xD8,0xFF
//REGR 0xD9,0x3F
//REGR 0xBC,0x78

static char defect_step3_9[] = {
	0xB9,
	0x80,
};
static char defect_step3_10[] = {
	0xB9,
	0xA8,
};//delay 800

static char defect_step4_0[] = {
	0xB9,
	0x80,
};
static char defect_step4_1[] = {
	0xB3,
	0x00,
};
static char defect_step4_2[] = {
	0xB4,
	0x00,
};
static char defect_step4_3[] = {
	0xB5,
	0x00,
};
static char defect_step4_4[] = {
	0xB6,
	0x00,
};
static char defect_step4_5[] = {
	0xB7,
	0x00,
};
static char defect_step4_6[] = {
	0xB8,
	0x00,
};
static char defect_step4_7[] = {
	0xB9,
	0xA4,
};//delay 800

static char defect_step4_8[] = {
	0xB9,
	0x80,
};
static char defect_step4_9[] = {
	0xB9,
	0xA8,
};//delay 800
//step 5 test1
#if DEFECT_CHECK_STEPS_CHOICE == 0
static char defect_step5_0[] = {
	0xB9,
	0x80,
};
#endif
static char defect_step5_1[] = {
	0xFF,
	0x24,
};
static char defect_step5_2[] = {
	0xE3,
	0x00,
};
static char defect_step5_no_reload[] = {
	0xFB,
	0x01,
};
static char defect_step5_3[] = {
	0xFF,
	0x25,
};
static char defect_step5_4[] = {
	0x2F,
	0x03,
};
static char defect_step5_5[] = {
	0x30,
	0x0F,
};
static char defect_step5_6[] = {
	0xFB,
	0x01,
};
static char defect_step5_7[] = {
	0xFF,
	0x10,
};
static char defect_step5_8[] = {
	0x11,
	0x00,
};
static char defect_step5_9[] = {
	0xFF,
	0xE0,
};
static char defect_step5_10[] = {
	0xB6,
	0x42,
};
static char defect_step5_11[] = {
	0xB8,
	0xAD,
};
static char defect_step5_12[] = {
	0x2F,
	0x00,
};
static char defect_step5_13[] = {
	0x30,
	0x00,
};
static char defect_step5_14[] = {
	0x31,
	0x10,
};
static char defect_step5_15[] = {
	0x34,
	0x70,
};
static char defect_step5_16[] = {
	0xB5,
	0xE6,
};
static char defect_step5_OSC_adj[] = {
	0xB3,
	0x08,
};
static char defect_step5_17[] = {
	0xFF,
	0xF0,
};
static char defect_step5_18[] = {
	0xBD,
	0x02,
};
static char defect_step5_19[] = {
	0xB3,
	0x55,
};
static char defect_step5_20[] = {
	0xB4,
	0x55,
};
static char defect_step5_21[] = {
	0xB5,
	0x55,
};
static char defect_step5_22[] = {
	0xB6,
	0xAA,
};
static char defect_step5_23[] = {
	0xB7,
	0xAA,
};
static char defect_step5_24[] = {
	0xB8,
	0xAA,
};
static char defect_step5_25[] = {
	0xB9,
	0xA4,
};

// step 5 test2
static char defect_step5_26[] = {
	0xB9,
	0x80,
};
static char defect_step5_27[] = {
	0xB3,
	0xAA,
};
static char defect_step5_28[] = {
	0xB4,
	0xAA,
};
static char defect_step5_29[] = {
	0xB5,
	0xAA,
};
static char defect_step5_30[] = {
	0xB6,
	0x55,
};
static char defect_step5_31[] = {
	0xB7,
	0x55,
};
static char defect_step5_32[] = {
	0xB8,
	0x55,
};
static char defect_step5_33[] = {
	0xB9,
	0xA4,
};

//step 6 test1
static char defect_step6_0[] = {
	0xB9,
	0x80,
};
static char defect_step6_1[] = {
	0xFF,
	0x24,
};
static char defect_step6_2[] = {
	0xE3,
	0x00,
};
static char defect_step6_3[] = {
	0xFB,
	0x01,
};
static char defect_step6_4[] = {
	0xFF,
	0x25,
};
static char defect_step6_5[] = {
	0x2F,
	0x03,
};
static char defect_step6_6[] = {
	0x30,
	0x0F,
};
static char defect_step6_7[] = {
	0xFB,
	0x01,
};
static char defect_step6_8[] = {
	0xFF,
	0x10,
};
static char defect_step6_9[] = {
	0x11,
	0x00,
};
static char defect_step6_10[] = {
	0xFF,
	0xE0,
};
static char defect_step6_11[] = {
	0xB8,
	0x2D,
};
static char defect_step6_12[] = {
	0x2F,
	0xFF,
};
static char defect_step6_13[] = {
	0x30,
	0xFF,
};
static char defect_step6_14[] = {
	0x31,
	0x1F,
};
static char defect_step6_15[] = {
	0x34,
	0x10,
};
static char defect_step6_16[] = {
	0xB5,
	0xEE,
};
static char defect_step6_17[] = {
	0xFF,
	0xF0,
};
static char defect_step6_18[] = {
	0xBD,
	0x02,
};
static char defect_step6_19[] = {
	0xC6,
	0xC0,
};
static char defect_step6_20[] = {
	0xB9,
	0xA2,
};
static char defect_step6_21[] = {
	0xB9,
	0xA1,
};

//step7 test1
static char defect_step7_0[] = {
	0xB9,
	0x80,
};
static char defect_step7_1[] = {
	0xC6,
	0x00,
};
static char defect_step7_2[] = {
	0xFF,
	0x24,
};
static char defect_step7_3[] = {
	0xE3,
	0x00,
};
static char defect_step7_4[] = {
	0xFB,
	0x01,
};
static char defect_step7_5[] = {
	0xFF,
	0x25,
};
static char defect_step7_6[] = {
	0x2F,
	0x03,
};
static char defect_step7_7[] = {
	0x30,
	0x0F,
};
static char defect_step7_8[] = {
	0xFB,
	0x01,
};
static char defect_step7_9[] = {
	0xFF,
	0x10,
};
static char defect_step7_10[] = {
	0x11,
	0x00,
};
static char defect_step7_11[] = {
	0xFF,
	0xE0,
};
static char defect_step7_12[] = {
	0xB8,
	0xAD,
};
static char defect_step7_13[] = {
	0x2F,
	0xFF,
};
static char defect_step7_14[] = {
	0x30,
	0xFF,
};
static char defect_step7_15[] = {
	0x31,
	0x1F,
};
static char defect_step7_16[] = {
	0x34,
	0x10,
};
static char defect_step7_17[] = {
	0xB5,
	0x7E,
};
static char defect_step7_18[] = {
	0xFF,
	0xF0,
};
static char defect_step7_19[] = {
	0xBD,
	0x30,
};
static char defect_step7_20[] = {
	0xB3,
	0xFF,
};
static char defect_step7_21[] = {
	0xB4,
	0xFF,
};
static char defect_step7_22[] = {
	0xB5,
	0xFF,
};
static char defect_step7_23[] = {
	0xB6,
	0xFF,
};
static char defect_step7_24[] = {
	0xB7,
	0xFF,
};
static char defect_step7_25[] = {
	0xB8,
	0xFF,
};
static char defect_step7_26[] = {
	0xB9,
	0xA4,
};

//step8 test1
static char defect_step8_0[] = {
	0xB9,
	0x80,
};
static char defect_step8_1[] = {
	0xFF,
	0x10,
};
static char defect_step8_2[] = {
	0x11,
	0x00,
};
static char defect_step8_3[] = {
	0xFF,
	0xE0,
};
static char defect_step8_4[] = {
	0xB8,
	0x2D,
};
static char defect_step8_5[] = {
	0x2F,
	0x00,
};
static char defect_step8_6[] = {
	0x30,
	0x00,
};
static char defect_step8_7[] = {
	0x31,
	0x10,
};
static char defect_step8_8[] = {
	0x34,
	0x70,
};
static char defect_step8_9[] = {
	0xB5,
	0x46,
};
static char defect_step8_10[] = {
	0xFF,
	0xF0,
};
static char defect_step8_11[] = {
	0xBD,
	0x33,
};
static char defect_step8_12[] = {
	0xB3,
	0x00,
};
static char defect_step8_13[] = {
	0xB4,
	0x00,
};
static char defect_step8_14[] = {
	0xB5,
	0x00,
};
static char defect_step8_15[] = {
	0xB6,
	0x00,
};
static char defect_step8_16[] = {
	0xB7,
	0x00,
};
static char defect_step8_17[] = {
	0xB8,
	0x00,
};
static char defect_step8_18[] = {
	0xB9,
	0xA4,
};
static char defect_end_0[] = {
	0xB9,
	0x80,
};
static char defect_end_1[] = {
	0xFF,
	0x10,
};
static char defect_end_2[] = {
	0xFF,
	0x24,
};
static char defect_end_3[] = {
	0xE3,
	0x02,
};
static char defect_end_4[] = {
	0xFB,
	0x01,
};
static char defect_end_5[] = {
	0xFF,
	0x25,
};
static char defect_end_6[] = {
	0x2F,
	0x00,
};
static char defect_end_7[] = {
	0x30,
	0x00,
};
static char defect_end_8[] = {
	0xFB,
	0x01,
};
static char defect_end_9[] = {
	0xFF,
	0x10,
};
static char defect_end_10[] = {
	0x10,
	0x00,
};
static char defect_end_11[] = {
	0xFF,
	0xE0,
};
static char defect_end_12[] = {
	0xB8,
	0XAD,
};
static char defect_end_13[] = {
	0x2F,
	0x00,
};
static char defect_end_14[] = {
	0x30,
	0x00,
};
static char defect_end_15[] = {
	0x31,
	0x16,
};
static char defect_end_16[] = {
	0x34,
	0x70,
};
static char defect_end_17[] = {
	0xB5,
	0xE6,
};
static char defect_end_18[] = {
	0xFF,
	0x10,
};
static char defect_end_19[] = {
	0x11,
	0x00,
};
static char defect_end_20[] = {
	0x29,
	0x00,
};
#endif

#ifdef CONFIG_LCD_DEFECT_CHECK
static struct dsi_cmd_desc jdi_display_defect_check_cmds1[] = {
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_check_rst0), defect_check_rst0},
	{DTYPE_DCS_WRITE1, 0, 50, WAIT_TYPE_MS,
		sizeof(defect_check_rst1), defect_check_rst1},
	{DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_MS,
		sizeof(defect_check_rst2), defect_check_rst2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_0), defect_step1_0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_1), defect_step1_1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_2), defect_step1_2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_3), defect_step1_3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_4), defect_step1_4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_5), defect_step1_5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_6), defect_step1_6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_7), defect_step1_7},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_MS,
		sizeof(defect_step1_8), defect_step1_8},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_MS,
		sizeof(defect_step1_9), defect_step1_9},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_10), defect_step1_10},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_11), defect_step1_11},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_12), defect_step1_12},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_13), defect_step1_13},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_14), defect_step1_14},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_15), defect_step1_15},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_16), defect_step1_16},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step1_17), defect_step1_17},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step2_0), defect_step2_0},
	{DTYPE_DCS_WRITE1, 0, 1600, WAIT_TYPE_MS,
		sizeof(defect_step2_1), defect_step2_1},
	{DTYPE_DCS_WRITE1, 0, 1600, WAIT_TYPE_MS,
		sizeof(defect_step2_2), defect_step2_2},
};

static struct dsi_cmd_desc jdi_display_defect_check_cmds2[] = {
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_MS,
		sizeof(defect_step3_0), defect_step3_0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step3_1), defect_step3_1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step3_2), defect_step3_2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step3_3), defect_step3_3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step3_4), defect_step3_4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step3_5), defect_step3_5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step3_6), defect_step3_6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step3_7), defect_step3_7},
	{DTYPE_DCS_WRITE1, 0, 3200, WAIT_TYPE_MS,
		sizeof(defect_step3_8), defect_step3_8},
};

static struct dsi_cmd_desc jdi_display_defect_check_cmds3[] = {
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step3_9), defect_step3_9},
	{DTYPE_DCS_WRITE1, 0, 3200, WAIT_TYPE_MS,
		sizeof(defect_step3_10), defect_step3_10},
};

static struct dsi_cmd_desc jdi_display_defect_check_cmds4_1[] = {
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step4_0), defect_step4_0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step4_1), defect_step4_1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step4_2), defect_step4_2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step4_3), defect_step4_3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step4_4), defect_step4_4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step4_5), defect_step4_5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step4_6), defect_step4_6},
	{DTYPE_DCS_WRITE1, 0, 3200, WAIT_TYPE_MS,
		sizeof(defect_step4_7), defect_step4_7},
};

static struct dsi_cmd_desc jdi_display_defect_check_cmds4_2[] = {
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step4_8), defect_step4_8},
	{DTYPE_DCS_WRITE1, 0, 3200, WAIT_TYPE_MS,
		sizeof(defect_step4_9), defect_step4_9},
};

static struct dsi_cmd_desc jdi_display_defect_check_cmds5_1[] = {
#if DEFECT_CHECK_STEPS_CHOICE == 0
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_0), defect_step5_0},
#endif
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_check_rst0), defect_check_rst0},
	{DTYPE_DCS_WRITE1, 0, 50, WAIT_TYPE_MS,
		sizeof(defect_check_rst1), defect_check_rst1},
	{DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_MS,
		sizeof(defect_check_rst2), defect_check_rst2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_1), defect_step5_1},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_2), defect_step5_2},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_no_reload), defect_step5_no_reload},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_3), defect_step5_3},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_4), defect_step5_4},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_5), defect_step5_5},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_6), defect_step5_6},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_7), defect_step5_7},
    {DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_MS,
		sizeof(defect_step5_8), defect_step5_8},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_MS,
		sizeof(defect_step5_9), defect_step5_9},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_10), defect_step5_10},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_11), defect_step5_11},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_12), defect_step5_12},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_13), defect_step5_13},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_14), defect_step5_14},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_15), defect_step5_15},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step5_16), defect_step5_16},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step5_OSC_adj), defect_step5_OSC_adj},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step5_17), defect_step5_17},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step5_18), defect_step5_18},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step5_19), defect_step5_19},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step5_20), defect_step5_20},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step5_21), defect_step5_21},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step5_22), defect_step5_22},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step5_23), defect_step5_23},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step5_24), defect_step5_24},
    {DTYPE_DCS_WRITE1, 0, 3200, WAIT_TYPE_MS,
        sizeof(defect_step5_25), defect_step5_25},
};

static struct dsi_cmd_desc jdi_display_defect_check_cmds5_2[] = {
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step5_26), defect_step5_26},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step5_27), defect_step5_27},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step5_28), defect_step5_28},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step5_29), defect_step5_29},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step5_30), defect_step5_30},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step5_31), defect_step5_31},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step5_32), defect_step5_32},
    {DTYPE_DCS_WRITE1, 0, 3200, WAIT_TYPE_MS,
        sizeof(defect_step5_33), defect_step5_33},
};

static struct dsi_cmd_desc jdi_display_defect_check_cmds6[] = {
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step6_0), defect_step6_0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_check_rst0), defect_check_rst0},
	{DTYPE_DCS_WRITE1, 0, 50, WAIT_TYPE_MS,
		sizeof(defect_check_rst1), defect_check_rst1},
	{DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_MS,
		sizeof(defect_check_rst2), defect_check_rst2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_1), defect_step6_1},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_2), defect_step6_2},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_3), defect_step6_3},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_4), defect_step6_4},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_5), defect_step6_5},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_6), defect_step6_6},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_7), defect_step6_7},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_8), defect_step6_8},
    {DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_MS,
        sizeof(defect_step6_9), defect_step6_9},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_MS,
        sizeof(defect_step6_10), defect_step6_10},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_11), defect_step6_11},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_12), defect_step6_12},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_13), defect_step6_13},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_14), defect_step6_14},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_15), defect_step6_15},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_16), defect_step6_16},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
        sizeof(defect_step6_17), defect_step6_17},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step6_18), defect_step6_18},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step6_19), defect_step6_19},
	{DTYPE_DCS_WRITE1, 0, 1600, WAIT_TYPE_MS,
	    sizeof(defect_step6_20), defect_step6_20},
	{DTYPE_DCS_WRITE1, 0, 1600, WAIT_TYPE_MS,
	    sizeof(defect_step6_21), defect_step6_21},
};

static struct dsi_cmd_desc jdi_display_defect_check_cmds7[] = {
	{DTYPE_DCS_WRITE1, 0, 150, WAIT_TYPE_MS,
		sizeof(defect_step7_0), defect_step7_0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step7_1), defect_step7_1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_check_rst0), defect_check_rst0},
	{DTYPE_DCS_WRITE1, 0, 50, WAIT_TYPE_MS,
		sizeof(defect_check_rst1), defect_check_rst1},
	{DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_MS,
		sizeof(defect_check_rst2), defect_check_rst2},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step7_2), defect_step7_2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_3), defect_step7_3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_4), defect_step7_4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_5), defect_step7_5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_6), defect_step7_6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_7), defect_step7_7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_8), defect_step7_8},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step7_9), defect_step7_9},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_MS,
	    sizeof(defect_step7_10), defect_step7_10},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_MS,
	    sizeof(defect_step7_11), defect_step7_11},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_12), defect_step7_12},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_13), defect_step7_13},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_14), defect_step7_14},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_15), defect_step7_15},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_16), defect_step7_16},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_17), defect_step7_17},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_18), defect_step7_18},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_19), defect_step7_19},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_20), defect_step7_20},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_21), defect_step7_21},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_22), defect_step7_22},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_23), defect_step7_23},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step7_24), defect_step7_24},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_step7_25), defect_step7_25},
	{DTYPE_DCS_WRITE1, 0, 3200, WAIT_TYPE_MS,
		sizeof(defect_step7_26), defect_step7_26},
};

static struct dsi_cmd_desc jdi_display_defect_check_cmds8[] = {
    {DTYPE_DCS_WRITE1, 0, 150, WAIT_TYPE_MS,
		sizeof(defect_step8_0), defect_step8_0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_check_rst0), defect_check_rst0},
	{DTYPE_DCS_WRITE1, 0, 50, WAIT_TYPE_MS,
		sizeof(defect_check_rst1), defect_check_rst1},
	{DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_MS,
		sizeof(defect_check_rst2), defect_check_rst2},
    {DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_1), defect_step8_1},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_MS,
	    sizeof(defect_step8_2), defect_step8_2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_MS,
	    sizeof(defect_step8_3), defect_step8_3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_4), defect_step8_4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_5), defect_step8_5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_6), defect_step8_6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_7), defect_step8_7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_8), defect_step8_8},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_9), defect_step8_9},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_10), defect_step8_10},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_11), defect_step8_11},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_12), defect_step8_12},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_13), defect_step8_13},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_14), defect_step8_14},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_15), defect_step8_15},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_16), defect_step8_16},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
	    sizeof(defect_step8_17), defect_step8_17},
	{DTYPE_DCS_WRITE1, 0, 4000, WAIT_TYPE_MS,
	    sizeof(defect_step8_18), defect_step8_18},
};

static struct dsi_cmd_desc jdi_display_defect_check_end[] = {
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_0), defect_end_0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_1), defect_end_1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_2), defect_end_2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_3), defect_end_3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_4), defect_end_4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_5), defect_end_5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_6), defect_end_6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_7), defect_end_7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_8), defect_end_8},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_9), defect_end_9},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_MS,
		sizeof(defect_end_10), defect_end_10},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_11), defect_end_11},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_12), defect_end_12},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_13), defect_end_13},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_14), defect_end_14},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_15), defect_end_15},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_16), defect_end_16},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_17), defect_end_17},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(defect_end_18), defect_end_18},
	{DTYPE_DCS_WRITE1, 0, 120, WAIT_TYPE_MS,
		sizeof(defect_end_19), defect_end_19},
	{DTYPE_DCS_WRITE1, 0, 50, WAIT_TYPE_MS,
		sizeof(defect_end_20), defect_end_20},
};
#endif

static struct dsi_cmd_desc jdi_display_effect_on_cmds[] = {
	//diplay effect
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(page_selection_0xFF_0x20), page_selection_0xFF_0x20},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(page_selection_0xFB_0x01), page_selection_0xFB_0x01},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_dither_0x68), gamma_dither_0x68},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x75), gamma_r_positive_0x75},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x76), gamma_r_positive_0x76},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x77), gamma_r_positive_0x77},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x78), gamma_r_positive_0x78},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x79), gamma_r_positive_0x79},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x7A), gamma_r_positive_0x7A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x7B), gamma_r_positive_0x7B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x7C), gamma_r_positive_0x7C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x7D), gamma_r_positive_0x7D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x7E), gamma_r_positive_0x7E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x7F), gamma_r_positive_0x7F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x80), gamma_r_positive_0x80},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x81), gamma_r_positive_0x81},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x82), gamma_r_positive_0x82},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x83), gamma_r_positive_0x83},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x84), gamma_r_positive_0x84},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x85), gamma_r_positive_0x85},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x86), gamma_r_positive_0x86},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x87), gamma_r_positive_0x87},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x88), gamma_r_positive_0x88},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x89), gamma_r_positive_0x89},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x8A), gamma_r_positive_0x8A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x8B), gamma_r_positive_0x8B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x8C), gamma_r_positive_0x8C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x8D), gamma_r_positive_0x8D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x8E), gamma_r_positive_0x8E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x8F), gamma_r_positive_0x8F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x90), gamma_r_positive_0x90},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x91), gamma_r_positive_0x91},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x92), gamma_r_positive_0x92},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x93), gamma_r_positive_0x93},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x94), gamma_r_positive_0x94},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x95), gamma_r_positive_0x95},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x96), gamma_r_positive_0x96},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x97), gamma_r_positive_0x97},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x98), gamma_r_positive_0x98},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x99), gamma_r_positive_0x99},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x9A), gamma_r_positive_0x9A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x9B), gamma_r_positive_0x9B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x9C), gamma_r_positive_0x9C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x9D), gamma_r_positive_0x9D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x9E), gamma_r_positive_0x9E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0x9F), gamma_r_positive_0x9F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xA0), gamma_r_positive_0xA0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xA2), gamma_r_positive_0xA2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xA3), gamma_r_positive_0xA3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xA4), gamma_r_positive_0xA4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xA5), gamma_r_positive_0xA5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xA6), gamma_r_positive_0xA6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xA7), gamma_r_positive_0xA7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xA9), gamma_r_positive_0xA9},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xAA), gamma_r_positive_0xAA},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xAB), gamma_r_positive_0xAB},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xAC), gamma_r_positive_0xAC},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xAD), gamma_r_positive_0xAD},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xAE), gamma_r_positive_0xAE},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xAF), gamma_r_positive_0xAF},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xB0), gamma_r_positive_0xB0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xB1), gamma_r_positive_0xB1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_positive_0xB2), gamma_r_positive_0xB2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xB3), gamma_r_negative_0xB3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xB4), gamma_r_negative_0xB4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xB5), gamma_r_negative_0xB5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xB6), gamma_r_negative_0xB6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xB7), gamma_r_negative_0xB7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xB8), gamma_r_negative_0xB8},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xB9), gamma_r_negative_0xB9},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xBA), gamma_r_negative_0xBA},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xBB), gamma_r_negative_0xBB},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xBC), gamma_r_negative_0xBC},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xBD), gamma_r_negative_0xBD},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xBE), gamma_r_negative_0xBE},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xBF), gamma_r_negative_0xBF},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xC0), gamma_r_negative_0xC0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xC1), gamma_r_negative_0xC1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xC2), gamma_r_negative_0xC2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xC3), gamma_r_negative_0xC3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xC4), gamma_r_negative_0xC4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xC5), gamma_r_negative_0xC5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xC6), gamma_r_negative_0xC6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xC7), gamma_r_negative_0xC7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xC8), gamma_r_negative_0xC8},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xC9), gamma_r_negative_0xC9},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xCA), gamma_r_negative_0xCA},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xCB), gamma_r_negative_0xCB},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xCC), gamma_r_negative_0xCC},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xCD), gamma_r_negative_0xCD},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xCE), gamma_r_negative_0xCE},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xCF), gamma_r_negative_0xCF},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xD0), gamma_r_negative_0xD0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xD1), gamma_r_negative_0xD1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xD2), gamma_r_negative_0xD2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xD3), gamma_r_negative_0xD3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xD4), gamma_r_negative_0xD4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xD5), gamma_r_negative_0xD5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xD6), gamma_r_negative_0xD6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xD7), gamma_r_negative_0xD7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xD8), gamma_r_negative_0xD8},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xD9), gamma_r_negative_0xD9},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xDA), gamma_r_negative_0xDA},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xDB), gamma_r_negative_0xDB},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xDC), gamma_r_negative_0xDC},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xDD), gamma_r_negative_0xDD},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xDE), gamma_r_negative_0xDE},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xDF), gamma_r_negative_0xDF},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xE0), gamma_r_negative_0xE0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xE1), gamma_r_negative_0xE1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xE2), gamma_r_negative_0xE2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xE3), gamma_r_negative_0xE3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xE4), gamma_r_negative_0xE4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xE5), gamma_r_negative_0xE5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xE6), gamma_r_negative_0xE6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xE7), gamma_r_negative_0xE7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xE8), gamma_r_negative_0xE8},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xE9), gamma_r_negative_0xE9},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xEA), gamma_r_negative_0xEA},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xEB), gamma_r_negative_0xEB},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xEC), gamma_r_negative_0xEC},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xED), gamma_r_negative_0xED},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_r_negative_0xEE), gamma_r_negative_0xEE},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0xEF), gamma_g_positive_0xEF},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0xF0), gamma_g_positive_0xF0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0xF1), gamma_g_positive_0xF1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0xF2), gamma_g_positive_0xF2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0xF3), gamma_g_positive_0xF3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0xF4), gamma_g_positive_0xF4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0xF5), gamma_g_positive_0xF5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0xF6), gamma_g_positive_0xF6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0xF7), gamma_g_positive_0xF7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0xF8), gamma_g_positive_0xF8},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0xF9), gamma_g_positive_0xF9},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0xFA), gamma_g_positive_0xFA},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(page_selection_0xFF_0x21), page_selection_0xFF_0x21},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(page_selection_0xFB_0x01), page_selection_0xFB_0x01},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x00), gamma_g_positive_0x00},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x01), gamma_g_positive_0x01},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x02), gamma_g_positive_0x02},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x03), gamma_g_positive_0x03},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x04), gamma_g_positive_0x04},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x05), gamma_g_positive_0x05},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x06), gamma_g_positive_0x06},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x07), gamma_g_positive_0x07},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x08), gamma_g_positive_0x08},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x09), gamma_g_positive_0x09},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x0A), gamma_g_positive_0x0A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x0B), gamma_g_positive_0x0B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x0C), gamma_g_positive_0x0C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x0D), gamma_g_positive_0x0D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x0E), gamma_g_positive_0x0E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x0F), gamma_g_positive_0x0F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x10), gamma_g_positive_0x10},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x11), gamma_g_positive_0x11},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x12), gamma_g_positive_0x12},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x13), gamma_g_positive_0x13},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x14), gamma_g_positive_0x14},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x15), gamma_g_positive_0x15},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x16), gamma_g_positive_0x16},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x17), gamma_g_positive_0x17},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x18), gamma_g_positive_0x18},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x19), gamma_g_positive_0x19},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x1A), gamma_g_positive_0x1A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x1B), gamma_g_positive_0x1B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x1C), gamma_g_positive_0x1C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x1D), gamma_g_positive_0x1D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x1E), gamma_g_positive_0x1E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x1F), gamma_g_positive_0x1F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x20), gamma_g_positive_0x20},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x21), gamma_g_positive_0x21},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x22), gamma_g_positive_0x22},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x23), gamma_g_positive_0x23},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x24), gamma_g_positive_0x24},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x25), gamma_g_positive_0x25},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x26), gamma_g_positive_0x26},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x27), gamma_g_positive_0x27},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x28), gamma_g_positive_0x28},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x29), gamma_g_positive_0x29},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x2A), gamma_g_positive_0x2A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x2B), gamma_g_positive_0x2B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x2D), gamma_g_positive_0x2D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x2F), gamma_g_positive_0x2F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x30), gamma_g_positive_0x30},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_positive_0x31), gamma_g_positive_0x31},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x32), gamma_g_negative_0x32},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x33), gamma_g_negative_0x33},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x34), gamma_g_negative_0x34},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x35), gamma_g_negative_0x35},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x36), gamma_g_negative_0x36},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x37), gamma_g_negative_0x37},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x38), gamma_g_negative_0x38},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x39), gamma_g_negative_0x39},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x3A), gamma_g_negative_0x3A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x3B), gamma_g_negative_0x3B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x3D), gamma_g_negative_0x3D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x3F), gamma_g_negative_0x3F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x40), gamma_g_negative_0x40},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x41), gamma_g_negative_0x41},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x42), gamma_g_negative_0x42},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x43), gamma_g_negative_0x43},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x44), gamma_g_negative_0x44},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x45), gamma_g_negative_0x45},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x46), gamma_g_negative_0x46},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x47), gamma_g_negative_0x47},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x48), gamma_g_negative_0x48},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x49), gamma_g_negative_0x49},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x4A), gamma_g_negative_0x4A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x4B), gamma_g_negative_0x4B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x4C), gamma_g_negative_0x4C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x4D), gamma_g_negative_0x4D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x4E), gamma_g_negative_0x4E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x4F), gamma_g_negative_0x4F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x50), gamma_g_negative_0x50},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x51), gamma_g_negative_0x51},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x52), gamma_g_negative_0x52},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x53), gamma_g_negative_0x53},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x54), gamma_g_negative_0x54},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x55), gamma_g_negative_0x55},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x56), gamma_g_negative_0x56},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x58), gamma_g_negative_0x58},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x59), gamma_g_negative_0x59},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x5A), gamma_g_negative_0x5A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x5B), gamma_g_negative_0x5B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x5C), gamma_g_negative_0x5C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x5D), gamma_g_negative_0x5D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x5E), gamma_g_negative_0x5E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x5F), gamma_g_negative_0x5F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x60), gamma_g_negative_0x60},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x61), gamma_g_negative_0x61},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x62), gamma_g_negative_0x62},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x63), gamma_g_negative_0x63},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x64), gamma_g_negative_0x64},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x65), gamma_g_negative_0x65},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x66), gamma_g_negative_0x66},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x67), gamma_g_negative_0x67},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x68), gamma_g_negative_0x68},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x69), gamma_g_negative_0x69},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x6A), gamma_g_negative_0x6A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x6B), gamma_g_negative_0x6B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x6C), gamma_g_negative_0x6C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x6D), gamma_g_negative_0x6D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x6E), gamma_g_negative_0x6E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x6F), gamma_g_negative_0x6F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_g_negative_0x70), gamma_g_negative_0x70},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x71), gamma_b_positive_0x71},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x72), gamma_b_positive_0x72},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x73), gamma_b_positive_0x73},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x74), gamma_b_positive_0x74},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x75), gamma_b_positive_0x75},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x76), gamma_b_positive_0x76},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x77), gamma_b_positive_0x77},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x78), gamma_b_positive_0x78},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x79), gamma_b_positive_0x79},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x7A), gamma_b_positive_0x7A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x7B), gamma_b_positive_0x7B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x7C), gamma_b_positive_0x7C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x7D), gamma_b_positive_0x7D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x7E), gamma_b_positive_0x7E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x7F), gamma_b_positive_0x7F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x80), gamma_b_positive_0x80},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x81), gamma_b_positive_0x81},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x82), gamma_b_positive_0x82},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x83), gamma_b_positive_0x83},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x84), gamma_b_positive_0x84},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x85), gamma_b_positive_0x85},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x86), gamma_b_positive_0x86},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x87), gamma_b_positive_0x87},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x88), gamma_b_positive_0x88},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x89), gamma_b_positive_0x89},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x8A), gamma_b_positive_0x8A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x8B), gamma_b_positive_0x8B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x8C), gamma_b_positive_0x8C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x8D), gamma_b_positive_0x8D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x8E), gamma_b_positive_0x8E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x8F), gamma_b_positive_0x8F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x90), gamma_b_positive_0x90},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x91), gamma_b_positive_0x91},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x92), gamma_b_positive_0x92},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x93), gamma_b_positive_0x93},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x94), gamma_b_positive_0x94},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x95), gamma_b_positive_0x95},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x96), gamma_b_positive_0x96},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x97), gamma_b_positive_0x97},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x98), gamma_b_positive_0x98},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x99), gamma_b_positive_0x99},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x9A), gamma_b_positive_0x9A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x9B), gamma_b_positive_0x9B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x9C), gamma_b_positive_0x9C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x9D), gamma_b_positive_0x9D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x9E), gamma_b_positive_0x9E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0x9F), gamma_b_positive_0x9F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0xA0), gamma_b_positive_0xA0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0xA2), gamma_b_positive_0xA2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0xA3), gamma_b_positive_0xA3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0xA4), gamma_b_positive_0xA4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0xA5), gamma_b_positive_0xA5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0xA6), gamma_b_positive_0xA6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0xA7), gamma_b_positive_0xA7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0xA9), gamma_b_positive_0xA9},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0xAA), gamma_b_positive_0xAA},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0xAB), gamma_b_positive_0xAB},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0xAC), gamma_b_positive_0xAC},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0xAD), gamma_b_positive_0xAD},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_positive_0xAE), gamma_b_positive_0xAE},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xAF), gamma_b_negative_0xAF},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xB0), gamma_b_negative_0xB0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xB1), gamma_b_negative_0xB1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xB2), gamma_b_negative_0xB2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xB3), gamma_b_negative_0xB3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xB4), gamma_b_negative_0xB4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xB5), gamma_b_negative_0xB5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xB6), gamma_b_negative_0xB6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xB7), gamma_b_negative_0xB7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xB8), gamma_b_negative_0xB8},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xB9), gamma_b_negative_0xB9},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xBA), gamma_b_negative_0xBA},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xBB), gamma_b_negative_0xBB},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xBC), gamma_b_negative_0xBC},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xBD), gamma_b_negative_0xBD},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xBE), gamma_b_negative_0xBE},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xBF), gamma_b_negative_0xBF},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xC0), gamma_b_negative_0xC0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xC1), gamma_b_negative_0xC1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xC2), gamma_b_negative_0xC2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xC3), gamma_b_negative_0xC3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xC4), gamma_b_negative_0xC4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xC5), gamma_b_negative_0xC5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xC6), gamma_b_negative_0xC6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xC7), gamma_b_negative_0xC7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xC8), gamma_b_negative_0xC8},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xC9), gamma_b_negative_0xC9},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xCA), gamma_b_negative_0xCA},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xCB), gamma_b_negative_0xCB},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xCC), gamma_b_negative_0xCC},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xCD), gamma_b_negative_0xCD},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xCE), gamma_b_negative_0xCE},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xCF), gamma_b_negative_0xCF},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xD0), gamma_b_negative_0xD0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xD1), gamma_b_negative_0xD1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xD2), gamma_b_negative_0xD2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xD3), gamma_b_negative_0xD3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xD4), gamma_b_negative_0xD4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xD5), gamma_b_negative_0xD5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xD6), gamma_b_negative_0xD6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xD7), gamma_b_negative_0xD7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xD8), gamma_b_negative_0xD8},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xD9), gamma_b_negative_0xD9},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xDA), gamma_b_negative_0xDA},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xDB), gamma_b_negative_0xDB},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xDC), gamma_b_negative_0xDC},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xDD), gamma_b_negative_0xDD},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xDE), gamma_b_negative_0xDE},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xDF), gamma_b_negative_0xDF},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xE0), gamma_b_negative_0xE0},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xE1), gamma_b_negative_0xE1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xE2), gamma_b_negative_0xE2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xE3), gamma_b_negative_0xE3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xE4), gamma_b_negative_0xE4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xE5), gamma_b_negative_0xE5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xE6), gamma_b_negative_0xE6},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xE7), gamma_b_negative_0xE7},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xE8), gamma_b_negative_0xE8},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xE9), gamma_b_negative_0xE9},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(gamma_b_negative_0xEA), gamma_b_negative_0xEA},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(page_selection_0xFF_0x22), page_selection_0xFF_0x22},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(page_selection_0xFB_0x01), page_selection_0xFB_0x01},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x00), color_enhancement_0x00},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x01), color_enhancement_0x01},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x02), color_enhancement_0x02},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x03), color_enhancement_0x03},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x04), color_enhancement_0x04},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x05), color_enhancement_0x05},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x06), color_enhancement_0x06},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x07), color_enhancement_0x07},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x08), color_enhancement_0x08},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x09), color_enhancement_0x09},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x0A), color_enhancement_0x0A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x0B), color_enhancement_0x0B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x0C), color_enhancement_0x0C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x0D), color_enhancement_0x0D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x0E), color_enhancement_0x0E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x0F), color_enhancement_0x0F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x10), color_enhancement_0x10},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x11), color_enhancement_0x11},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x12), color_enhancement_0x12},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x13), color_enhancement_0x13},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x1B), color_enhancement_0x1B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x1C), color_enhancement_0x1C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x1D), color_enhancement_0x1D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x1E), color_enhancement_0x1E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x1F), color_enhancement_0x1F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x20), color_enhancement_0x20},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x21), color_enhancement_0x21},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x22), color_enhancement_0x22},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x23), color_enhancement_0x23},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x24), color_enhancement_0x24},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x25), color_enhancement_0x25},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x26), color_enhancement_0x26},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x27), color_enhancement_0x27},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x28), color_enhancement_0x28},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x29), color_enhancement_0x29},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x2A), color_enhancement_0x2A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x2B), color_enhancement_0x2B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x2F), color_enhancement_0x2F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x30), color_enhancement_0x30},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x31), color_enhancement_0x31},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x32), color_enhancement_0x32},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x33), color_enhancement_0x33},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x34), color_enhancement_0x34},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x35), color_enhancement_0x35},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x36), color_enhancement_0x36},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x37), color_enhancement_0x37},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x38), color_enhancement_0x38},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x39), color_enhancement_0x39},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x3A), color_enhancement_0x3A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x3B), color_enhancement_0x3B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x3F), color_enhancement_0x3F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x40), color_enhancement_0x40},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x41), color_enhancement_0x41},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x42), color_enhancement_0x42},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x43), color_enhancement_0x43},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x44), color_enhancement_0x44},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x45), color_enhancement_0x45},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x46), color_enhancement_0x46},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x47), color_enhancement_0x47},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x48), color_enhancement_0x48},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x49), color_enhancement_0x49},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x4A), color_enhancement_0x4A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x4B), color_enhancement_0x4B},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_enhancement_0x4C), color_enhancement_0x4C},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(smart_color_ratio_0x4D), smart_color_ratio_0x4D},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(smart_color_ratio_0x4E), smart_color_ratio_0x4E},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(smart_color_ratio_0x4F), smart_color_ratio_0x4F},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(vivid_color_disable_0x1A), vivid_color_disable_0x1A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(smart_color_enable_0x53), smart_color_enable_0x53},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(skin_protection_enable_0x54), skin_protection_enable_0x54},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(V_constrain_enable_0x55), V_constrain_enable_0x55},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(contrast_disable_0x56), contrast_disable_0x56},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_disable_0x68), sharpness_disable_0x68},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_0x65), sharpness_0x65},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_0x66), sharpness_0x66},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_0x67), sharpness_0x67},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_0x69), sharpness_0x69},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_0x97), sharpness_0x97},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_0x98), sharpness_0x98},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(dither_enable_0xA2), dither_enable_0xA2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(page_selection_0xFF_0x23), page_selection_0xFF_0x23},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(page_selection_0xFB_0x01), page_selection_0xFB_0x01},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_endimming_0x00), cabc_endimming_0x00},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_0x32), cabc_0x32},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(page_selection_0xFF_0x20), page_selection_0xFF_0x20},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(cmd2_page0_0xFB), cmd2_page0_0xFB},
	{DTYPE_DCS_WRITE1, 0,200, WAIT_TYPE_US,
		sizeof(page_selection_0xFF_0xE0), page_selection_0xFF_0xE0},
	{DTYPE_DCS_WRITE1, 0,10, WAIT_TYPE_US,
		sizeof(pageE_0xB5), pageE_0xB5},
	{DTYPE_DCS_WRITE1, 0,10, WAIT_TYPE_US,
		sizeof(pageE_0xB6), pageE_0xB6},
	{DTYPE_DCS_WRITE1, 0,10, WAIT_TYPE_US,
		sizeof(pageE_0xB8), pageE_0xB8},
	{DTYPE_DCS_WRITE1, 0,10, WAIT_TYPE_US,
		sizeof(pageE_0xFB), pageE_0xFB},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(page_selection_0xFF_0x10), page_selection_0xFF_0x10},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_set_mode_UI), cabc_set_mode_UI},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(cmd1_page0_0x5E), cmd1_page0_0x5E},
};

static struct dsi_cmd_desc jdi_display_te_on_00_cmds[] = {
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(tear_on_00), tear_on_00},
};
static struct dsi_cmd_desc jdi_display_te_on_f0_cmds[] = {
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(tear_on_f0), tear_on_f0},
};

static struct dsi_cmd_desc jdi_display_on_cmds[] = {
	{DTYPE_DCS_LWRITE, 0,10, WAIT_TYPE_US,
		sizeof(caset_data), caset_data},
	{DTYPE_DCS_LWRITE, 0,10, WAIT_TYPE_US,
		sizeof(paset_data), paset_data},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(set_page3), set_page3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(set_pwm_freq), set_pwm_freq},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(set_page0), set_page0},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(bl_enable), bl_enable},
	{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
		sizeof(te_line), te_line},
	{DTYPE_DCS_WRITE, 0, 115, WAIT_TYPE_MS,
		sizeof(exit_sleep), exit_sleep},
	{DTYPE_DCS_WRITE, 0, 50, WAIT_TYPE_MS,
		sizeof(display_on), display_on},
};

static struct dsi_cmd_desc jdi_cabc_ui_on_cmds[] = {
	{DTYPE_DCS_LWRITE, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_set_mode_UI), cabc_set_mode_UI},
};

/*static struct dsi_cmd_desc jdi_cabc_still_on_cmds[] = {
	{DTYPE_DCS_LWRITE, 0, 10, WAIT_TYPE_US,
	sizeof(cabc_set_mode_STILL), cabc_set_mode_STILL},
};*/

static struct dsi_cmd_desc jdi_cabc_moving_on_cmds[] = {
	{DTYPE_DCS_LWRITE, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_set_mode_MOVING), cabc_set_mode_MOVING},
};

static struct dsi_cmd_desc jdi_display_off_cmds[] = {
	{DTYPE_DCS_WRITE1, 0, 1, WAIT_TYPE_MS,
		sizeof(bl_disable), bl_disable},
	{DTYPE_DCS_WRITE, 0, 60, WAIT_TYPE_MS,
		sizeof(display_off), display_off},
	{DTYPE_DCS_WRITE, 0, 120, WAIT_TYPE_MS,
		sizeof(enter_sleep), enter_sleep}
};


/*******************************************************************************
** LCD VCC
*/
#define VCC_LCDIO_NAME	"lcdio-vcc"
#define VCC_LCDANALOG_NAME	"lcdanalog-vcc"

static struct regulator *vcc_lcdio;
static struct regulator *vcc_lcdanalog;

static struct vcc_desc jdi_lcd_vcc_init_cmds[] = {
	/* vcc get */
	{DTYPE_VCC_GET, VCC_LCDIO_NAME, &vcc_lcdio, 0, 0, WAIT_TYPE_MS, 0},
	{DTYPE_VCC_GET, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 0, 0, WAIT_TYPE_MS, 0},

	/* vcc set voltage */
	{DTYPE_VCC_SET_VOLTAGE, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 3100000, 3100000, WAIT_TYPE_MS, 0},
};

static struct vcc_desc jdi_lcd_vcc_finit_cmds[] = {
	/* vcc put */
	{DTYPE_VCC_PUT, VCC_LCDIO_NAME, &vcc_lcdio, 0, 0, WAIT_TYPE_MS, 0},
	{DTYPE_VCC_PUT, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 0, 0, WAIT_TYPE_MS, 0},
};

static struct vcc_desc jdi_lcd_vcc_enable_cmds[] = {
	/* vcc enable */
	{DTYPE_VCC_ENABLE, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 0, 0, WAIT_TYPE_MS, 3},
	{DTYPE_VCC_ENABLE, VCC_LCDIO_NAME, &vcc_lcdio, 0, 0, WAIT_TYPE_MS, 3},
};

static struct vcc_desc jdi_lcd_vcc_disable_cmds[] = {
	/* vcc disable */
	{DTYPE_VCC_DISABLE, VCC_LCDIO_NAME, &vcc_lcdio, 0, 0, WAIT_TYPE_MS, 3},
	{DTYPE_VCC_DISABLE, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 0, 0, WAIT_TYPE_MS, 3},
};

/*******************************************************************************
** LCD IOMUX
*/
static struct pinctrl_data pctrl;

static struct pinctrl_cmd_desc jdi_lcd_pinctrl_init_cmds[] = {
	{DTYPE_PINCTRL_GET, &pctrl, 0},
	{DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
	{DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_IDLE},
};

static struct pinctrl_cmd_desc jdi_lcd_pinctrl_normal_cmds[] = {
	{DTYPE_PINCTRL_SET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
};

static struct pinctrl_cmd_desc jdi_lcd_pinctrl_lowpower_cmds[] = {
	{DTYPE_PINCTRL_SET, &pctrl, DTYPE_PINCTRL_STATE_IDLE},
};

/*******************************************************************************
** LCD GPIO
*/
#define GPIO_LCD_BL_ENABLE_NAME	"gpio_lcd_bl_enable"
#define GPIO_LCD_RESET_NAME	"gpio_lcd_reset"
#define GPIO_LCD_ID_NAME	"gpio_lcd_id"
#define GPIO_LCD_P5V5_ENABLE_NAME	"gpio_lcd_p5v5_enable"
#define GPIO_LCD_N5V5_ENABLE_NAME "gpio_lcd_n5v5_enable"

static u32 gpio_lcd_bl_enable;  /*gpio_4_3, gpio_035*/
static u32 gpio_lcd_reset;  /*gpio_4_5, gpio_037*/
static u32 gpio_lcd_id;  /*gpio_4_6, gpio_038*/
static u32 gpio_lcd_p5v5_enable;  /*gpio_5_1, gpio_041*/
static u32 gpio_lcd_n5v5_enable;  /*gpio_5_2, gpio_042*/

static struct gpio_desc jdi_lcd_gpio_request_cmds[] = {
	/* backlight enable */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 0},
	/* reset */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
	/* lcd id */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_LCD_ID_NAME, &gpio_lcd_id, 0},
	/* AVDD_5.5V */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_LCD_P5V5_ENABLE_NAME, &gpio_lcd_p5v5_enable, 0},
	/* AVEE_-5.5V */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_LCD_N5V5_ENABLE_NAME, &gpio_lcd_n5v5_enable, 0},
};

static struct gpio_desc jdi_lcd_gpio_free_cmds[] = {
	/* backlight enable */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 0},
	/* reset */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
	/* lcd id */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_LCD_ID_NAME, &gpio_lcd_id, 0},
	/* AVDD_5.5V */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_LCD_P5V5_ENABLE_NAME, &gpio_lcd_p5v5_enable, 0},
	/* AVEE_-5.5V */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_LCD_N5V5_ENABLE_NAME, &gpio_lcd_n5v5_enable, 0},
};

static struct gpio_desc jdi_lcd_gpio_sleep_free_cmds[] = {
	/* reset */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
	/* backlight enable */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 0},
	/* lcd id */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_LCD_ID_NAME, &gpio_lcd_id, 0},
};

static struct gpio_desc jdi_lcd_gpio_sleep_request_cmds[] = {
	/* reset */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
	/* backlight enable */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 0},
	/* lcd id */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_LCD_ID_NAME, &gpio_lcd_id, 0},
};

static struct gpio_desc jdi_lcd_gpio_sleep_lp_cmds[] = {
	/* backlight disable */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 1,
		GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 0},
};

static struct gpio_desc jdi_lcd_gpio_sleep_normal_cmds[] = {
	/* reset */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 65,
		GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 1},
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5,
		GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 15,
		GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 1},
	/* backlight enable */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 1,
		GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 1},
	/* lcd id */
	{DTYPE_GPIO_INPUT, WAIT_TYPE_MS, 40,
		GPIO_LCD_ID_NAME, &gpio_lcd_id, 0},
};

static struct gpio_desc jdi_lcd_gpio_normal_cmds[] = {
	/* AVDD_5.5V*/
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5,
		GPIO_LCD_P5V5_ENABLE_NAME, &gpio_lcd_p5v5_enable, 1},
	/* AVEE_-5.5V */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 15,
		GPIO_LCD_N5V5_ENABLE_NAME, &gpio_lcd_n5v5_enable, 1},
	/* reset */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 15,
		GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 1},
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5,
		GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 15,
		GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 1},
	/* backlight enable */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 1,
		GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 1},
	/* lcd id */
	{DTYPE_GPIO_INPUT, WAIT_TYPE_MS, 1,
		GPIO_LCD_ID_NAME, &gpio_lcd_id, 0},
};

static struct gpio_desc jdi_lcd_gpio_lowpower_cmds[] = {
	/* backlight enable */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5,
		GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 0},
	/* AVEE_-5.5V */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5,
		GPIO_LCD_N5V5_ENABLE_NAME, &gpio_lcd_n5v5_enable, 0},
	/* AVDD_5.5V*/
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5,
		GPIO_LCD_P5V5_ENABLE_NAME, &gpio_lcd_p5v5_enable, 0},
	/* reset */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5,
		GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
	/* backlight enable input */
	{DTYPE_GPIO_INPUT, WAIT_TYPE_US, 100,
		GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 0},
	/* AVEE_-5.5V input */
	{DTYPE_GPIO_INPUT, WAIT_TYPE_MS, 5,
		GPIO_LCD_N5V5_ENABLE_NAME, &gpio_lcd_n5v5_enable, 0},
	/* AVDD_5.5V input */
	{DTYPE_GPIO_INPUT, WAIT_TYPE_MS, 5,
		GPIO_LCD_P5V5_ENABLE_NAME, &gpio_lcd_p5v5_enable, 0},
	/* reset input */
	{DTYPE_GPIO_INPUT, WAIT_TYPE_US, 100,
		GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
};

/******************************************************************************/

static int cabc_mode = 1; /* allow application to set cabc mode to ui mode */
static volatile bool g_display_on = false;

static ssize_t mipi_jdi_panel_lcd_model_show(struct platform_device *pdev,
		char *buf)
{
	return snprintf(buf, PAGE_SIZE, "jdi_NT35695 5.5' CMD TFT 1080 x 1920\n");
}

static ssize_t mipi_jdi_panel_lcd_hkadc_debug_show(struct platform_device *pdev,
		char *buf)
{
	return snprintf(buf, PAGE_SIZE, "%d\n", hkadc_buf*4);
}

static ssize_t mipi_jdi_panel_lcd_hkadc_debug_store(struct platform_device *pdev,
		const char *buf, size_t count)
{
	int ret = 0;
	int channel = 0;

	ret = sscanf(buf, "%u", &channel);
	if(ret <= 0) {
		HISI_FB_ERR("Sscanf return invalid, ret = %d\n", ret);
		return count;
	}

	hkadc_buf = hisi_adc_get_value(channel);
	HISI_FB_INFO("channel[%d] value is %d\n", channel, hkadc_buf);
	return count;
}

static ssize_t mipi_jdi_panel_lcd_cabc_mode_show(struct platform_device *pdev,
		char *buf)
{
	return snprintf(buf, PAGE_SIZE, "%d\n", cabc_mode);
}

static ssize_t mipi_jdi_panel_lcd_cabc_mode_store(struct platform_device *pdev,
			const char *buf, size_t count)
{
	int ret = 0;
	unsigned long val = 0;
	int flag=-1;
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);
	mipi_dsi0_base =hisifd->mipi_dsi0_base;

	ret = strict_strtoul(buf, 0, &val);
	if (ret)
		return ret;

	flag=(int)val;
	if (flag==CABC_OFF ){
		//PINE dont need
	} else if (flag==CABC_UI_MODE) {
		/* allow application to set cabc mode to ui mode */
		cabc_mode = 1;
		mipi_dsi_cmds_tx(jdi_cabc_ui_on_cmds, \
				ARRAY_SIZE(jdi_cabc_ui_on_cmds),\
				mipi_dsi0_base);
	} else if (flag==CABC_STILL_MODE ) {
		//PINE dont need
	} else if (flag==CABC_MOVING_MODE) {
		/* force cabc mode to video mode */
		cabc_mode = 3;
		mipi_dsi_cmds_tx(jdi_cabc_moving_on_cmds, \
				ARRAY_SIZE(jdi_cabc_moving_on_cmds),\
				mipi_dsi0_base);
	}
	return snprintf((char *)buf, count, "%d\n", cabc_mode);
}

static int mipi_jdi_panel_set_fastboot(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	/* lcd pinctrl normal */
	pinctrl_cmds_tx(pdev, jdi_lcd_pinctrl_normal_cmds,
		ARRAY_SIZE(jdi_lcd_pinctrl_normal_cmds));

	/* lcd gpio request */
	gpio_cmds_tx(jdi_lcd_gpio_request_cmds,
		ARRAY_SIZE(jdi_lcd_gpio_request_cmds));

	/* backlight on */
	hisi_lcd_backlight_on(pdev);

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return 0;
}

static int mipi_jdi_NT35695B_panel_on(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;
	struct hisi_panel_info *pinfo = NULL;
	char __iomem *mipi_dsi0_base = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

#if defined (CONFIG_HUAWEI_DSM)
	static struct lcd_reg_read_t lcd_status_reg[] = {
		{0x0A, 0x9C, 0xFF, "lcd power state"},
		{0x0E, 0x80, 0xC1, "lcd signal mode"},
		{0x05, 0x00, 0xFF, "mipi dsi error number"},
		{0xDA, 0x00, 0x00, "RDID1"},
	};
#endif

	HISI_FB_INFO("fb%d, +!\n", hisifd->index);

	pinfo = &(hisifd->panel_info);
	mipi_dsi0_base = hisifd->mipi_dsi0_base;

	if (pinfo->lcd_init_step == LCD_INIT_POWER_ON) {
		LOG_JANK_D(JLID_KERNEL_LCD_POWER_ON, "%s", "JL_KERNEL_LCD_POWER_ON");
		if (false == gesture_func) {
			/* lcd vcc enable */
			vcc_cmds_tx(pdev, jdi_lcd_vcc_enable_cmds,
				ARRAY_SIZE(jdi_lcd_vcc_enable_cmds));
		} else {
			HISI_FB_INFO("power on (gesture_func:%d)\n", gesture_func);
		}

		pinfo->lcd_init_step = LCD_INIT_MIPI_LP_SEND_SEQUENCE;
	} else if (pinfo->lcd_init_step == LCD_INIT_MIPI_LP_SEND_SEQUENCE) {
		/* lcd pinctrl normal */
		pinctrl_cmds_tx(pdev, jdi_lcd_pinctrl_normal_cmds,
			ARRAY_SIZE(jdi_lcd_pinctrl_normal_cmds));

		if (gesture_func == false) {
			/* lcd gpio request */
			gpio_cmds_tx(jdi_lcd_gpio_request_cmds, \
				ARRAY_SIZE(jdi_lcd_gpio_request_cmds));
			/* lcd gpio normal */
			gpio_cmds_tx(jdi_lcd_gpio_normal_cmds, \
				ARRAY_SIZE(jdi_lcd_gpio_normal_cmds));
			mipi_dsi_cmds_tx(jdi_display_effect_on_cmds, \
				ARRAY_SIZE(jdi_display_effect_on_cmds), mipi_dsi0_base);
		} else {
			/* lcd gpio request */
			gpio_cmds_tx(jdi_lcd_gpio_sleep_request_cmds, \
				ARRAY_SIZE(jdi_lcd_gpio_sleep_request_cmds));
			/* backlights enable */
			gpio_cmds_tx(jdi_lcd_gpio_sleep_normal_cmds, \
				ARRAY_SIZE(jdi_lcd_gpio_sleep_normal_cmds));
			mipi_dsi_cmds_tx(jdi_display_effect_on_cmds, \
				ARRAY_SIZE(jdi_display_effect_on_cmds), mipi_dsi0_base);

			HISI_FB_INFO("lp send sequence (gesture_func:%d)\n", gesture_func);
		}

		if(runmode_is_factory()) {
			mipi_dsi_cmds_tx(jdi_display_te_on_f0_cmds, \
				ARRAY_SIZE(jdi_display_te_on_f0_cmds), mipi_dsi0_base);
		} else {
			mipi_dsi_cmds_tx(jdi_display_te_on_00_cmds, \
				ARRAY_SIZE(jdi_display_te_on_00_cmds), mipi_dsi0_base);
		}

		mipi_dsi_cmds_tx(jdi_display_on_cmds, \
			ARRAY_SIZE(jdi_display_on_cmds), mipi_dsi0_base);
		/* jdi_cabc_ui_on_cmds*/
		mipi_dsi_cmds_tx(jdi_cabc_ui_on_cmds, \
			ARRAY_SIZE(jdi_cabc_ui_on_cmds), mipi_dsi0_base);
		g_display_on = true;

#if defined (CONFIG_HUAWEI_DSM)
		panel_check_status_and_report_by_dsm(lcd_status_reg, \
			ARRAY_SIZE(lcd_status_reg), mipi_dsi0_base);
#endif
		debug_enable = true;
		pinfo->lcd_init_step = LCD_INIT_MIPI_HS_SEND_SEQUENCE;
	} else if (pinfo->lcd_init_step == LCD_INIT_MIPI_HS_SEND_SEQUENCE) {
		/* backlight on */
		hisi_lcd_backlight_on(pdev);
	} else
		HISI_FB_ERR("failed to init lcd!\n");

	HISI_FB_INFO("fb%d, -!\n", hisifd->index);

	return 0;
}

static int mipi_jdi_NT35695B_panel_off(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_INFO("fb%d, +!\n", hisifd->index);
	LOG_JANK_D(JLID_KERNEL_LCD_POWER_OFF, "%s", "JL_KERNEL_LCD_POWER_OFF");

	/* backlight off */
	hisi_lcd_backlight_off(pdev);

	g_display_on = false;
	/* lcd display off sequence */
	mipi_dsi_cmds_tx(jdi_display_off_cmds, \
		ARRAY_SIZE(jdi_display_off_cmds), hisifd->mipi_dsi0_base);

	if (gesture_func == false) {
		/* lcd gpio lowpower */
		gpio_cmds_tx(jdi_lcd_gpio_lowpower_cmds, \
			ARRAY_SIZE(jdi_lcd_gpio_lowpower_cmds));

		/* lcd gpio free */
		gpio_cmds_tx(jdi_lcd_gpio_free_cmds, \
			ARRAY_SIZE(jdi_lcd_gpio_free_cmds));

		/* lcd pinctrl lowpower */
		pinctrl_cmds_tx(pdev, jdi_lcd_pinctrl_lowpower_cmds,
			ARRAY_SIZE(jdi_lcd_pinctrl_lowpower_cmds));

		/* lcd vcc disable */
		vcc_cmds_tx(pdev, jdi_lcd_vcc_disable_cmds,
			ARRAY_SIZE(jdi_lcd_vcc_disable_cmds));

	} else {
		HISI_FB_INFO("display_off (gesture_func:%d)\n", gesture_func);
		/*backlights disable*/
		gpio_cmds_tx(jdi_lcd_gpio_sleep_lp_cmds, \
			ARRAY_SIZE(jdi_lcd_gpio_sleep_lp_cmds));

		/* lcd gpio free */
		gpio_cmds_tx(jdi_lcd_gpio_sleep_free_cmds, \
			ARRAY_SIZE(jdi_lcd_gpio_sleep_free_cmds));

		/* lcd pinctrl normal */
		pinctrl_cmds_tx(pdev, jdi_lcd_pinctrl_normal_cmds,
			ARRAY_SIZE(jdi_lcd_pinctrl_normal_cmds));
	}

	if (hisifd->hisi_fb_shutdown) {
		ts_thread_stop_notify();
	}

	HISI_FB_INFO("fb%d, -!\n", hisifd->index);

	return 0;
}

static int mipi_jdi_panel_remove(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);

	if (!hisifd) {
		return 0;
	}

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	/* lcd vcc finit */
	vcc_cmds_tx(pdev, jdi_lcd_vcc_finit_cmds,
		ARRAY_SIZE(jdi_lcd_vcc_finit_cmds));

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return 0;
}

static int hisi_mipi_set_backlight(struct hisi_fb_data_type *hisifd)
{
	char __iomem *mipi_dsi0_base = NULL;
	u32 level = 0;
	u8 bl_level_adjust[2] = {
		0x51,
		0x00,
	};

	struct dsi_cmd_desc  jdi_bl_level_adjust[] = {
		{DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_US,
			sizeof(bl_level_adjust), bl_level_adjust},
	};
	level = hisifd->bl_level;
	mipi_dsi0_base = hisifd->dss_base + DSS_MIPI_DSI0_OFFSET;

	//if need to avoid some level
	if (level < 4 && level != 0) {
		level = 4;
	}

	bl_level_adjust[1] = level;

	mipi_dsi_cmds_tx(jdi_bl_level_adjust, \
		ARRAY_SIZE(jdi_bl_level_adjust), mipi_dsi0_base);

	return 0;
}

static int mipi_jdi_panel_set_backlight(struct platform_device *pdev)
{
	int ret = 0;

	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	if (unlikely(debug_enable)) {
		HISI_FB_INFO("Set backlight to %d\n", hisifd->bl_level);
		//pr_jank(JL_KERNEL_LCD_RESUME, "%s, %d", "JL_KERNEL_LCD_RESUME", hisifd->bl_level);
		LOG_JANK_D(JLID_KERNEL_LCD_BACKLIGHT_ON, "JL_KERNEL_LCD_BACKLIGHT_ON,%u", hisifd->bl_level);
		debug_enable = false;
	}

	if (hisifd->panel_info.bl_set_type & BL_SET_BY_PWM)
		ret = hisi_pwm_set_backlight(hisifd);
	else if (hisifd->panel_info.bl_set_type & BL_SET_BY_BLPWM)
		ret = hisi_blpwm_set_backlight(hisifd);
	else if (hisifd->panel_info.bl_set_type & BL_SET_BY_MIPI)
		ret = hisi_mipi_set_backlight(hisifd);
	else
		HISI_FB_ERR("No such bl_set_type!\n");

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return ret;
}

static char lcd_disp_x[] = {
	0x2A,
	0x00, 0x00,0x04,0x37
};

static char lcd_disp_y[] = {
	0x2B,
	0x00, 0x00,0x07,0x7F
};

static struct dsi_cmd_desc set_display_address[] = {
	{DTYPE_DCS_LWRITE, 0, 5, WAIT_TYPE_US,
		sizeof(lcd_disp_x), lcd_disp_x},
	{DTYPE_DCS_LWRITE, 0, 5, WAIT_TYPE_US,
		sizeof(lcd_disp_y), lcd_disp_y},
};

static int mipi_jdi_panel_set_display_region(struct platform_device *pdev,
	struct dss_rect *dirty)
{
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;

	BUG_ON(pdev == NULL || dirty == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	mipi_dsi0_base = hisifd->dss_base + DSS_MIPI_DSI0_OFFSET;

	lcd_disp_x[1] = (dirty->x >> 8) & 0xff;
	lcd_disp_x[2] = dirty->x & 0xff;
	lcd_disp_x[3] = ((dirty->x + dirty->w - 1) >> 8) & 0xff;
	lcd_disp_x[4] = (dirty->x + dirty->w - 1) & 0xff;
	lcd_disp_y[1] = (dirty->y >> 8) & 0xff;
	lcd_disp_y[2] = dirty->y & 0xff;
	lcd_disp_y[3] = ((dirty->y + dirty->h - 1) >> 8) & 0xff;
	lcd_disp_y[4] = (dirty->y + dirty->h - 1) & 0xff;

	mipi_dsi_cmds_tx(set_display_address, \
		ARRAY_SIZE(set_display_address), mipi_dsi0_base);

	return 0;
}

static int mipi_jdi_panel_lcd_check_reg_show(struct platform_device *pdev, char *buf)
{
	struct hisi_fb_data_type *hisifd = NULL;
	u32 read_value = 0xFF;
	int ret = LCD_CHECK_REG_PASS;
	char __iomem *mipi_dsi0_base = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	mipi_dsi0_base = hisifd->dss_base + DSS_MIPI_DSI0_OFFSET;

	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, 0x0A06);
	if (!mipi_dsi_read(&read_value, mipi_dsi0_base)) {
		ret = LCD_CHECK_REG_FAIL;
		HISI_FB_ERR("Read register 0x0A timeout\n");
		goto check_fail;
	}
	if ((0x9c != (read_value & 0xFF))) {
		ret = LCD_CHECK_REG_FAIL;
		HISI_FB_ERR("Register 0x0A value is wrong: 0x%x\n", read_value);
		goto check_fail;
	}

	read_value = 0xFF;
	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, 0x0B06);
	if (!mipi_dsi_read(&read_value, mipi_dsi0_base)) {
		ret = LCD_CHECK_REG_FAIL;
		HISI_FB_ERR("Read register 0x0B timeout\n");
		goto check_fail;
	}
	if ((0x00 != (read_value & 0xFF))) {
		ret = LCD_CHECK_REG_FAIL;
		HISI_FB_ERR("Register 0x0B value is wrong: 0x%x\n", read_value);
		goto check_fail;
	}

	read_value = 0xFF;
	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, 0x0C06);
	if (!mipi_dsi_read(&read_value, mipi_dsi0_base)) {
		ret = LCD_CHECK_REG_FAIL;
		HISI_FB_ERR("Read register 0x0C timeout\n");
		goto check_fail;
	}
	if ((0x77 != (read_value & 0xFF))) {
		ret = LCD_CHECK_REG_FAIL;
		HISI_FB_ERR("Register 0x0C value is wrong: 0x%x\n", read_value);
		goto check_fail;
	}

	read_value = 0xFF;
	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, 0x0D06);
	if (!mipi_dsi_read(&read_value, mipi_dsi0_base)) {
		ret = LCD_CHECK_REG_FAIL;
		HISI_FB_ERR("Read register 0x0D timeout\n");
		goto check_fail;
	}
	if ((0x00 != (read_value & 0xFF))) {
		ret = LCD_CHECK_REG_FAIL;
		HISI_FB_ERR("Register 0x0D value is wrong: 0x%x\n", read_value);
		goto check_fail;
	}

check_fail:
	return ret;
}

static int mipi_jdi_panel_lcd_mipi_detect_show(struct platform_device *pdev, char *buf)
{
	struct hisi_fb_data_type *hisifd = NULL;
	u32 err_bit = 0;
	u32 err_num = 0;
	int ret;
	char __iomem *mipi_dsi0_base = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	mipi_dsi0_base = hisifd->dss_base + DSS_MIPI_DSI0_OFFSET;

	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, 0x0E06);
	if (!mipi_dsi_read(&err_bit, mipi_dsi0_base)) {
		ret = LCD_CHECK_REG_FAIL;
		HISI_FB_ERR("Read register 0x0E timeout\n");
		goto read_reg_failed;
	}

	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, 0x0506);
	if (!mipi_dsi_read(&err_num, mipi_dsi0_base)) {
		ret = LCD_CHECK_REG_FAIL;
		HISI_FB_ERR("Read register 0x05 timeout\n");
		goto read_reg_failed;
	}

	ret = ((err_bit & 0xFF) << 8) | (err_num & 0xFF);
	if (ret != 0x8000)
		HISI_FB_INFO("ret_val: 0x%x\n", ret);
read_reg_failed:
	return ret;
}

static int mipi_jdi_panel_lcd_gram_check_show(struct platform_device *pdev, char *buf)
{
	struct hisi_fb_data_type *hisifd = NULL;
	u32 read_value;
	int i;
	int ret = LCD_GRAM_CHECKSUM_PASS;
	char __iomem *mipi_dsi0_base = NULL;
	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);
	mipi_dsi0_base = hisifd->dss_base + DSS_MIPI_DSI0_OFFSET;

	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, (0xF0 << 16) | (0xFF << 8) | 0x15);
	if (buf[0] == LCD_GRAM_CHECKSUM_ENABLE) { //enable
		HISI_FB_INFO("enable\n");
		outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, (0x00 << 16) | (0x7B << 8) | 0x15);
		outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, (0x01 << 16) | (0x92 << 8) | 0x15);
	} else if (buf[0] == LCD_GRAM_CHECKSUM_DISABLE) { //disable
		HISI_FB_INFO("disable\n");
		outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, (0x00 << 16) | (0x92 << 8) | 0x15);
	} else if (buf[0] == LCD_GRAM_CHECKSUM_READ) { //read
		HISI_FB_INFO("read\n");
		outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, (0x1 << 8) | 0x37);
		for (i = 0; i < 8; i++) {
			read_value = 0xFF;
			outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, ((0x73 + i) << 8) | 0x06);
			if (!mipi_dsi_read(&read_value, mipi_dsi0_base)) {
				HISI_FB_ERR("Gram_checksum read register timeout\n");
				ret = LCD_GRAM_CHECKSUM_FAIL;
			}
			buf[i] = (unsigned char)read_value;
		}
		HISI_FB_INFO("result:0x%x,0x%x,0x%x,0x%x,0x%x,0x%x,0x%x,0x%x\n", buf[0], buf[1], buf[2], buf[3], buf[4], buf[5], buf[6], buf[7]);
	}
	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, (0x10 << 16) | (0xFF << 8) | 0x15);
	return ret;
}

#ifdef CONFIG_LCD_DEFECT_CHECK
static int defect_read_and_check(struct platform_device *pdev, char *buf)
{
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;
	u32 D8_value = 0xFF, D9_value = 0xFF, BC_value = 0xFF;
	int ret = LCD_DEFECT_CHECK_PASS;
	char tempbuf[50] = {0};

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);
	mipi_dsi0_base = hisifd->dss_base + DSS_MIPI_DSI0_OFFSET;

	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, 0xD806);
	if (!mipi_dsi_read(&D8_value, mipi_dsi0_base)) {
		HISI_FB_ERR("LCD defect check read register D8 timeout\n");
		snprintf(tempbuf, PAGE_SIZE, "LCD defect check read register D8 timeout\n");
		strncat(buf, tempbuf, 50);
		ret = LCD_DEFECT_CHECK_TIMEOUT;
		goto read_reg_failed;
	}

	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, 0xD906);
	if (!mipi_dsi_read(&D9_value, mipi_dsi0_base)) {
		HISI_FB_ERR("LCD defect check read register D9 timeout\n");
		snprintf(tempbuf, PAGE_SIZE, "LCD defect check read register D9 timeout\n");
		strncat(buf, tempbuf, 50);
		ret = LCD_DEFECT_CHECK_TIMEOUT;
		goto read_reg_failed;
	}

	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, 0xBC06);
	if (!mipi_dsi_read(&BC_value, mipi_dsi0_base)) {
		HISI_FB_ERR("LCD defect check read register BC timeout\n");
		snprintf(tempbuf, PAGE_SIZE, "LCD defect check read register BC timeout\n");
		strncat(buf, tempbuf, 50);
		ret = LCD_DEFECT_CHECK_TIMEOUT;
		goto read_reg_failed;
	}

	D8_value &= 0xFF;
	D9_value &= 0xFF;
	BC_value &= 0x60;
	ret = ((D8_value == 0xFF) && (D9_value == 0x3F) && (BC_value == 0x60)) ? \
				LCD_DEFECT_CHECK_PASS : LCD_DEFECT_CHECK_FAIL;
	HISI_FB_INFO("%s: D8:%x, D9:%x, BC:%x\n",__func__, D8_value, D9_value, BC_value);
	snprintf(tempbuf, PAGE_SIZE, "D8:%x, D9:%x, BC:%x\n", D8_value, D9_value, BC_value);
	strncat(buf, tempbuf, 50);

read_reg_failed:
	return ret;
}

static struct dsi_cmd_desc* jdi_display_defect_check_cmds[] = {
	jdi_display_defect_check_cmds1,
	jdi_display_defect_check_cmds2,
	jdi_display_defect_check_cmds3,
	jdi_display_defect_check_cmds4_1,
	jdi_display_defect_check_cmds4_2,
	jdi_display_defect_check_cmds5_1,
	jdi_display_defect_check_cmds5_2,
	jdi_display_defect_check_cmds6,
	jdi_display_defect_check_cmds7,
	jdi_display_defect_check_cmds8,
};

static int defect_check_cmds_size[] = {
	ARRAY_SIZE(jdi_display_defect_check_cmds1),
	ARRAY_SIZE(jdi_display_defect_check_cmds2),
	ARRAY_SIZE(jdi_display_defect_check_cmds3),
	ARRAY_SIZE(jdi_display_defect_check_cmds4_1),
	ARRAY_SIZE(jdi_display_defect_check_cmds4_2),
	ARRAY_SIZE(jdi_display_defect_check_cmds5_1),
	ARRAY_SIZE(jdi_display_defect_check_cmds5_2),
	ARRAY_SIZE(jdi_display_defect_check_cmds6),
	ARRAY_SIZE(jdi_display_defect_check_cmds7),
	ARRAY_SIZE(jdi_display_defect_check_cmds8),
};
#endif

#ifdef CONFIG_LCD_DEFECT_CHECK
static int mipi_jdi_panel_defect_check(struct platform_device *pdev, char *buf)
{
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;
	int ret = LCD_DEFECT_CHECK_PASS;
	int final_ret = LCD_DEFECT_CHECK_PASS;
	int i;
	char tempbuf[50] = {0};

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);
	mipi_dsi0_base = hisifd->dss_base + DSS_MIPI_DSI0_OFFSET;
	hisifd->lcd_self_testing = true;

#if DEFECT_CHECK_STEPS_CHOICE == 0
	for (i = 0; i < ARRAY_SIZE(jdi_display_defect_check_cmds); i++) {
#elif DEFECT_CHECK_STEPS_CHOICE == 1
	for (i = 5; i < ARRAY_SIZE(jdi_display_defect_check_cmds); i++) {
#else
	for (i = 0; i < 5; i++) {
#endif
		HISI_FB_INFO("TEST %d\n", i+1);
		snprintf(tempbuf, PAGE_SIZE, "TEST %d\n", i+1);
		strncat(buf, tempbuf, 50);
		mipi_dsi_cmds_tx(jdi_display_defect_check_cmds[i], \
			defect_check_cmds_size[i], mipi_dsi0_base);
		ret = defect_read_and_check(pdev, buf);
		if (ret != LCD_DEFECT_CHECK_PASS) {
			HISI_FB_ERR("check failed\n");
			snprintf(tempbuf, PAGE_SIZE, "TEST %d failed\n", i+1);
			strncat(buf, tempbuf, 50);
			final_ret = ret;
		}
	}

	if (final_ret == LCD_DEFECT_CHECK_PASS) {
		snprintf(tempbuf, PAGE_SIZE, "defect check pass\n");
		strncat(buf, tempbuf, 50);
	}

	mipi_dsi_cmds_tx(jdi_display_defect_check_end, \
		ARRAY_SIZE(jdi_display_defect_check_end), mipi_dsi0_base);

	hisifd->lcd_self_testing = false;

	return final_ret;
}
#endif


static int g_support_mode = 0;
static ssize_t mipi_jdi_panel_lcd_support_mode_show(struct platform_device *pdev,
     char *buf)	
{
       struct hisi_fb_data_type *hisifd = NULL;
       ssize_t ret = 0;


       BUG_ON(pdev == NULL);
       hisifd = platform_get_drvdata(pdev);
       BUG_ON(hisifd == NULL);

       HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

       ret = snprintf(buf, PAGE_SIZE, "%d\n", g_support_mode);

       HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

       return ret;
}

static ssize_t mipi_jdi_panel_lcd_support_mode_store(struct platform_device *pdev,
       const char *buf, size_t count)
{
       int ret = 0;
       unsigned long val = 0;
       int flag = -1;
       struct hisi_fb_data_type *hisifd = NULL;
       BUG_ON(pdev == NULL);
       hisifd = platform_get_drvdata(pdev);
       BUG_ON(hisifd == NULL);

       ret = strict_strtoul(buf, 0, &val);
       if (ret)	
               return ret;

       HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

       flag = (int)val;

       g_support_mode = flag;
       HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);
      return snprintf((char *)buf, count, "%d\n", g_support_mode);
}

static struct hisi_panel_info jdi_panel_info = {0};
static struct hisi_fb_panel_data jdi_panel_data = {
	.panel_info = &jdi_panel_info,
	.set_fastboot = mipi_jdi_panel_set_fastboot,
	.on = mipi_jdi_NT35695B_panel_on,
	.off = mipi_jdi_NT35695B_panel_off,
	.remove = mipi_jdi_panel_remove,
	.set_backlight = mipi_jdi_panel_set_backlight,
	.lcd_model_show = mipi_jdi_panel_lcd_model_show,
	.lcd_cabc_mode_show = mipi_jdi_panel_lcd_cabc_mode_show,
	.lcd_cabc_mode_store = mipi_jdi_panel_lcd_cabc_mode_store,
	.lcd_check_reg = mipi_jdi_panel_lcd_check_reg_show,
	.lcd_mipi_detect = mipi_jdi_panel_lcd_mipi_detect_show,
	.lcd_hkadc_debug_show = mipi_jdi_panel_lcd_hkadc_debug_show,
	.lcd_hkadc_debug_store = mipi_jdi_panel_lcd_hkadc_debug_store,
	.lcd_gram_check_show = mipi_jdi_panel_lcd_gram_check_show,
#ifdef CONFIG_LCD_DEFECT_CHECK
	.lcd_bist_check = mipi_jdi_panel_defect_check,
#endif

	.set_display_region = mipi_jdi_panel_set_display_region,
	.lcd_support_mode_show = mipi_jdi_panel_lcd_support_mode_show,
	.lcd_support_mode_store = mipi_jdi_panel_lcd_support_mode_store,
};

static int mipi_jdi_NT35695B_probe(struct platform_device *pdev)
{
	int ret = 0;
	struct hisi_panel_info *pinfo = NULL;
	struct device_node *np = NULL;
	uint32_t bl_type = 0;

	if (hisi_fb_device_probe_defer(PANEL_MIPI_CMD))
		goto err_probe_defer;

	HISI_FB_INFO("+.\n");

	np = of_find_compatible_node(NULL, NULL, DTS_COMP_JDI_NT35695);
	if (!np) {
		HISI_FB_ERR("NOT FOUND device node %s!\n", DTS_COMP_JDI_NT35695);
		goto err_return;
	}

	gpio_lcd_bl_enable = of_get_named_gpio(np, "gpios", 0);  /*gpio_4_3, gpio_035*/
	gpio_lcd_reset = of_get_named_gpio(np, "gpios", 1);  /*gpio_4_5, gpio_037*/
	gpio_lcd_id = of_get_named_gpio(np, "gpios", 2);  /*gpio_4_6, gpio_038*/
	gpio_lcd_p5v5_enable = of_get_named_gpio(np, "gpios", 3);  /*gpio_5_1, gpio_041*/
	gpio_lcd_n5v5_enable = of_get_named_gpio(np, "gpios", 4);  /*gpio_5_2, gpio_042*/

	ret = of_property_read_u32(np, LCD_BL_TYPE_NAME, &bl_type);
	if (ret) {
		HISI_FB_ERR("get lcd_bl_type failed!\n");
		bl_type = BL_SET_BY_MIPI;
	}

	ret = of_property_read_u32(np, LCD_VDDIO_TYPE_NAME, &g_vddio_type);
	if (ret) {
		HISI_FB_ERR("get lcd_vddio_type failed!\n");
		g_vddio_type = 0;
	}
	HISI_FB_INFO("get lcd_vddio_type: %d, lcd_bl_type:%d\n", g_vddio_type, bl_type);

	pdev->id = 1;
	/* init lcd panel info */
	pinfo = jdi_panel_data.panel_info;
	memset(pinfo, 0, sizeof(struct hisi_panel_info));
	pinfo->xres = 1080;
	pinfo->yres = 1920;
	pinfo->width  = 76;  //mm
	pinfo->height = 135; //mm
	pinfo->type = PANEL_MIPI_CMD;
	pinfo->orientation = LCD_PORTRAIT;
	pinfo->bpp = LCD_RGB888;
	pinfo->bgr_fmt = LCD_RGB;
	pinfo->bl_set_type = bl_type;

	pinfo->bl_min = 1;
	pinfo->bl_max = 255;
	pinfo->vsync_ctrl_type = (VSYNC_CTRL_ISR_OFF |
		VSYNC_CTRL_MIPI_ULPS);

	pinfo->frc_enable = 0;
	pinfo->esd_enable = 0;
	pinfo->dirty_region_updt_support = 0;

	//if(runmode_is_factory()) {
	if(0) {
            pinfo->sbl_support = 0;
		pinfo->dsi_bit_clk_upt_support = 0;
		pinfo->acm_support = 0;
		pinfo->prefix_sharpness_support = 0;
	} else {
		pinfo->sbl_support = 1;
		pinfo->dsi_bit_clk_upt_support = 0;
		pinfo->acm_support = 0;
		pinfo->prefix_sharpness_support = 0;
	}

	pinfo->color_temperature_support = 1;
	pinfo->comform_mode_support = 1;
	g_support_mode = 1;
	pinfo->smart_bl.strength_limit = 160;
	//pinfo->smart_bl.variance = 145;
	//pinfo->smart_bl.slope_max = 54;
	//pinfo->smart_bl.slope_min = 160;
	pinfo->smart_bl.calibration_a = 30;
	pinfo->smart_bl.calibration_b = 95;
	pinfo->smart_bl.calibration_c = 5;
	pinfo->smart_bl.calibration_d = 1;
	pinfo->smart_bl.t_filter_control = 5;
	pinfo->smart_bl.backlight_min = 480;
	pinfo->smart_bl.backlight_max = 4096;
	pinfo->smart_bl.backlight_scale = 0xff;
	pinfo->smart_bl.ambient_light_min = 14;
	pinfo->smart_bl.filter_a = 1738;
	pinfo->smart_bl.filter_b = 6;
	pinfo->smart_bl.logo_left = 0;
	pinfo->smart_bl.logo_top = 0;

	pinfo->ifbc_type = IFBC_TYPE_NON;

	pinfo->ldi.h_back_porch = 23;
	pinfo->ldi.h_front_porch = 50;
	pinfo->ldi.h_pulse_width = 20;
	pinfo->ldi.v_back_porch = 12;
	pinfo->ldi.v_front_porch = 14;
	pinfo->ldi.v_pulse_width = 4;

	pinfo->mipi.lane_nums = DSI_4_LANES;
	pinfo->mipi.color_mode = DSI_24BITS_1;
	pinfo->mipi.vc = 0;
	pinfo->mipi.dsi_bit_clk = 480;

	pinfo->pxl_clk_rate = 150*1000000UL;

	/* lcd vcc init */
	ret = vcc_cmds_tx(pdev, jdi_lcd_vcc_init_cmds,
		ARRAY_SIZE(jdi_lcd_vcc_init_cmds));
	if (ret != 0) {
		HISI_FB_ERR("LCD vcc init failed!\n");
		goto err_return;
	}

	if (fastboot_set_needed) {
		vcc_cmds_tx(pdev, jdi_lcd_vcc_enable_cmds,
			ARRAY_SIZE(jdi_lcd_vcc_enable_cmds));
	}

	/* lcd pinctrl init */
	ret = pinctrl_cmds_tx(pdev, jdi_lcd_pinctrl_init_cmds,
		ARRAY_SIZE(jdi_lcd_pinctrl_init_cmds));
	if (ret != 0) {
	        HISI_FB_ERR("Init pinctrl failed, defer\n");
		goto err_return;
	}

	/* alloc panel device data */
	ret = platform_device_add_data(pdev, &jdi_panel_data,
		sizeof(struct hisi_fb_panel_data));
	if (ret) {
		HISI_FB_ERR("platform_device_add_data failed!\n");
		goto err_device_put;
	}

	hisi_fb_add_device(pdev);

	HISI_FB_INFO("-.\n");

	return 0;

err_device_put:
	platform_device_put(pdev);
err_return:
	return ret;
err_probe_defer:
	return -EPROBE_DEFER;

	return ret;
}

static const struct of_device_id hisi_panel_match_table[] = {
    {
        .compatible = DTS_COMP_JDI_NT35695,
        .data = NULL,
    },
    {},
};
MODULE_DEVICE_TABLE(of, hisi_panel_match_table);

static struct platform_driver this_driver = {
	.probe = mipi_jdi_NT35695B_probe,
	.remove = NULL,
	.suspend = NULL,
	.resume = NULL,
	.shutdown = NULL,
	.driver = {
		.name = "mipi_jdi_NT35695_PINE",
		.owner = THIS_MODULE,
		.of_match_table = of_match_ptr(hisi_panel_match_table),
	},
};

static int __init mipi_jdi_panel_init(void)
{
	int ret = 0;

	if (get_lcd_type() != JDI_NT35695B_LCD) {
	        HISI_FB_INFO("lcd type is not JDI_NT35695B_LCD, return!\n");
	        return ret;
	}

	ret = platform_driver_register(&this_driver);
	if (ret) {
		HISI_FB_ERR("platform_driver_register failed, error=%d!\n", ret);
		return ret;
	}

	return ret;
}

module_init(mipi_jdi_panel_init);
