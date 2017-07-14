/* Copyright (c) 2008-2011, Hisilicon Tech. Co., Ltd. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *	 * Redistributions of source code must retain the above copyright
 *	   notice, this list of conditions and the following disclaimer.
 *	 * Redistributions in binary form must reproduce the above
 *	   copyright notice, this list of conditions and the following
 *	   disclaimer in the documentation and/or other materials provided
 *	   with the distribution.
 *	 * Neither the name of Code Aurora Forum, Inc. nor the names of its
 *	   contributors may be used to endorse or promote products derived
 *	   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/platform_device.h>
#include <linux/delay.h>
#include <linux/clk.h>
#include <linux/pwm.h>
#include <linux/gpio.h>

#include <linux/hisi/hi6xxx-lcd_type.h>

#include "balong_fb.h"
#include "balong_fb_def.h"
#include "mipi_dsi.h"
#include "mipi_reg.h"
#include <linux/lcd_tuning.h>

#if defined (CONFIG_HUAWEI_DSM)
#include <dsm/dsm_pub.h>
#endif

#include <huawei_platform/log/log_jank.h>
extern int enable_PT_test;
static int is_vcc_disabled = 1;
static int g_support_mode = 1;
#define PWM_LEVEL 100

/* < DTS2014081410865, Modified by z00248697, 2014/08/25 begin*/
/*< DTS2014063002494, Added by z00248697. 2014/06/30 begin */
#define CMI_CABC_ENABLED  1
//As the reg0x55 used for CABC and IE/SRE, so add two global variables to mark respective status.
static int g_IE_SRE_level = 0x80;

/* DTS2014063002494, Added by z00248697. 2014/06/30 end> */
/* DTS2014081410865, Modified by z00248697, 2014/08/25 end >*/

/*BEGIN  PN: DTS2014072603548, Modified by h00238058, 2014.07.26*/
/*--------cmi power on initial code -----------*/
// parameter named cmi_cex used to protect the property of gamma curve and display effect with CE and CABC on
static char cmi_page2[] =
{
    0xF0,
    0x55, 0xAA, 0x52, 0x08, 0x02,
};

static char cmi_gamma1[] =
{
    0xED,
    0x03,
};

static char cmi_gamma2[] =
{
    0xEE,
    0x03,
};

static char cmi_gamma3[] =
{
    0xB0,
    0x00, 0x01, 0x00, 0x47, 0x00, 0x6D, 0x00, 0x88, 0x00, 0x9C, 0x00, 0xBC, 0x00, 0xD6, 0x01, 0x08,
};

static char cmi_gamma4[] =
{
    0xB1,
    0x01, 0x2E, 0x01, 0x69, 0x01, 0x93, 0x01, 0xD7, 0x02, 0x0F, 0x02, 0x10, 0x02, 0x46, 0x02, 0x82,
};

static char cmi_gamma5[] =
{
    0xB2,
    0x02, 0xA7, 0x02, 0xDA, 0x02, 0xFD, 0x03, 0x2F, 0x03, 0x4F, 0x03, 0x7B, 0x03, 0x9A, 0x03, 0xBC,
};

static char cmi_gamma6[] =
{
    0xB3,
    0x03, 0xD3, 0x03, 0xD6,
};

static char cmi_gamma7[] =
{
    0xB4,
    0x00, 0x01, 0x00, 0x40, 0x00, 0x67, 0x00, 0x84, 0x00, 0x98, 0x00, 0xB8, 0x00, 0xD3, 0x01, 0x05,
};

static char cmi_gamma8[] =
{
    0xB5,
     0x01, 0x2C, 0x01, 0x67, 0x01, 0x92, 0x01, 0xD6, 0x02, 0x0E, 0x02, 0x10, 0x02, 0x46, 0x02, 0x82,
};

static char cmi_gamma9[] =
{
    0xB6,
    0x02, 0xA7, 0x02, 0xDA, 0x02, 0xFD, 0x03, 0x2E, 0x03, 0x4E, 0x03, 0x78, 0x03, 0x95, 0x03, 0xB7,
};

static char cmi_gamma10[] =
{
    0xB7,
    0x03, 0xD2, 0x03, 0xD6,
};

static char cmi_gamma11[] =
{
    0xB8,
    0x00, 0xEC, 0x00, 0xF2, 0x00, 0xF8, 0x01, 0x02, 0x01, 0x0A, 0x01, 0x17, 0x01, 0x25, 0x01, 0x44,
};

static char cmi_gamma12[] =
{
    0xB9,
    0x01, 0x5E, 0x01, 0x8A, 0x01, 0xAC, 0x01, 0xE7, 0x02, 0x1A, 0x02, 0x1C, 0x02, 0x4F, 0x02, 0x89,
};

static char cmi_gamma13[] =
{
    0xBA,
    0x02, 0xAE, 0x02, 0xE3, 0x03, 0x08, 0x03, 0x46, 0x03, 0x60, 0x03, 0x7C, 0x03, 0x91, 0x03, 0xB3,
};

static char cmi_gamma14[] =
{
    0xBB,
    0x03, 0xD2, 0x03, 0xD6,
};
static char cmi_ce0[] =
{
    0xF0,
    0x55, 0xAA, 0x52, 0x08, 0x00,
};

static char cmi_ce1[] =
{
    0xCC,
    0x40, 0x36, 0xBA, 0x00, 0x00, 0x00
};

static char cmi_ce2[] =
{
    0xCE,
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10
};

static char cmi_ce3[] =
{
    0xD1,
    0x00, 0x02, 0x06, 0x0A, 0x0E, 0x12, 0x15, 0x18, 0x18, 0x18, 0x16, 0x14, 0x12, 0x0A, 0x04, 0x00
};

static char cmi_ce4[] =
{
    0xD2,
    0x00, 0x02, 0x06, 0x0A, 0x0E, 0x12, 0x15, 0x18, 0x18, 0x18, 0x16, 0x14, 0x12, 0x0A, 0x04, 0x00
};

