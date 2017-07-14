/*
  * hisilicon udp board id driver, hisi_udp_board_id.c
  *
  * Copyright (c) 2013 Hisilicon Technologies CO., Ltd.
  *
  */
#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/printk.h>
#include <linux/init.h>
#include <linux/hisi/hi3xxx-lcd_type.h>

#define LCD_TYPE_BUF_SIZE		20
#define TP_COLOR_BUF_SIZE		20

#define LCD_TYPE_STR_NOLCD		"NO_LCD"
#define LCD_TYPE_STR_TOSHIBA_MDY90_LCD		"TOSHIBA_MDY90_LCD"
#define LCD_TYPE_STR_JDI_OTM1902B_LCD		"JDI_OTM1902B_LCD"
#define LCD_TYPE_STR_JDI_NT35695_LCD			"JDI_NT35695_LCD"
#define LCD_TYPE_STR_JDI_NT35695B_LCD			"JDI_NT35695B_LCD"


static unsigned char lcd_type_buf[LCD_TYPE_BUF_SIZE];
static unsigned char tp_color_buf[TP_COLOR_BUF_SIZE];

#define         UNKNOWN_LCD     0
#define TOSHIBA_MDY90_LCD       1
#define JDI_OTM1902B_LCD        2
#define JDI_NT35695_LCD         3
#define JDI_NT35695B_LCD        4
/******************************************************************************
Function:	    get_lcd_type
Description:	    读取MMU扣板对应的LCD类型
Input:		    none
Output:		    none
Return:		    01: TOSHIBA_MDY90_LCD  02: JDI_OTM1902B_LCD 其他: ERROR
******************************************************************************/

int get_lcd_type(void)
{
	if (0 == strncmp(lcd_type_buf, LCD_TYPE_STR_NOLCD, strlen(LCD_TYPE_STR_NOLCD))) {
		pr_info("%s : found no lcd.\n", __func__);
		return UNKNOWN_LCD;
	} else if (0 == strncmp(lcd_type_buf, LCD_TYPE_STR_TOSHIBA_MDY90_LCD, strlen(LCD_TYPE_STR_TOSHIBA_MDY90_LCD))) {
		pr_info("%s : found d2 lcd.\n", __func__);
		return TOSHIBA_MDY90_LCD;
	} else if (0 == strncmp(lcd_type_buf, LCD_TYPE_STR_JDI_OTM1902B_LCD, strlen(LCD_TYPE_STR_JDI_OTM1902B_LCD))) {
		pr_info("%s : found jdi_OTM1902B lcd.\n", __func__);
		return JDI_OTM1902B_LCD;
	} else if (0 == strncmp(lcd_type_buf, LCD_TYPE_STR_JDI_NT35695_LCD, strlen(LCD_TYPE_STR_JDI_NT35695_LCD))) {
		pr_info("%s : found jdi_NT35695 lcd.\n", __func__);
		return JDI_NT35695_LCD;
	} else if (0 == strncmp(lcd_type_buf, LCD_TYPE_STR_JDI_NT35695B_LCD, strlen(LCD_TYPE_STR_JDI_NT35695B_LCD))) {
		pr_info("%s : found jdi_NT35695B lcd.\n", __func__);
		return JDI_NT35695B_LCD;
	} else  if (0 == strncmp(lcd_type_buf, LCD_TYPE_STR_TIANMA_OTM1906_LCD, strlen(LCD_TYPE_STR_TIANMA_OTM1906_LCD))) {
		pr_info("%s : found tianma_OTM1906 lcd.\n", __func__);
		return TIANMA_OTM1906_LCD;
	} else {
		pr_info("%s : there is no lcd.\n", __func__);
		return UNKNOWN_LCD;
	}
}
EXPORT_SYMBOL_GPL(get_lcd_type);

static int __init early_parse_lcd_type_cmdline(char *arg)
{
	int len = 0;
	memset(lcd_type_buf, 0, sizeof(lcd_type_buf));
	if (arg) {
		len = strlen(arg);

		if (len > sizeof(lcd_type_buf)) {
			len = sizeof(lcd_type_buf);
		}
		memcpy(lcd_type_buf, arg, len);
	} else {
		pr_info("%s : arg is NULL\n", __func__);
	}

	return 0;
}
early_param("LCD_TYPE", early_parse_lcd_type_cmdline);

/******************************************************************************
Function:	    get_tp_color
******************************************************************************/
int get_tp_color(void)
{
	int tp_color;
	pr_info("tp color is %s\n", tp_color_buf);

	tp_color = (int)simple_strtol(tp_color_buf, NULL, 0);
	return tp_color;
}
EXPORT_SYMBOL_GPL(get_tp_color);

static int __init early_parse_tp_color_cmdline(char *arg)
{
	int len = 0;
	memset(tp_color_buf, 0, sizeof(tp_color_buf));
	if (arg) {
		len = strlen(arg);

		if (len > sizeof(tp_color_buf)) {
			len = sizeof(tp_color_buf);
		}
		memcpy(tp_color_buf, arg, len);
	} else {
		pr_info("%s : arg is NULL\n", __func__);
	}

	return 0;
}
early_param("TP_COLOR", early_parse_tp_color_cmdline);
