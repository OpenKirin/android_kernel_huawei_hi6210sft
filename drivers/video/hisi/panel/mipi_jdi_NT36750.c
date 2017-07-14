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
#include <linux/huawei/hisi_adc.h>
#include <huawei_platform/touthscreen/huawei_touchscreen.h>
//#include "mipi_jdi_NT36750.h"
#include <linux/hisi/hw_cmdline_parse.h>
#include <huawei_platform/log/log_jank.h>

#define DTS_COMP_JDI_NT36750 "hisilicon,mipi_jdi_NT36750"
#define LCD_VDDIO_TYPE_NAME	"lcd-vddio-type"
#define CABC_OFF 0
#define CABC_UI_MODE 1
#define CABC_STILL_MODE 2
#define CABC_MOVING_MODE 3
#define CHECKSUM_SIZE 8
static struct hisi_fb_panel_data jdi_panel_data;

static int hkadc_buf = 0;
static bool checksum_enable_ctl = false;
static bool g_debug_enable = false;
static int g_cabc_mode = 1;

bool g_enable_extra_data = false;  //default must be false, other panel do not need this.

enum {  
    COLOR_EN_WEAK   = 0,
    COLOR_EN_STRONG = 1,
    COLOR_EN_SRGB = 2,
    COLOR_EN_CLOSE  = 3,
};

static int g_color_enhancement_mode = 1;

static int g_support_mode = 0;

extern int fastboot_set_needed;
extern bool gesture_func;
extern void ts_power_gpio_enable(void);
extern void ts_power_gpio_disable(void);


/*******************************************************************************
** Power ON Sequence(sleep mode to Normal mode)
*/
static char page_2_select[] = {
	0XFF,
	0x20,
};

static char vgho_hiZ[] = {
	0X30,
	0x20,
};

static char non_reload[] = {
	0XFB,
	0x01,
};

static char page_1_select[] = {
	0XFF,
	0x10,
};

static char tear_on[] = {
	0x35,
	0x00,
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
	0x07, 0x78,
};

/*******************************************************************************
** setting PWM frequency to 58KHZ
*/
//static char set_page3[] = {
//	0xFF,
//	0x23,
//};

//static char set_pwm_freq[] = {
//	0x08,
//	0x03,
//};

//static char set_page0[] = {
//	0xFF,
//	0x10,
//};

/*******************************************************************************
** Power OFF Sequence(Normal to power off)
*/
static char display_off[] = {
	0x28,
};

static char enter_sleep[] = {
	0x10,
};

static struct dsi_cmd_desc jdi_display_on_cmds[] = {
	{DTYPE_DCS_WRITE1, 0,10, WAIT_TYPE_US,
		sizeof(tear_on), tear_on},
	{DTYPE_DCS_WRITE1, 0,10, WAIT_TYPE_US,
		sizeof(page_2_select), page_2_select},
	{DTYPE_DCS_WRITE1, 0,10, WAIT_TYPE_US,
		sizeof(vgho_hiZ), vgho_hiZ},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(non_reload), non_reload},
	{DTYPE_DCS_LWRITE, 0,200, WAIT_TYPE_US,
		sizeof(page_1_select), page_1_select},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(bl_enable), bl_enable},
	{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
		sizeof(te_line), te_line},
	{DTYPE_DCS_WRITE, 0, 115, WAIT_TYPE_MS,
		sizeof(exit_sleep), exit_sleep},
	{DTYPE_DCS_WRITE, 0, 50, WAIT_TYPE_MS,
		sizeof(display_on), display_on},
};

static struct dsi_cmd_desc jdi_display_off_cmds[] = {
	{DTYPE_DCS_WRITE, 0, 60, WAIT_TYPE_MS,
		sizeof(display_off), display_off},
	{DTYPE_DCS_WRITE, 0, 120, WAIT_TYPE_MS,
		sizeof(enter_sleep), enter_sleep}
};
static char non_reload_0xFB[] = {
	0xFB,
	0x01,
};
static char cmd1_0xFF[] = {
	0xFF,
	0x10,
};


/******************************************************************************
*
** Display Effect Sequence(smart color, edge enhancement, smart contrast, cabc)
*/


static char page_selection_0xFF_0x22[] = {
	0xFF,
	0x22,
};

static char color_enhancement_0x00[] = {
	0x00,
	0x20,
};

static char color_enhancement_0x01[] = {
	0x01,
	0x21,
};

static char color_enhancement_0x02[] = {
	0x02,
	0x22,
};

static char color_enhancement_0x03[] = {
	0x03,
	0x23,
};

static char color_enhancement_0x04[] = {
	0x04,
	0x24,
};

static char color_enhancement_0x05[] = {
	0x05,
	0x25,
};

static char color_enhancement_0x06[] = {
	0x06,
	0x26,
};

static char color_enhancement_0x07[] = {
	0x07,
	0x27,
};

static char color_enhancement_0x08[] = {
	0x08,
	0x28,
};

static char color_enhancement_0x09[] = {
	0x09,
	0x29,
};

static char color_enhancement_0x0A[] = {
	0x0A,
	0x2A,
};

static char color_enhancement_0x0B[] = {
	0x0B,
	0x2B,
};

static char color_enhancement_0x0C[] = {
	0x0C,
	0x2C,
};

static char color_enhancement_0x0D[] = {
	0x0D,
	0x2D,
};

static char color_enhancement_0x0E[] = {
	0x0E,
	0x2E,
};

static char color_enhancement_0x0F[] = {
	0x0F,
	0x2F,
};

static char color_enhancement_0x10[] = {
	0x10,
	0x30,
};

static char color_enhancement_0x11[] = {
	0x11,
	0x30,
};

static char color_enhancement_0x12[] = {
	0x12,
	0x30,
};

static char color_enhancement_0x13[] = {
	0x13,
	0x30,
};

static char color_enhancement_0x1B[] = {
	0x1B,
	0x32,
};

static char color_enhancement_0x1C[] = {
	0x1C,
	0x33,
};

static char color_enhancement_0x1D[] = {
	0x1D,
	0x34,
};

static char color_enhancement_0x1E[] = {
	0x1E,
	0x35,
};

static char color_enhancement_0x1F[] = {
	0x1F,
	0x36,
};

static char color_enhancement_0x20[] = {
	0x20,
	0x37,
};

static char color_enhancement_0x21[] = {
	0x21,
	0x38,
};

static char color_enhancement_0x22[] = {
	0x22,
	0x39,
};

static char color_enhancement_0x23[] = {
	0x23,
	0x3A,
};

static char color_enhancement_0x24[] = {
	0x24,
	0x3B,
};

static char color_enhancement_0x25[] = {
	0x25,
	0x3c,
};

static char color_enhancement_0x26[] = {
	0x26,
	0x27,
};

static char color_enhancement_0x27[] = {
	0x27,
	0x1c,
};

static char color_enhancement_0x28[] = {
	0x28,
	0x00,
};

static char color_enhancement_0x29[] = {
	0x29,
	0x00,
};

static char color_enhancement_0x2A[] = {
	0x2A,
	0x00,
};

static char color_enhancement_0x2B[] = {
	0x2B,
	0x00,
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
	0x87,
};

static char color_enhancement_0x33[] = {
	0x33,
	0x86,
};

static char color_enhancement_0x34[] = {
	0x34,
	0x85,
};

static char color_enhancement_0x35[] = {
	0x35,
	0x84,
};

static char color_enhancement_0x36[] = {
	0x36,
	0x82,
};

static char color_enhancement_0x37[] = {
	0x37,
	0x02,
};

static char color_enhancement_0x38[] = {
	0x38,
	0x06,
};

static char color_enhancement_0x39[] = {
	0x39,
	0x08,
};

static char color_enhancement_0x3A[] = {
	0x3A,
	0x0a,
};

static char color_enhancement_0x3B[] = {
	0x3B,
	0x0c,
};

static char color_enhancement_0x3F[] = {
	0x3F,
	0x0f,
};

static char color_enhancement_0x40[] = {
	0x40,
	0x14,
};

static char color_enhancement_0x41[] = {
	0x41,
	0x1a,
};

static char color_enhancement_0x42[] = {
	0x42,
	0x20,
};

static char color_enhancement_0x43[] = {
	0x43,
	0x1e,
};

static char color_enhancement_0x44[] = {
	0x44,
	0x1c,
};

static char color_enhancement_0x45[] = {
	0x45,
	0x18,
};

static char color_enhancement_0x46[] = {
	0x46,
	0x14,
};

static char color_enhancement_0x47[] = {
	0x47,
	0x10,
};

static char color_enhancement_0x48[] = {
	0x48,
	0x0c,
};

static char color_enhancement_0x49[] = {
	0x49,
	0x08,
};

static char color_enhancement_0x4A[] = {
	0x4A,
	0x04,
};

static char color_enhancement_0x4B[] = {
	0x4B,
	0x00,
};

static char color_enhancement_0x4C[] = {
	0x4C,
	0x86,
};

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
	0x00, 
};

static char vivid_color_enable_0x1A[] = {
	0x1A,
	0x17,
};

static char smart_color_enable_0x53[] = {
	0x53,
	0x77,
};

static char skin_protection_enable_0x54[] = {
	0x54,
	0x77,
};

static char v_constrain_enable_0x55[] = {
	0x55,
	0x77,
};

static char smart_contrast_enable_0x56[] = {
	0x56,
	0x00,
};

static char sharpness_enable_0x68[] = {
	0x68,
	0x00,
};

static char sharpness_0x65[] = {
	0x65,
	0x82,
};

static char sharpness_0x66[] = {
	0x66,
	0xA6,
};

static char sharpness_0x67[] = {
	0x67,
	0xC8,
};

static char sharpness_0x69[] = {
	0x69,
	0xF2,
};
static char color_sign_0x84[] = {
	0x84,
	0x00,
};
static char color_sign_0x85[] = {
	0x85,
	0x00,
};
static char color_sign_0x86[] = {
	0x86,
	0xF0,
};
static char color_sign_0x87[] = {
	0x87,
	0xFF,
};
static char color_sign_0x88[] = {
	0x88,
	0xFF,
};


static char sharpness_0x97[] = {
	0x97,
	0xFF,
};

static char sharpness_0x98[] = {
	0x98,
	0x1C,
};

static char dither_enable_0xA2[] = {
	0xA2,
	0x20,
};
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

static char cabc_off[] = {
	0x55,
	0xB0,
};

static char cabc_set_mode_UI[] = {
	0x55,
	0xB1,
};

static char strong_cabc_set_mode_UI[] = {
	0x55,
	0x81,
};

static char cabc_set_mode_STILL[] = {
	0x55,
	0xB2,
};

static char cabc_set_mode_MOVING[] = {
	0x55,
	0xB3,
};

