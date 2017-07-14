/*
  * hisilicon udp board id driver, hisi_udp_board_id.c
  *
  * Copyright (c) 2013 Hisilicon Technologies CO., Ltd.
  *
  */
#ifndef LCD_TYPE_HI3XXX_
#define LCD_TYPE_HI3XXX_
#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/printk.h>
#include <linux/init.h>

#define LCD_TYPE_BUF_SIZE		20
#define TP_COLOR_BUF_SIZE		20

#define LCD_TYPE_STR_NOLCD		"NO_LCD"
#define LCD_TYPE_STR_TOSHIBA_MDY90_LCD		"TOSHIBA_MDY90_LCD"
#define LCD_TYPE_STR_JDI_OTM1902B_LCD		"JDI_OTM1902B_LCD"
#define LCD_TYPE_STR_JDI_NT35695_LCD			"JDI_NT35695_LCD"
#define LCD_TYPE_STR_JDI_NT35695B_LCD			"JDI_NT35695B_LCD"
#define LCD_TYPE_STR_TIANMA_OTM1906_LCD			"TIANMA_OTM1906_LCD"


static unsigned char lcd_type_buf[LCD_TYPE_BUF_SIZE];
static unsigned char tp_color_buf[TP_COLOR_BUF_SIZE];

#define         UNKNOWN_LCD     0
#define TOSHIBA_MDY90_LCD       1
#define JDI_OTM1902B_LCD        2
#define JDI_NT35695_LCD         3
#define JDI_NT35695B_LCD        4
#define TIANMA_OTM1906_LCD   5
int get_lcd_type(void);
#endif