static char cmi_ce5[] =
{
    0xD7,
    0xE4, 0x64, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static char cmi_ce6[] =
{
    0xD8,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x64
};

static char cmi_ce7[] =
{
    0xE6,
    0xFF, 0xFF, 0xFA, 0xFA
};

static char cmi_power_on_page5[] =
{
    0xF0,
    0x55, 0xAA, 0x52, 0x08, 0x05,
};

static char cmi_power_on_ed[] =
{
    0xed,
    0x33,
};

static char cmi_power_on_page0[] =
{
    0xF0,
    0x55, 0xAA, 0x52, 0x08, 0x00,
};
// Set the pwm frequence to 39.06KHZ
static char cmi_power_on_PWM[] =
{
    0xD9,
    0x01, 0x01, 0x00,
};

static char cmi_power_on_TP_disturb[] =
{
    0xB8,
    0x00, 0x00, 0x00,0x00,
};
static char cmi_power_on_TP_disturb_BB[] =
{
    0xBB,
    0x24,0x24,
};

static char cmi_power_on_TP_disturb_C6[] =
{
    0xC6,
    0x31,
};

static char bl_level_0[] =
{
    0x51,
    0x00,
};

static char bl_level[] =
{
    0x51,
    0x00, //0xd0, //0xd0
};

static char bl_enable[] =
{
    0x53,
    0x24,
};

//CABC
/*< DTS2014063002494, Added by z00248697. 2014/06/30 begin */
#if  CMI_CABC_ENABLED
//Init cabc to UI mode when panel on
/* < DTS2014081410865, modified by z00248697, 2014/08/25 begin*/
static char cabc_mode[] =
{
    0x55,
    0x81,
};
/* DTS2014081410865, modified by z00248697, 2014/08/25 end >*/
#endif
/* DTS2014063002494, Added by z00248697. 2014/06/30 end> */

static char cmi_power_on_param5E[] =
{
    0x5E,
    0x28,
};

static char exit_sleep[] =
{
    0x11,
};

static char display_on[] =
{
    0x29,
};

/*******************************************************************************
** Power OFF Sequence(Normal to power off)
*/
static char display_off[] =
{
    0x28,
};

static char enter_sleep[] =
{
    0x10,
};

static struct dsi_cmd_desc cmi_display_on_cmds[] =
{
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_page2), cmi_page2
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma1), cmi_gamma1
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma2), cmi_gamma2
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma3), cmi_gamma3
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma4), cmi_gamma4
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma5), cmi_gamma5
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma6), cmi_gamma6
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma7), cmi_gamma7
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma8), cmi_gamma8
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma9), cmi_gamma9
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma10), cmi_gamma10
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma11), cmi_gamma11
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma12), cmi_gamma12
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma13), cmi_gamma13
    },
    {
        DTYPE_GEN_LWRITE, 0, 10, WAIT_TYPE_US,
        sizeof(cmi_gamma14), cmi_gamma14
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_ce0), cmi_ce0
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_ce1), cmi_ce1
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_ce2), cmi_ce2
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_ce3), cmi_ce3
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_ce4), cmi_ce4
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_ce5), cmi_ce5
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_ce6), cmi_ce6
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_ce7), cmi_ce7
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_power_on_page5), cmi_power_on_page5
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_power_on_ed), cmi_power_on_ed
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_power_on_page0), cmi_power_on_page0
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_power_on_PWM), cmi_power_on_PWM
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_power_on_TP_disturb), cmi_power_on_TP_disturb
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_power_on_TP_disturb_BB), cmi_power_on_TP_disturb_BB
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_power_on_TP_disturb_C6), cmi_power_on_TP_disturb_C6
    },

    {
        DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
        sizeof(bl_level), bl_level
    },
    {
        DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
        sizeof(bl_enable), bl_enable
    },
    /* < DTS2014081410865, Added by z00248697, 2014/08/25 begin*/
    #if  CMI_CABC_ENABLED
    {
        DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
        sizeof(cabc_mode), cabc_mode
    },
    #endif
    /* DTS2014081410865, Added by z00248697, 2014/08/25 end >*/
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(cmi_power_on_param5E), cmi_power_on_param5E
    },
    {
        DTYPE_DCS_WRITE, 0, 120, WAIT_TYPE_MS,
        sizeof(exit_sleep), exit_sleep
    },
    {
        DTYPE_DCS_WRITE, 0, 20, WAIT_TYPE_MS,
        sizeof(display_on), display_on
    },
};
/*< DTS2014082100976 lijianzhao 20140906 begin */
static struct dsi_cmd_desc cmi_display_off_cmds[] =
{
    {
        DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
        sizeof(bl_level_0), bl_level_0
    },
    {
        DTYPE_DCS_WRITE, 0, 20, WAIT_TYPE_MS,
        sizeof(display_off), display_off
    },
    {
        DTYPE_DCS_WRITE, 0, 120, WAIT_TYPE_MS,
        sizeof(enter_sleep), enter_sleep
    }
};
/* DTS2014082100976 lijianzhao 20140906 end >*/
/*END  PN: DTS2014072603548, Modified by h00238058, 2014.07.26*/

/************************************************************
 *
 * LCD VCC
 *
 ************************************************************/

#define VCC_BACKLIGHT_NAME		"lcd_backlight"
#define VCC_LCDBIAS_NAME		"vcc_lcdbias"
#define VCC_LCD_VSN_NAME		"lcd_vsn"
#define VCC_LCD_VSP_NAME		"lcd_vsp"

 /* scharg regulator */
static struct regulator *lcd_bl_vcc;
static struct regulator *lcd_bias_vcc;
static struct regulator *lcd_vsn_vcc;
static struct regulator *lcd_vsp_vcc;

static struct vcc_desc cmi_lcd_vcc_get_cmds[] = {
    /* vcc get */
    {DTYPE_VCC_GET, VCC_BACKLIGHT_NAME, &lcd_bl_vcc,   0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_GET, VCC_LCDBIAS_NAME,   &lcd_bias_vcc, 0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_GET, VCC_LCD_VSN_NAME,   &lcd_vsn_vcc,  0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_GET, VCC_LCD_VSP_NAME,   &lcd_vsp_vcc,  0, 0, 0, 0, 0, 0},
};

static struct vcc_desc cmi_lcd_vcc_set_cmds[] = {
    /* vcc set voltage */
    {DTYPE_VCC_SET_VOLTAGE, VCC_LCDBIAS_NAME, &lcd_bias_vcc,  0, 0, 5400000, 5400000, 0, 0},
    {DTYPE_VCC_SET_VOLTAGE, VCC_LCD_VSP_NAME, &lcd_vsp_vcc,   0, 0, 5400000, 5400000, 0, 0},
    {DTYPE_VCC_SET_VOLTAGE, VCC_LCD_VSN_NAME, &lcd_vsn_vcc,   0, 0, 5400000, 5400000, 0, 0},
};

static struct vcc_desc cmi_lcd_vcc_put_cmds[] = {
	/* vcc put */
    {DTYPE_VCC_PUT, VCC_BACKLIGHT_NAME, &lcd_bl_vcc,   0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_PUT, VCC_LCDBIAS_NAME,   &lcd_bias_vcc, 0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_PUT, VCC_LCD_VSN_NAME,   &lcd_vsn_vcc,  0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_PUT, VCC_LCD_VSP_NAME,   &lcd_vsp_vcc,  0, 0, 0, 0, 0, 0},
};

static struct vcc_desc cmi_lcd_vcc_enable_cmds[] = {
	/* vcc enable */
    {DTYPE_VCC_ENABLE, VCC_LCDBIAS_NAME,   &lcd_bias_vcc, WAIT_TYPE_MS, 12, 0, 0, 0, 0},
    {DTYPE_VCC_ENABLE, VCC_LCD_VSP_NAME,   &lcd_vsp_vcc,  WAIT_TYPE_MS, 10, 0, 0, 0, 0},
    {DTYPE_VCC_ENABLE, VCC_LCD_VSN_NAME,   &lcd_vsn_vcc,  WAIT_TYPE_MS, 50, 0, 0, 0, 0},
};