static char srgb_ce_param_1[] =  {0x55,0x80};
static char srgb_ce_param_2[] =  {0xFF,0x22};
static char srgb_ce_param_3[] =  {0xFB,0x01};
static char srgb_ce_param_4[] =  {0x00,0x00};
static char srgb_ce_param_5[] =  {0x01,0x04};
static char srgb_ce_param_6[] =  {0x02,0x08};
static char srgb_ce_param_7[] =  {0x03,0x0C};
static char srgb_ce_param_8[] =  {0x04,0x10};
static char srgb_ce_param_9[] =  {0x05,0x14};
static char srgb_ce_param_10[] = {0x06,0x18};
static char srgb_ce_param_11[] = {0x07,0x20};
static char srgb_ce_param_12[] = {0x08,0x24};
static char srgb_ce_param_13[] = {0x09,0x28};
static char srgb_ce_param_14[] = {0x0A,0x30};
static char srgb_ce_param_15[] = {0x0B,0x38};
static char srgb_ce_param_16[] = {0x0C,0x38};
static char srgb_ce_param_17[] = {0x0D,0x30};
static char srgb_ce_param_18[] = {0x0E,0x28};
static char srgb_ce_param_19[] = {0x0F,0x20};
static char srgb_ce_param_20[] = {0x10,0x10};
static char srgb_ce_param_21[] = {0x11,0x00};
static char srgb_ce_param_22[] = {0x12,0x00};
static char srgb_ce_param_23[] = {0x13,0x00};
static char srgb_ce_param_24[] = {0x32,0x08};
static char srgb_ce_param_25[] = {0x33,0x0C};
static char srgb_ce_param_26[] = {0x34,0x08};
static char srgb_ce_param_27[] = {0x35,0x04};
static char srgb_ce_param_28[] = {0x36,0x00};
static char srgb_ce_param_29[] = {0x37,0x00};
static char srgb_ce_param_30[] = {0x38,0x00};
static char srgb_ce_param_31[] = {0x39,0x00};
static char srgb_ce_param_32[] = {0x3A,0x00};
static char srgb_ce_param_33[] = {0x3B,0x00};
static char srgb_ce_param_34[] = {0x3F,0x04};
static char srgb_ce_param_35[] = {0x40,0x08};
static char srgb_ce_param_36[] = {0x41,0x0C};
static char srgb_ce_param_37[] = {0x42,0x10};
static char srgb_ce_param_38[] = {0x43,0x14};
static char srgb_ce_param_39[] = {0x44,0x18};
static char srgb_ce_param_40[] = {0x45,0x1c};
static char srgb_ce_param_41[] = {0x46,0x18};
static char srgb_ce_param_42[] = {0x47,0x14};
static char srgb_ce_param_43[] = {0x48,0x10};
static char srgb_ce_param_44[] = {0x49,0x0C};
static char srgb_ce_param_45[] = {0x4A,0x08};
static char srgb_ce_param_46[] = {0x4B,0x06};
static char srgb_ce_param_47[] = {0x4C,0x04};
static char srgb_ce_param_48[] = {0x4D,0x00};
static char srgb_ce_param_49[] = {0x1A,0x00};
static char srgb_ce_param_50[] = {0x53,0x01};
static char srgb_ce_param_51[] = {0x54,0x00};
static char srgb_ce_param_52[] = {0x55,0x77};
static char srgb_ce_param_53[] = {0x56,0x00};
static char srgb_ce_param_54[] = {0x68,0x00};
static char srgb_ce_param_55[] = {0xFF,0x22};
static char srgb_ce_param_56[] = {0xFB,0x01};
static char srgb_ce_param_57[] = {0xEB,0xC4};
static char srgb_ce_param_58[] = {0xEC,0x2A};
static char srgb_ce_param_59[] = {0xED,0x11};
static char srgb_ce_param_60[] = {0xEE,0x00};
static char srgb_ce_param_61[] = {0xEF,0xEB};
static char srgb_ce_param_62[] = {0xF0,0x11};
static char srgb_ce_param_63[] = {0xF1,0x04};
static char srgb_ce_param_64[] = {0xF2,0x1E};
static char srgb_ce_param_65[] = {0xF3,0xCD};
static char srgb_ce_param_66[] = {0xF4,0x00};
static char srgb_ce_param_67[] = {0xF5,0x00};
static char srgb_ce_param_68[] = {0xF6,0x00};
static char srgb_ce_param_69[] = {0xFA,0x01};
static char srgb_ce_param_69_1[] = {0x84,0x00};
static char srgb_ce_param_69_2[] = {0x85,0x00};
static char srgb_ce_param_69_3[] = {0x86,0x00};
static char srgb_ce_param_69_4[] = {0x87,0x00};
static char srgb_ce_param_69_5[] = {0x88,0x00};
static char srgb_ce_param_70[] = {0xA2,0x20};
static char srgb_ce_param_71[] = {0xFF,0x10};


static struct dsi_cmd_desc srgb_jdi_display_effect_on_cmds[] = {
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_1 ), srgb_ce_param_1 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_2 ), srgb_ce_param_2 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_3 ), srgb_ce_param_3 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_4 ), srgb_ce_param_4 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_5 ), srgb_ce_param_5 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_6 ), srgb_ce_param_6 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_7 ), srgb_ce_param_7 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_8 ), srgb_ce_param_8 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_9 ), srgb_ce_param_9 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_10), srgb_ce_param_10},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_11), srgb_ce_param_11},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_12), srgb_ce_param_12},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_13), srgb_ce_param_13},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_14), srgb_ce_param_14},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_15), srgb_ce_param_15},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_16), srgb_ce_param_16},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_17), srgb_ce_param_17},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_18), srgb_ce_param_18},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_19), srgb_ce_param_19},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_20), srgb_ce_param_20},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_21), srgb_ce_param_21},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_22), srgb_ce_param_22},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_23), srgb_ce_param_23},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_24), srgb_ce_param_24},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_25), srgb_ce_param_25},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_26), srgb_ce_param_26},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_27), srgb_ce_param_27},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_28), srgb_ce_param_28},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_29), srgb_ce_param_29},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_30), srgb_ce_param_30},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_31), srgb_ce_param_31},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_32), srgb_ce_param_32},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_33), srgb_ce_param_33},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_34), srgb_ce_param_34},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_35), srgb_ce_param_35},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_36), srgb_ce_param_36},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_37), srgb_ce_param_37},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_38), srgb_ce_param_38},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_39), srgb_ce_param_39},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_40), srgb_ce_param_40},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_41), srgb_ce_param_41},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_42), srgb_ce_param_42},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_43), srgb_ce_param_43},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_44), srgb_ce_param_44},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_45), srgb_ce_param_45},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_46), srgb_ce_param_46},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_47), srgb_ce_param_47},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_48), srgb_ce_param_48},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_49), srgb_ce_param_49},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_50), srgb_ce_param_50},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_51), srgb_ce_param_51},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_52), srgb_ce_param_52},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_53), srgb_ce_param_53},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_54), srgb_ce_param_54},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_55), srgb_ce_param_55},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_56), srgb_ce_param_56},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_57), srgb_ce_param_57},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_58), srgb_ce_param_58},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_59), srgb_ce_param_59},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_60), srgb_ce_param_60},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_61), srgb_ce_param_61},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_62), srgb_ce_param_62},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_63), srgb_ce_param_63},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_64), srgb_ce_param_64},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_65), srgb_ce_param_65},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_66), srgb_ce_param_66},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_67), srgb_ce_param_67},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_68), srgb_ce_param_68},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_69), srgb_ce_param_69},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_69_1), srgb_ce_param_69_1},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_69_2), srgb_ce_param_69_2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_69_3), srgb_ce_param_69_3},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_69_4), srgb_ce_param_69_4},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_69_5), srgb_ce_param_69_5},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_70), srgb_ce_param_70},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(srgb_ce_param_71), srgb_ce_param_71},										
};       	


static char strong_ce_param_1[] = {0x55,0x80};
static char strong_ce_param_2[] = {0xFF,0x22};
static char strong_ce_param_3[] = {0xFB,0x01};
static char strong_ce_param_4[] = {0x00,0x00};
static char strong_ce_param_5[] = {0x01,0x04};
static char strong_ce_param_6[] = {0x02,0x08};
static char strong_ce_param_7[] = {0x03,0x0C};
static char strong_ce_param_8[] = {0x04,0x10};
static char strong_ce_param_9[] = {0x05,0x14};
static char strong_ce_param_10[] = {0x06,0x18};
static char strong_ce_param_11[] = {0x07,0x20};
static char strong_ce_param_12[] = {0x08,0x24};
static char strong_ce_param_13[] = {0x09,0x28};
static char strong_ce_param_14[] = {0x0A,0x30};
static char strong_ce_param_15[] = {0x0B,0x38};
static char strong_ce_param_16[] = {0x0C,0x38};
static char strong_ce_param_17[] = {0x0D,0x30};
static char strong_ce_param_18[] = {0x0E,0x28};
static char strong_ce_param_19[] = {0x0F,0x20};
static char strong_ce_param_20[] = {0x10,0x10};
static char strong_ce_param_21[] = {0x11,0x00};
static char strong_ce_param_22[] = {0x12,0x00};
static char strong_ce_param_23[] = {0x13,0x00}; 
static char strong_ce_param_24[] = {0x32,0x06};
static char strong_ce_param_25[] = {0x33,0x00};
static char strong_ce_param_26[] = {0x34,0x08};
static char strong_ce_param_27[] = {0x35,0x10};
static char strong_ce_param_28[] = {0x36,0x18};
static char strong_ce_param_29[] = {0x37,0x20};
static char strong_ce_param_30[] = {0x38,0x28};
static char strong_ce_param_31[] = {0x39,0x32};
static char strong_ce_param_32[] = {0x3A,0x28};
static char strong_ce_param_33[] = {0x3B,0x20};
static char strong_ce_param_34[] = {0x3F,0x20};
static char strong_ce_param_35[] = {0x40,0x20};
static char strong_ce_param_36[] = {0x41,0x20};
static char strong_ce_param_37[] = {0x42,0x24};
static char strong_ce_param_38[] = {0x43,0x28};
static char strong_ce_param_39[] = {0x44,0x2C};
static char strong_ce_param_40[] = {0x45,0x28};
static char strong_ce_param_41[] = {0x46,0x24};
static char strong_ce_param_42[] = {0x47,0x20};
static char strong_ce_param_43[] = {0x48,0x20};
static char strong_ce_param_44[] = {0x49,0x1E};
static char strong_ce_param_45[] = {0x4A,0x18};
static char strong_ce_param_46[] = {0x4B,0x12};
static char strong_ce_param_47[] = {0x4C,0x0C};
static char strong_ce_param_48[] = {0x4D,0x05};
static char strong_ce_param_49[] = {0x1A,0x00};
static char strong_ce_param_50[] = {0x53,0x01};
static char strong_ce_param_51[] = {0x54,0x00};
static char strong_ce_param_52[] = {0x55,0x01};
static char strong_ce_param_53[] = {0x56,0x00};
static char strong_ce_param_54[] = {0x68,0x00};

//srgb set this value, in normal and strong ce mode, need set these regs to default
static char strong_ce_param_55[] = {0xEB,0x00};
static char strong_ce_param_56[] = {0xEC,0x00};
static char strong_ce_param_57[] = {0xED,0x00};
static char strong_ce_param_58[] = {0xEE,0x00};
static char strong_ce_param_59[] = {0xEF,0x00};
static char strong_ce_param_60[] = {0xF0,0x00};
static char strong_ce_param_61[] = {0xF1,0x00};
static char strong_ce_param_62[] = {0xF2,0x00};
static char strong_ce_param_63[] = {0xF3,0x00};
static char strong_ce_param_64[] = {0xF4,0x01};
static char strong_ce_param_65[] = {0xF5,0x01};
static char strong_ce_param_66[] = {0xF6,0x01};
static char strong_ce_param_67[] = {0xFA,0x00};

static char strong_ce_param_68[] = {0x84,0x00};
static char strong_ce_param_69[] = {0x85,0x00};
static char strong_ce_param_70[] = {0x86,0x00};
static char strong_ce_param_71[] = {0x87,0x00};
static char strong_ce_param_72[] = {0x88,0x00};

static struct dsi_cmd_desc strong_jdi_display_effect_on_cmds[] = {
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_1 ), strong_ce_param_1 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_2 ), strong_ce_param_2 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_3 ), strong_ce_param_3 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_4 ), strong_ce_param_4 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_5 ), strong_ce_param_5 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_6 ), strong_ce_param_6 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_7 ), strong_ce_param_7 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_8 ), strong_ce_param_8 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_9 ), strong_ce_param_9 },
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_10), strong_ce_param_10},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_11), strong_ce_param_11},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_12), strong_ce_param_12},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_13), strong_ce_param_13},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_14), strong_ce_param_14},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_15), strong_ce_param_15},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_16), strong_ce_param_16},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_17), strong_ce_param_17},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_18), strong_ce_param_18},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_19), strong_ce_param_19},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_20), strong_ce_param_20},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_21), strong_ce_param_21},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_22), strong_ce_param_22},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_23), strong_ce_param_23},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_24), strong_ce_param_24},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_25), strong_ce_param_25},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_26), strong_ce_param_26},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_27), strong_ce_param_27},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_28), strong_ce_param_28},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_29), strong_ce_param_29},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_30), strong_ce_param_30},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_31), strong_ce_param_31},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_32), strong_ce_param_32},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_33), strong_ce_param_33},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_34), strong_ce_param_34},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_35), strong_ce_param_35},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_36), strong_ce_param_36},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_37), strong_ce_param_37},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_38), strong_ce_param_38},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_39), strong_ce_param_39},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_40), strong_ce_param_40},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_41), strong_ce_param_41},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_42), strong_ce_param_42},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_43), strong_ce_param_43},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_44), strong_ce_param_44},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_45), strong_ce_param_45},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_46), strong_ce_param_46},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_47), strong_ce_param_47},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_48), strong_ce_param_48},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_49), strong_ce_param_49},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_50), strong_ce_param_50},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_51), strong_ce_param_51},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_52), strong_ce_param_52},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_53), strong_ce_param_53},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_54), strong_ce_param_54},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,sizeof(sharpness_0x65), sharpness_0x65},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,sizeof(sharpness_0x66), sharpness_0x66},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,sizeof(sharpness_0x67), sharpness_0x67},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,sizeof(sharpness_0x69), sharpness_0x69},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,sizeof(sharpness_0x97), sharpness_0x97},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,sizeof(sharpness_0x98), sharpness_0x98},	
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_55), strong_ce_param_55},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_56), strong_ce_param_56},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_57), strong_ce_param_57},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_58), strong_ce_param_58},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_59), strong_ce_param_59},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_60), strong_ce_param_60},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_61), strong_ce_param_61},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_62), strong_ce_param_62},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_63), strong_ce_param_63},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_64), strong_ce_param_64},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_65), strong_ce_param_65},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_66), strong_ce_param_66},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_67), strong_ce_param_67},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_68), strong_ce_param_68},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_69), strong_ce_param_69},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_70), strong_ce_param_70},									
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_71), strong_ce_param_71},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_72), strong_ce_param_72},
																					
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,sizeof(dither_enable_0xA2), dither_enable_0xA2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,sizeof(page_selection_0xFF_0x23), page_selection_0xFF_0x23},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,sizeof(non_reload_0xFB), non_reload_0xFB},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,sizeof(cabc_endimming_0x00), cabc_endimming_0x00},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,sizeof(cabc_0x32), cabc_0x32},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,sizeof(cmd1_0xFF), cmd1_0xFF},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,sizeof(strong_cabc_set_mode_UI), strong_cabc_set_mode_UI},																					
};       	


