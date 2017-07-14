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
#include <linux/hisi/hw_cmdline_parse.h>
#include <huawei_platform/touthscreen/huawei_touchscreen.h>
#include <huawei_platform/log/log_jank.h>

#define DTS_COMP_SAMSUNG_S6E3FA3X01 "hisilicon,mipi_samsung_S6E3FA3X01"
#define AMOLED_CHECK_INT

static struct hisi_fb_panel_data samsung_s6e3fa3x01_panel_data;
static bool g_debug_enable = false;
extern int fastboot_set_needed;
static int g_hbm_mode = 0;
static int g_acl_mode = 0;

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

static char tear_on[] = {
	0x35,
	0x00,
};

static char bl_enable[] = {
	0x53,
	0x24,
};

static char delay_te[] = {
	0x44,
	0x03, 0x80,
};

static char exit_sleep[] = {
	0x11,
};

static char display_on[] = {
	0x29,
};

static char acl_mode[] = {
	0x55,
	0x00,
};

static char unlock_setting[] = {
	0xF0,
	0x5A, 0x5A,
};

/*normal H, when pcd happened,trigle to L, and always L*/
static char setting_pcd[] = {
	0xCC,
	0x5C, 0x51,
};

static char setting_errflag_mipi_err[] = {
	0xED,
	0x44,
};

static char setting_sdc[] = {
	0xC0,
	0x40, 0x00, 0x9c, 0x9c,
};

static char lock_setting[] = {
	0xF0,
	0xA5, 0xA5,
};

static char level3_unlock_setting[] = {
	0xFC,
	0x5A, 0x5A,
};

static char setting_avc1[] = {
	0xB0,
	0x1E,
};

static char setting_avc2[] = {
	0xFD,
	0x9E,
};

static char level3_lock_setting[] = {
	0xFC,
	0xA5, 0xA5,
};

/*******************************************************************************
** Power OFF Sequence(Normal to power off)
*/
static char display_off[] = {
	0x28,
};

static char enter_sleep[] = {
	0x10,
};

static struct dsi_cmd_desc display_on_cmds[] = {
	{DTYPE_DCS_WRITE, 0, 25, WAIT_TYPE_MS,
		sizeof(exit_sleep), exit_sleep},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(tear_on), tear_on},
	{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
		sizeof(delay_te), delay_te},
	{DTYPE_DCS_LWRITE, 0,10, WAIT_TYPE_US,
		sizeof(caset_data), caset_data},
	{DTYPE_DCS_LWRITE, 0,10, WAIT_TYPE_US,
		sizeof(paset_data), paset_data},
	{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
		sizeof(unlock_setting), unlock_setting},
	{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
		sizeof(setting_pcd), setting_pcd},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(setting_errflag_mipi_err), setting_errflag_mipi_err},
	{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
		sizeof(setting_sdc), setting_sdc},
	{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
		sizeof(lock_setting), lock_setting},
	{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
		sizeof(level3_unlock_setting), level3_unlock_setting},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(setting_avc1), setting_avc1},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(setting_avc2), setting_avc2},
	{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
		sizeof(level3_lock_setting), level3_lock_setting},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(bl_enable), bl_enable},
	{DTYPE_DCS_WRITE1, 0, 90, WAIT_TYPE_MS,
		sizeof(acl_mode), acl_mode},
	{DTYPE_DCS_WRITE, 0, 20, WAIT_TYPE_MS,
		sizeof(display_on), display_on},
};

static struct dsi_cmd_desc display_off_cmds[] = {
	{DTYPE_DCS_WRITE, 0, 40, WAIT_TYPE_MS,
		sizeof(display_off), display_off},
	{DTYPE_DCS_WRITE, 0, 160, WAIT_TYPE_MS,
		sizeof(enter_sleep), enter_sleep}
};

/*******************************************************************************
** LCD VCC
*/
#define VCC_LCDIO_NAME		"lcdio-vcc"
#define VCC_LCDANALOG_NAME	"lcdanalog-vcc"

static struct regulator *vcc_io;
static struct regulator *vcc_analog;

static struct vcc_desc samsung_s6e3fa3x01_vcc_init_cmds[] = {
	/* vcc get */
	{DTYPE_VCC_GET, VCC_LCDIO_NAME, &vcc_io, 0, 0, WAIT_TYPE_MS, 0},
	{DTYPE_VCC_GET, VCC_LCDANALOG_NAME, &vcc_analog, 0, 0, WAIT_TYPE_MS, 0},

	/* vcc set voltage */
	{DTYPE_VCC_SET_VOLTAGE, VCC_LCDANALOG_NAME, &vcc_analog, 3300000, 3300000, WAIT_TYPE_MS, 0},
};

static struct vcc_desc samsung_s6e3fa3x01_vcc_finit_cmds[] = {
	/* vcc put */
	{DTYPE_VCC_PUT, VCC_LCDIO_NAME, &vcc_io, 0, 0, WAIT_TYPE_MS, 0},
	{DTYPE_VCC_PUT, VCC_LCDANALOG_NAME, &vcc_analog, 0, 0, WAIT_TYPE_MS, 0},
};

static struct vcc_desc samsung_s6e3fa3x01_vcc_enable_cmds[] = {
	/* vcc enable */
	{DTYPE_VCC_ENABLE, VCC_LCDANALOG_NAME, &vcc_analog, 0, 0, WAIT_TYPE_MS, 3},
	{DTYPE_VCC_ENABLE, VCC_LCDIO_NAME, &vcc_io, 0, 0, WAIT_TYPE_MS, 10},
};

static struct vcc_desc samsung_s6e3fa3x01_vcc_disable_cmds[] = {
	/* vcc disable */
	{DTYPE_VCC_DISABLE, VCC_LCDIO_NAME, &vcc_io, 0, 0, WAIT_TYPE_MS, 3},
	{DTYPE_VCC_DISABLE, VCC_LCDANALOG_NAME, &vcc_analog, 0, 0, WAIT_TYPE_MS, 3},
};

/*******************************************************************************
** LCD IOMUX
*/
static struct pinctrl_data pctrl;

static struct pinctrl_cmd_desc samsung_s6e3fa3x01_pinctrl_init_cmds[] = {
	{DTYPE_PINCTRL_GET, &pctrl, 0},
	{DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
	{DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_IDLE},
};

static struct pinctrl_cmd_desc samsung_s6e3fa3x01_pinctrl_normal_cmds[] = {
	{DTYPE_PINCTRL_SET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
};

static struct pinctrl_cmd_desc samsung_s6e3fa3x01_pinctrl_lowpower_cmds[] = {
	{DTYPE_PINCTRL_SET, &pctrl, DTYPE_PINCTRL_STATE_IDLE},
};

static struct pinctrl_cmd_desc samsung_s6e3fa3x01_pinctrl_finit_cmds[] = {
	{DTYPE_PINCTRL_PUT, &pctrl, 0},
};

/*******************************************************************************
** GPIO
*/
#define GPIO_RESET_NAME	"gpio_amoled_reset"
#define GPIO_ID_NAME	"gpio_amoled_id"
#define GPIO_VDDIO_ENABLE_NAME "gpio_amoled_vddio_enable"
#define GPIO_PCD_NAME  "gpio_amoled_pcd"
#define GPIO_ERR_FLAG  "gpio_amoled_err_flag"

static uint32_t gpio_reset;  /*gpio_4_5, gpio_037*/
static uint32_t gpio_id;  /*gpio_4_6, gpio_038*/
static uint32_t gpio_vddio_enable; /*gpio_15_4, gpio_124*/
static uint32_t gpio_pcd; /*UL:gpio_039;CL:codec_gpio_024*/
static uint32_t gpio_err_flag; /*gpio_5_1, gpio_041*/

/***panel on**/
static struct gpio_desc samsung_s6e3fa3x01_gpio_request_cmds[] = {
	/*pcd*/
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_PCD_NAME, &gpio_pcd, 0},
	/*err flag*/
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_ERR_FLAG, &gpio_err_flag, 0},
	/* reset */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_RESET_NAME, &gpio_reset, 0},
	/* id */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_ID_NAME, &gpio_id, 0},
	/*vddio_enable*/
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_VDDIO_ENABLE_NAME, &gpio_vddio_enable, 0},
};

static struct gpio_desc samsung_s6e3fa3x01_gpio_sleep_request_cmds[] = {
	/*pcd*/
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_PCD_NAME, &gpio_pcd, 0},
	/*err flag*/
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_ERR_FLAG, &gpio_err_flag, 0},
	/* reset */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_RESET_NAME, &gpio_reset, 0},
	/* id */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,
		GPIO_ID_NAME, &gpio_id, 0},
};