static struct vcc_desc cmi_lcd_vcc_disable_cmds[] = {
	/* vcc disable */
    {DTYPE_VCC_DISABLE, VCC_LCD_VSN_NAME,   &lcd_vsn_vcc,  WAIT_TYPE_MS, 5, 0, 0, 0, 0},
    {DTYPE_VCC_DISABLE, VCC_LCD_VSP_NAME,   &lcd_vsp_vcc,  WAIT_TYPE_MS, 5, 0, 0, 0, 0},
    {DTYPE_VCC_DISABLE, VCC_LCDBIAS_NAME,   &lcd_bias_vcc, WAIT_TYPE_MS, 1, 0, 0, 0, 0},
};

static struct vcc_desc cmi_lcd_bl_enable_cmds[] = {
    /* backlight enable */
    {DTYPE_VCC_ENABLE, VCC_BACKLIGHT_NAME, &lcd_bl_vcc,   WAIT_TYPE_MS, 10, 0, 0, 0, 0},
};

static struct vcc_desc cmi_lcd_bl_disable_cmds[] = {
    /* backlight disable */
    {DTYPE_VCC_DISABLE, VCC_BACKLIGHT_NAME, &lcd_bl_vcc,  WAIT_TYPE_MS, 1, 0, 0, 0, 0},
};

/************************************************************
 *
 * LCD GPIO PINCTRL
 *
 ************************************************************/
static struct pinctrl_data pctrl;

static struct pinctrl_cmd_desc cmi_lcd_pinctrl_init_cmds[] = {
    {DTYPE_PINCTRL_GET,       &pctrl, 0},
    {DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
    {DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_IDLE},
};
static struct pinctrl_cmd_desc cmi_lcd_pinctrl_normal_cmds[] = {
    {DTYPE_PINCTRL_SET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
};
static struct pinctrl_cmd_desc cmi_lcd_pinctrl_lowpower_cmds[] = {
    {DTYPE_PINCTRL_SET, &pctrl, DTYPE_PINCTRL_STATE_IDLE},
};

#define GPIO_LCD_RESET_NAME      "lcd_reset_gpio"

static u32 gpio_lcd_reset;

static struct gpio_desc cmi_lcd_gpio_get_cmds[] = {
    /* reset */
    {DTYPE_GPIO_GET, WAIT_TYPE_MS, 0, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
};
static struct gpio_desc cmi_lcd_gpio_request_cmds[] = {
    /* reset */
    {DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
};

static struct gpio_desc cmi_lcd_gpio_free_cmds[] = {
    /* reset */
    {DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
};
/*< DTS2014082100976 lijianzhao 20140906 begin */
static struct gpio_desc cmi_lcd_gpio_normal_cmds[] = {
    /* reset */
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 1},
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 40,GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 1},

};

static struct gpio_desc cmi_lcd_gpio_lowpower_cmds[] = {
    /* reset */
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 1, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
};

/* DTS2014082100976 lijianzhao 20140906 end >*/
static volatile bool g_display_on;
static struct balong_fb_panel_data cmi_panel_data;


/******************************************************************************/
/* < DTS2014080200942, Modified by z00248697, 2014/08/08 begin*/
/*< DTS2014063002494, Added by z00248697. 2014/06/30 begin */
static struct lcd_tuning_dev *p_tuning_dev = NULL;
/* DTS2014063002494, Added by z00248697. 2014/06/30 end> */
/* DTS2014080200942, Modified by z00248697, 2014/08/08 end >*/

//show lcd_info
static ssize_t cmi_lcd_info_show(struct device* dev,
                                 struct device_attribute* attr, char* buf)
{
    int ret = 0;
    struct balong_panel_info* pinfo = NULL;

    pinfo = cmi_panel_data.panel_info;
    /* BEGIN PN:DTS2014073104481 , Added by z00280572, 2014/08/05*/
    snprintf(buf, PAGE_SIZE,"%s %d x %d\n",g_lcd_name_buf,pinfo->xres, pinfo->yres);
    /* END PN:DTS2014073104481 , Added by z00280572, 2014/08/05*/
    ret = strlen(buf) + 1;

    return ret;
}

/* BEGIN PN:DTS2014062806461 , Added by z00280572, 2014/06/30*/
/* BEGIN PN:DTS2014073103697 , Added by z00280572, 2014/07/31*/
#define CMI_ESD_DEBUG	0
/* END PN:DTS2014073103697 , Added by z00280572, 2014/07/31*/
#if CMI_ESD_DEBUG
/*for esd test*/
static int esd_flag = 0;
static ssize_t cmi_show_esd_test(struct device* dev,
                                 struct device_attribute* attr, char* buf)
{
    return sprintf(buf, "%d\n", esd_flag);
}
static ssize_t cmi_store_esd_test(struct device* dev,
                                  struct device_attribute* attr, const char* buf, size_t count)
{
    int ret = 0;
    unsigned long val = 0;

    ret = strict_strtoul(buf, 0, &val);
    if (ret)
    { return ret; }

    esd_flag = val;
    return sprintf((char*)buf, "%d\n", esd_flag);
}
static DEVICE_ATTR(esd_test, 0644, cmi_show_esd_test, cmi_store_esd_test);
#endif
/* END PN:DTS2014062806461 , Added by z00280572, 2014/06/30*/

static DEVICE_ATTR(lcd_info, S_IRUGO, cmi_lcd_info_show, NULL);


static struct attribute* cmi_attrs[] =
{
    &dev_attr_lcd_info.attr,
    /* BEGIN PN:DTS2014062806461 , Added by z00280572, 2014/06/30*/
#if CMI_ESD_DEBUG
    /*for esd test*/
    &dev_attr_esd_test.attr,
#endif
    /* END PN:DTS2014062806461 , Added by z00280572, 2014/06/30*/
    NULL,
};

static struct attribute_group cmi_attr_group =
{
    .attrs = cmi_attrs,
};

static int cmi_sysfs_init(struct platform_device* pdev)
{
    int ret = 0;
    ret = sysfs_create_group(&pdev->dev.kobj, &cmi_attr_group);
    if (ret)
    {
        balongfb_loge("create sysfs file failed!\n");
        return ret;
    }
    return 0;
}

static void cmi_sysfs_deinit(struct platform_device* pdev)
{
    sysfs_remove_group(&pdev->dev.kobj, &cmi_attr_group);
}

static int mipi_cmi_panel_on(struct platform_device *pdev)
{
    struct balong_fb_data_type* balongfd = NULL;
    struct balong_panel_info* pinfo = NULL;
	/* BEGIN PN:DTS2014071800122 , modified by z00280572, 2014/07/23*/
	struct balong_fb_panel_data *pdata = NULL;
	/* END PN:DTS2014071800122 , modified by z00280572, 2014/07/23*/

#if defined (CONFIG_HUAWEI_DSM)
    u8* ade_base = NULL;
    u32 int_st0 = 0, int_st1 = 0;
#endif


    BUG_ON(pdev == NULL);

    pr_info("%s enter succ!\n", __func__);
    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);

#if defined (CONFIG_HUAWEI_DSM)
    ade_base = balongfd->ade_base;
#endif