static struct dsi_cmd_desc jdi_display_effect_on_cmds[] = {
	//diplay effect

	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(page_selection_0xFF_0x22), page_selection_0xFF_0x22},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(non_reload_0xFB), non_reload_0xFB},
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
		sizeof(vivid_color_enable_0x1A), vivid_color_enable_0x1A},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(smart_color_enable_0x53), smart_color_enable_0x53},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(skin_protection_enable_0x54), skin_protection_enable_0x54},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(v_constrain_enable_0x55), v_constrain_enable_0x55},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(smart_contrast_enable_0x56), smart_contrast_enable_0x56},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_enable_0x68), sharpness_enable_0x68},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_0x65), sharpness_0x65},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_0x66), sharpness_0x66},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_0x67), sharpness_0x67},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_0x69), sharpness_0x69},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_sign_0x84), color_sign_0x84},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_sign_0x85), color_sign_0x85},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_sign_0x86), color_sign_0x86},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_sign_0x87), color_sign_0x87},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(color_sign_0x88), color_sign_0x88},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_0x97), sharpness_0x97},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(sharpness_0x98), sharpness_0x98},

	//srgb change this value , when setting normal and strong ce mode, need set to default 
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_55), strong_ce_param_55},										
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_56), strong_ce_param_56},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_57), strong_ce_param_57},																						
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_58), strong_ce_param_58},																					
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_59), strong_ce_param_59},																					
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_60), strong_ce_param_60},																						
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_61), strong_ce_param_61},																						
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_62), strong_ce_param_62},																					
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_63), strong_ce_param_63},																					
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_64), strong_ce_param_64},																						
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_65), strong_ce_param_65},																						
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_66), strong_ce_param_66},	
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,	sizeof(strong_ce_param_67), strong_ce_param_67},

		
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(dither_enable_0xA2), dither_enable_0xA2},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(page_selection_0xFF_0x23), page_selection_0xFF_0x23},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(non_reload_0xFB), non_reload_0xFB},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_endimming_0x00), cabc_endimming_0x00},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_0x32), cabc_0x32},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(cmd1_0xFF), cmd1_0xFF},
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_set_mode_UI), cabc_set_mode_UI},
};

static struct dsi_cmd_desc jdi_cabc_off_cmds[] = {
	{DTYPE_DCS_LWRITE, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_off), cabc_off},
};

static struct dsi_cmd_desc jdi_cabc_ui_on_cmds[] = {
	{DTYPE_DCS_LWRITE, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_set_mode_UI), cabc_set_mode_UI},
};

static struct dsi_cmd_desc jdi_cabc_still_on_cmds[] = {
	{DTYPE_DCS_LWRITE, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_set_mode_STILL), cabc_set_mode_STILL},
};

static struct dsi_cmd_desc jdi_cabc_moving_on_cmds[] = {
	{DTYPE_DCS_LWRITE, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_set_mode_MOVING), cabc_set_mode_MOVING},
};
/*******************************************************************************
** LCD VCC
*/
#define VCC_LCDIO_NAME		"lcdio-vcc"
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

static struct pinctrl_cmd_desc jdi_lcd_pinctrl_finit_cmds[] = {
	{DTYPE_PINCTRL_PUT, &pctrl, 0},
};

/*******************************************************************************
** LCD GPIO
*/
#define GPIO_LCD_BL_ENABLE_NAME	"gpio_lcd_bl_enable"
#define GPIO_LCD_RESET_NAME	"gpio_lcd_reset"
#define GPIO_LCD_ID_NAME	"gpio_lcd_id"
#define GPIO_LCD_P5V5_ENABLE_NAME	"gpio_lcd_p5v5_enable"
#define GPIO_LCD_N5V5_ENABLE_NAME "gpio_lcd_n5v5_enable"

static uint32_t gpio_lcd_bl_enable;  /*gpio_4_3, gpio_035*/
static uint32_t gpio_lcd_reset;  /*gpio_4_5, gpio_037*/
static uint32_t gpio_lcd_id;  /*gpio_4_6, gpio_038*/
static uint32_t gpio_lcd_p5v5_enable;  /*gpio_5_1, gpio_041*/
static uint32_t gpio_lcd_n5v5_enable;  /*gpio_5_2, gpio_042*/

static uint32_t g_vddio_type = 0;

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