static struct gpio_desc samsung_s6e3fa3x01_gpio_normal_cmds[] = {
	/*vddio enable*/
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 15,
		GPIO_VDDIO_ENABLE_NAME, &gpio_vddio_enable, 1},
	/* reset */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 15,
		GPIO_RESET_NAME, &gpio_reset, 1},
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5,
		GPIO_RESET_NAME, &gpio_reset, 0},
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 15,
		GPIO_RESET_NAME, &gpio_reset, 1},
	/* id */
	{DTYPE_GPIO_INPUT, WAIT_TYPE_MS, 1,
		GPIO_ID_NAME, &gpio_id, 0},
	/*pcd*/
	{DTYPE_GPIO_INPUT, WAIT_TYPE_MS, 1,
		GPIO_PCD_NAME, &gpio_pcd, 0},
	/*err flag*/
	{DTYPE_GPIO_INPUT, WAIT_TYPE_MS, 1,
		GPIO_ERR_FLAG, &gpio_err_flag, 0},
};

/***panel off***/
static struct gpio_desc samsung_s6e3fa3x01_gpio_lowpower_cmds[] = {
	/* reset */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5,
		GPIO_RESET_NAME, &gpio_reset, 0},
	/*vddio disable*/
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 15,
		GPIO_VDDIO_ENABLE_NAME, &gpio_vddio_enable, 0},
	/* reset input */
	{DTYPE_GPIO_INPUT, WAIT_TYPE_US, 100,
		GPIO_RESET_NAME, &gpio_reset, 0},
	/*vddio_enable input*/
	{DTYPE_GPIO_INPUT, WAIT_TYPE_US, 100,
		GPIO_VDDIO_ENABLE_NAME, &gpio_vddio_enable, 0},
};

static struct gpio_desc samsung_s6e3fa3x01_gpio_sleep_lowpower_cmds[] = {
	/* reset */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5,
		GPIO_RESET_NAME, &gpio_reset, 0},
	/* reset input */
	{DTYPE_GPIO_INPUT, WAIT_TYPE_US, 100,
		GPIO_RESET_NAME, &gpio_reset, 0},
};

static struct gpio_desc samsung_s6e3fa3x01_gpio_free_cmds[] = {
	/* reset */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_RESET_NAME, &gpio_reset, 0},
	/* id */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_ID_NAME, &gpio_id, 0},
	/*pcd*/
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_PCD_NAME, &gpio_pcd, 0},
	/*err flag*/
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_ERR_FLAG, &gpio_err_flag, 0},
	/*vddio_enable*/
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_VDDIO_ENABLE_NAME, &gpio_vddio_enable, 0},
};

/*******************************************************************************
** ACM LUT Tables
*/
static u32 acm_lut_hue_table[] = {
	0x03f8, 0x03f9, 0x03fa, 0x03fb, 0x03fb, 0x03fc, 0x03fd, 0x03fe, 0x03ff, 0x0000, 0x0001, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005,
	0x0006, 0x0007, 0x0007, 0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x000d, 0x000e, 0x000f, 0x0010, 0x0011, 0x0012, 0x0013, 0x0014,
	0x0016, 0x0017, 0x0018, 0x0019, 0x001a, 0x001b, 0x001c, 0x001d, 0x001e, 0x001f, 0x0020, 0x0021, 0x0022, 0x0024, 0x0025, 0x0026,
	0x0027, 0x0029, 0x002a, 0x002b, 0x002d, 0x002e, 0x002f, 0x0030, 0x0032, 0x0033, 0x0034, 0x0036, 0x0037, 0x0038, 0x0039, 0x003b,
	0x003c, 0x003d, 0x003f, 0x0040, 0x0042, 0x0043, 0x0045, 0x0046, 0x0047, 0x0049, 0x004a, 0x004c, 0x004d, 0x004f, 0x0050, 0x0051,
	0x0053, 0x0054, 0x0056, 0x0057, 0x0059, 0x005a, 0x005b, 0x005c, 0x005d, 0x005f, 0x0060, 0x0061, 0x0062, 0x0063, 0x0064, 0x0065,
	0x0066, 0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 0x006d, 0x006e, 0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076, 0x0077,
	0x0078, 0x0079, 0x007a, 0x007b, 0x007c, 0x007d, 0x007e, 0x007f, 0x0080, 0x0081, 0x0082, 0x0083, 0x0084, 0x0085, 0x0086, 0x0087,
	0x0088, 0x0089, 0x008a, 0x008b, 0x008c, 0x008d, 0x008d, 0x008e, 0x008f, 0x0090, 0x0091, 0x0092, 0x0093, 0x0094, 0x0095, 0x0096,
	0x0096, 0x0097, 0x0098, 0x0099, 0x009a, 0x009b, 0x009c, 0x009d, 0x009d, 0x009e, 0x009f, 0x00a0, 0x00a1, 0x00a2, 0x00a2, 0x00a3,
	0x00a4, 0x00a5, 0x00a6, 0x00a6, 0x00a7, 0x00a8, 0x00a9, 0x00aa, 0x00ab, 0x00ab, 0x00ac, 0x00ad, 0x00ae, 0x00af, 0x00b0, 0x00b1,
	0x00b2, 0x00b2, 0x00b3, 0x00b4, 0x00b5, 0x00b6, 0x00b7, 0x00b8, 0x00b9, 0x00ba, 0x00bb, 0x00bb, 0x00bc, 0x00bd, 0x00be, 0x00bf,
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
	0x02e0, 0x02e1, 0x02e2, 0x02e3, 0x02e4, 0x02e5, 0x02e6, 0x02e7, 0x02e8, 0x02e9, 0x02ea, 0x02eb, 0x02ec, 0x02ed, 0x02ee, 0x02ef,
	0x02f0, 0x02f1, 0x02f2, 0x02f3, 0x02f4, 0x02f5, 0x02f6, 0x02f7, 0x02f8, 0x02f9, 0x02fa, 0x02fb, 0x02fc, 0x02fd, 0x02fe, 0x02ff,
	0x0300, 0x0301, 0x0302, 0x0303, 0x0304, 0x0305, 0x0306, 0x0307, 0x0308, 0x0309, 0x030a, 0x030b, 0x030c, 0x030d, 0x030e, 0x030f,
	0x0310, 0x0311, 0x0312, 0x0313, 0x0314, 0x0315, 0x0316, 0x0317, 0x0318, 0x0319, 0x031a, 0x031b, 0x031c, 0x031d, 0x031e, 0x031f,
	0x0320, 0x0321, 0x0322, 0x0323, 0x0324, 0x0325, 0x0326, 0x0327, 0x0328, 0x0329, 0x032a, 0x032b, 0x032c, 0x032d, 0x032e, 0x032f,
	0x0330, 0x0331, 0x0332, 0x0333, 0x0334, 0x0335, 0x0336, 0x0337, 0x0338, 0x0339, 0x033a, 0x033b, 0x033c, 0x033d, 0x033e, 0x033f,
	0x0340, 0x0341, 0x0342, 0x0343, 0x0344, 0x0345, 0x0346, 0x0347, 0x0348, 0x0349, 0x034a, 0x034b, 0x034c, 0x034d, 0x034e, 0x034f,
	0x0350, 0x0351, 0x0352, 0x0353, 0x0354, 0x0355, 0x0356, 0x0357, 0x0358, 0x0359, 0x035a, 0x035b, 0x035c, 0x035d, 0x035e, 0x035f,
	0x0360, 0x0360, 0x0361, 0x0362, 0x0363, 0x0364, 0x0365, 0x0366, 0x0367, 0x0368, 0x0369, 0x036a, 0x036b, 0x036c, 0x036d, 0x036e,
	0x036f, 0x0370, 0x0371, 0x0372, 0x0373, 0x0374, 0x0375, 0x0376, 0x0377, 0x0378, 0x0379, 0x037a, 0x037b, 0x037c, 0x037d, 0x037e,
	0x037f, 0x0380, 0x0381, 0x0382, 0x0383, 0x0384, 0x0385, 0x0386, 0x0387, 0x0388, 0x0389, 0x0389, 0x038a, 0x038b, 0x038c, 0x038d,
	0x038e, 0x038f, 0x0390, 0x0391, 0x0392, 0x0393, 0x0394, 0x0395, 0x0396, 0x0397, 0x0398, 0x0399, 0x039a, 0x039b, 0x039c, 0x039d,
	0x039e, 0x039e, 0x039f, 0x03a0, 0x03a1, 0x03a2, 0x03a3, 0x03a4, 0x03a5, 0x03a6, 0x03a7, 0x03a8, 0x03a9, 0x03aa, 0x03ab, 0x03ac,
	0x03ad, 0x03ae, 0x03af, 0x03b0, 0x03b1, 0x03b2, 0x03b2, 0x03b3, 0x03b4, 0x03b5, 0x03b6, 0x03b7, 0x03b8, 0x03b9, 0x03ba, 0x03bb,
	0x03bc, 0x03bd, 0x03be, 0x03bf, 0x03c0, 0x03c1, 0x03c2, 0x03c3, 0x03c4, 0x03c5, 0x03c6, 0x03c6, 0x03c7, 0x03c8, 0x03c9, 0x03ca,
	0x03cb, 0x03cc, 0x03cd, 0x03ce, 0x03cf, 0x03d0, 0x03d1, 0x03d2, 0x03d3, 0x03d4, 0x03d5, 0x03d5, 0x03d6, 0x03d7, 0x03d8, 0x03d9,
	0x03da, 0x03db, 0x03dc, 0x03dd, 0x03de, 0x03df, 0x03df, 0x03e0, 0x03e1, 0x03e2, 0x03e3, 0x03e4, 0x03e5, 0x03e6, 0x03e7, 0x03e8,
	0x03e9, 0x03ea, 0x03eb, 0x03ec, 0x03ed, 0x03ee, 0x03ee, 0x03ef, 0x03f0, 0x03f1, 0x03f2, 0x03f3, 0x03f4, 0x03f5, 0x03f6, 0x03f7,
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
	0x00ef, 0x00ef, 0x00ee, 0x00ee, 0x00ee, 0x00ee, 0x00ee, 0x00ed, 0x00ed, 0x00ea, 0x00e7, 0x00e4, 0x00e1, 0x00de, 0x00db, 0x00d8,
	0x00d5, 0x00d2, 0x00ce, 0x00cb, 0x00c8, 0x00c4, 0x00c1, 0x00bd, 0x00ba, 0x00b6, 0x00b2, 0x00ae, 0x00aa, 0x00a5, 0x00a1, 0x009d,
	0x0099, 0x0095, 0x0092, 0x008e, 0x008a, 0x0087, 0x0083, 0x0080, 0x007c, 0x0077, 0x0072, 0x006e, 0x0069, 0x0064, 0x0060, 0x005b,
	0x0056, 0x0051, 0x004b, 0x0046, 0x0040, 0x003b, 0x0036, 0x0030, 0x002b, 0x0028, 0x0024, 0x0021, 0x001e, 0x001a, 0x0017, 0x0013,
	0x0010, 0x000e, 0x000c, 0x000a, 0x0008, 0x0006, 0x0004, 0x0002, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
	0x0000, 0x0002, 0x0004, 0x0007, 0x0009, 0x000b, 0x000e, 0x0010, 0x0012, 0x0015, 0x0018, 0x001b, 0x001e, 0x0022, 0x0025, 0x0028,
	0x002b, 0x002d, 0x002e, 0x0030, 0x0032, 0x0033, 0x0035, 0x0036, 0x0038, 0x0039, 0x003a, 0x003b, 0x003c, 0x003d, 0x003e, 0x003f,
	0x0040, 0x0041, 0x0041, 0x0042, 0x0042, 0x0043, 0x0044, 0x0044, 0x0045, 0x0045, 0x0045, 0x0045, 0x0046, 0x0046, 0x0046, 0x0046,
	0x0046, 0x0046, 0x0047, 0x0047, 0x0048, 0x0048, 0x0048, 0x0049, 0x0049, 0x0049, 0x004a, 0x004a, 0x004a, 0x004a, 0x004a, 0x004b,
	0x004b, 0x004c, 0x004c, 0x004c, 0x004d, 0x004e, 0x004e, 0x004e, 0x004f, 0x0050, 0x0050, 0x0051, 0x0052, 0x0053, 0x0054, 0x0054,
	0x0055, 0x0055, 0x0056, 0x0056, 0x0056, 0x0057, 0x0057, 0x0058, 0x0058, 0x005a, 0x005c, 0x005d, 0x005f, 0x0061, 0x0062, 0x0064,
	0x0066, 0x0068, 0x006a, 0x006b, 0x006d, 0x006f, 0x0070, 0x0072, 0x0074, 0x0076, 0x0078, 0x0079, 0x007b, 0x007d, 0x007e, 0x0080,
	0x0082, 0x0084, 0x0086, 0x0089, 0x008b, 0x008d, 0x0090, 0x0092, 0x0094, 0x0096, 0x0098, 0x009a, 0x009c, 0x009f, 0x00a1, 0x00a3,
	0x00a5, 0x00a8, 0x00ab, 0x00ae, 0x00b1, 0x00b4, 0x00b7, 0x00ba, 0x00bd, 0x00bf, 0x00c1, 0x00c3, 0x00c6, 0x00c8, 0x00ca, 0x00cc,
	0x00ce, 0x00d0, 0x00d3, 0x00d6, 0x00d8, 0x00da, 0x00dd, 0x00e0, 0x00e2, 0x00e3, 0x00e5, 0x00e6, 0x00e8, 0x00e9, 0x00ea, 0x00ec,
	0x00ed, 0x00ee, 0x00ee, 0x00ee, 0x00ef, 0x00f0, 0x00f0, 0x00f0, 0x00f1, 0x00f1, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00f0, 0x00ef,
};