    pinfo = &(balongfd->panel_info);
    pr_info("%s,pinfo->lcd_init_step = %d!\n", __func__, pinfo->lcd_init_step);

	if (pinfo->lcd_init_step == LCD_INIT_POWER_ON)
	{
		/* lcd set voltage */
		vcc_cmds_tx(NULL, cmi_lcd_vcc_set_cmds, \
			ARRAY_SIZE(cmi_lcd_vcc_set_cmds));

		pinfo->lcd_init_step = LCD_INIT_SEND_SEQUENCE;
	}
	else if (pinfo->lcd_init_step == LCD_INIT_SEND_SEQUENCE)
	{
		if (!g_display_on) {
            /*Jank log*/
            LOG_JANK_D(JLID_KERNEL_LCD_POWER_ON, "%s", "JL_KERNEL_LCD_POWER_ON");

            /* lcd pinctrl normal */
            pinctrl_cmds_tx(pdev, cmi_lcd_pinctrl_normal_cmds, \
                ARRAY_SIZE(cmi_lcd_pinctrl_normal_cmds));

            /* lcd gpio request */
            gpio_cmds_tx(NULL, cmi_lcd_gpio_request_cmds, \
                ARRAY_SIZE(cmi_lcd_gpio_request_cmds));

            /* lcd vcc enable */
            if(1==is_vcc_disabled)
            {
                balongfb_logi("enable VSP and VSN \n");
                vcc_cmds_tx(NULL, cmi_lcd_vcc_enable_cmds, \
                ARRAY_SIZE(cmi_lcd_vcc_enable_cmds));
            }
            else
            {
                /* lcd vcc does not enable vsp_vsn*/
                balongfb_logi("VSP VSN does not power on for is_vcc_disabled = %d\n",is_vcc_disabled);
            }
            /* lcd gpio normal */
            gpio_cmds_tx(NULL, cmi_lcd_gpio_normal_cmds, \
                ARRAY_SIZE(cmi_lcd_gpio_normal_cmds));
            /*< DTS2014082100976 lijianzhao 20140906 begin */
            /* remove lcd backlight enable */

            /* lcd display on sequence */
            mipi_dsi_cmds_tx(cmi_display_on_cmds, \
                ARRAY_SIZE(cmi_display_on_cmds), balongfd->dsi_base);

			g_display_on = true;
            /* DTS2014082100976 lijianzhao 20140906 end >*/
			/* BEGIN PN:DTS2014071800122 , modified by z00280572, 2014/07/23*/
			/*first set sbl to panel*/
			if(balongfd->panel_info.sbl_enable)
			{
				pdata = (struct balong_fb_panel_data *)balongfd->pdev->dev.platform_data;
				if(pdata->set_sre != NULL)
				{
					pdata->set_sre(balongfd->pdev, balongfd->sbl_enable, balongfd->sbl_lsensor_value);
				}
			}
			/* END PN:DTS2014071800122 , modified by z00280572, 2014/07/23*/
        }
    }
    else
    {
        balongfb_loge("failed to init lcd!\n");
    }

    pr_info("%s exit succ!\n", __func__);

#if defined (CONFIG_HUAWEI_DSM)
    int_st0 = inp32(ade_base +  MIPIDSI_INT_ST0_ADDR);
    int_st1 = inp32(ade_base +  MIPIDSI_INT_ST1_ADDR);
    if ((0x00 != int_st0 || 0x00 != int_st1) && (!dsm_client_ocuppy(lcd_dclient)))
    {
        dsm_client_record(lcd_dclient, "LCD dsi status. int_st0:0x%x,\
		int_st1:0x%x.\n", int_st0, int_st1);
        dsm_client_notify(lcd_dclient, DSM_LCD_STATUS_ERROR_NO);
    }
#endif

    return 0;
}

static int mipi_cmi_panel_off(struct platform_device* pdev)
{
    struct balong_fb_data_type* balongfd = NULL;

    BUG_ON(pdev == NULL);
    pr_info("%s enter succ!\n", __func__);

    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);

	if (g_display_on)
	{
        /*Jank log*/
        LOG_JANK_D(JLID_KERNEL_LCD_POWER_OFF, "%s", "JL_KERNEL_LCD_POWER_OFF");

        /* lcd display off sequence */
        mipi_dsi_cmds_tx(cmi_display_off_cmds, \
            ARRAY_SIZE(cmi_display_off_cmds), balongfd->dsi_base);

        /* shutdown d_phy */
        set_MIPIDSI_PHY_RSTZ(0);

        /* lcd gpio lowpower */
        gpio_cmds_tx(NULL, cmi_lcd_gpio_lowpower_cmds, \
            ARRAY_SIZE(cmi_lcd_gpio_lowpower_cmds));
        /* lcd gpio free */
        gpio_cmds_tx(NULL, cmi_lcd_gpio_free_cmds, \
            ARRAY_SIZE(cmi_lcd_gpio_free_cmds));

        /* lcd pinctrl lowpower */
        pinctrl_cmds_tx(pdev, cmi_lcd_pinctrl_lowpower_cmds, \
            ARRAY_SIZE(cmi_lcd_pinctrl_lowpower_cmds));

        /* lcd vcc disable */
        if((!enable_PT_test) || (NULL == strstr(saved_command_line, "androidboot.swtype=factory")))
        {
            balongfb_logi("disable VSP and VSN \n");
            vcc_cmds_tx(NULL, cmi_lcd_vcc_disable_cmds, \
            ARRAY_SIZE(cmi_lcd_vcc_disable_cmds));
            is_vcc_disabled = 1;
        }
        else
        {
            is_vcc_disabled = 0;
            balongfb_logi("VSP/VSN do not power off for enable_PT_test = %d\n",enable_PT_test);
        }
        /*< DTS2014082100976 lijianzhao 20140906 begin */
        /* remove lcd backlight disable */
        /* DTS2014082100976 lijianzhao 20140906 end >*/
        g_display_on = false;

    }

    pr_info("%s exit succ!\n",__func__);
    return 0;
}

static int mipi_cmi_panel_remove(struct platform_device* pdev)
{
    struct balong_fb_data_type* balongfd = NULL;

    BUG_ON(pdev == NULL);

    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);

    if (balongfd->panel_info.bl_set_type & BL_SET_BY_PWM)
    {
		PWM_CLK_PUT(&(balongfd->panel_info));
	}
	/* lcd vcc finit */
	vcc_cmds_tx(pdev, cmi_lcd_vcc_put_cmds, \
		ARRAY_SIZE(cmi_lcd_vcc_put_cmds));

    /* lcd pinctrl lowpower */
    pinctrl_cmds_tx(pdev, cmi_lcd_pinctrl_lowpower_cmds, \
        ARRAY_SIZE(cmi_lcd_pinctrl_lowpower_cmds));

	cmi_sysfs_deinit(pdev);