static struct gpio_desc jdi_lcd_gpio_normal_cmds[] = {
	/* AVDD_5.5V*/
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 0,
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


/*******************************************************************************
** ACM LUT Tables
*/

static u32 acm_lut_hue_table[] = {
	0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0007, 0x0008, 0x0009, 0x000a, 0x000a, 0x000b, 0x000c, 0x000d, 0x000e, 
	0x000f, 0x0010, 0x0011, 0x0012, 0x0013, 0x0014, 0x0015, 0x0016, 0x0017, 0x0018, 0x0019, 0x001a, 0x001b, 0x001c, 0x001d, 0x001e, 
	0x001f, 0x0020, 0x0021, 0x0022, 0x0023, 0x0024, 0x0025, 0x0026, 0x0027, 0x0028, 0x0029, 0x002a, 0x002b, 0x002c, 0x002d, 0x002e, 
	0x002f, 0x0030, 0x0031, 0x0032, 0x0033, 0x0034, 0x0035, 0x0036, 0x0037, 0x0038, 0x0039, 0x003a, 0x003b, 0x003c, 0x003d, 0x003e, 
	0x003f, 0x0040, 0x0041, 0x0042, 0x0043, 0x0044, 0x0045, 0x0046, 0x0047, 0x0048, 0x0049, 0x004a, 0x004b, 0x004c, 0x004d, 0x004e, 
	0x004f, 0x0050, 0x0051, 0x0052, 0x0053, 0x0054, 0x0055, 0x0056, 0x0057, 0x0058, 0x0059, 0x005a, 0x005b, 0x005c, 0x005d, 0x005e, 
	0x0060, 0x0061, 0x0062, 0x0063, 0x0064, 0x0065, 0x0066, 0x0067, 0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 0x006d, 0x006e, 0x006f, 
	0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076, 0x0077, 0x0078, 0x0079, 0x007a, 0x007b, 0x007c, 0x007d, 0x007e, 0x007f, 
	0x0080, 0x0081, 0x0082, 0x0083, 0x0084, 0x0085, 0x0086, 0x0087, 0x0088, 0x0089, 0x008a, 0x008b, 0x008c, 0x008d, 0x008e, 0x008f, 
	0x0090, 0x0091, 0x0092, 0x0093, 0x0094, 0x0095, 0x0096, 0x0097, 0x0098, 0x0099, 0x009a, 0x009b, 0x009c, 0x009d, 0x009e, 0x009f, 
	0x00a0, 0x00a1, 0x00a2, 0x00a3, 0x00a4, 0x00a5, 0x00a6, 0x00a7, 0x00a8, 0x00a9, 0x00aa, 0x00ab, 0x00ac, 0x00ad, 0x00ae, 0x00af, 
	0x00b0, 0x00b1, 0x00b2, 0x00b3, 0x00b4, 0x00b5, 0x00b6, 0x00b7, 0x00b8, 0x00b9, 0x00ba, 0x00bb, 0x00bc, 0x00bd, 0x00be, 0x00bf, 
	0x00c0, 0x00c1, 0x00c2, 0x00c3, 0x00c4, 0x00c5, 0x00c6, 0x00c7, 0x00c8, 0x00c9, 0x00ca, 0x00cb, 0x00cc, 0x00cd, 0x00ce, 0x00cf, 
	0x00d0, 0x00d1, 0x00d2, 0x00d3, 0x00d4, 0x00d5, 0x00d6, 0x00d7, 0x00d8, 0x00d9, 0x00da, 0x00db, 0x00dc, 0x00dd, 0x00de, 0x00df, 
	0x00e0, 0x00e1, 0x00e2, 0x00e3, 0x00e4, 0x00e5, 0x00e6, 0x00e7, 0x00e8, 0x00e9, 0x00ea, 0x00eb, 0x00ec, 0x00ed, 0x00ee, 0x00ef, 
	0x00f0, 0x00f1, 0x00f2, 0x00f3, 0x00f4, 0x00f5, 0x00f6, 0x00f7, 0x00f8, 0x00f9, 0x00fa, 0x00fb, 0x00fc, 0x00fd, 0x00fe, 0x00ff, 
	0x0100, 0x0101, 0x0102, 0x0103, 0x0104, 0x0105, 0x0106, 0x0107, 0x0108, 0x0109, 0x010a, 0x010b, 0x010c, 0x010d, 0x010e, 0x010f, 
	0x0110, 0x0111, 0x0112, 0x0113, 0x0114, 0x0115, 0x0116, 0x0117, 0x0118, 0x0119, 0x011a, 0x011b, 0x011c, 0x011d, 0x011e, 0x011f, 
	0x0120, 0x0121, 0x0122, 0x0123, 0x0124, 0x0125, 0x0126, 0x0127, 0x0128, 0x0129, 0x012a, 0x012b, 0x012c, 0x012d, 0x012e, 0x012f, 
	0x0130, 0x0131, 0x0132, 0x0133, 0x0134, 0x0135, 0x0136, 0x0137, 0x0138, 0x0139, 0x013a, 0x013b, 0x013c, 0x013d, 0x013e, 0x013f, 
	0x0140, 0x0141, 0x0142, 0x0143, 0x0144, 0x0145, 0x0146, 0x0147, 0x0148, 0x0149, 0x014a, 0x014b, 0x014c, 0x014d, 0x014e, 0x014f, 
	0x0150, 0x0151, 0x0152, 0x0153, 0x0154, 0x0155, 0x0156, 0x0157, 0x0158, 0x0159, 0x015a, 0x015b, 0x015c, 0x015d, 0x015e, 0x015f, 
	0x0160, 0x0161, 0x0162, 0x0163, 0x0164, 0x0165, 0x0166, 0x0167, 0x0168, 0x0169, 0x016a, 0x016b, 0x016c, 0x016d, 0x016e, 0x016f, 
	0x0170, 0x0171, 0x0172, 0x0173, 0x0174, 0x0175, 0x0176, 0x0177, 0x0178, 0x0179, 0x017a, 0x017b, 0x017c, 0x017d, 0x017e, 0x017f, 
	0x0180, 0x0181, 0x0182, 0x0183, 0x0184, 0x0185, 0x0186, 0x0187, 0x0188, 0x0189, 0x018a, 0x018b, 0x018c, 0x018d, 0x018e, 0x018f, 
	0x0190, 0x0191, 0x0192, 0x0193, 0x0194, 0x0195, 0x0196, 0x0197, 0x0198, 0x0199, 0x019a, 0x019b, 0x019c, 0x019d, 0x019e, 0x019f, 
	0x01a0, 0x01a1, 0x01a2, 0x01a3, 0x01a4, 0x01a5, 0x01a6, 0x01a7, 0x01a8, 0x01a9, 0x01aa, 0x01ab, 0x01ac, 0x01ad, 0x01ae, 0x01af, 
	0x01b0, 0x01b1, 0x01b2, 0x01b3, 0x01b4, 0x01b5, 0x01b6, 0x01b7, 0x01b8, 0x01b9, 0x01ba, 0x01bb, 0x01bc, 0x01bd, 0x01be, 0x01bf, 
	0x01c0, 0x01c1, 0x01c2, 0x01c3, 0x01c4, 0x01c5, 0x01c6, 0x01c7, 0x01c8, 0x01c9, 0x01ca, 0x01cb, 0x01cc, 0x01cd, 0x01ce, 0x01cf, 
	0x01d0, 0x01d1, 0x01d2, 0x01d3, 0x01d4, 0x01d5, 0x01d6, 0x01d7, 0x01d8, 0x01d9, 0x01da, 0x01db, 0x01dc, 0x01dd, 0x01de, 0x01df, 
	0x01e0, 0x01e1, 0x01e2, 0x01e3, 0x01e4, 0x01e5, 0x01e6, 0x01e7, 0x01e8, 0x01e9, 0x01ea, 0x01eb, 0x01ec, 0x01ed, 0x01ee, 0x01ef, 
	0x01f0, 0x01f1, 0x01f2, 0x01f3, 0x01f4, 0x01f5, 0x01f6, 0x01f7, 0x01f8, 0x01f9, 0x01fa, 0x01fb, 0x01fc, 0x01fd, 0x01fe, 0x01ff, 
	0x0200, 0x0201, 0x0202, 0x0203, 0x0204, 0x0205, 0x0206, 0x0207, 0x0208, 0x0209, 0x020a, 0x020b, 0x020c, 0x020d, 0x020e, 0x020f, 
	0x0210, 0x0211, 0x0212, 0x0213, 0x0214, 0x0215, 0x0216, 0x0217, 0x0218, 0x0219, 0x021a, 0x021b, 0x021c, 0x021d, 0x021e, 0x021f, 
	0x0220, 0x0221, 0x0222, 0x0223, 0x0224, 0x0225, 0x0226, 0x0227, 0x0228, 0x0229, 0x022a, 0x022b, 0x022c, 0x022d, 0x022e, 0x022f, 
	0x0230, 0x0231, 0x0232, 0x0233, 0x0234, 0x0235, 0x0236, 0x0237, 0x0238, 0x0239, 0x023a, 0x023b, 0x023c, 0x023d, 0x023e, 0x023f, 
	0x0240, 0x0241, 0x0242, 0x0243, 0x0244, 0x0245, 0x0246, 0x0247, 0x0248, 0x0249, 0x024a, 0x024b, 0x024c, 0x024d, 0x024e, 0x024f, 
	0x0250, 0x0251, 0x0252, 0x0253, 0x0254, 0x0255, 0x0256, 0x0257, 0x0258, 0x0259, 0x025a, 0x025b, 0x025c, 0x025d, 0x025e, 0x025f, 
	0x0260, 0x0261, 0x0262, 0x0263, 0x0264, 0x0265, 0x0266, 0x0267, 0x0268, 0x0269, 0x026a, 0x026b, 0x026c, 0x026d, 0x026e, 0x026f, 
	0x0270, 0x0271, 0x0272, 0x0273, 0x0274, 0x0275, 0x0276, 0x0277, 0x0278, 0x0279, 0x027a, 0x027b, 0x027c, 0x027d, 0x027e, 0x027f, 
	0x0280, 0x0281, 0x0282, 0x0283, 0x0284, 0x0285, 0x0286, 0x0287, 0x0288, 0x0289, 0x028a, 0x028b, 0x028c, 0x028d, 0x028e, 0x028f, 
	0x0290, 0x0291, 0x0292, 0x0293, 0x0294, 0x0295, 0x0296, 0x0297, 0x0298, 0x0299, 0x029a, 0x029b, 0x029c, 0x029d, 0x029e, 0x029f, 
	0x02a0, 0x02a1, 0x02a2, 0x02a3, 0x02a4, 0x02a5, 0x02a6, 0x02a7, 0x02a8, 0x02a9, 0x02aa, 0x02ab, 0x02ac, 0x02ad, 0x02ae, 0x02af, 
	0x02b0, 0x02b1, 0x02b2, 0x02b3, 0x02b4, 0x02b5, 0x02b6, 0x02b7, 0x02b8, 0x02b9, 0x02ba, 0x02bb, 0x02bc, 0x02bd, 0x02be, 0x02bf, 
	0x02c0, 0x02c1, 0x02c2, 0x02c3, 0x02c4, 0x02c5, 0x02c6, 0x02c7, 0x02c8, 0x02c9, 0x02ca, 0x02cb, 0x02cc, 0x02cd, 0x02ce, 0x02cf, 
	0x02d0, 0x02d1, 0x02d2, 0x02d3, 0x02d4, 0x02d5, 0x02d6, 0x02d7, 0x02d8, 0x02d9, 0x02da, 0x02db, 0x02dc, 0x02dd, 0x02de, 0x02df, 
	0x02e0, 0x02e2, 0x02e3, 0x02e4, 0x02e5, 0x02e6, 0x02e7, 0x02e8, 0x02e9, 0x02ea, 0x02eb, 0x02ec, 0x02ed, 0x02ee, 0x02ef, 0x02f0, 
	0x02f1, 0x02f2, 0x02f3, 0x02f4, 0x02f5, 0x02f6, 0x02f7, 0x02f8, 0x02f9, 0x02fa, 0x02fb, 0x02fc, 0x02fd, 0x02fe, 0x02ff, 0x0300, 
	0x0301, 0x0302, 0x0303, 0x0304, 0x0305, 0x0306, 0x0307, 0x0308, 0x0309, 0x030a, 0x030b, 0x030c, 0x030d, 0x030e, 0x030f, 0x0310, 
	0x0311, 0x0312, 0x0313, 0x0314, 0x0315, 0x0316, 0x0317, 0x0318, 0x0319, 0x031a, 0x031b, 0x031c, 0x031d, 0x031e, 0x031f, 0x0320, 
	0x0322, 0x0323, 0x0324, 0x0325, 0x0326, 0x0327, 0x0328, 0x0329, 0x032a, 0x032b, 0x032c, 0x032d, 0x032e, 0x032f, 0x0330, 0x0331, 
	0x0332, 0x0333, 0x0334, 0x0335, 0x0336, 0x0337, 0x0338, 0x0339, 0x033a, 0x033b, 0x033c, 0x033d, 0x033e, 0x033f, 0x0340, 0x0341, 
	0x0342, 0x0343, 0x0344, 0x0345, 0x0346, 0x0347, 0x0348, 0x0349, 0x034a, 0x034b, 0x034c, 0x034d, 0x034e, 0x034f, 0x0350, 0x0351, 
	0x0352, 0x0354, 0x0355, 0x0356, 0x0357, 0x0358, 0x0359, 0x035a, 0x035b, 0x035c, 0x035d, 0x035e, 0x035f, 0x0360, 0x0361, 0x0362, 
	0x0363, 0x0364, 0x0365, 0x0366, 0x0367, 0x0368, 0x0369, 0x036a, 0x036b, 0x036c, 0x036d, 0x036e, 0x036f, 0x0370, 0x0371, 0x0372, 
	0x0374, 0x0375, 0x0376, 0x0377, 0x0378, 0x0379, 0x037a, 0x037b, 0x037c, 0x037d, 0x037e, 0x037f, 0x0380, 0x0381, 0x0382, 0x0383, 
	0x0384, 0x0385, 0x0386, 0x0387, 0x0388, 0x0389, 0x038a, 0x038b, 0x038c, 0x038d, 0x038e, 0x038f, 0x0390, 0x0391, 0x0392, 0x0393, 
	0x0394, 0x0396, 0x0397, 0x0398, 0x0399, 0x039a, 0x039b, 0x039c, 0x039d, 0x039e, 0x039f, 0x03a0, 0x03a1, 0x03a2, 0x03a3, 0x03a4, 
	0x03a5, 0x03a6, 0x03a7, 0x03a8, 0x03a9, 0x03aa, 0x03ab, 0x03ac, 0x03ad, 0x03ae, 0x03af, 0x03b0, 0x03b1, 0x03b2, 0x03b3, 0x03b4, 
	0x03b6, 0x03b7, 0x03b8, 0x03b9, 0x03ba, 0x03bb, 0x03bc, 0x03bd, 0x03be, 0x03bf, 0x03c0, 0x03c1, 0x03c2, 0x03c3, 0x03c4, 0x03c5, 
	0x03c6, 0x03c7, 0x03c8, 0x03c9, 0x03ca, 0x03cb, 0x03cc, 0x03cd, 0x03ce, 0x03cf, 0x03d0, 0x03d1, 0x03d2, 0x03d3, 0x03d4, 0x03d5, 
	0x03d6, 0x03d7, 0x03d8, 0x03d9, 0x03da, 0x03db, 0x03dc, 0x03dd, 0x03de, 0x03df, 0x03e0, 0x03e0, 0x03e1, 0x03e2, 0x03e3, 0x03e4, 
	0x03e5, 0x03e6, 0x03e7, 0x03e8, 0x03e9, 0x03ea, 0x03ea, 0x03eb, 0x03ec, 0x03ed, 0x03ee, 0x03ef, 0x03f0, 0x03f1, 0x03f1, 0x03f2, 
	0x03f3, 0x03f4, 0x03f5, 0x03f5, 0x03f6, 0x03f7, 0x03f8, 0x03f9, 0x03fa, 0x03fa, 0x03fb, 0x03fc, 0x03fd, 0x03fe, 0x03fe, 0x03ff, 
};


static u32 acm_lut_value_table[] = {
	0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0007, 0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x000d, 0x000e, 0x000f,
	0x0010, 0x0011, 0x0012, 0x0013, 0x0014, 0x0015, 0x0016, 0x0017, 0x0018, 0x0019, 0x001a, 0x001b, 0x001c, 0x001d, 0x001e, 0x001f,
	0x0020, 0x0021, 0x0022, 0x0023, 0x0024, 0x0025, 0x0026, 0x0027, 0x0028, 0x0029, 0x002a, 0x002b, 0x002c, 0x002d, 0x002e, 0x002f,
	0x0030, 0x0031, 0x0032, 0x0033, 0x0034, 0x0035, 0x0036, 0x0037, 0x0038, 0x0039, 0x003a, 0x003b, 0x003c, 0x003d, 0x003e, 0x003f,
	0x0040, 0x0041, 0x0042, 0x0043, 0x0044, 0x0045, 0x0046, 0x0047, 0x0048, 0x0049, 0x004a, 0x004b, 0x004c, 0x004d, 0x004e, 0x004f,
	0x0050, 0x0051, 0x0052, 0x0053, 0x0054, 0x0055, 0x0056, 0x0057, 0x0058, 0x0059, 0x005a, 0x005b, 0x005c, 0x005d, 0x005e, 0x005f,
	0x0060, 0x0061, 0x0062, 0x0063, 0x0064, 0x0065, 0x0066, 0x0067, 0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 0x006d, 0x006e, 0x006f,
	0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076, 0x0077, 0x0078, 0x0079, 0x007a, 0x007b, 0x007c, 0x007d, 0x007e, 0x007f,
	0x0080, 0x0081, 0x0082, 0x0083, 0x0084, 0x0085, 0x0086, 0x0087, 0x0088, 0x0089, 0x008a, 0x008b, 0x008c, 0x008d, 0x008e, 0x008f,
	0x0090, 0x0091, 0x0092, 0x0093, 0x0094, 0x0095, 0x0096, 0x0097, 0x0098, 0x0099, 0x009a, 0x009b, 0x009c, 0x009d, 0x009e, 0x009f,
	0x00a0, 0x00a1, 0x00a2, 0x00a3, 0x00a4, 0x00a5, 0x00a6, 0x00a7, 0x00a8, 0x00a9, 0x00aa, 0x00ab, 0x00ac, 0x00ad, 0x00ae, 0x00af,
	0x00b0, 0x00b1, 0x00b2, 0x00b3, 0x00b4, 0x00b5, 0x00b6, 0x00b7, 0x00b8, 0x00b9, 0x00ba, 0x00bb, 0x00bc, 0x00bd, 0x00be, 0x00bf,
	0x00c0, 0x00c1, 0x00c2, 0x00c3, 0x00c4, 0x00c5, 0x00c6, 0x00c7, 0x00c8, 0x00c9, 0x00ca, 0x00cb, 0x00cc, 0x00cd, 0x00ce, 0x00cf,
	0x00d0, 0x00d1, 0x00d2, 0x00d3, 0x00d4, 0x00d5, 0x00d6, 0x00d7, 0x00d8, 0x00d9, 0x00da, 0x00db, 0x00dc, 0x00dd, 0x00de, 0x00df,
	0x00e0, 0x00e1, 0x00e2, 0x00e3, 0x00e4, 0x00e5, 0x00e6, 0x00e7, 0x00e8, 0x00e9, 0x00ea, 0x00eb, 0x00ec, 0x00ed, 0x00ee, 0x00ef,
	0x00f0, 0x00f1, 0x00f2, 0x00f3, 0x00f4, 0x00f5, 0x00f6, 0x00f7, 0x00f8, 0x00f9, 0x00fa, 0x00fb, 0x00fc, 0x00fd, 0x00fe, 0x00ff,
};

static u32 acm_lut_sata_table[] = {
	0x000f, 0x0010, 0x0012, 0x0014, 0x0015, 0x0016, 0x0018, 0x001a, 0x001b, 0x001b, 0x001b, 0x001b, 0x001a, 0x001a, 0x001a, 0x001a, 
	0x001a, 0x001a, 0x001a, 0x001b, 0x001b, 0x001b, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001b, 0x001b, 0x001b, 0x001a, 0x001a, 
	0x001a, 0x0019, 0x0018, 0x0018, 0x0017, 0x0016, 0x0016, 0x0015, 0x0014, 0x0013, 0x0013, 0x0012, 0x0012, 0x0011, 0x0010, 0x0010, 
	0x000f, 0x000e, 0x000e, 0x000d, 0x000c, 0x000c, 0x000b, 0x000b, 0x000a, 0x0009, 0x0008, 0x0007, 0x0006, 0x0006, 0x0005, 0x0004, 
	0x0003, 0x0003, 0x0003, 0x0003, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0003, 0x0003, 0x0003, 
	0x0003, 0x0003, 0x0002, 0x0002, 0x0002, 0x0001, 0x0001, 0x0000, 0x0000, 0x0001, 0x0001, 0x0002, 0x0002, 0x0003, 0x0004, 0x0004, 
	0x0005, 0x0006, 0x0007, 0x0008, 0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x000c, 0x000d, 0x000d, 0x000e, 0x000e, 0x000e, 0x000f, 
	0x000f, 0x0010, 0x0010, 0x0010, 0x0011, 0x0012, 0x0012, 0x0012, 0x0013, 0x0013, 0x0012, 0x0012, 0x0012, 0x0011, 0x0011, 0x0010, 
	0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0011, 0x0011, 0x0011, 0x0012, 0x0012, 
	0x0012, 0x0012, 0x0011, 0x0011, 0x0010, 0x0010, 0x0010, 0x000f, 0x000f, 0x000f, 0x000f, 0x000f, 0x000f, 0x000f, 0x000f, 0x000f, 
	0x000f, 0x0010, 0x0010, 0x0010, 0x0011, 0x0012, 0x0012, 0x0012, 0x0013, 0x0013, 0x0012, 0x0012, 0x0012, 0x0011, 0x0011, 0x0010, 
	0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x000f, 0x000f, 0x000f, 0x000f, 0x000f, 0x000e, 0x000e, 0x000e, 0x000d, 0x000d, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000b, 0x000b, 0x000b, 0x000a, 0x000a, 0x000a, 0x000a, 0x000a, 0x000a, 0x000a, 0x000a, 0x000a, 0x000a, 
	0x000a, 0x000a, 0x000a, 0x000a, 0x000a, 0x000b, 0x000b, 0x000b, 0x000b, 0x000b, 0x000b, 0x000b, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000b, 0x000b, 0x000b, 0x000b, 0x000c, 0x000c, 0x000c, 0x000d, 0x000e, 0x000e, 0x000e, 
	0x000f, 0x000f, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0011, 0x0011, 0x0011, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x000f, 
};


static u32 acm_lut_satr_table[] = {
	0x0000, 0x0001, 0x0003, 0x0004, 0x0005, 0x0006, 0x0008, 0x0009, 0x000a, 0x000c, 0x000d, 0x000e, 0x000f, 0x0011, 0x0012, 0x0013, 
	0x0014, 0x0016, 0x0017, 0x0018, 0x001a, 0x001b, 0x001c, 0x001d, 0x001f, 0x0020, 0x001e, 0x001d, 0x001b, 0x0019, 0x0017, 0x0016, 
	0x0014, 0x0012, 0x0011, 0x000f, 0x000d, 0x000c, 0x000a, 0x0008, 0x0006, 0x0005, 0x0003, 0x0001, 0x0000, 0x00fe, 0x00fc, 0x00fa, 
	0x00f9, 0x00f7, 0x00f5, 0x00f2, 0x00f0, 0x00ee, 0x00f0, 0x00f2, 0x00f3, 0x00f5, 0x00f7, 0x00f9, 0x00fb, 0x00fc, 0x00fe, 0x0000, 
	0x0000, 0x0001, 0x0003, 0x0004, 0x0005, 0x0007, 0x0008, 0x000a, 0x000b, 0x000c, 0x000e, 0x000f, 0x0010, 0x0012, 0x0013, 0x0014, 
	0x0016, 0x0017, 0x0018, 0x001a, 0x001b, 0x001d, 0x001e, 0x001f, 0x0021, 0x0022, 0x0020, 0x001e, 0x001d, 0x001b, 0x0019, 0x0017, 
	0x0015, 0x0014, 0x0012, 0x0010, 0x000e, 0x000c, 0x000b, 0x0009, 0x0007, 0x0005, 0x0004, 0x0002, 0x0000, 0x00fe, 0x00fc, 0x00fb, 
	0x00f9, 0x00f7, 0x00f4, 0x00f2, 0x00f0, 0x00ed, 0x00ef, 0x00f1, 0x00f3, 0x00f5, 0x00f6, 0x00f8, 0x00fa, 0x00fc, 0x00fe, 0x0000, 
	0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x000d, 0x000e, 0x000f, 0x0010, 
	0x0011, 0x0012, 0x0013, 0x0015, 0x0016, 0x0017, 0x0018, 0x0019, 0x001a, 0x001b, 0x0019, 0x0018, 0x0016, 0x0015, 0x0013, 0x0011, 
	0x0010, 0x000e, 0x000c, 0x000b, 0x0009, 0x0008, 0x0006, 0x0004, 0x0003, 0x0001, 0x00ff, 0x00fe, 0x00fc, 0x00fb, 0x00f9, 0x00f7, 
	0x00f6, 0x00f4, 0x00f2, 0x00f0, 0x00ef, 0x00ed, 0x00ef, 0x00f1, 0x00f3, 0x00f5, 0x00f6, 0x00f8, 0x00fa, 0x00fc, 0x00fe, 0x0000, 
	0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x000d, 0x000e, 0x000f, 0x0010, 
	0x0011, 0x0012, 0x0013, 0x0015, 0x0016, 0x0017, 0x0018, 0x0019, 0x001a, 0x001b, 0x001a, 0x0019, 0x0017, 0x0016, 0x0015, 0x0014, 
	0x0013, 0x0011, 0x0010, 0x000f, 0x000e, 0x000d, 0x000b, 0x000a, 0x0009, 0x0008, 0x0006, 0x0005, 0x0004, 0x0003, 0x0002, 0x0000, 
	0x00ff, 0x00fe, 0x00fe, 0x00fd, 0x00fc, 0x00fc, 0x00fc, 0x00fd, 0x00fd, 0x00fe, 0x00fe, 0x00fe, 0x00ff, 0x00ff, 0x0000, 0x0000, 
	0x0000, 0x0001, 0x0002, 0x0003, 0x0005, 0x0006, 0x0007, 0x0008, 0x0009, 0x000a, 0x000c, 0x000d, 0x000e, 0x000f, 0x0010, 0x0011, 
	0x0013, 0x0014, 0x0015, 0x0016, 0x0017, 0x0018, 0x001a, 0x001b, 0x001c, 0x001d, 0x001c, 0x001a, 0x0019, 0x0017, 0x0016, 0x0014, 
	0x0013, 0x0011, 0x0010, 0x000e, 0x000d, 0x000b, 0x000a, 0x0008, 0x0007, 0x0005, 0x0004, 0x0002, 0x0001, 0x00ff, 0x00fe, 0x00fc, 
	0x00fb, 0x00f9, 0x00f9, 0x00f9, 0x00f9, 0x00f9, 0x00f9, 0x00fa, 0x00fb, 0x00fc, 0x00fc, 0x00fd, 0x00fe, 0x00ff, 0x00ff, 0x0000, 
	0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0007, 0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x000d, 0x000e, 0x000f, 
	0x0010, 0x0011, 0x0012, 0x0013, 0x0014, 0x0015, 0x0016, 0x0017, 0x0018, 0x0019, 0x0018, 0x0016, 0x0015, 0x0014, 0x0012, 0x0011, 
	0x0010, 0x000e, 0x000d, 0x000c, 0x000a, 0x0009, 0x0008, 0x0006, 0x0005, 0x0003, 0x0002, 0x0001, 0x00ff, 0x00fe, 0x00fd, 0x00fb, 
	0x00fa, 0x00f9, 0x00f8, 0x00f7, 0x00f6, 0x00f5, 0x00f6, 0x00f7, 0x00f8, 0x00f9, 0x00fa, 0x00fc, 0x00fd, 0x00fe, 0x00ff, 0x0000, 
	0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0006, 0x0007, 0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x000d, 0x000f, 0x0010, 0x0011, 
	0x0012, 0x0013, 0x0014, 0x0015, 0x0016, 0x0018, 0x0019, 0x001a, 0x001b, 0x001c, 0x001b, 0x0019, 0x0018, 0x0017, 0x0015, 0x0014, 
	0x0013, 0x0011, 0x0010, 0x000f, 0x000d, 0x000c, 0x000b, 0x0009, 0x0008, 0x0007, 0x0005, 0x0004, 0x0003, 0x0001, 0x0000, 0x00ff, 
	0x00fd, 0x00fc, 0x00fa, 0x00f8, 0x00f6, 0x00f3, 0x00f5, 0x00f6, 0x00f7, 0x00f8, 0x00fa, 0x00fb, 0x00fc, 0x00fd, 0x00ff, 0x0000, 
	0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x000d, 0x000e, 0x000f, 0x0010, 
	0x0011, 0x0012, 0x0013, 0x0015, 0x0016, 0x0017, 0x0018, 0x0019, 0x001a, 0x001b, 0x001a, 0x0019, 0x0018, 0x0017, 0x0016, 0x0015, 
	0x0014, 0x0013, 0x0012, 0x0011, 0x0010, 0x000e, 0x000d, 0x000c, 0x000b, 0x000a, 0x0009, 0x0008, 0x0007, 0x0006, 0x0005, 0x0004, 
	0x0003, 0x0002, 0x00fd, 0x00f8, 0x00f4, 0x00ef, 0x00f1, 0x00f2, 0x00f4, 0x00f6, 0x00f8, 0x00f9, 0x00fb, 0x00fd, 0x00fe, 0x0000, 
};


/*******************************************************************************
**
*/
static int g_ce_mode = 0;
static struct hisi_fb_data_type *hisifd_test = NULL;
static ssize_t get_ce_mode(struct device *dev,
    struct device_attribute *attr, char *buf)
{
	return snprintf(buf, 16,"%d\n", g_ce_mode);
}

static ssize_t set_ce_mode(struct device *dev,
    struct device_attribute *attr, const char *buf, size_t count)
{
	int ret = 0;
	unsigned long val = 0;
	
