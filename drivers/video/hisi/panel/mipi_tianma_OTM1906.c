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
#include "hisi_mipi_dsi.h"
#include <linux/lcd_tuning.h>
#include "hisi_fb_panel.h"
#include <linux/of.h>
#include <huawei_platform/log/log_jank.h>
#include <linux/huawei/hisi_adc.h>
#include <linux/hisi/hi3xxx-lcd_type.h>
#include <linux/hisi/hw_cmdline_parse.h>

#define DTS_COMP_TIANMA_OTM1906 "hisilicon,mipi_tianma_OTM1906"

extern int fastboot_set_needed;
static struct hisi_fb_panel_data tianma_panel_data;
extern u32 frame_count;
static bool debug_enable = false;
static int hkadc_buf = 0;
extern bool gesture_func;

#define CABC_OFF 0
#define CABC_UI_MODE 1
#define CABC_STILL_MODE 2
#define CABC_MOVING_MODE 3

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

enum {  
	LCD_BIST_CHECK_FAIL = -1,
	LCD_BIST_CHECK_TIMEOUT = -2,
	LCD_BIST_CHECK_PASS = 0,
}; 

/*******************************************************************************
** Power ON Sequence(sleep mode to Normal mode)
*/
static char user_cmd_en[] = {
	0x00,
	0x00,
};

static char cmd2_ena1[] = {
	0xFF,
	0x19, 0x06, 0x01,
};

static char adrsft1[] = {
	0x00,
	0x80,
};

static char cmd2_ena2[] = {
	0xFF,
	0x19, 0x06,
};

static char tear_on_f0[] = {
	0x35,
	0xF0,
};

static char tear_on_00[] = {
	0x35,
	0x00,
};

static char set_pwm_duty[] = {
	0x51,
	0x00,
};

static char bl_enable[] = {
	0x53,
	0x2C,
};

static char adrsft2[] = {
	0x55,
	0x00,
};

/*
static char caset_data[] = {
	0x2A,
	0x00,0x00,0x04, 0x37,
};

static char paset_data[] = {
	0x2B,
	0x00,0x00,0x07,0x7f,
};
*/

static char display_on[] = {
	0x29,
};

static char exit_sleep[] = {
	0x11,
};

static char te_line[] = {
	0x44,
	0x03, 0x80,
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

static char cabc_set_mode_UI[] = {
	0x55,
	0x91,
};

static char cabc_set_mode_MOVING[] = {
	0x55,
	0x93,
};

static struct dsi_cmd_desc tianma_display_te_on_00_cmds[] = {
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(tear_on_00), tear_on_00},
};
static struct dsi_cmd_desc tianma_display_te_on_f0_cmds[] = {
	{DTYPE_DCS_WRITE1, 0, 10, WAIT_TYPE_US,
		sizeof(tear_on_f0), tear_on_f0},
};

static struct dsi_cmd_desc tianma_display_effect_on_cmds[] = {

};

static struct dsi_cmd_desc tianma_display_on_cmds[] = {
/*	
	{DTYPE_DCS_LWRITE, 0,10, WAIT_TYPE_US,
		sizeof(caset_data), caset_data},
	{DTYPE_DCS_LWRITE, 0,10, WAIT_TYPE_US,
		sizeof(paset_data), paset_data},
*/
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(user_cmd_en), user_cmd_en},
	{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
		sizeof(cmd2_ena1), cmd2_ena1},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(adrsft1), adrsft1},
	{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
		sizeof(cmd2_ena2), cmd2_ena2},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(set_pwm_duty), set_pwm_duty},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(bl_enable), bl_enable},
	{DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
		sizeof(adrsft2), adrsft2},
	{DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
		sizeof(te_line), te_line},
	{DTYPE_DCS_WRITE, 0, 150, WAIT_TYPE_MS,
		sizeof(exit_sleep), exit_sleep},
	{DTYPE_DCS_WRITE, 0, 50, WAIT_TYPE_MS,
		sizeof(display_on), display_on},
};