    return 0;
}
/* < DTS2014080200942, Modified by z00248697, 2014/08/08 begin*/
/*< DTS2014063002494, Added by z00248697. 2014/06/30 begin */
static int cmi_set_gamma(struct lcd_tuning_dev* ltd, enum lcd_gamma gamma)
{
    int ret = 0;
    struct platform_device* pdev = NULL;
    struct balong_fb_data_type* balongfd = NULL;
    u8* ade_base = 0;

    BUG_ON(ltd == NULL);
    pdev = (struct platform_device*)(ltd->data);
    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);

    ade_base = balongfd->ade_base;

    /* Fix me: Implement it */
    return ret;
}

/* <DTS2014092509182, Modified by z00248697, 2014/09/25 begin*/
/* < DTS2014081410865, Added by z00248697, 2014/08/25 begin*/
static int cmi_set_cabc(struct platform_device *pdev, int cabc)
{
    int ret = 0;
    struct balong_fb_data_type* balongfd = NULL;
    //set cabc mode according to application situation
	//dimming off in UI mode
    char  cmi_dimming_off_ui[] =
    {
          0x53,
          0x24,
    };
	//dimming on in Video mode
    char  cmi_dimming_on_video[] =
    {
          0x53,
          0x2C,
    };
    char  cmi_cabc_ui_on[] = {
          0x55,
          0x01 | g_IE_SRE_level,
    };
    char  cmi_cabc_vid_on[] =
    {
          0x55,
          0x03 | g_IE_SRE_level,
    };
    char  cmi_cabc_off[] =
    {
          0x55,
          0x00 | g_IE_SRE_level,
    };

    struct dsi_cmd_desc cmi_dimming_off_ui_cmds[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
            sizeof(cmi_dimming_off_ui), cmi_dimming_off_ui
        },
    };

    struct dsi_cmd_desc cmi_dimming_on_video_cmds[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
            sizeof(cmi_dimming_on_video), cmi_dimming_on_video
        },
    };

    struct dsi_cmd_desc cmi_cabc_ui_cmds[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
            sizeof(cmi_cabc_ui_on), cmi_cabc_ui_on
        },
    };

    struct dsi_cmd_desc cmi_cabc_vid_cmds[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
            sizeof(cmi_cabc_vid_on), cmi_cabc_vid_on
        },
    };

    struct dsi_cmd_desc cmi_cabc_off_cmds[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
            sizeof(cmi_cabc_off), cmi_cabc_off
        },
    };

    balongfd = (struct balong_fb_data_type *)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);
    pr_info("%s CABC_MODE =  %d\n", __func__, cabc);

    #if CMI_CABC_ENABLED
    switch (cabc)
    {
		case CABC_UI:                       // set CABC as UI Mode
		{
			balongfd->g_CABC_mode = 0x01;
			mipi_dsi_cmds_tx(cmi_cabc_ui_cmds, ARRAY_SIZE(cmi_cabc_ui_cmds), balongfd->dsi_base);
			mipi_dsi_cmds_tx(cmi_dimming_off_ui_cmds, ARRAY_SIZE(cmi_dimming_off_ui_cmds), balongfd->dsi_base);  //dimming off in UI mode
        }
        break;

        case CABC_VID:                      // set CABC as Video Mode
		{
			balongfd->g_CABC_mode = 0x03;
	        mipi_dsi_cmds_tx(cmi_cabc_vid_cmds, ARRAY_SIZE(cmi_cabc_vid_cmds), balongfd->dsi_base);
			mipi_dsi_cmds_tx(cmi_dimming_on_video_cmds, ARRAY_SIZE(cmi_dimming_on_video_cmds), balongfd->dsi_base); //dimming on in Video mode
        }
		break;

        case CABC_OFF:                      // close CABC
		{
			balongfd->g_CABC_mode = 0x00;
	        mipi_dsi_cmds_tx(cmi_cabc_off_cmds, ARRAY_SIZE(cmi_cabc_off_cmds), balongfd->dsi_base);
        }
        break;

        default:
            ret = -1;
        break;
    }
    #endif
    return ret;
}
/* < DTS2014081410865, Modified by z00248697, 2014/08/25 begin*/
/* DTS2014092509182, Modified by z00248697, 2014/09/25 end >*/

static struct lcd_tuning_ops sp_tuning_ops =
{
    .set_gamma = cmi_set_gamma,
    .set_cabc = cmi_set_cabc,
};
/* DTS2014063002494, Added by z00248697. 2014/06/30 end> */
/* DTS2014080200942, Modified by z00248697, 2014/08/08 end >*/
/*< DTS2014092001975 lijianzhao 20140920 begin */
/*BEGIN  PN: DTS2014091300943, Modified by h00238058, 2014.09.15*/
static int mipi_cmi_panel_set_backlight(struct platform_device* pdev)
{
    struct balong_fb_data_type* balongfd = NULL;
    u32 level = 0;
    static u32 last_level = 255;

    /* Our eyes are more sensitive to small brightness.
       So we adjust the brightness of lcd following iphone4 */
    char bl_level_adjust[2] =
    {
        0x51,
        0x00,
    };

    struct dsi_cmd_desc cmi_bl_level_adjust[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 0, WAIT_TYPE_US,
            sizeof(bl_level_adjust), bl_level_adjust
        },
    };

    BUG_ON(pdev == NULL);
    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);


    level = balongfd->bl_level;

    if (level > 255)
    { level = 255; }

    //backlight may turn off when bl_level is below 3.
    if (level < 3 && level != 0)
    {
        level = 3;
    }

    bl_level_adjust[1] = level;

    mipi_dsi_cmds_tx(cmi_bl_level_adjust, ARRAY_SIZE(cmi_bl_level_adjust), balongfd->dsi_base);
    if(level == 0)
    {
        vcc_cmds_tx(NULL, cmi_lcd_bl_disable_cmds, \
            ARRAY_SIZE(cmi_lcd_bl_disable_cmds));
    }
    else if(last_level == 0 && level !=0)
    {
        /*Jank log*/
        LOG_JANK_D(JLID_KERNEL_LCD_BACKLIGHT_ON, "JL_KERNEL_LCD_BACKLIGHT_ON,%u", level);
        vcc_cmds_tx(NULL, cmi_lcd_bl_enable_cmds, \
            ARRAY_SIZE(cmi_lcd_bl_enable_cmds));
    }
    #ifdef FINAL_RELEASE_MODE
    if ((level == 0) || (last_level == 0 && level !=0))
    {
        //modified for beta test, it will be modified after beta test.
        balongfb_loge(" set backlight succ ,balongfd->bl_level = %d, level = %d \n",balongfd->bl_level,level);
    }
    #else
    //modified for beta test, it will be modified after beta test.
    balongfb_logi(" set backlight succ ,balongfd->bl_level = %d, level = %d \n",balongfd->bl_level,level);
    #endif
    last_level = level;
    return 0;
}
/*END  PN: DTS2014091300943, Modified by h00238058, 2014.09.15*/
/* DTS2014092001975 lijianzhao 20140920 end >*/
/*BEGIN  PN: DTS2014082801024, Added by h00238058, 2014.09.15*/
#if LCD_CHECK_MIPI_SUPPORT
static int mipi_cmi_check_mipi_tr(struct platform_device* pdev)
{
    struct balong_fb_data_type* balongfd = NULL;
    u32 read_value = 0;
    int err = 0;
    BUG_ON(pdev == NULL);
    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);
    balongfd->lcd_readvalue = 0;
    //read 0x0a
    err = mipi_dsi_read_reg(balongfd, 0x0a, &read_value,DTYPE_GEN_READ1);
    if (err || read_value != 0x9c)
    {
        err = -1;
        goto check_mipi_tr_error;
    }
    balongfd->lcd_readvalue |= read_value << 24;
    //read 0x0b
    err = mipi_dsi_read_reg(balongfd, 0x0b, &read_value,DTYPE_GEN_READ1);
    if (err || read_value != 0x00)
    {
        err = -1;
        goto check_mipi_tr_error;
    }
    balongfd->lcd_readvalue |= read_value << 16;
    //read 0x0c
    err = mipi_dsi_read_reg(balongfd, 0x0c, &read_value,DTYPE_GEN_READ1);
    if (err || read_value != 0x70)
    {
        err = -1;
        goto check_mipi_tr_error;
    }
    balongfd->lcd_readvalue |= read_value << 8;
    //read 0x0d
    err = mipi_dsi_read_reg(balongfd, 0x0d, &read_value,DTYPE_GEN_READ1);
    if (err || read_value != 0x00)
    {
        err = -1;
        goto check_mipi_tr_error;
    }
    balongfd->lcd_readvalue |= read_value;