	char ce_disable[] = {0x55, 0x00};
	
	char ce_reg_medium[] = {0x55, 0xB0};
	char cabc_mode_reg[] = {0x00,0x01,0x02,0x03};//off,UI,still,moving
	struct dsi_cmd_desc ce_medium_cmd[] = {
		{DTYPE_DCS_WRITE1, 0,10, WAIT_TYPE_US, sizeof(ce_reg_medium), ce_reg_medium},
	};
	struct dsi_cmd_desc ce_disable_cmd[] = {
		{DTYPE_DCS_WRITE1, 0,10, WAIT_TYPE_US, sizeof(ce_disable), ce_disable},
	};

	ret = strict_strtoul(buf, 0, &val);
	if (ret)
	    return ret;

	if(0 == val) {
		HISI_FB_INFO("fb%d, CE -> disable !\n", hisifd_test->index);
		ce_disable[1] = (cabc_mode_reg[g_cabc_mode]&0x0f)|ce_disable[1];
		mipi_dsi_cmds_tx(ce_disable_cmd, ARRAY_SIZE(ce_disable_cmd),hisifd_test->mipi_dsi0_base);
		mdelay(5);
	}else if (1 == val){
		HISI_FB_INFO("fb%d, CE -> Weak level !\n", hisifd_test->index);
		//mipi_dsi_cmds_tx(ce_weak_cmd, ARRAY_SIZE(ce_weak_cmd),hisifd_test->mipi_dsi0_base);
		mdelay(5);
	}else if (2 == val){
		HISI_FB_INFO("fb%d, CE -> Medium level !\n", hisifd_test->index);
		ce_reg_medium[1] = (cabc_mode_reg[g_cabc_mode]&0x0f)|ce_reg_medium[1];
		mipi_dsi_cmds_tx(ce_medium_cmd, ARRAY_SIZE(ce_medium_cmd),hisifd_test->mipi_dsi0_base);
		mdelay(5);
	}else if (3 == val){
		HISI_FB_INFO("fb%d, CE -> Strong level !\n", hisifd_test->index);
		//mipi_dsi_cmds_tx(ce_strong_cmd, ARRAY_SIZE(ce_strong_cmd),hisifd_test->mipi_dsi0_base);
		mdelay(5);
	}else{
		val = g_ce_mode;
		HISI_FB_INFO("fb%d, CE -> no this mode !\n", hisifd_test->index);
	}