static u32 acm_lut_satr_table[] = {
	0x0000, 0x00fe, 0x00fc, 0x00fb, 0x00f9, 0x00f7, 0x00f5, 0x00f3, 0x00f2, 0x00f0, 0x00ee, 0x00ec, 0x00ea, 0x00e9, 0x00e7, 0x00e5,
	0x00e5, 0x00e4, 0x00e4, 0x00e4, 0x00e3, 0x00e3, 0x00e3, 0x00e2, 0x00e2, 0x00e1, 0x00e1, 0x00e1, 0x00e0, 0x00e0, 0x00e0, 0x00df,
	0x00df, 0x00e0, 0x00e0, 0x00e1, 0x00e2, 0x00e2, 0x00e3, 0x00e4, 0x00e5, 0x00e5, 0x00e6, 0x00e7, 0x00e7, 0x00e8, 0x00e9, 0x00e9,
	0x00ea, 0x00eb, 0x00ec, 0x00ec, 0x00ed, 0x00ee, 0x00ee, 0x00ef, 0x00f1, 0x00f3, 0x00f5, 0x00f8, 0x00fa, 0x00fc, 0x00fe, 0x0000,
	0x0000, 0x00fe, 0x00fc, 0x00fa, 0x00f8, 0x00f6, 0x00f4, 0x00f2, 0x00f0, 0x00ee, 0x00ec, 0x00ea, 0x00e8, 0x00e6, 0x00e4, 0x00e2,
	0x00e2, 0x00e1, 0x00e1, 0x00e0, 0x00e0, 0x00df, 0x00df, 0x00de, 0x00de, 0x00dd, 0x00dd, 0x00dc, 0x00dc, 0x00db, 0x00db, 0x00da,
	0x00da, 0x00db, 0x00dc, 0x00dd, 0x00dd, 0x00de, 0x00df, 0x00e0, 0x00e1, 0x00e2, 0x00e3, 0x00e4, 0x00e4, 0x00e5, 0x00e6, 0x00e7,
	0x00e8, 0x00e9, 0x00ea, 0x00eb, 0x00eb, 0x00ec, 0x00ed, 0x00ee, 0x00f0, 0x00f2, 0x00f5, 0x00f7, 0x00f9, 0x00fc, 0x00fe, 0x0000,
	0x0000, 0x00ff, 0x00ff, 0x00fe, 0x00fe, 0x00fd, 0x00fc, 0x00fc, 0x00fb, 0x00fb, 0x00fa, 0x00f9, 0x00f9, 0x00f8, 0x00f8, 0x00f7,
	0x00f7, 0x00f7, 0x00f7, 0x00f7, 0x00f6, 0x00f6, 0x00f6, 0x00f6, 0x00f6, 0x00f6, 0x00f6, 0x00f6, 0x00f5, 0x00f5, 0x00f5, 0x00f5,
	0x00f5, 0x00f5, 0x00f6, 0x00f6, 0x00f6, 0x00f7, 0x00f7, 0x00f7, 0x00f7, 0x00f8, 0x00f8, 0x00f8, 0x00f9, 0x00f9, 0x00f9, 0x00fa,
	0x00fa, 0x00fa, 0x00fa, 0x00fb, 0x00fb, 0x00fb, 0x00fc, 0x00fc, 0x00fc, 0x00fd, 0x00fe, 0x00fe, 0x00fe, 0x00ff, 0x0000, 0x0000,
	0x0000, 0x00ff, 0x00fe, 0x00fd, 0x00fb, 0x00fa, 0x00f9, 0x00f8, 0x00f7, 0x00f6, 0x00f5, 0x00f4, 0x00f2, 0x00f1, 0x00f0, 0x00ef,
	0x00ef, 0x00f0, 0x00f0, 0x00f0, 0x00f1, 0x00f1, 0x00f1, 0x00f2, 0x00f2, 0x00f3, 0x00f3, 0x00f3, 0x00f4, 0x00f4, 0x00f4, 0x00f5,
	0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5,
	0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f5, 0x00f6, 0x00f8, 0x00f9, 0x00fa, 0x00fc, 0x00fd, 0x00ff, 0x0000,
	0x0000, 0x00fe, 0x00fd, 0x00fb, 0x00f9, 0x00f7, 0x00f6, 0x00f4, 0x00f2, 0x00f0, 0x00ef, 0x00ed, 0x00eb, 0x00e9, 0x00e8, 0x00e6,
	0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e7, 0x00e7, 0x00e7, 0x00e7, 0x00e7, 0x00e7, 0x00e7, 0x00e7, 0x00e8, 0x00e8, 0x00e8, 0x00e8,
	0x00e8, 0x00e9, 0x00e9, 0x00ea, 0x00ea, 0x00eb, 0x00eb, 0x00ec, 0x00ed, 0x00ed, 0x00ee, 0x00ee, 0x00ef, 0x00ef, 0x00f0, 0x00f0,
	0x00f1, 0x00f2, 0x00f2, 0x00f3, 0x00f3, 0x00f4, 0x00f4, 0x00f5, 0x00f6, 0x00f8, 0x00f9, 0x00fa, 0x00fc, 0x00fd, 0x00ff, 0x0000,
	0x0000, 0x00fe, 0x00fc, 0x00fb, 0x00f9, 0x00f7, 0x00f5, 0x00f3, 0x00f2, 0x00f0, 0x00ee, 0x00ec, 0x00ea, 0x00e9, 0x00e7, 0x00e5,
	0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x00e4, 0x00e4, 0x00e4, 0x00e4, 0x00e4, 0x00e4, 0x00e4, 0x00e4,
	0x00e4, 0x00e5, 0x00e5, 0x00e6, 0x00e7, 0x00e8, 0x00e8, 0x00e9, 0x00ea, 0x00eb, 0x00eb, 0x00ec, 0x00ed, 0x00ee, 0x00ee, 0x00ef,
	0x00f0, 0x00f1, 0x00f1, 0x00f2, 0x00f3, 0x00f4, 0x00f4, 0x00f5, 0x00f6, 0x00f8, 0x00f9, 0x00fa, 0x00fc, 0x00fd, 0x00ff, 0x0000,
	0x0000, 0x00fe, 0x00fd, 0x00fb, 0x00fa, 0x00f8, 0x00f6, 0x00f5, 0x00f3, 0x00f2, 0x00f0, 0x00ee, 0x00ed, 0x00eb, 0x00ea, 0x00e8,
	0x00e8, 0x00e7, 0x00e7, 0x00e7, 0x00e7, 0x00e6, 0x00e6, 0x00e6, 0x00e5, 0x00e5, 0x00e5, 0x00e4, 0x00e4, 0x00e4, 0x00e4, 0x00e3,
	0x00e3, 0x00e4, 0x00e4, 0x00e5, 0x00e5, 0x00e6, 0x00e6, 0x00e7, 0x00e8, 0x00e8, 0x00e9, 0x00e9, 0x00ea, 0x00ea, 0x00eb, 0x00eb,
	0x00ec, 0x00ed, 0x00ed, 0x00ee, 0x00ee, 0x00ef, 0x00ef, 0x00f0, 0x00f2, 0x00f4, 0x00f6, 0x00f8, 0x00fa, 0x00fc, 0x00fe, 0x0000,
	0x0000, 0x00fe, 0x00fd, 0x00fb, 0x00f9, 0x00f7, 0x00f6, 0x00f4, 0x00f2, 0x00f0, 0x00ef, 0x00ed, 0x00eb, 0x00e9, 0x00e8, 0x00e6,
	0x00e6, 0x00e6, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x00e5, 0x00e4, 0x00e4, 0x00e4, 0x00e4, 0x00e4, 0x00e4, 0x00e3, 0x00e3,
	0x00e3, 0x00e4, 0x00e4, 0x00e5, 0x00e6, 0x00e6, 0x00e7, 0x00e8, 0x00e9, 0x00e9, 0x00ea, 0x00eb, 0x00eb, 0x00ec, 0x00ed, 0x00ed,
	0x00ee, 0x00ef, 0x00f0, 0x00f0, 0x00f1, 0x00f2, 0x00f2, 0x00f3, 0x00f5, 0x00f6, 0x00f8, 0x00fa, 0x00fb, 0x00fd, 0x00fe, 0x0000,
};
/*******************************************************************************/