check_mipi_tr_error:
    return err;

}

static char Enter_NT_page0[] =
{
    0xF0,
    0x55,0xAA,0x52,0x08,0x00,
};

static char inversion_mode_1dot[] =
{
    0xBC,
    0x01, 0x01,
};

static char inversion_mode_column[] =
{
    0xBC,
    0x00, 0x00,
};

static char scan_mode_forword[] =
{
    0xB1,
    0x60, 0x21,
};

static char scan_mode_revert[] =
{
    0xB1,
    0x60, 0x25,
};
static struct dsi_cmd_desc  nt35521s_lcd_inversion_type_1dot[] =
{
    {
        DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(Enter_NT_page0), Enter_NT_page0
    },
    {
        DTYPE_GEN_WRITE2, 0, 200, WAIT_TYPE_US,
        sizeof(inversion_mode_1dot), inversion_mode_1dot
    },
};

static struct dsi_cmd_desc  nt35521s_lcd_inversion_type_column[] =
{
    {
        DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(Enter_NT_page0), Enter_NT_page0
    },
    {
        DTYPE_GEN_WRITE2, 0, 200, WAIT_TYPE_US,
        sizeof(inversion_mode_column), inversion_mode_column
    },
};

static struct dsi_cmd_desc  nt35521s_lcd_scan_type_forword[] =
{
    {
        DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(Enter_NT_page0), Enter_NT_page0
    },
    {
        DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(scan_mode_forword), scan_mode_forword
    },
};

static struct dsi_cmd_desc  nt35521s_lcd_scan_type_revert[] =
{
    {
        DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(Enter_NT_page0), Enter_NT_page0
    },
    {
        DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(scan_mode_revert), scan_mode_revert
    },
};
static int mipi_cmi_set_inversion_type(struct platform_device* pdev, unsigned int inversion_mode)
{
    int ret = 0;
    struct balong_fb_data_type* balongfd = NULL;
    BUG_ON(pdev == NULL);
    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);
    balongfd->lcd_inversion_mode = inversion_mode;
    switch (inversion_mode)
    {
        case INVERSION_TYPE_1DOT:
            mipi_dsi_cmds_tx(nt35521s_lcd_inversion_type_1dot, \
                             ARRAY_SIZE(nt35521s_lcd_inversion_type_1dot),balongfd->dsi_base);
            balongfb_loge("INVERSION_TYPE_1DOT\n");
            ret = 0;
            break;
        case INVERSION_TYPE_COLUMN:
            mipi_dsi_cmds_tx(nt35521s_lcd_inversion_type_column, \
                             ARRAY_SIZE(nt35521s_lcd_inversion_type_column),balongfd->dsi_base);
            balongfb_loge("INVERSION_TYPE_COLUMN\n");
            ret = 0;
            break;
        default:
            mipi_dsi_cmds_tx(nt35521s_lcd_inversion_type_column, \
                             ARRAY_SIZE(nt35521s_lcd_inversion_type_column),balongfd->dsi_base);
            balongfb_loge("default LCD inversion type, INVERSION_TYPE_COLUMN.\n");
            ret = -EINVAL;
            break;
    }
    return ret;
}
#endif

static int mipi_cmi_set_scan_type(struct platform_device* pdev, unsigned int scanmode)
{
    int ret = 0;
    struct balong_fb_data_type* balongfd = NULL;

    BUG_ON(pdev == NULL);
    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);
    balongfd->lcd_scan_mode = scanmode;
    switch (scanmode)
    {
        case SCAN_TYPE_FORWORD:
            mipi_dsi_cmds_tx(nt35521s_lcd_scan_type_forword, \
                             ARRAY_SIZE(nt35521s_lcd_scan_type_forword),balongfd->dsi_base);
            balongfb_loge("SCAN_TYPE_FORWORD\n");
            ret = 0;
            break;
        case SCAN_TYPE_REVERT:
            mipi_dsi_cmds_tx(nt35521s_lcd_scan_type_revert, \
                             ARRAY_SIZE(nt35521s_lcd_scan_type_revert),balongfd->dsi_base);
            balongfb_loge("SCAN_TYPE_REVERT\n");
            ret = 0;
            break;
        default:
            mipi_dsi_cmds_tx(nt35521s_lcd_scan_type_forword, \
                             ARRAY_SIZE(nt35521s_lcd_scan_type_forword),balongfd->dsi_base);
            balongfb_loge("default LCD Scan type, SCAN_TYPE_FORWORD.\n");
            ret = -EINVAL;
            break;
    }
    return ret;
}
/*END  PN: DTS2014082801024, Added by h00238058, 2014.09.15*/

static ssize_t mipi_cmi_panel_lcd_support_mode_show(struct platform_device *pdev,
     char *buf)
{
       struct balong_fb_data_type *hisifd = NULL;
       ssize_t ret = 0;

       BUG_ON(pdev == NULL);
       hisifd = platform_get_drvdata(pdev);
       BUG_ON(hisifd == NULL);

       balongfb_logd("fb%d, +.\n", hisifd->index);
       ret = snprintf(buf, PAGE_SIZE, "%d\n", g_support_mode);
       balongfb_logd("fb%d, -.\n", hisifd->index);
       return ret;
}

static ssize_t mipi_cmi_panel_lcd_support_mode_store(struct platform_device *pdev,
       const char *buf, size_t count)
{
       int ret = 0;
       unsigned long val = 0;
       int flag = -1;
       struct balong_fb_data_type *hisifd = NULL;
       BUG_ON(pdev == NULL);
       hisifd = platform_get_drvdata(pdev);
       BUG_ON(hisifd == NULL);

       ret = strict_strtoul(buf, 0, &val);
       if (ret)
               return ret;

       balongfb_logd("fb%d, +.\n", hisifd->index);
       flag = (int)val;
       g_support_mode = flag;
       balongfb_logd("fb%d, -.\n", hisifd->index);
      return snprintf((char *)buf, count, "%d\n", g_support_mode);
}