	g_ce_mode = val;

	return snprintf((char *)buf, 16,"%d\n", g_ce_mode);
}

static DEVICE_ATTR(color_enhance_mode, 0664, get_ce_mode, set_ce_mode);

static struct attribute *jdi_attrs[] = {
	&dev_attr_color_enhance_mode.attr,
	NULL,
};

static struct attribute_group jdi_attr_group = {
	.attrs = jdi_attrs,
};

static int jdi_sysfs_init(struct platform_device *pdev)
{
	int ret = 0;
	ret = sysfs_create_group(&pdev->dev.kobj, &jdi_attr_group);
	if (ret) {
		HISI_FB_ERR("create sysfs file failed!\n");
		return ret;
	}
	return 0;
}

static void jdi_sysfs_deinit(struct platform_device *pdev)
{
	sysfs_remove_group(&pdev->dev.kobj, &jdi_attr_group);
}
/*******************************************************************************
**
*/
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

static int mipi_jdi_panel_on(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;
	struct hisi_panel_info *pinfo = NULL;
	char __iomem *mipi_dsi0_base = NULL;
#if defined (CONFIG_HUAWEI_DSM)
	static struct lcd_reg_read_t lcd_status_reg[] = {
		{0x0A, 0x9C, 0xFF, "lcd power state"},
		{0x0E, 0x80, 0xC1, "lcd signal mode"},
		{0x05, 0x00, 0xFF, "mipi dsi error number"},
		{0xDA, 0xFF, 0x00, "RDID1"},
	};
#endif
	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_INFO("fb%d, +!\n", hisifd->index);

	pinfo = &(hisifd->panel_info);
	mipi_dsi0_base = hisifd->mipi_dsi0_base;

	if (pinfo->lcd_init_step == LCD_INIT_POWER_ON) {
		LOG_JANK_D(JLID_KERNEL_LCD_POWER_ON, "%s", "JL_KERNEL_LCD_POWER_ON");
		if (false == gesture_func) {
			/* lcd vcc enable */
			vcc_cmds_tx(pdev, jdi_lcd_vcc_enable_cmds,
				ARRAY_SIZE(jdi_lcd_vcc_enable_cmds));
		//if (g_vddio_type)
		//	ts_power_gpio_enable();
		} else {
			HISI_FB_INFO("power on (gesture_func:%d)\n", gesture_func);
		}

		pinfo->lcd_init_step = LCD_INIT_MIPI_LP_SEND_SEQUENCE;
	} else if (pinfo->lcd_init_step == LCD_INIT_MIPI_LP_SEND_SEQUENCE) {
		/* lcd pinctrl normal */
		pinctrl_cmds_tx(pdev, jdi_lcd_pinctrl_normal_cmds,
			ARRAY_SIZE(jdi_lcd_pinctrl_normal_cmds));
		if (false == gesture_func) {
			/* lcd gpio request */
			gpio_cmds_tx(jdi_lcd_gpio_request_cmds, \
				ARRAY_SIZE(jdi_lcd_gpio_request_cmds));

			/* lcd gpio normal */
			gpio_cmds_tx(jdi_lcd_gpio_normal_cmds, \
				ARRAY_SIZE(jdi_lcd_gpio_normal_cmds));
		} else {
			gpio_cmds_tx(jdi_lcd_gpio_sleep_request_cmds, \
					ARRAY_SIZE(jdi_lcd_gpio_sleep_request_cmds));
			mdelay(50);
			gpio_cmds_tx(jdi_lcd_gpio_sleep_normal_cmds, \
					ARRAY_SIZE(jdi_lcd_gpio_sleep_normal_cmds));
			HISI_FB_INFO("lp send sequence (gesture_func:%d)\n", gesture_func);
			mdelay(60);
		}

		g_cabc_mode = 1;
		if (0 == g_color_enhancement_mode) {
			mipi_dsi_cmds_tx(jdi_display_effect_on_cmds, \
				ARRAY_SIZE(jdi_display_effect_on_cmds), mipi_dsi0_base);
		} else if (1 == g_color_enhancement_mode){
			mipi_dsi_cmds_tx(strong_jdi_display_effect_on_cmds, \
				ARRAY_SIZE(strong_jdi_display_effect_on_cmds), mipi_dsi0_base);
		} else if (2 == g_color_enhancement_mode){
			g_cabc_mode = 0;
			mipi_dsi_cmds_tx(srgb_jdi_display_effect_on_cmds, \
				ARRAY_SIZE(srgb_jdi_display_effect_on_cmds), mipi_dsi0_base);
		}

		mipi_dsi_cmds_tx(jdi_display_on_cmds, \
			ARRAY_SIZE(jdi_display_on_cmds), mipi_dsi0_base);
			

		g_ce_mode = 1;
#if defined (CONFIG_HUAWEI_DSM)
		panel_check_status_and_report_by_dsm(lcd_status_reg, \
			ARRAY_SIZE(lcd_status_reg), mipi_dsi0_base);
#endif
		pinfo->lcd_init_step = LCD_INIT_MIPI_HS_SEND_SEQUENCE;
	} else if (pinfo->lcd_init_step == LCD_INIT_MIPI_HS_SEND_SEQUENCE) {
		/* backlight on */
		hisi_lcd_backlight_on(pdev);
		g_debug_enable = true;
	} else {
		HISI_FB_ERR("failed to init lcd!\n");
	}

	HISI_FB_INFO("fb%d, -!\n", hisifd->index);

	return 0;
}

static int mipi_jdi_panel_off(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_INFO("fb%d, +!\n", hisifd->index);

	LOG_JANK_D(JLID_KERNEL_LCD_POWER_OFF, "%s", "JL_KERNEL_LCD_POWER_OFF");

	/* backlight off */
	hisi_lcd_backlight_off(pdev);

	/* lcd display off sequence */
	mipi_dsi_cmds_tx(jdi_display_off_cmds, \
		ARRAY_SIZE(jdi_display_off_cmds), hisifd->mipi_dsi0_base);
	if (false == gesture_func) {
		/* lcd gpio lowpower */
		gpio_cmds_tx(jdi_lcd_gpio_lowpower_cmds, \
			ARRAY_SIZE(jdi_lcd_gpio_lowpower_cmds));
		/* lcd gpio free */
		gpio_cmds_tx(jdi_lcd_gpio_free_cmds, \
			ARRAY_SIZE(jdi_lcd_gpio_free_cmds));

		/* lcd pinctrl lowpower */
		pinctrl_cmds_tx(pdev, jdi_lcd_pinctrl_lowpower_cmds,
			ARRAY_SIZE(jdi_lcd_pinctrl_lowpower_cmds));

		//if (g_vddio_type)
		//	ts_power_gpio_disable();
		mdelay(3);
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
	//if (hisifd->hisi_fb_shutdown) {
	//	ts_power_control_notify(TS_SUSPEND_DEVICE, SHORT_SYNC_TIMEOUT);
	//}
	checksum_enable_ctl = false;

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

	/* lcd pinctrl finit */
	pinctrl_cmds_tx(pdev, jdi_lcd_pinctrl_finit_cmds,
		ARRAY_SIZE(jdi_lcd_pinctrl_finit_cmds));

	jdi_sysfs_deinit(pdev);
	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return 0;
}

static int mipi_jdi_panel_set_backlight(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;
	int ret = 0;

	char payload[2] = {0, 0};
	struct dsi_cmd_desc bl_cmd[] = {
		{DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_US,
			sizeof(payload), payload},
	};

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	if (unlikely(g_debug_enable)) {
		HISI_FB_INFO("Set backlight to %d\n", hisifd->bl_level);
		LOG_JANK_D(JLID_KERNEL_LCD_BACKLIGHT_ON, "JL_KERNEL_LCD_BACKLIGHT_ON,%u", hisifd->bl_level);
		g_debug_enable = false;
	}

	if (hisifd->panel_info.bl_set_type & BL_SET_BY_PWM) {
		ret = hisi_pwm_set_backlight(hisifd);
	} else if (hisifd->panel_info.bl_set_type & BL_SET_BY_BLPWM) {
		ret = hisi_blpwm_set_backlight(hisifd);
	} else if (hisifd->panel_info.bl_set_type & BL_SET_BY_MIPI) {
		bl_cmd[0].payload[0] = 0x51;
		bl_cmd[0].payload[1] = hisifd->bl_level;

		mipi_dsi_cmds_tx(bl_cmd, ARRAY_SIZE(bl_cmd), hisifd->mipi_dsi0_base);
	} else {
		HISI_FB_ERR("No such bl_set_type!\n");
	}

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	HISI_FB_INFO("mipi_jdi_panel_set_backlight wxh exit %d.\n",bl_cmd[0].payload[1]);

	return ret;
}


/******************************************************************************/
static ssize_t mipi_jdi_panel_lcd_model_show(struct platform_device *pdev,
	char *buf)
{
	struct hisi_fb_data_type *hisifd = NULL;
	ssize_t ret = 0;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	ret = snprintf(buf, PAGE_SIZE, "jdi_NT36750 6.8' CMD TFT 1080 x 1920\n");

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return ret;
}

static ssize_t mipi_jdi_panel_lcd_cabc_mode_show(struct platform_device *pdev,
	char *buf)
{    
	return snprintf(buf, PAGE_SIZE, "%d\n", g_cabc_mode);
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

	if (2 == g_color_enhancement_mode){
              g_cabc_mode = 0;
              return snprintf((char *)buf, count, "%d\n", g_cabc_mode);
	}
    
	if (flag==CABC_OFF ){
              g_cabc_mode=0;
              mipi_dsi_cmds_tx(jdi_cabc_off_cmds, \
                               ARRAY_SIZE(jdi_cabc_off_cmds),\
                               mipi_dsi0_base);
	}else  if (flag==CABC_UI_MODE) {
              g_cabc_mode=1;
              mipi_dsi_cmds_tx(jdi_cabc_ui_on_cmds, \
                               ARRAY_SIZE(jdi_cabc_ui_on_cmds),\
                               mipi_dsi0_base);
	} else if (flag==CABC_STILL_MODE ){
              g_cabc_mode=2;
              mipi_dsi_cmds_tx(jdi_cabc_still_on_cmds, \
                               ARRAY_SIZE(jdi_cabc_still_on_cmds),\
                               mipi_dsi0_base);
	}else if (flag==CABC_MOVING_MODE ){
              g_cabc_mode=3;
              mipi_dsi_cmds_tx(jdi_cabc_moving_on_cmds, \
                               ARRAY_SIZE(jdi_cabc_moving_on_cmds),\
                               mipi_dsi0_base);
	}
	return snprintf((char *)buf, count, "%d\n", g_cabc_mode);
}

static ssize_t mipi_jdi_panel_lcd_ic_color_enhancement_mode_show(struct platform_device *pdev,
	char *buf)
{
	struct hisi_fb_data_type *hisifd = NULL;
	ssize_t ret = 0;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	

	ret = snprintf(buf, PAGE_SIZE, "%d\n", g_color_enhancement_mode);

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return ret;
}

static ssize_t mipi_jdi_panel_lcd_ic_color_enhancement_mode_store(struct platform_device *pdev,
	const char *buf, size_t count)
{
	int ret = 0;
	unsigned long val = 0;
	int flag=-1;
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;

	char ce_disable[] = {0x55, 0x00};

	struct dsi_cmd_desc ce_disable_cmd[] = {
		{DTYPE_DCS_WRITE1, 0,10, WAIT_TYPE_US, sizeof(ce_disable), ce_disable},
	};


	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);
	mipi_dsi0_base =hisifd->mipi_dsi0_base;

	ret = strict_strtoul(buf, 0, &val);
	if (ret)
               return ret;

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	flag=(int)val;
	if (flag==COLOR_EN_WEAK){
		g_color_enhancement_mode=0;
		g_cabc_mode=1;
		mdelay(50);
		mipi_dsi_cmds_tx(jdi_display_effect_on_cmds, \
				ARRAY_SIZE(jdi_display_effect_on_cmds), mipi_dsi0_base);          
	} else if (flag==COLOR_EN_STRONG){
		g_color_enhancement_mode=1;
		mdelay(50);
		mipi_dsi_cmds_tx(strong_jdi_display_effect_on_cmds, \
			ARRAY_SIZE(strong_jdi_display_effect_on_cmds), mipi_dsi0_base);
	}else if (flag==COLOR_EN_SRGB){
		g_color_enhancement_mode=2;
		g_cabc_mode=0;
		mdelay(50);
		mipi_dsi_cmds_tx(srgb_jdi_display_effect_on_cmds, \
				ARRAY_SIZE(srgb_jdi_display_effect_on_cmds), mipi_dsi0_base);
	}else if (flag==COLOR_EN_CLOSE){
		g_color_enhancement_mode=3;
		mdelay(50);
		mipi_dsi_cmds_tx(ce_disable_cmd, \
				ARRAY_SIZE(ce_disable_cmd), mipi_dsi0_base);
	}
	else {
		HISI_FB_DEBUG("color_enhancement no this mode!\n");
	};
	
	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);
	