static struct gpio_desc samsung_s6e3fa3x01_gpio_sleep_free_cmds[] = {
	/* reset */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_RESET_NAME, &gpio_reset, 0},
	/* id */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_ID_NAME, &gpio_id, 0},
	/*pcd*/
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_PCD_NAME, &gpio_pcd, 0},
	/*err flag*/
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,
		GPIO_ERR_FLAG, &gpio_err_flag, 0},
};

#ifdef AMOLED_CHECK_INT
static irqreturn_t pcd_irq_isr_func(int irq, void *handle)
{
	if(gpio_get_value_cansleep(gpio_pcd) == 0)
		HISI_FB_INFO("pcd irq!\n");
	else
		HISI_FB_DEBUG("bad pcd irq!\n");

	return IRQ_HANDLED;
}

static irqreturn_t errflag_irq_isr_func(int irq, void *handle)
{
	if(gpio_get_value_cansleep(gpio_err_flag) == 1)
		HISI_FB_INFO("err_flag irq!\n");
	else
		HISI_FB_DEBUG("bad err_flag irq!\n");

	return IRQ_HANDLED;
}

static void amoled_irq_enable(void)
{
	enable_irq(gpio_to_irq(gpio_pcd));
	enable_irq(gpio_to_irq(gpio_err_flag));
}

static void amoled_irq_disable(void)
{
	disable_irq(gpio_to_irq(gpio_pcd));
	disable_irq(gpio_to_irq(gpio_err_flag));
}
#endif
/*******************************************************************************
**
*/
static int mipi_samsung_s6e3fa3x01_set_fastboot(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	/* pinctrl normal */
	pinctrl_cmds_tx(pdev, samsung_s6e3fa3x01_pinctrl_normal_cmds,
		ARRAY_SIZE(samsung_s6e3fa3x01_pinctrl_normal_cmds));

	/* gpio request */
	gpio_cmds_tx(samsung_s6e3fa3x01_gpio_request_cmds,
		ARRAY_SIZE(samsung_s6e3fa3x01_gpio_request_cmds));

	/* backlight on */	
	hisi_lcd_backlight_on(pdev);

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return 0;
}

static int mipi_samsung_s6e3fa3x01_on(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;
	struct hisi_panel_info *pinfo = NULL;
	char __iomem *mipi_dsi0_base = NULL;

#if defined (CONFIG_HUAWEI_DSM)
	static struct lcd_reg_read_t lcd_status_reg[] = {
		{0x0A, 0x9C, 0xFF, "lcd power state"},
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
		if (hisifd->powerdown_enable) {
			/* vcc enable */
			vcc_cmds_tx(pdev, samsung_s6e3fa3x01_vcc_enable_cmds,
				ARRAY_SIZE(samsung_s6e3fa3x01_vcc_enable_cmds));
		}  else {
			HISI_FB_INFO("power on (powerdown_enable:%d)\n", hisifd->powerdown_enable);
		}
		pinfo->lcd_init_step = LCD_INIT_MIPI_LP_SEND_SEQUENCE;
	} else if (pinfo->lcd_init_step == LCD_INIT_MIPI_LP_SEND_SEQUENCE) {
		/* pinctrl normal */
		pinctrl_cmds_tx(pdev, samsung_s6e3fa3x01_pinctrl_normal_cmds,
			ARRAY_SIZE(samsung_s6e3fa3x01_pinctrl_normal_cmds));
		if (hisifd->powerdown_enable) {
			/* gpio request */
			gpio_cmds_tx(samsung_s6e3fa3x01_gpio_request_cmds, \
				ARRAY_SIZE(samsung_s6e3fa3x01_gpio_request_cmds));

			/* gpio normal */
			gpio_cmds_tx(samsung_s6e3fa3x01_gpio_normal_cmds, \
				ARRAY_SIZE(samsung_s6e3fa3x01_gpio_normal_cmds));
		} else {
			/* gpio sleep request */
			gpio_cmds_tx(samsung_s6e3fa3x01_gpio_sleep_request_cmds, \
				ARRAY_SIZE(samsung_s6e3fa3x01_gpio_sleep_request_cmds));

			/* gpio sleep normal */
			gpio_cmds_tx(samsung_s6e3fa3x01_gpio_normal_cmds, \
				ARRAY_SIZE(samsung_s6e3fa3x01_gpio_normal_cmds));
		}
		mipi_dsi_cmds_tx(display_on_cmds, \
			ARRAY_SIZE(display_on_cmds), mipi_dsi0_base);

#if defined (CONFIG_HUAWEI_DSM)
		panel_check_status_and_report_by_dsm(lcd_status_reg, \
			ARRAY_SIZE(lcd_status_reg), mipi_dsi0_base);
#endif
		pinfo->lcd_init_step = LCD_INIT_MIPI_HS_SEND_SEQUENCE;
	} else if (pinfo->lcd_init_step == LCD_INIT_MIPI_HS_SEND_SEQUENCE) {
		/* backlight on */
		hisi_lcd_backlight_on(pdev);
		g_debug_enable = true;
#ifdef AMOLED_CHECK_INT
		amoled_irq_enable();
#endif
	} else {
		HISI_FB_ERR("failed to init!\n");
	}

	HISI_FB_INFO("fb%d, -!\n", hisifd->index);

	return 0;
}