static int mipi_cmi_panel_set_fastboot(struct platform_device* pdev)
{
    struct balong_fb_data_type* balongfd = NULL;

    BUG_ON(pdev == NULL);

    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);

    /* lcd gpio request */
    gpio_cmds_tx(NULL, cmi_lcd_gpio_request_cmds, \
        ARRAY_SIZE(cmi_lcd_gpio_request_cmds));

    /* lcd vcc enable */
    vcc_cmds_tx(NULL, cmi_lcd_vcc_enable_cmds, \
        ARRAY_SIZE(cmi_lcd_vcc_enable_cmds));

    /* lcd backlight enable */
    vcc_cmds_tx(NULL, cmi_lcd_bl_enable_cmds, \
        ARRAY_SIZE(cmi_lcd_bl_enable_cmds));
    g_display_on = true;

    return 0;
}
/* < DTS2014081410865, Deleted by z00248697, 2014/08/25 begin*/
/* DTS2014081410865, Deleted by z00248697, 2014/08/25 end >*/
/* < DTS2014081410865, Modified by z00248697, 2014/08/25 begin*/
/*<DTS2014062608360 w00128696 20140626 add SRE function begin*/
static int mipi_cmi_panel_set_sre(struct platform_device* pdev, int enable, int value)
{
    struct balong_fb_data_type* balongfd = NULL;

    /* As the reg 0x55 is used by CABC and SRE /IE, so use local data to enable each funtion seperately */
    char sbl_level_setting[2] =
    {
        0x55,
        0x00,
    };

    struct dsi_cmd_desc cmi_sbl_level_setting[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
            sizeof(sbl_level_setting), sbl_level_setting
        },
    };

    BUG_ON(pdev == NULL);
    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);

    //update flag depends on status get from lightsensor
    if(balongfd->sbl_enable == 1)	                          // Outdoor mode (check the SRE select box)
    {
        if( 0x50 != g_IE_SRE_level )          //  set reg 0x55 only when the value changed
        {
            g_IE_SRE_level = 0x50;            //SRE Medium LEVEL  0x5x,
            sbl_level_setting[1]  = balongfd->g_CABC_mode | g_IE_SRE_level;
            mipi_dsi_cmds_tx(cmi_sbl_level_setting, ARRAY_SIZE(cmi_sbl_level_setting), balongfd->dsi_base); //send to IC reg
        }
    }
    else                 // 1.Indoor mode (check the SRE select box).  2.Uncheck the SRE select box.
    {
        if( 0x50 == g_IE_SRE_level )         //  set reg 0x55 only when the value changed
        {
            g_IE_SRE_level = 0x80;           //IE LOW LEVEL 0x8x,
            sbl_level_setting[1]  = balongfd->g_CABC_mode | g_IE_SRE_level;
           mipi_dsi_cmds_tx(cmi_sbl_level_setting, ARRAY_SIZE(cmi_sbl_level_setting), balongfd->dsi_base);//send to IC reg
        }
    }
    pr_info("%s enter succ!SRE sbl_enable = %d reg0x55_value = 0x%x\n",__func__, balongfd->sbl_enable, balongfd->g_CABC_mode | g_IE_SRE_level);
    return 0;
}
/*DTS2014062608360 w00128696 20140626 add SRE function end>*/
/* DTS2014081410865, Modified by z00248697, 2014/08/25 end >*/

/* BEGIN PN:DTS2014062806461 , Added by z00280572, 2014/06/30*/
/* BEGIN PN:DTS2014073103697 , Added by z00280572, 2014/07/31*/
#if LCD_ESD_CHECK_SUPPORT
/*for esd check*/
static int mipi_cmi_panel_check_esd(struct platform_device* pdev)
{
    int ret = 0;
    int err = 0;
    unsigned int val = 0;
    struct balong_fb_data_type* balongfd = NULL;

    BUG_ON(pdev == NULL);

    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);
    ret = mipi_dsi_read_reg(balongfd, 0x0a, &val,DTYPE_GEN_READ1);
    if ((ret == 0) && ((val&0xff) != 0x9c))
    {
        err = 1;
        balongfb_loge("check esd reg 0x0a is:0x%x.\n", val);
    }
#if CMI_ESD_DEBUG
    if (esd_flag != 0)
    {
        err = 1;
    }
#endif
    return err;
}
#endif //LCD_ESD_CHECK_SUPPORT
/* END PN:DTS2014073103697 , Added by z00280572, 2014/07/31*/
/* END PN:DTS2014062806461 , Added by z00280572, 2014/06/30*/

static struct balong_panel_info cmi_panel_info = {0};
static struct balong_fb_panel_data cmi_panel_data =
{
    .panel_info = &cmi_panel_info,
    .on = mipi_cmi_panel_on,
    .off = mipi_cmi_panel_off,
    .remove = mipi_cmi_panel_remove,
    .set_backlight = mipi_cmi_panel_set_backlight,
    .set_fastboot = mipi_cmi_panel_set_fastboot,
    /*<DTS2014062608360 w00128696 20140626 add SRE function begin*/
    .set_sre = mipi_cmi_panel_set_sre,
    /*DTS2014062608360 w00128696 20140626 add SRE function end>*/
/* BEGIN PN:DTS2014062806461 , Added by z00280572, 2014/06/30*/
/* BEGIN PN:DTS2014073103697 , Added by z00280572, 2014/07/31*/
#if LCD_ESD_CHECK_SUPPORT
    /*for esd check*/
    .check_esd = mipi_cmi_panel_check_esd,
#endif //LCD_ESD_CHECK_SUPPORT
/* END PN:DTS2014073103697 , Added by z00280572, 2014/07/31*/
/* END PN:DTS2014062806461 , Added by z00280572, 2014/06/30*/

#if LCD_CHECK_MIPI_SUPPORT
    .check_mipi_tr = mipi_cmi_check_mipi_tr,
    .set_inversion_type = mipi_cmi_set_inversion_type,
#endif
    .lcd_cabc_mode_store  =  cmi_set_cabc,
    .lcd_gram_check_show  =  mipi_cmi_check_mipi_tr,
    .lcd_inversion_mode_store = mipi_cmi_set_inversion_type,
    .lcd_scan_mode_store = mipi_cmi_set_scan_type,
    .lcd_support_mode_store = mipi_cmi_panel_lcd_support_mode_store,
    .lcd_support_mode_show = mipi_cmi_panel_lcd_support_mode_show,
};