static struct dsi_cmd_desc tianma_cabc_ui_on_cmds[] = {
	{DTYPE_DCS_LWRITE, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_set_mode_UI), cabc_set_mode_UI},
};

/*static struct dsi_cmd_desc tianma_cabc_still_on_cmds[] = {
	{DTYPE_DCS_LWRITE, 0, 10, WAIT_TYPE_US,
	sizeof(cabc_set_mode_STILL), cabc_set_mode_STILL},
};*/

static struct dsi_cmd_desc tianma_cabc_moving_on_cmds[] = {
	{DTYPE_DCS_LWRITE, 0, 10, WAIT_TYPE_US,
		sizeof(cabc_set_mode_MOVING), cabc_set_mode_MOVING},
};

static struct dsi_cmd_desc tianma_display_off_cmds[] = {
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

static struct vcc_desc tianma_lcd_vcc_init_cmds[] = {
	/* vcc get */
	{DTYPE_VCC_GET, VCC_LCDIO_NAME, &vcc_lcdio, 0, 0, WAIT_TYPE_MS, 0},
	{DTYPE_VCC_GET, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 0, 0, WAIT_TYPE_MS, 0},
	/* vcc set voltage */
	{DTYPE_VCC_SET_VOLTAGE, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 3100000, 3100000, WAIT_TYPE_MS, 0},
};

static struct vcc_desc tianma_lcd_vcc_finit_cmds[] = {
	/* vcc put */
	{DTYPE_VCC_PUT, VCC_LCDIO_NAME, &vcc_lcdio, 0, 0, WAIT_TYPE_MS, 0},
	{DTYPE_VCC_PUT, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 0, 0, WAIT_TYPE_MS, 0},
};

static struct vcc_desc tianma_lcd_vcc_enable_cmds[] = {
	/* vcc enable */
	{DTYPE_VCC_ENABLE, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 0, 0, WAIT_TYPE_MS, 3},
	{DTYPE_VCC_ENABLE, VCC_LCDIO_NAME, &vcc_lcdio, 0, 0, WAIT_TYPE_MS, 3},
};

static struct vcc_desc tianma_lcd_vcc_disable_cmds[] = {
	/* vcc disable */
	{DTYPE_VCC_DISABLE, VCC_LCDIO_NAME, &vcc_lcdio, 0, 0, WAIT_TYPE_MS, 3},
	{DTYPE_VCC_DISABLE, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 0, 0, WAIT_TYPE_MS, 3},
};

/*******************************************************************************
** LCD IOMUX
*/
static struct pinctrl_data pctrl;

static struct pinctrl_cmd_desc tianma_lcd_pinctrl_init_cmds[] = {
	{DTYPE_PINCTRL_GET, &pctrl, 0},
	{DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
	{DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_IDLE},
};

static struct pinctrl_cmd_desc tianma_lcd_pinctrl_normal_cmds[] = {
	{DTYPE_PINCTRL_SET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
};

static struct pinctrl_cmd_desc tianma_lcd_pinctrl_lowpower_cmds[] = {
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

static struct gpio_desc tianma_lcd_gpio_request_cmds[] = {
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

static struct gpio_desc tianma_lcd_gpio_free_cmds[] = {
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

static struct gpio_desc tianma_lcd_gpio_sleep_free_cmds[] = {
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

static struct gpio_desc tianma_lcd_gpio_sleep_request_cmds[] = {
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

static struct gpio_desc tianma_lcd_gpio_sleep_lp_cmds[] = {
	/* backlight disable */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 1,
		GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 0},
};

static struct gpio_desc tianma_lcd_gpio_sleep_normal_cmds[] = {
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

static struct gpio_desc tianma_lcd_gpio_normal_cmds[] = {
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

static struct gpio_desc tianma_lcd_gpio_lowpower_cmds[] = {
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

static ssize_t mipi_lcd_model_show(struct platform_device *pdev,
	char *buf)
{
	return snprintf(buf, PAGE_SIZE, "tianma_OTM1906 5.5' CMD TFT 1080 x 1920\n");
}

static ssize_t mipi_lcd_hkadc_debug_show(struct platform_device *pdev, char *buf)
{
	return snprintf(buf, PAGE_SIZE, "%d\n", hkadc_buf*4);
}

static ssize_t mipi_lcd_hkadc_debug_store(struct platform_device *pdev,
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

static ssize_t mipi_tianma_lcd_cabc_mode_show(struct platform_device *pdev,
	char *buf)
{
	return snprintf(buf, PAGE_SIZE, "%d\n", cabc_mode);
}

static ssize_t mipi_tianma_lcd_cabc_mode_store(struct platform_device *pdev,
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
		cabc_mode =1;
		mipi_dsi_cmds_tx(tianma_cabc_ui_on_cmds, \
				ARRAY_SIZE(tianma_cabc_ui_on_cmds),\
				mipi_dsi0_base);
	} else if (flag==CABC_STILL_MODE ) {
		//PINE dont need
	} else if (flag==CABC_MOVING_MODE) {
		/* force cabc mode to video mode */
		cabc_mode =3;
		mipi_dsi_cmds_tx(tianma_cabc_moving_on_cmds, \
				ARRAY_SIZE(tianma_cabc_moving_on_cmds),\
				mipi_dsi0_base);
	}
	return snprintf((char *)buf, count, "%d\n", cabc_mode);
}

static int mipi_tianma_panel_set_fastboot(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	/* lcd pinctrl normal */
	pinctrl_cmds_tx(pdev, tianma_lcd_pinctrl_normal_cmds,
		ARRAY_SIZE(tianma_lcd_pinctrl_normal_cmds));

	/* lcd gpio request */
	gpio_cmds_tx(tianma_lcd_gpio_request_cmds,
		ARRAY_SIZE(tianma_lcd_gpio_request_cmds));

	/* backlight on */
	hisi_lcd_backlight_on(pdev);

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return 0;
}

static int mipi_tianma_panel_on(struct platform_device *pdev)
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
	};
#endif
	HISI_FB_INFO("fb%d, +!\n", hisifd->index);