static int mipi_samsung_s6e3fa3x01_off(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_INFO("fb%d, +!\n", hisifd->index);

	LOG_JANK_D(JLID_KERNEL_LCD_POWER_OFF, "%s", "JL_KERNEL_LCD_POWER_OFF");

#ifdef AMOLED_CHECK_INT
	amoled_irq_disable();
#endif
	/* display off sequence */
	mipi_dsi_cmds_tx(display_off_cmds, \
		ARRAY_SIZE(display_off_cmds), hisifd->mipi_dsi0_base);
	if (hisifd->powerdown_enable) {
		/* gpio lowpower */
		gpio_cmds_tx(samsung_s6e3fa3x01_gpio_lowpower_cmds, \
			ARRAY_SIZE(samsung_s6e3fa3x01_gpio_lowpower_cmds));
		/* gpio free */
		gpio_cmds_tx(samsung_s6e3fa3x01_gpio_free_cmds, \
			ARRAY_SIZE(samsung_s6e3fa3x01_gpio_free_cmds));

		/* pinctrl lowpower */
		pinctrl_cmds_tx(pdev, samsung_s6e3fa3x01_pinctrl_lowpower_cmds,
			ARRAY_SIZE(samsung_s6e3fa3x01_pinctrl_lowpower_cmds));
		/* vcc disable */
		vcc_cmds_tx(pdev, samsung_s6e3fa3x01_vcc_disable_cmds,
			ARRAY_SIZE(samsung_s6e3fa3x01_vcc_disable_cmds));
	} else {
		if (hisifd->hisi_fb_shutdown) {
			HISI_FB_INFO("fb%d shutdown, turn off all power!\n", hisifd->index);
			/* gpio lowpower */
			gpio_cmds_tx(samsung_s6e3fa3x01_gpio_lowpower_cmds, \
				ARRAY_SIZE(samsung_s6e3fa3x01_gpio_lowpower_cmds));
			/* gpio free */
			gpio_cmds_tx(samsung_s6e3fa3x01_gpio_free_cmds, \
				ARRAY_SIZE(samsung_s6e3fa3x01_gpio_free_cmds));

			/* pinctrl lowpower */
			pinctrl_cmds_tx(pdev, samsung_s6e3fa3x01_pinctrl_lowpower_cmds,
				ARRAY_SIZE(samsung_s6e3fa3x01_pinctrl_lowpower_cmds));
			/* vcc disable */
			vcc_cmds_tx(pdev, samsung_s6e3fa3x01_vcc_disable_cmds,
				ARRAY_SIZE(samsung_s6e3fa3x01_vcc_disable_cmds));
		} else {
			HISI_FB_INFO("power off (powerdown_enable:%d)\n", hisifd->powerdown_enable);
			/* gpio sleep lowpower */
			gpio_cmds_tx(samsung_s6e3fa3x01_gpio_sleep_lowpower_cmds, \
				ARRAY_SIZE(samsung_s6e3fa3x01_gpio_sleep_lowpower_cmds));

			/* gpio sleep free */
			gpio_cmds_tx(samsung_s6e3fa3x01_gpio_sleep_free_cmds, \
				ARRAY_SIZE(samsung_s6e3fa3x01_gpio_sleep_free_cmds));

			pinctrl_cmds_tx(pdev, samsung_s6e3fa3x01_pinctrl_normal_cmds,
				ARRAY_SIZE(samsung_s6e3fa3x01_pinctrl_normal_cmds));
		}
	}

	if (hisifd->hisi_fb_shutdown) {
		ts_thread_stop_notify();
	}

	HISI_FB_INFO("fb%d, -!\n", hisifd->index);

	return 0;
}

static int mipi_samsung_s6e3fa3x01_remove(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);

	if (!hisifd) {
		return 0;
	}

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	/* vcc finit */
	vcc_cmds_tx(pdev, samsung_s6e3fa3x01_vcc_finit_cmds,
		ARRAY_SIZE(samsung_s6e3fa3x01_vcc_finit_cmds));

	/* pinctrl finit */
	pinctrl_cmds_tx(pdev, samsung_s6e3fa3x01_pinctrl_finit_cmds,
		ARRAY_SIZE(samsung_s6e3fa3x01_pinctrl_finit_cmds));

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return 0;
}

static int mipi_samsung_s6e3fa3x01_set_brightness(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;
	int ret = 0;

	char payload[2] = {0, 0};
	struct dsi_cmd_desc bl_cmd[] = {
		{DTYPE_DCS_WRITE1, 0, 500, WAIT_TYPE_US,
			sizeof(payload), payload},
	};

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	if (unlikely(g_debug_enable)) {
		HISI_FB_INFO("Set brightness to %d\n", hisifd->bl_level);
		LOG_JANK_D(JLID_KERNEL_LCD_BACKLIGHT_ON, "JL_KERNEL_LCD_BACKLIGHT_ON,%u", hisifd->bl_level);
		g_debug_enable = false;
	}

	if (hisifd->panel_info.bl_set_type & BL_SET_BY_PWM) {
		ret = hisi_pwm_set_backlight(hisifd);
	} else if (hisifd->panel_info.bl_set_type & BL_SET_BY_BLPWM) {
		ret = hisi_blpwm_set_backlight(hisifd);
	} else if (hisifd->panel_info.bl_set_type & BL_SET_BY_MIPI) {
		HISI_FB_DEBUG("set brightness by mipi\n");
		bl_cmd[0].payload[0] = 0x51;
		if(hisifd->bl_level>0&&hisifd->bl_level<hisifd->panel_info.bl_min){
		    bl_cmd[0].payload[1] = hisifd->panel_info.bl_min;
		}else{
		    bl_cmd[0].payload[1] = hisifd->bl_level;
		}

		mipi_dsi_cmds_tx(bl_cmd, ARRAY_SIZE(bl_cmd), hisifd->mipi_dsi0_base);
	} else {
		HISI_FB_ERR("No such bl_set_type!\n");
	}

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return ret;
}

/******************************************************************************/
static ssize_t mipi_samsung_s6e3fa3x01_model_show(struct platform_device *pdev,
	char *buf)
{
	ssize_t ret = 0;

	ret = snprintf(buf, PAGE_SIZE, "Amoled-s6e3fa3x01\n");
	return ret;
}

static ssize_t mipi_samsung_pcd_errflag_check(struct platform_device *pdev,
	char *buf)
{
	int pcd_gpio = 0;
	int errflag_gpio = 0;
	ssize_t ret = 0;
	u8 result_value = 0;

	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);

	if (!hisifd) {
		HISI_FB_ERR("hisifd is null\n");
		ret = snprintf(buf, PAGE_SIZE, "%d\n", result_value);
		return ret;
	}

	if (!hisifd->panel_power_on){
		HISI_FB_INFO("panel is poweroff\n");
		ret = snprintf(buf, PAGE_SIZE, "%d\n", result_value);
		return ret;
	}

	pcd_gpio = gpio_get_value_cansleep(gpio_pcd);
	errflag_gpio = gpio_get_value_cansleep(gpio_err_flag);

	HISI_FB_INFO("pcd:%d, errflag:%d\n", pcd_gpio, errflag_gpio);

	if ((pcd_gpio == 1) && (errflag_gpio == 0)) {
		result_value = 0; // PCD_ERR_FLAG_SUCCESS
	} else if ((pcd_gpio == 0) && (errflag_gpio == 0)) {
		result_value = 1; //only  PCD_FAIL
	} else if ((pcd_gpio == 1) && (errflag_gpio == 1)) {
		result_value = 2; //only ERRFLAG FAIL
	} else if ((pcd_gpio == 0) && (errflag_gpio == 1)) {
		result_value = 3; //PCD_ERR_FLAG_FAIL
	} else
		result_value = 0;

	ret = snprintf(buf, PAGE_SIZE, "%d\n", result_value);
	return ret;
}