	return snprintf((char *)buf, count, "%d\n", g_color_enhancement_mode);
}

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
	int flag=-1;
	struct hisi_fb_data_type *hisifd = NULL;
	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	ret = strict_strtoul(buf, 0, &val);
	if (ret)
               return ret;

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	flag=(int)val;

	g_support_mode = flag;
	
	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);
	
	return snprintf((char *)buf, count, "%d\n", g_support_mode);
}

static ssize_t mipi_jdi_panel_lcd_check_reg_show(struct platform_device *pdev, char *buf)
{
	ssize_t ret = 0;
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;
	u32 read_value[4] = {0};
	u32 expected_value[4] = {0x9c, 0x00, 0x77, 0x00};
	u32 read_mask[4] = {0xFF, 0xFF, 0xFF, 0xFF};
	char* reg_name[4] = {"power mode", "MADCTR", "pixel format", "image mode"};
	char lcd_reg_0a[] = {0x0a};
	char lcd_reg_0b[] = {0x0b};
	char lcd_reg_0c[] = {0x0c};
	char lcd_reg_0d[] = {0x0d};

	struct dsi_cmd_desc lcd_check_reg[] = {
		{DTYPE_DCS_READ, 0, 10, WAIT_TYPE_US,
			sizeof(lcd_reg_0a), lcd_reg_0a},
		{DTYPE_DCS_READ, 0, 10, WAIT_TYPE_US,
			sizeof(lcd_reg_0b), lcd_reg_0b},
		{DTYPE_DCS_READ, 0, 10, WAIT_TYPE_US,
			sizeof(lcd_reg_0c), lcd_reg_0c},
		{DTYPE_DCS_READ, 0, 10, WAIT_TYPE_US,
			sizeof(lcd_reg_0d), lcd_reg_0d},
	};

	struct mipi_dsi_read_compare_data data = {
		.read_value = read_value,
		.expected_value = expected_value,
		.read_mask = read_mask,
		.reg_name = reg_name,
		.log_on = 1,
		.cmds = lcd_check_reg,
		.cnt = ARRAY_SIZE(lcd_check_reg),
	};

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	mipi_dsi0_base = hisifd->mipi_dsi0_base;

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);
	if (!mipi_dsi_read_compare(&data, mipi_dsi0_base)) {
		ret = snprintf(buf, PAGE_SIZE, "OK\n");
	} else {
		ret = snprintf(buf, PAGE_SIZE, "ERROR\n");
	}
	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return ret;
}

static ssize_t mipi_jdi_panel_lcd_mipi_detect_show(struct platform_device *pdev, char *buf)
{
	ssize_t ret = 0;
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;
	u32 read_value[2] = {0};
	u32 expected_value[2] = {0x80, 0x00};
	u32 read_mask[2] = {0xFF, 0xFF};
	char* reg_name[2] = {"signal mode", "dsi error number"};
	char lcd_reg_0e[] = {0x0e};
	char lcd_reg_05[] = {0x05};

	struct dsi_cmd_desc lcd_check_reg[] = {
		{DTYPE_DCS_READ, 0, 10, WAIT_TYPE_US,
			sizeof(lcd_reg_0e), lcd_reg_0e},
		{DTYPE_DCS_READ, 0, 10, WAIT_TYPE_US,
			sizeof(lcd_reg_05), lcd_reg_05},
	};

	struct mipi_dsi_read_compare_data data = {
		.read_value = read_value,
		.expected_value = expected_value,
		.read_mask = read_mask,
		.reg_name = reg_name,
		.log_on = 1,
		.cmds = lcd_check_reg,
		.cnt = ARRAY_SIZE(lcd_check_reg),
	};

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	mipi_dsi0_base = hisifd->mipi_dsi0_base;

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);
	if (!mipi_dsi_read_compare(&data, mipi_dsi0_base)) {
		ret = snprintf(buf, PAGE_SIZE, "OK\n");
	} else {
		ret = snprintf(buf, PAGE_SIZE, "ERROR\n");
	}
	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return ret;
}

static ssize_t mipi_jdi_panel_lcd_hkadc_debug_show(struct platform_device *pdev, char *buf)
{
	ssize_t ret = 0;
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);
	ret = snprintf(buf, PAGE_SIZE, "%d\n", hkadc_buf*4);
	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return ret;
}

static ssize_t mipi_jdi_panel_lcd_hkadc_debug_store(struct platform_device *pdev,
	const char *buf, size_t count)
{
	int ret = 0;
	int channel = 0;
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	ret = sscanf(buf, "%u", &channel);
	if(ret <= 0) {
		HISI_FB_ERR("Sscanf return invalid, ret = %d\n", ret);
		return count;
	}

	hkadc_buf = hisi_adc_get_value(channel);
	HISI_FB_INFO("channel[%d] value is %d\n", channel, hkadc_buf);

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return count;
}

static ssize_t mipi_jdi_panel_lcd_gram_check_show(struct platform_device *pdev, char *buf)
{
	ssize_t ret = 0;
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;
	u32 rd[CHECKSUM_SIZE] = {0};
	int i = 0;
	char cmdF_page0_select[] = {0xFF, 0xF0};
	char cmd1_page0_select[] = {0xFF, 0x10};
	char checksum_read[] = {0x73};

	struct dsi_cmd_desc packet_size_set_cmd = {DTYPE_MAX_PKTSIZE, 0, 10, WAIT_TYPE_US, 1, NULL};

	struct dsi_cmd_desc lcd_checksum_select_cmds[] = {
		{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
			sizeof(cmdF_page0_select), cmdF_page0_select},
	};

	struct dsi_cmd_desc lcd_checksum_dis_select_cmds[] = {
		{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
			sizeof(cmd1_page0_select), cmd1_page0_select},
	};

	struct dsi_cmd_desc lcd_check_reg[] = {
		{DTYPE_DCS_READ, 0, 20, WAIT_TYPE_US,
			sizeof(checksum_read), checksum_read},
	};

	if (!checksum_enable_ctl) {
		HISI_FB_INFO("Checksum disabled\n");
		return ret;
	}

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	mipi_dsi0_base = hisifd->mipi_dsi0_base;

	HISI_FB_INFO("fb%d, +.\n", hisifd->index);

	mipi_dsi_max_return_packet_size(&packet_size_set_cmd, mipi_dsi0_base);

	mipi_dsi_cmds_tx(lcd_checksum_select_cmds, \
		ARRAY_SIZE(lcd_checksum_select_cmds), mipi_dsi0_base);
	for (i = 0; i < CHECKSUM_SIZE; i++) {
		char *data = lcd_check_reg[0].payload;
		*data = 0x73 + i;
		mipi_dsi_cmds_rx((rd + i), lcd_check_reg, \
			ARRAY_SIZE(lcd_check_reg), mipi_dsi0_base);
	}

	ret = snprintf(buf, PAGE_SIZE, "%d %d %d %d %d %d %d %d\n", \
			rd[0], rd[1], rd[2], rd[3], rd[4], rd[5], rd[6], rd[7]);
	HISI_FB_INFO("%d %d %d %d %d %d %d %d\n", \
			rd[0], rd[1], rd[2], rd[3], rd[4], rd[5], rd[6], rd[7]);

	mipi_dsi_cmds_tx(lcd_checksum_dis_select_cmds, \
		ARRAY_SIZE(lcd_checksum_dis_select_cmds), mipi_dsi0_base);

	HISI_FB_INFO("fb%d, -.\n", hisifd->index);

	return ret;
}

static ssize_t mipi_jdi_panel_lcd_gram_check_store(struct platform_device *pdev,
	const char *buf, size_t count)
{
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;
	char cmdF_page0_select[] = {0xFF, 0xF0};
	char checksum_init[] = {0x7B, 0x00};
	char checksum_ena[] = {0x92, 0x01};
	char checksum_dis[] = {0x92, 0x00};
	char cmd1_page0_select[] = {0xFF, 0x10};

	struct dsi_cmd_desc lcd_checksum_enable_cmds[] = {
		{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
			sizeof(cmdF_page0_select), cmdF_page0_select},
		{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
			sizeof(checksum_init), checksum_init},
		{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
			sizeof(checksum_ena), checksum_ena},
		{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
			sizeof(cmd1_page0_select), cmd1_page0_select},
	};

	struct dsi_cmd_desc lcd_checksum_disable_cmds[] = {
		{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
			sizeof(cmdF_page0_select), cmdF_page0_select},
		{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
			sizeof(checksum_dis), checksum_dis},
		{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
			sizeof(cmd1_page0_select), cmd1_page0_select},
	};

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	mipi_dsi0_base = hisifd->mipi_dsi0_base;

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	if ((!*buf) ||(!strchr("yY1nN0", *buf))) {
		HISI_FB_ERR("Input param is error(valid: yY1nN0): %s. \n",buf);
		return -EINVAL;
	}

	checksum_enable_ctl = !!strchr("yY1", *buf);
	if(checksum_enable_ctl == true) {
		mipi_dsi_cmds_tx(lcd_checksum_enable_cmds, \
			ARRAY_SIZE(lcd_checksum_enable_cmds), mipi_dsi0_base);
		HISI_FB_INFO("Enable checksum\n");
	} else {
		mipi_dsi_cmds_tx(lcd_checksum_disable_cmds, \
			ARRAY_SIZE(lcd_checksum_disable_cmds), mipi_dsi0_base);
		HISI_FB_INFO("Disable checksum\n");
	}

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return count;
}
#if 0
static int bist_read_and_check(struct platform_device *pdev, char *buf)
{
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;
	u32 D8_value = 0xFF, D9_value = 0xFF, BC_value = 0xFF;
	int ret = LCD_BIST_CHECK_PASS;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);
	mipi_dsi0_base = hisifd->dss_base + DSS_MIPI_DSI0_OFFSET;

	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, 0xD806);
	if (!mipi_dsi_read(&D8_value, mipi_dsi0_base)) {
		HISI_FB_ERR("LCD bist check read register D8 timeout\n");
		ret = LCD_BIST_CHECK_TIMEOUT;
		goto read_reg_failed;
	}

	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, 0xD906);
	if (!mipi_dsi_read(&D9_value, mipi_dsi0_base)) {
		HISI_FB_ERR("LCD bist check read register D9 timeout\n");
		ret = LCD_BIST_CHECK_TIMEOUT;
		goto read_reg_failed;
	}

	outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, 0xBC06);
	if (!mipi_dsi_read(&BC_value, mipi_dsi0_base)) {
		HISI_FB_ERR("LCD bist check read register BC timeout\n");
		ret = LCD_BIST_CHECK_TIMEOUT;
		goto read_reg_failed;
	}

	D8_value &= 0xFF;
	D9_value &= 0xFF;
	BC_value &= 0x60;
	ret = ((D8_value == 0xFF) && (D9_value == 0x3F) && (BC_value == 0x60)) ? \
				LCD_BIST_CHECK_PASS : LCD_BIST_CHECK_FAIL;
	HISI_FB_INFO("D8:%x, D9:%x, BC:%x\n", D8_value, D9_value, BC_value);