	pinfo = &(hisifd->panel_info);
	mipi_dsi0_base = hisifd->mipi_dsi0_base;

	if (pinfo->lcd_init_step == LCD_INIT_POWER_ON) {
		if (false == gesture_func) {
			/* lcd vcc enable */
			vcc_cmds_tx(pdev, tianma_lcd_vcc_enable_cmds,
				ARRAY_SIZE(tianma_lcd_vcc_enable_cmds));
		} else
			HISI_FB_INFO("power on (gesture_func:%d)\n", gesture_func);

		pinfo->lcd_init_step = LCD_INIT_MIPI_LP_SEND_SEQUENCE;
	} else if (pinfo->lcd_init_step == LCD_INIT_MIPI_LP_SEND_SEQUENCE) {
		/* lcd pinctrl normal */
		pinctrl_cmds_tx(pdev, tianma_lcd_pinctrl_normal_cmds,
			ARRAY_SIZE(tianma_lcd_pinctrl_normal_cmds));

		if (false == gesture_func) {
			/* lcd gpio request */
			gpio_cmds_tx(tianma_lcd_gpio_request_cmds, \
				ARRAY_SIZE(tianma_lcd_gpio_request_cmds));

			/* lcd gpio normal */
			gpio_cmds_tx(tianma_lcd_gpio_normal_cmds, \
				ARRAY_SIZE(tianma_lcd_gpio_normal_cmds));
			mipi_dsi_cmds_tx(tianma_display_effect_on_cmds, \
				ARRAY_SIZE(tianma_display_effect_on_cmds), mipi_dsi0_base);
		} else {
			/* lcd gpio request */
			gpio_cmds_tx(tianma_lcd_gpio_sleep_request_cmds, \
				ARRAY_SIZE(tianma_lcd_gpio_sleep_request_cmds));

			/* backlights enable */
			gpio_cmds_tx(tianma_lcd_gpio_sleep_normal_cmds, \
				ARRAY_SIZE(tianma_lcd_gpio_sleep_normal_cmds));
			mipi_dsi_cmds_tx(tianma_display_effect_on_cmds, \
				ARRAY_SIZE(tianma_display_effect_on_cmds), mipi_dsi0_base);

			HISI_FB_INFO("lp send sequence (gesture_func:%d)\n", gesture_func);
		}

		if(runmode_is_factory()) {
			mipi_dsi_cmds_tx(tianma_display_te_on_f0_cmds, \
				ARRAY_SIZE(tianma_display_te_on_f0_cmds), mipi_dsi0_base);

		} else {
			mipi_dsi_cmds_tx(tianma_display_te_on_00_cmds, \
				ARRAY_SIZE(tianma_display_te_on_00_cmds), mipi_dsi0_base);

		}

		mipi_dsi_cmds_tx(tianma_display_on_cmds, \
			ARRAY_SIZE(tianma_display_on_cmds), mipi_dsi0_base);
		/* tianma_cabc_ui_on_cmds*/
		mipi_dsi_cmds_tx(tianma_cabc_ui_on_cmds, \
			ARRAY_SIZE(tianma_cabc_ui_on_cmds), mipi_dsi0_base);
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

static int mipi_tianma_panel_off(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_INFO("fb%d, +!\n", hisifd->index);
	//pr_jank(JL_KERNEL_LCD_POWER_OFF, "%s", "JL_KERNEL_LCD_POWER_OFF");

	/* backlight off */
	hisi_lcd_backlight_off(pdev);

	g_display_on = false;
	/* lcd display off sequence */
	mipi_dsi_cmds_tx(tianma_display_off_cmds, \
		ARRAY_SIZE(tianma_display_off_cmds), hisifd->mipi_dsi0_base);

	if (false == gesture_func) {
		/* lcd gpio lowpower(normal) */
		gpio_cmds_tx(tianma_lcd_gpio_lowpower_cmds, \
			ARRAY_SIZE(tianma_lcd_gpio_lowpower_cmds));

		/* lcd gpio free */
		gpio_cmds_tx(tianma_lcd_gpio_free_cmds, \
			ARRAY_SIZE(tianma_lcd_gpio_free_cmds));

		/* lcd pinctrl lowpower */
		pinctrl_cmds_tx(pdev, tianma_lcd_pinctrl_lowpower_cmds,
			ARRAY_SIZE(tianma_lcd_pinctrl_lowpower_cmds));

		/* lcd vcc disable */
		vcc_cmds_tx(pdev, tianma_lcd_vcc_disable_cmds,
			ARRAY_SIZE(tianma_lcd_vcc_disable_cmds));

	} else {
		HISI_FB_INFO("display_off (gesture_func:%d)\n", gesture_func);

		/*backlights disable*/
		gpio_cmds_tx(tianma_lcd_gpio_sleep_lp_cmds, \
			ARRAY_SIZE(tianma_lcd_gpio_sleep_lp_cmds));

		/* lcd gpio free */
		gpio_cmds_tx(tianma_lcd_gpio_sleep_free_cmds, \
			ARRAY_SIZE(tianma_lcd_gpio_sleep_free_cmds));

		/* lcd pinctrl normal */
		pinctrl_cmds_tx(pdev, tianma_lcd_pinctrl_normal_cmds,
			ARRAY_SIZE(tianma_lcd_pinctrl_normal_cmds));
	}

	if (hisifd->hisi_fb_shutdown) {
		ts_thread_stop_notify();
	}

	HISI_FB_INFO("fb%d, -!\n", hisifd->index);

	return 0;
}

static int mipi_tianma_panel_remove(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);

	if (!hisifd) {
		return 0;
	}

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	/* lcd vcc finit */
	vcc_cmds_tx(pdev, tianma_lcd_vcc_finit_cmds,
		ARRAY_SIZE(tianma_lcd_vcc_finit_cmds));

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

	struct dsi_cmd_desc  tianma_bl_level_adjust[] = {
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

	mipi_dsi_cmds_tx(tianma_bl_level_adjust, \
		ARRAY_SIZE(tianma_bl_level_adjust), mipi_dsi0_base);

	return 0;
}

static int mipi_tianma_panel_set_backlight(struct platform_device *pdev)
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

static int mipi_tianma_panel_set_display_region(struct platform_device *pdev,
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

static int mipi_tianma_check_reg_show(struct platform_device *pdev, char *buf)
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

static int mipi_tianma_mipi_detect_show(struct platform_device *pdev, char *buf)
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

static int mipi_tianma_panel_gram_checksum_show(struct platform_device *pdev, unsigned char *buf)
{
	ssize_t ret = 0;
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;
	u32 read_value = 0xFF;
	char packet_size[] = {0x01};
	int i = 0;

	struct dsi_cmd_desc set_packet_size[] = {
		{DTYPE_MAX_PKTSIZE, 0, 10, WAIT_TYPE_US,
			sizeof(packet_size), packet_size},
	};

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	mipi_dsi0_base = hisifd->dss_base + DSS_MIPI_DSI0_OFFSET;

	HISI_FB_INFO("fb%d, +.\n", hisifd->index);

	if (buf[0] == LCD_GRAM_CHECKSUM_ENABLE) { //enable
		HISI_FB_INFO("enable\n");
	} else if (buf[0] == LCD_GRAM_CHECKSUM_DISABLE) { //disable
		HISI_FB_INFO("disable\n");
	} else if (buf[0] == LCD_GRAM_CHECKSUM_READ) { //read
		HISI_FB_INFO("read\n");
		mipi_dsi_max_return_packet_size(set_packet_size, mipi_dsi0_base);

		outp32(mipi_dsi0_base + MIPIDSI_GEN_HDR_OFFSET, 0xAA06);
		if (!mipi_dsi_read(&read_value, mipi_dsi0_base)) {
			ret = LCD_GRAM_CHECKSUM_FAIL;
			HISI_FB_ERR("Read register 0xAA timeout\n");
			return ret;
		}

		buf[0] = read_value;

		for (i = 1; i < 8; i ++)
			buf[i]=0x00;

		HISI_FB_INFO("read_value = 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x\n", buf[0], buf[1],
			buf[2], buf[3], buf[4], buf[5], buf[6], buf[7]);

		HISI_FB_INFO("fb%d, -.\n", hisifd->index);

		return ret;
	}
}

static ssize_t mipi_tianma_panel_gram_checksum_store(struct platform_device *pdev,
	const char *buf, size_t count)
{
	return count;
}

static int mipi_tianma_panel_defect_check(struct platform_device *pdev, char *buf)
{
	snprintf(buf, PAGE_SIZE, "defect check pass\n");
	return LCD_BIST_CHECK_PASS;
}

static struct hisi_panel_info tianma_panel_info = {0};
static struct hisi_fb_panel_data tianma_panel_data = {
	.panel_info = &tianma_panel_info,
	.set_fastboot = mipi_tianma_panel_set_fastboot,
	.on = mipi_tianma_panel_on,
	.off = mipi_tianma_panel_off,
	.remove = mipi_tianma_panel_remove,
	.set_backlight = mipi_tianma_panel_set_backlight,
	.lcd_cabc_mode_show = mipi_tianma_lcd_cabc_mode_show,
	.lcd_cabc_mode_store = mipi_tianma_lcd_cabc_mode_store,
	.lcd_model_show = mipi_lcd_model_show,
	.lcd_hkadc_debug_show = mipi_lcd_hkadc_debug_show,
	.lcd_hkadc_debug_store = mipi_lcd_hkadc_debug_store,
	.set_display_region = mipi_tianma_panel_set_display_region,
	.lcd_check_reg = mipi_tianma_check_reg_show,
	.lcd_mipi_detect = mipi_tianma_mipi_detect_show,
	.lcd_gram_check_show = mipi_tianma_panel_gram_checksum_show,
	.lcd_gram_check_store = mipi_tianma_panel_gram_checksum_store,
	.lcd_bist_check = mipi_tianma_panel_defect_check,
};

static int mipi_tianma_probe(struct platform_device *pdev)
{
	int ret = 0;
	struct hisi_panel_info *pinfo = NULL;
	struct device_node *np = NULL;
	uint32_t bl_type = 0;

	if (hisi_fb_device_probe_defer(PANEL_MIPI_CMD))
		goto err_probe_defer;

	HISI_FB_DEBUG("+.\n");

	np = of_find_compatible_node(NULL, NULL, DTS_COMP_TIANMA_OTM1906);
	if (!np) {
		HISI_FB_ERR("NOT FOUND device node %s!\n", DTS_COMP_TIANMA_OTM1906);
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

	pdev->id = 1;
	/* init lcd panel info */
	pinfo = tianma_panel_data.panel_info;
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

	if(runmode_is_factory()) {
		pinfo->sbl_support = 0;
	} else {
		pinfo->sbl_support = 1;
	}

	pinfo->color_temperature_support = 1;
	pinfo->smart_bl.strength_limit = 160;
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

	pinfo->pxl_clk_rate = 150*1000000;

	/* lcd vcc init */
	ret = vcc_cmds_tx(pdev, tianma_lcd_vcc_init_cmds,
		ARRAY_SIZE(tianma_lcd_vcc_init_cmds));
	if (ret != 0) {
		HISI_FB_ERR("LCD vcc init failed!\n");
		goto err_return;
	}

	if (fastboot_set_needed) {
		vcc_cmds_tx(pdev, tianma_lcd_vcc_enable_cmds,
			ARRAY_SIZE(tianma_lcd_vcc_enable_cmds));
	}

	/* lcd pinctrl init */
	ret = pinctrl_cmds_tx(pdev, tianma_lcd_pinctrl_init_cmds,
		ARRAY_SIZE(tianma_lcd_pinctrl_init_cmds));
	if (ret != 0) {
		HISI_FB_ERR("Init pinctrl failed, defer\n");
		goto err_return;
	}

	/* alloc panel device data */
	ret = platform_device_add_data(pdev, &tianma_panel_data,
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
	.compatible = DTS_COMP_TIANMA_OTM1906,
	.data = NULL,
	},
	{},
};
MODULE_DEVICE_TABLE(of, hisi_panel_match_table);

static struct platform_driver this_driver = {
	.probe = mipi_tianma_probe,
	.remove = NULL,
	.suspend = NULL,
	.resume = NULL,
	.shutdown = NULL,
	.driver = {
	.name = "mipi_tianma_OTM1906",
	.of_match_table = of_match_ptr(hisi_panel_match_table),
	},
};

static int __init mipi_tianma_panel_init(void)
{
	int ret = 0;

	if (get_lcd_type() != TIANMA_OTM1906_LCD) {
		HISI_FB_INFO("lcd type is not TIANMA_OTM1906_LCD, return!\n");
		return ret;
	}

	ret = platform_driver_register(&this_driver);
	if (ret) {
		HISI_FB_ERR("platform_driver_register failed, error=%d!\n", ret);
		return ret;
	}

	return ret;
}

module_init(mipi_tianma_panel_init);