static int mipi_samsung_s6e3fa3x01_set_display_region(struct platform_device *pdev,
	struct dss_rect *dirty)
{
	struct hisi_fb_data_type *hisifd = NULL;
	ssize_t ret = 0;

	BUG_ON(pdev == NULL || dirty == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	return 0;
}

#if 0
static ssize_t mipi_samsung_s6e3fa3x01_check_reg_show(struct platform_device *pdev, char *buf)
{
	struct hisi_fb_data_type *hisifd = NULL;
	char lcd_reg_CC[] = {0xCC};
	int read_value = 0;
	ssize_t ret = 0;
	char __iomem *mipi_dsi0_base = NULL;

	struct dsi_cmd_desc lcd_check_reg[] = {
		{DTYPE_DCS_READ, 0, 10, WAIT_TYPE_US,
			sizeof(lcd_reg_CC), lcd_reg_CC},
	};

	BUG_ON(pdev == NULL || dirty == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	mipi_dsi0_base = hisifd->mipi_dsi0_base;

	ret = mipi_dsi_cmds_rx(&read_value, lcd_check_reg, ARRAY_SIZE(lcd_check_reg), mipi_dsi0_base);

	HISI_FB_ERR("lcd_reg_CC: %d", read_value);
	ret = snprintf(buf, PAGE_SIZE, "lcd_reg_CC: %d", read_value);

	return ret ;
}
#endif

static ssize_t mipi_samsung_s6e3fa3x01_amoled_acl_show(struct platform_device *pdev,
	char *buf)
{
	return snprintf(buf, PAGE_SIZE, "ACL mode:%d\n", g_acl_mode);
}

#define ACL_DEBUG			0
#define ACL_SETTING			1
#define ACL_OFF				0
#define ACL_OFFSET1_ON		1
#define ACL_OFFSET2_ON		2
#define ACL_OFFSET3_ON		3
static ssize_t mipi_samsung_s6e3fa3x01_amoled_acl_store(struct platform_device *pdev,
	const char *buf, size_t count)
{
	int ret = 0;
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;
	unsigned int value[100];
	char *token, *cur;
	int i = 0;
	char payload_acl_para[6] = {0};
	struct dsi_cmd_desc acl_debug_cmd[] = {
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(unlock_setting), unlock_setting},
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(payload_acl_para), payload_acl_para},
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(lock_setting), lock_setting},
	};
	char payload_acl_switch[2] = {0};
	struct dsi_cmd_desc acl_switch_cmd[] = {
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(unlock_setting), unlock_setting},
		{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
			sizeof(payload_acl_switch), payload_acl_switch},
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(lock_setting), lock_setting},
	};

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);
	mipi_dsi0_base = hisifd->mipi_dsi0_base;
	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	cur = buf;
	while (token = strsep(&cur, ",")) {
		value[i++] = simple_strtol(token, NULL, 0);
	}

	if (value[0] == ACL_DEBUG) { //debug
		acl_debug_cmd[1].payload[0] = 0xb5;
		acl_debug_cmd[1].payload[1] = 0x50;
		acl_debug_cmd[1].payload[2] = value[1];
		acl_debug_cmd[1].payload[3] = value[2];
		acl_debug_cmd[1].payload[4] = value[3];
		acl_debug_cmd[1].payload[5] = value[4];
		mipi_dsi_cmds_tx(acl_debug_cmd, ARRAY_SIZE(acl_debug_cmd), mipi_dsi0_base);
	} else if (value[0] == ACL_SETTING) {
		if (value[1] == ACL_OFF) {
			acl_switch_cmd[1].payload[0] = 0x55;
			acl_switch_cmd[1].payload[1] = ACL_OFF;
			mipi_dsi_cmds_tx(acl_switch_cmd, ARRAY_SIZE(acl_switch_cmd), mipi_dsi0_base);
			g_acl_mode = ACL_OFF;
			HISI_FB_INFO("ACL OFF\n");
		} else if (value[1] == ACL_OFFSET1_ON) {
			acl_switch_cmd[1].payload[0] = 0x55;
			acl_switch_cmd[1].payload[1] = ACL_OFFSET1_ON;
			mipi_dsi_cmds_tx(acl_switch_cmd, ARRAY_SIZE(acl_switch_cmd), mipi_dsi0_base);
			g_acl_mode = ACL_OFFSET1_ON;
			HISI_FB_INFO("ACL OFFSET 1 ON\n");
		} else if (value[1] == ACL_OFFSET2_ON) {
			acl_switch_cmd[1].payload[0] = 0x55;
			acl_switch_cmd[1].payload[1] = ACL_OFFSET2_ON;
			mipi_dsi_cmds_tx(acl_switch_cmd, ARRAY_SIZE(acl_switch_cmd), mipi_dsi0_base);
			g_acl_mode = ACL_OFFSET2_ON;
			HISI_FB_INFO("ACL OFFSET 2 ON\n");
		} else if (value[1] == ACL_OFFSET3_ON) {
			acl_switch_cmd[1].payload[0] = 0x55;
			acl_switch_cmd[1].payload[1] = ACL_OFFSET3_ON;
			mipi_dsi_cmds_tx(acl_switch_cmd, ARRAY_SIZE(acl_switch_cmd), mipi_dsi0_base);
			g_acl_mode = ACL_OFFSET3_ON;
			HISI_FB_INFO("ACL OFFSET 3 ON\n");
		} else {
			HISI_FB_INFO("invalid parm!\n");
		}
	} else {
		HISI_FB_INFO("invalid parm!\n");
	}
	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);
	return count;
}

#define HBM_DEBUG			0
#define HBM_SETTING			1
#define HBM_OFF				0
#define HBM_ON				1
static ssize_t mipi_samsung_s6e3fa3x01_amoled_hbm_show(struct platform_device *pdev,
	char *buf)
{
	return snprintf(buf, PAGE_SIZE, "HBM mode:%d\n", g_hbm_mode);
}

static ssize_t mipi_samsung_s6e3fa3x01_amoled_hbm_store(struct platform_device *pdev,
	const char *buf, size_t count)
{
	int ret = 0;
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;
	unsigned int value[100];
	char *token, *cur;
	int i = 0;
	char payload_hbm_para[5] = {0};
	struct dsi_cmd_desc hbm_debug_cmd[] = {
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(unlock_setting), unlock_setting},
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(payload_hbm_para), payload_hbm_para},
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(lock_setting), lock_setting},
	};
	char payload_hbm_switch[2] = {0};
	struct dsi_cmd_desc hbm_switch_cmd[] = {
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(unlock_setting), unlock_setting},
		{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
			sizeof(payload_hbm_switch), payload_hbm_switch},
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(lock_setting), lock_setting},
	};

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);
	mipi_dsi0_base = hisifd->mipi_dsi0_base;
	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	cur = buf;
	while (token = strsep(&cur, ",")) {
		value[i++] = simple_strtol(token, NULL, 0);
	}

	if (value[0] == HBM_DEBUG) { //debug
		hbm_debug_cmd[1].payload[0] = 0xb4;
		hbm_debug_cmd[1].payload[1] = value[1];
		hbm_debug_cmd[1].payload[2] = value[2];
		hbm_debug_cmd[1].payload[3] = value[3];
		hbm_debug_cmd[1].payload[4] = value[4];
		mipi_dsi_cmds_tx(hbm_debug_cmd, ARRAY_SIZE(hbm_debug_cmd), mipi_dsi0_base);
	} else if (value[0] == HBM_SETTING) {
		if (value[1] == HBM_OFF) {
			hbm_switch_cmd[1].payload[0] = 0x53;
			hbm_switch_cmd[1].payload[1] = (0x24 & 0xff);
			mipi_dsi_cmds_tx(hbm_switch_cmd, ARRAY_SIZE(hbm_switch_cmd), mipi_dsi0_base);
			g_hbm_mode = HBM_OFF;
			HISI_FB_INFO("HBM OFF\n");
		} else if (value[1] == HBM_ON) {
			hbm_switch_cmd[1].payload[0] = 0x53;
			hbm_switch_cmd[1].payload[1] = ((0x24 | 0xc0) & 0xff);
			mipi_dsi_cmds_tx(hbm_switch_cmd, ARRAY_SIZE(hbm_switch_cmd), mipi_dsi0_base);
			g_hbm_mode = HBM_ON;
			HISI_FB_INFO("HBM ON\n");
		} else {
			HISI_FB_INFO("invalid parm!\n");
		}
	} else {
		HISI_FB_INFO("invalid parm!\n");
	}
	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);
	return count;
}