static int __init cmi_probe(struct platform_device* pdev)
{
    struct balong_panel_info* pinfo = NULL;
    struct platform_device* reg_pdev = NULL;
    struct lcd_properities lcd_props;
    /*add lcd info*/
    char lcd_name[] = "cmi_NT35521S 5.5' VIDEO TFT";
    int len;
    pr_info("%s enter succ!!!!\n", __func__);
    /*add lcd info*/
    len = strlen(lcd_name);
    memset(g_lcd_name_buf, 0, sizeof(g_lcd_name_buf));
    strncpy(g_lcd_name_buf, lcd_name, (len > 100 ? 100 : len));
    g_display_on = false;
    pinfo = cmi_panel_data.panel_info;

    /* init lcd panel info */
    pinfo->xres = 720;       // HD
    pinfo->yres = 1280;
    pinfo->width  = 68;  //mm
    pinfo->height = 121; //mm
    pinfo->type = PANEL_MIPI_VIDEO;
    pinfo->orientation = LCD_PORTRAIT;
    pinfo->bpp = ADE_OUT_RGB_888;
    pinfo->s3d_frm = ADE_FRM_FMT_2D;
    pinfo->bgr_fmt = ADE_RGB;
    pinfo->bl_set_type = BL_SET_BY_MIPI;
    pinfo->bl_max = PWM_LEVEL;
    pinfo->bl_min = 1;

    pinfo->frc_enable = 0;    //close FRC
    /*<DTS2014062608360 w00128696 20140626 add SRE function begin*/
    //enable 1, disable 0
    pinfo->sbl_enable = 1;    //enable sbl
    /*DTS2014062608360 w00128696 20140626 add SRE function end>*/

/* BEGIN PN:DTS2014062806461 , Added by z00280572, 2014/06/30*/
/* BEGIN PN:DTS2014073103697 , Added by z00280572, 2014/07/31*/
#if LCD_ESD_CHECK_SUPPORT
    /*for esd check enable 1,disable 0*/
    /* BEGIN PN:DTS2014071402196 ,modified by z00280572, 2014/07/14*/
    if (NULL != strstr(saved_command_line, "androidboot.swtype=factory"))
	{
		pinfo->esd_enable = 0;
	}
	else
	{
		pinfo->esd_enable = 0;
	}
    /* END PN:DTS2014071402196 , modified by z00280572, 2014/07/14*/
#endif //LCD_ESD_CHECK_SUPPORT
/* END PN:DTS2014073103697 , Added by z00280572, 2014/07/31*/
/* END PN:DTS2014062806461 , Added by z00280572, 2014/06/30*/

    pinfo->sbl.bl_max = 0xff;
    pinfo->sbl.cal_a = 0x0f;
    pinfo->sbl.cal_b = 0xd8;
    pinfo->sbl.str_limit = 0x40;

    /*BEGIN  PN: DTS2014082810448, Modified by h00238058, 2014.09.09*/
    // porch
    pinfo->ldi.h_back_porch = 28;//63;
    pinfo->ldi.h_front_porch = 200;//164;//155
    pinfo->ldi.h_pulse_width = 2;//10;
    pinfo->ldi.v_back_porch = 25;
    pinfo->ldi.v_front_porch = 25;
    pinfo->ldi.v_pulse_width = 2;
    /*END  PN: DTS2014082810448, Modified by h00238058, 2014.09.09*/
    // video mode
    pinfo->ldi.hsync_plr = 1;
    pinfo->ldi.vsync_plr = 1;
    pinfo->ldi.pixelclk_plr = 0;
    pinfo->ldi.data_en_plr = 0;

    pinfo->ldi.disp_mode = LDI_DISP_MODE_NOT_3D_FBF;

    pinfo->dirty_region_info.left_align = -1;
    pinfo->dirty_region_info.right_align = -1;
    pinfo->dirty_region_info.top_align = -1;
    pinfo->dirty_region_info.bottom_align = -1;
    pinfo->dirty_region_info.w_align = -1;
    pinfo->dirty_region_info.h_align = -1;
    pinfo->dirty_region_info.w_min = -1;
    pinfo->dirty_region_info.h_min = -1;
    pinfo->dirty_region_info.top_start = -1;
    pinfo->dirty_region_info.bottom_start = -1;

    /* init at DTS */
    pinfo->mipi.lane_nums = DSI_4_LANES;
    pinfo->mipi.color_mode = DSI_24BITS_1;
    pinfo->mipi.vc = 0;
    pinfo->frame_rate = 60;
    pdev->id = 1;

	/* lcd resource */
	get_resource_from_dts(pdev, pinfo);

    /* lcd gpio init */
    gpio_cmds_tx(pdev, cmi_lcd_gpio_get_cmds, \
            ARRAY_SIZE(cmi_lcd_gpio_get_cmds));

	/* lcd vcc init */
	vcc_cmds_tx(pdev, cmi_lcd_vcc_get_cmds,
		ARRAY_SIZE(cmi_lcd_vcc_get_cmds));

	/* lcd pinctrl init */
	pinctrl_cmds_tx(pdev, cmi_lcd_pinctrl_init_cmds,
		ARRAY_SIZE(cmi_lcd_pinctrl_init_cmds));

    /* alloc panel device data */
    if (platform_device_add_data(pdev, &cmi_panel_data,
                                 sizeof(struct balong_fb_panel_data)))
    {
        balongfb_loge("platform_device_add_data failed!\n");
        platform_device_put(pdev);
        return -ENOMEM;
    }

    reg_pdev = balong_fb_add_device(pdev);
    if (NULL == reg_pdev)
    {
        balongfb_loge("add device failed!\n");
        return -1;
    }

	/*< DTS2014080200942, Modified by z00248697. 2014/08/08 begin */
    /*< DTS2014063002494, Added by z00248697. 2014/06/30 begin */
    /* for cabc */
    lcd_props.type = TFT;
    lcd_props.default_gamma = GAMMA22;
    p_tuning_dev = lcd_tuning_dev_register(&lcd_props, &sp_tuning_ops, (void*)reg_pdev);
    if (IS_ERR(p_tuning_dev))
    {
        balongfb_loge("lcd_tuning_dev_register failed!\n");
        return -1;
    }
    /* DTS2014063002494, Added by z00248697. 2014/06/30 end> */
	/* DTS2014080200942,  Modified by y00248697. 2014/08/08 end >*/
    cmi_sysfs_init(pdev);

    pr_info("%s exit succ!\n", __func__);
    return 0;
}
static const struct of_device_id mipi_cmi_nt35521s_match_table[] =
{
    {
        .compatible = "hisilicon,mipi-cmi-nt35521s",
        .data = NULL,
    },
    {},
};

static struct platform_driver this_driver =
{
    .probe = cmi_probe,
    .remove = NULL,
    .suspend = NULL,
    .resume = NULL,
    .shutdown = NULL,
    .driver = {
        .name = "mipi_cmi_NT35521S",
        .of_match_table = mipi_cmi_nt35521s_match_table,
    },
};

static int __init mipi_cmi_panel_init(void)
{
    int ret = 0;
#ifndef CONFIG_ARM64
    if ( get_lcd_type() != CMI_NT35521_LCD)
    {
        balongfb_loge("lcd type is not CMI_NT35521_LCD.\n");
        return ret;
    }
#endif
    ret = platform_driver_register(&this_driver);
    if (ret)
    {
        balongfb_loge("not able to register the driver\n");
        return ret;
    }

    return ret;
}

module_init(mipi_cmi_panel_init);