read_reg_failed:
	return ret;
}

static ssize_t mipi_jdi_panel_lcd_bist_check(struct platform_device *pdev,
	char *buf)
{
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;
	int ret = LCD_BIST_CHECK_PASS;
	int final_ret = LCD_BIST_CHECK_PASS;
	int i, j;
	int error;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);
	mipi_dsi0_base = hisifd->dss_base + DSS_MIPI_DSI0_OFFSET;
	hisifd->lcd_self_testing = true;
	error = ts_power_control_notify(TS_BEFORE_SUSPEND, SHORT_SYNC_TIMEOUT);

#ifdef LAST_4_STEPS_ONLY_FOR_BIST_CHECK
	j = 0;
#else
	j = 5;
#endif
	for (i = j; i<ARRAY_SIZE(jdi_display_bist_check_cmds); i++) {
		HISI_FB_INFO("TEST %d\n", i+1);
		mipi_dsi_cmds_tx(jdi_display_bist_check_cmds[i], \
			bist_check_cmds_size[i], mipi_dsi0_base);
		ret = bist_read_and_check(pdev, buf);
		if (ret != LCD_BIST_CHECK_PASS) {
			HISI_FB_ERR("check failed\n");
			final_ret = ret;
		}
	}

	if (final_ret == LCD_BIST_CHECK_PASS)
		snprintf(buf, PAGE_SIZE, "pass\n");
	else
		snprintf(buf, PAGE_SIZE, "fail\n");

	mipi_dsi_cmds_tx(jdi_display_bist_check_end, \
		ARRAY_SIZE(jdi_display_bist_check_end), mipi_dsi0_base);

	//if (!error)
	//	error = ts_power_control_notify(TS_AFTER_RESUME, SHORT_SYNC_TIMEOUT);
	hisifd->lcd_self_testing = false;

	return final_ret;
}
#endif

static char lcd_disp_x[] = {
	0x2A,
	0x00, 0x00,0x04,0x37
};

static char lcd_disp_y[] = {
	0x2B,
	0x00, 0x00,0x07,0x7F
};

static struct dsi_cmd_desc set_display_address[] = {
	{DTYPE_DCS_WRITE1, 0, 5, WAIT_TYPE_US,
		sizeof(cmd1_0xFF), cmd1_0xFF},	
	{DTYPE_DCS_LWRITE, 0, 5, WAIT_TYPE_US,
		sizeof(lcd_disp_x), lcd_disp_x},
	{DTYPE_DCS_LWRITE, 0, 5, WAIT_TYPE_US,
		sizeof(lcd_disp_y), lcd_disp_y},
};

static int mipi_jdi_panel_set_display_region(struct platform_device *pdev,
	struct dss_rect *dirty)
{
	struct hisi_fb_data_type *hisifd = NULL;
	HISI_FB_INFO("%s enter succ!dss_rect = {%d, %d, %d, %d}\n", __func__, 
	dirty->x, dirty->y, dirty->w, dirty->h);

	BUG_ON(pdev == NULL || dirty == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	lcd_disp_x[1] = (dirty->x >> 8) & 0xff;
	lcd_disp_x[2] = dirty->x & 0xff;
	lcd_disp_x[3] = ((dirty->x + dirty->w - 1) >> 8) & 0xff;
	lcd_disp_x[4] = (dirty->x + dirty->w - 1) & 0xff;
	lcd_disp_y[1] = (dirty->y >> 8) & 0xff;
	lcd_disp_y[2] = dirty->y & 0xff;
	lcd_disp_y[3] = ((dirty->y + dirty->h - 1) >> 8) & 0xff;
	lcd_disp_y[4] = (dirty->y + dirty->h - 1) & 0xff;

	mipi_dsi_cmds_tx(set_display_address, \
		ARRAY_SIZE(set_display_address), hisifd->mipi_dsi0_base);

	return 0;
}


static struct hisi_panel_info jdi_panel_info = {0};
static struct hisi_fb_panel_data jdi_panel_data = {
	.panel_info = &jdi_panel_info,
	.set_fastboot = mipi_jdi_panel_set_fastboot,
	.on = mipi_jdi_panel_on,
	.off = mipi_jdi_panel_off,
	.remove = mipi_jdi_panel_remove,
	.set_backlight = mipi_jdi_panel_set_backlight,

	.lcd_model_show = mipi_jdi_panel_lcd_model_show,
	.lcd_cabc_mode_show = mipi_jdi_panel_lcd_cabc_mode_show,
	.lcd_cabc_mode_store = mipi_jdi_panel_lcd_cabc_mode_store,
	.lcd_ic_color_enhancement_mode_show = mipi_jdi_panel_lcd_ic_color_enhancement_mode_show,
	.lcd_ic_color_enhancement_mode_store = mipi_jdi_panel_lcd_ic_color_enhancement_mode_store,
	.lcd_support_mode_show = mipi_jdi_panel_lcd_support_mode_show,
	.lcd_support_mode_store = mipi_jdi_panel_lcd_support_mode_store,
	.lcd_check_reg = mipi_jdi_panel_lcd_check_reg_show,
	.lcd_mipi_detect = mipi_jdi_panel_lcd_mipi_detect_show,
	.lcd_hkadc_debug_show = mipi_jdi_panel_lcd_hkadc_debug_show,
	.lcd_hkadc_debug_store = mipi_jdi_panel_lcd_hkadc_debug_store,
	.lcd_gram_check_show = mipi_jdi_panel_lcd_gram_check_show,
	.lcd_gram_check_store = mipi_jdi_panel_lcd_gram_check_store,
	.lcd_bist_check = NULL,//mipi_jdi_panel_lcd_bist_check,
	.set_display_region = mipi_jdi_panel_set_display_region,
	.set_display_resolution = NULL,
};


/*******************************************************************************
**
*/
static int mipi_jdi_probe(struct platform_device *pdev)
{
	int ret = 0;
	struct hisi_panel_info *pinfo = NULL;
	struct device_node *np = NULL;
	uint32_t bl_type = 0;
	int support_mode = 0;
	struct platform_device *this_dev = NULL;

	if (hisi_fb_device_probe_defer(PANEL_MIPI_CMD))
		goto err_probe_defer;

	HISI_FB_DEBUG("+.\n");


	HISI_FB_INFO("mipi_jdi_probe 36750 !\n");

	np = of_find_compatible_node(NULL, NULL, DTS_COMP_JDI_NT36750);
	if (!np) {
		HISI_FB_ERR("NOT FOUND device node %s!\n", DTS_COMP_JDI_NT36750);
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
	HISI_FB_INFO("get lcd_vddio_type: %d\n", g_vddio_type);

	pdev->id = 1;
	/* init lcd panel info */
	pinfo = jdi_panel_data.panel_info;
	memset(pinfo, 0, sizeof(struct hisi_panel_info));
	pinfo->xres = 1080;
	pinfo->yres = 1920;
	pinfo->width  = 87;  //mm
	pinfo->height = 157; //mm
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

	pinfo->dirty_region_info.left_align = -1;
	pinfo->dirty_region_info.right_align = -1;
	pinfo->dirty_region_info.top_align = 8;
	pinfo->dirty_region_info.bottom_align = 8;
	pinfo->dirty_region_info.w_align = -1;
	pinfo->dirty_region_info.h_align = -1;
	pinfo->dirty_region_info.w_min = 1080;
	pinfo->dirty_region_info.h_min = -1;
	pinfo->dirty_region_info.top_start = -1;
	pinfo->dirty_region_info.bottom_start = -1;
	pinfo->dirty_region_info.extra_line_num = 8;
	g_enable_extra_data = true;

	if(runmode_is_factory()) {
		pinfo->sbl_support = 0;
		pinfo->dsi_bit_clk_upt_support = 0;
		pinfo->acm_support = 0;
		pinfo->acm_color_enhancement_mode_support = 0;
		pinfo->lcd_ic_color_enhancement_mode_support = 0;
		pinfo->prefix_sharpness_support = 0;
	} else {
		pinfo->sbl_support = 1;
		pinfo->dsi_bit_clk_upt_support = 1;
		pinfo->acm_support = 1;
		pinfo->acm_color_enhancement_mode_support = 0;
		pinfo->lcd_ic_color_enhancement_mode_support = 1;
		pinfo->prefix_sharpness_support = 0;
	}

	pinfo->color_temperature_support = 1;
	pinfo->comform_mode_support = 1;

	
	if(pinfo->comform_mode_support == 1){  
		support_mode = (support_mode | 1);
	}
	if(pinfo->acm_color_enhancement_mode_support == 1){
		support_mode = (support_mode | 2);
	}
	if(pinfo->lcd_ic_color_enhancement_mode_support == 1){
		support_mode = (support_mode | 4);
	}
	g_support_mode =   support_mode;
	if(pinfo->acm_support == 1){
		pinfo->acm_lut_hue_table = acm_lut_hue_table;
		pinfo->acm_lut_hue_table_len = sizeof(acm_lut_hue_table) / sizeof(acm_lut_hue_table[0]);
		pinfo->acm_lut_value_table = acm_lut_value_table;
		pinfo->acm_lut_value_table_len = sizeof(acm_lut_value_table) / sizeof(acm_lut_value_table[0]);
		pinfo->acm_lut_sata_table = acm_lut_sata_table;
		pinfo->acm_lut_sata_table_len = sizeof(acm_lut_sata_table) / sizeof(acm_lut_sata_table[0]);
		pinfo->acm_lut_satr_table = acm_lut_satr_table;
		pinfo->acm_lut_satr_table_len = sizeof(acm_lut_satr_table) / sizeof(acm_lut_satr_table[0]);
	}
	pinfo->smart_bl.strength_limit = 128;
	pinfo->smart_bl.calibration_a = 60;
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
	pinfo->mipi.dsi_bit_clk_val1 = 471; //470.4
	pinfo->mipi.dsi_bit_clk_val2 = 480;
	pinfo->mipi.dsi_bit_clk_val3 = 490; //489.6
	pinfo->mipi.dsi_bit_clk_val4 = 500; //499.2
	//pinfo->mipi.dsi_bit_clk_val5 = ;
	pinfo->mipi.dsi_bit_clk_upt = pinfo->mipi.dsi_bit_clk;

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

	this_dev = hisi_fb_add_device(pdev);
	BUG_ON(this_dev == NULL);
	hisifd_test = platform_get_drvdata(this_dev);
	BUG_ON(hisifd_test == NULL);
	//HISI_FB_INFO("fb%d, dss-dsi0 = 0x%x.\n", hisifd_test->index,hisifd_test->mipi_dsi0_base);
	jdi_sysfs_init(pdev);

	HISI_FB_DEBUG("-.\n");
	
    sysfs_create_link(NULL,&pdev->dev.kobj,"lcd");                                                                                                      
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
        .compatible = DTS_COMP_JDI_NT36750,
        .data = NULL,
    },
    {},
};
MODULE_DEVICE_TABLE(of, hisi_panel_match_table);

static struct platform_driver this_driver = {
	.probe = mipi_jdi_probe,
	.remove = NULL,
	.suspend = NULL,
	.resume = NULL,
	.shutdown = NULL,
	.driver = {
		.name = "mipi_jdi_NT36750",
		.owner = THIS_MODULE,
		.of_match_table = of_match_ptr(hisi_panel_match_table),
	},
};

static int __init mipi_jdi_panel_init(void)
{
	int ret = 0;

	ret = platform_driver_register(&this_driver);
	if (ret) {
		HISI_FB_ERR("platform_driver_register failed, error=%d!\n", ret);
		return ret;
	}

	return ret;
}

module_init(mipi_jdi_panel_init);