static ssize_t mipi_samsung_s6e3fa3x01_lcd_filter_show(struct platform_device *pdev,
	char *buf)
{
	ssize_t ret = 0;
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;

	char unlock_setting1[] = {0xf0, 0x5a, 0x5a};
	char unlock_setting2[] = {0xfc, 0x5a, 0x5a};
	char unlock_setting3[] = {0xf1, 0x5a, 0x5a};
	char lock_setting1[] = {0xf0, 0xa5, 0xa5};
	char lock_setting2[] = {0xfc, 0xa5, 0xa5};
	char lock_setting3[] = {0xf1, 0xa5, 0xa5};

	u32 read_value[1] = {0};
	u32 expected_value[1] = {0x10};
	u32 read_mask[1] = {0xFF};
	char* reg_name[1] = {"EVT0 ID"};
	char lcd_reg_fa[] = {0xfa};

	struct dsi_cmd_desc lcd_reg_fa_cmd[] = {
		{DTYPE_DCS_READ, 0, 10, WAIT_TYPE_US,
			sizeof(lcd_reg_fa), lcd_reg_fa},
	};

	struct dsi_cmd_desc unlock_settting[] = {
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(unlock_setting1), unlock_setting1},
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(unlock_setting2), unlock_setting2},
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(unlock_setting3), unlock_setting3},
	};

	struct dsi_cmd_desc lock_settting[] = {
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(lock_setting3), lock_setting3},
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(lock_setting2), lock_setting2},
		{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
			sizeof(lock_setting1), lock_setting1},
	};

	struct mipi_dsi_read_compare_data data = {
		.read_value = read_value,
		.expected_value = expected_value,
		.read_mask = read_mask,
		.reg_name = reg_name,
		.log_on = 1,
		.cmds = lcd_reg_fa_cmd,
		.cnt = ARRAY_SIZE(lcd_reg_fa_cmd),
	};

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);
	mipi_dsi0_base = hisifd->mipi_dsi0_base;

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	mipi_dsi_cmds_tx(unlock_settting, \
		ARRAY_SIZE(unlock_settting), mipi_dsi0_base);

	if (!mipi_dsi_read_compare(&data, mipi_dsi0_base)) {
		ret = snprintf(buf, PAGE_SIZE, "ERROR\n");
	} else {
		ret = snprintf(buf, PAGE_SIZE, "OK\n");
	}

	mipi_dsi_cmds_tx(lock_settting, \
		ARRAY_SIZE(lock_settting), mipi_dsi0_base);

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return ret;
}

#define LCD_CMD_NAME_MAX 100
static char lcd_cmd_now[LCD_CMD_NAME_MAX] = {0};
static ssize_t mipi_samsung_s6e3fa3x01_lcd_test_config_show(struct platform_device *pdev,
	char *buf)
{
	if (!strncmp(lcd_cmd_now, "MMI0", strlen("MMI0"))) { /* mmi sence0 config */
		return snprintf(buf, PAGE_SIZE, "PCD,ERRORFLAG,CURRENT1");
	} else if (!strncmp(lcd_cmd_now, "MMI1", strlen("MMI1"))) { /* mmi sence1 config */
		return snprintf(buf, PAGE_SIZE, "CURRENT1");
	} else if (!strncmp(lcd_cmd_now, "MMI2", strlen("MMI2"))) { /* mmi sence2 config */
		return snprintf(buf, PAGE_SIZE, "CURRENT1");
	} else if (!strncmp(lcd_cmd_now, "MMI3", strlen("MMI3"))) { /* mmi sence3 config */
		return snprintf(buf, PAGE_SIZE, "CURRENT1");
	} else if (!strncmp(lcd_cmd_now, "MMI4", strlen("MMI4"))) { /* mmi sence4 config */
		return snprintf(buf, PAGE_SIZE, "CURRENT1");
#if 0
	} else if (!strncmp(lcd_cmd_now, "MMI5", strlen("MMI5"))) { /* mmi sence5 config */
		return snprintf(buf, PAGE_SIZE, "PCD,ERRORFLAG,CURRENT1,CURRENT2");
	} else if (!strncmp(lcd_cmd_now, "RUNNINGTEST0", strlen("RUNNINGTEST0"))) { /* runningtest sence0 config */
		return snprintf(buf, PAGE_SIZE, "PCD,ERRORFLAG,CURRENT1,CURRENT2");
	} else if (!strncmp(lcd_cmd_now, "PROJECT_MENU0", strlen("PROJECT_MENU0"))) { /* project mode sence0 config */
		return snprintf(buf, PAGE_SIZE, "PCD,ERRORFLAG,CURRENT1,CURRENT2");
	} else if (!strncmp(lcd_cmd_now, "LCD_INCOME0", strlen("LCD_INCOME0"))) { /* lcd income sence0 config */
		return snprintf(buf, PAGE_SIZE, "PCD,ERRORFLAG,CURRENT1,CURRENT2");
#endif
	} else if (!strncmp(lcd_cmd_now, "PCD", strlen("PCD"))) { /* pcd config */
		return snprintf(buf, PAGE_SIZE, "/sys/class/graphics/fb0/amoled_pcd_errflag_check");
	} else if (!strncmp(lcd_cmd_now, "ERRORFLAG", strlen("ERRORFLAG"))) { /* error flag config */
		return snprintf(buf, PAGE_SIZE, "/sys/class/graphics/fb0/amoled_pcd_errflag_check");
	} else if (!strncmp(lcd_cmd_now, "CURRENT1", strlen("CURRENT1"))) { /* current1 avdd config */
		return snprintf(buf, PAGE_SIZE, "/sys/class/ina231/ina231_0/ina231_set,"
										"/sys/class/ina231/ina231_0/ina231_value,"
										"6600000,7700000,66000,215600,10000,28000");
	} else if (!strncmp(lcd_cmd_now, "CURRENT2", strlen("CURRENT2"))) { /* current2 elvdd config */
		return snprintf(buf, PAGE_SIZE, "/sys/class/ina231/ina231_1/ina231_set,"
										"/sys/class/ina231/ina231_1/ina231_value,"
										"4400000,4800000,220000,696000,50000,145000");
	} else {
		return snprintf(buf, PAGE_SIZE, "INVALID");
	}
}

static ssize_t mipi_samsung_s6e3fa3x01_lcd_test_config_store(struct platform_device *pdev,
	const char *buf, size_t count)
{
	int ret = 0;
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);
	mipi_dsi0_base =hisifd->mipi_dsi0_base;

	if (strlen(buf) < LCD_CMD_NAME_MAX) {
		memcpy(lcd_cmd_now, buf, strlen(buf) + 1);
		HISI_FB_INFO("current test cmd:%s\n", lcd_cmd_now);
	} else {
		memcpy(lcd_cmd_now, "INVALID", strlen("INVALID") + 1);
		HISI_FB_INFO("invalid test cmd:%s\n");
	}

	return count;
}

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

static struct hisi_panel_info samsung_s6e3fa3x01_panel_info = {0};
static struct hisi_fb_panel_data samsung_s6e3fa3x01_panel_data = {
	.panel_info = &samsung_s6e3fa3x01_panel_info,
	.set_fastboot = mipi_samsung_s6e3fa3x01_set_fastboot,
	.on = mipi_samsung_s6e3fa3x01_on,
	.off = mipi_samsung_s6e3fa3x01_off,
	.remove = mipi_samsung_s6e3fa3x01_remove,
	.set_backlight = mipi_samsung_s6e3fa3x01_set_brightness,

	.lcd_model_show = mipi_samsung_s6e3fa3x01_model_show,
	.amoled_pcd_errflag_check = mipi_samsung_pcd_errflag_check,
	.set_display_region = mipi_samsung_s6e3fa3x01_set_display_region,
//	.lcd_check_reg = mipi_samsung_s6e3fa3x01_check_reg_show,
	.amoled_acl_show = mipi_samsung_s6e3fa3x01_amoled_acl_show,
	.amoled_acl_store = mipi_samsung_s6e3fa3x01_amoled_acl_store,
	.amoled_hbm_show = mipi_samsung_s6e3fa3x01_amoled_hbm_show,
	.amoled_hbm_store = mipi_samsung_s6e3fa3x01_amoled_hbm_store,
	.lcd_test_config_show = mipi_samsung_s6e3fa3x01_lcd_test_config_show,
	.lcd_test_config_store = mipi_samsung_s6e3fa3x01_lcd_test_config_store,
	.lcd_filter_show = mipi_samsung_s6e3fa3x01_lcd_filter_show,
	.lcd_support_mode_show = mipi_jdi_panel_lcd_support_mode_show,
	.lcd_support_mode_store = mipi_jdi_panel_lcd_support_mode_store,
	.set_display_resolution = NULL,
};

/*******************************************************************************
**
*/
static int mipi_samsung_s6e3fa3x01_probe(struct platform_device *pdev)
{
	int ret = 0;
	struct hisi_panel_info *pinfo = NULL;
	struct device_node *np = NULL;

	if (hisi_fb_device_probe_defer(PANEL_MIPI_CMD))
		goto err_probe_defer;

	HISI_FB_INFO("+.\n");

	np = of_find_compatible_node(NULL, NULL, DTS_COMP_SAMSUNG_S6E3FA3X01);
	if (!np) {
		HISI_FB_ERR("NOT FOUND device node %s!\n", DTS_COMP_SAMSUNG_S6E3FA3X01);
		goto err_return;
	}

	gpio_reset = of_get_named_gpio(np, "gpios", 0);  /*gpio_4_5, gpio_037*/
	gpio_id = of_get_named_gpio(np, "gpios", 1);  /*gpio_3_3, gpio_027*/
	gpio_vddio_enable = of_get_named_gpio(np, "gpios", 2);  /*gpio_15_4, gpio_124*/
	gpio_pcd = of_get_named_gpio(np, "gpios", 3);	/*UL:gpio_039;CL:codec_gpio_024*/
	gpio_err_flag = of_get_named_gpio(np, "gpios", 4); /*gpio_5_1, gpio_041*/

	pdev->id = 1;
	/* init panel info */
	pinfo = samsung_s6e3fa3x01_panel_data.panel_info;
	memset(pinfo, 0, sizeof(struct hisi_panel_info));
	pinfo->xres = 1080;
	pinfo->yres = 1920;
	pinfo->width  = 68;  //mm
	pinfo->height = 121; //mm
	pinfo->type = PANEL_MIPI_CMD;
	pinfo->orientation = LCD_PORTRAIT;
	pinfo->bpp = LCD_RGB888;
	pinfo->bgr_fmt = LCD_RGB;
	pinfo->bl_set_type = BL_SET_BY_MIPI;

	pinfo->bl_min = 4;
	pinfo->bl_max = 255;
	pinfo->vsync_ctrl_type = (VSYNC_CTRL_ISR_OFF |
		VSYNC_CTRL_MIPI_ULPS | VSYNC_CTRL_CLK_OFF);
	HISI_FB_INFO("vsync_ctrl_type enable clk off\n");

	pinfo->frc_enable = 0;
	pinfo->esd_enable = 0;
	pinfo->dirty_region_updt_support = 0;
	pinfo->grayscale_support = 0;

	if(runmode_is_factory()) {
		pinfo->sbl_support = 0;
		pinfo->acm_support = 0;
	} else {
		pinfo->sbl_support = 1;
		pinfo->acm_support = 1;
	}

	pinfo->color_temperature_support = 1;
	pinfo->comform_mode_support = 1;
	g_support_mode = 1;
	pinfo->smart_bl.strength_limit = 128;
	pinfo->smart_bl.calibration_a = 60;
	pinfo->smart_bl.calibration_b = 95;
	pinfo->smart_bl.calibration_c = 5;
	pinfo->smart_bl.calibration_d = 1;
	pinfo->smart_bl.t_filter_control = 0;
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
	pinfo->dsi_bit_clk_upt_support = 0;
	pinfo->mipi.dsi_bit_clk_upt = pinfo->mipi.dsi_bit_clk;

	if (pinfo->acm_support == 1) {
		pinfo->acm_lut_hue_table = acm_lut_hue_table;
		pinfo->acm_lut_hue_table_len = sizeof(acm_lut_hue_table) / sizeof(acm_lut_hue_table[0]);
		pinfo->acm_lut_value_table = acm_lut_value_table;
		pinfo->acm_lut_value_table_len = sizeof(acm_lut_value_table) / sizeof(acm_lut_value_table[0]);
		pinfo->acm_lut_sata_table = acm_lut_sata_table;
		pinfo->acm_lut_sata_table_len = sizeof(acm_lut_sata_table) / sizeof(acm_lut_sata_table[0]);
		pinfo->acm_lut_satr_table = acm_lut_satr_table;
		pinfo->acm_lut_satr_table_len = sizeof(acm_lut_satr_table) / sizeof(acm_lut_satr_table[0]);
		pinfo->acm_valid_num = 7;
		pinfo->r0_hh = 0x80;
		pinfo->r0_lh = 0x0;
		pinfo->r1_hh = 0xff;
		pinfo->r1_lh = 0x81;
		pinfo->r2_hh = 0x17f;
		pinfo->r2_lh = 0x100;
		pinfo->r3_hh = 0x1ff;
		pinfo->r3_lh = 0x180;
		pinfo->r4_hh = 0x27f;
		pinfo->r4_lh = 0x200;
		pinfo->r5_hh = 0x2ff;
		pinfo->r5_lh = 0x280;
		pinfo->r6_hh = 0x36b;
		pinfo->r6_lh = 0x300;
	}

	pinfo->pxl_clk_rate = 150*1000000UL;

	/* vcc init */
	ret = vcc_cmds_tx(pdev, samsung_s6e3fa3x01_vcc_init_cmds,
		ARRAY_SIZE(samsung_s6e3fa3x01_vcc_init_cmds));
	if (ret != 0) {
		HISI_FB_ERR("vcc init failed!\n");
		goto err_return;
	}

#ifdef AMOLED_CHECK_INT
	ret = request_threaded_irq(gpio_to_irq(gpio_pcd), NULL, pcd_irq_isr_func,
			IRQF_ONESHOT | IRQF_TRIGGER_FALLING,
			"pcd_irq", (void *)pdev);
	if (ret != 0) {
		HISI_FB_ERR("request_irq failed, irq_no=%d error=%d!\n", gpio_to_irq(gpio_pcd), ret);
	}

	ret = request_threaded_irq(gpio_to_irq(gpio_err_flag), NULL, errflag_irq_isr_func,
			IRQF_ONESHOT | IRQF_TRIGGER_RISING,
			"errflag_irq", (void *)pdev);
	if (ret != 0) {
		HISI_FB_ERR("request_irq failed, irq_no=%d error=%d!\n", gpio_to_irq(gpio_err_flag), ret);
	}
#endif

	if (fastboot_set_needed) {
		vcc_cmds_tx(pdev, samsung_s6e3fa3x01_vcc_enable_cmds,
			ARRAY_SIZE(samsung_s6e3fa3x01_vcc_enable_cmds));
	}

	/* pinctrl init */
	ret = pinctrl_cmds_tx(pdev, samsung_s6e3fa3x01_pinctrl_init_cmds,
			ARRAY_SIZE(samsung_s6e3fa3x01_pinctrl_init_cmds));
	if (ret != 0) {
	        HISI_FB_ERR("Init pinctrl failed, defer\n");
		goto err_return;
	}

	/* alloc panel device data */
	ret = platform_device_add_data(pdev, &samsung_s6e3fa3x01_panel_data,
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
        .compatible = DTS_COMP_SAMSUNG_S6E3FA3X01,
        .data = NULL,
    },
    {},
};
MODULE_DEVICE_TABLE(of, hisi_panel_match_table);

static struct platform_driver this_driver = {
	.probe = mipi_samsung_s6e3fa3x01_probe,
	.remove = NULL,
	.suspend = NULL,
	.resume = NULL,
	.shutdown = NULL,
	.driver = {
		.name = "mipi_samsung_S6E3FA3X01",
		.owner = THIS_MODULE,
		.of_match_table = of_match_ptr(hisi_panel_match_table),
	},
};

static int __init mipi_samsung_s6e3fa3x01_init(void)
{
	int ret = 0;

	ret = platform_driver_register(&this_driver);
	if (ret) {
		HISI_FB_ERR("platform_driver_register failed, error=%d!\n", ret);
		return ret;
	}

	return ret;
}

module_init(mipi_samsung_s6e3fa3x01_init);
