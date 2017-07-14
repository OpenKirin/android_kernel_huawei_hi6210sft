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

#define PWM_LEVEL 100
#define BRIGHTNESS_MIN 7

#define TM_CABC_ENABLED  1
// Use this global parameter to mark the SRE level.
static int g_SRE_enable_level = 0x80;

/*--------TM power on initial code -----------*/
static char tm_power_on_param1[] =
{
    0x00,
    0x00,
};

static char tm_power_on_param2[] =
{
    0xff,
    0x12, 0x87, 0x01,
};

static char tm_power_on_param3[] =
{
    0x00,
    0x80,
};

static char tm_power_on_param4[] =
{
    0xff,
    0x12, 0x87,
};
static char tm_power_on_param7[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param8[] =
{
    0xe1,
    0x00, 0x22, 0x31, 0x43, 0x54, 0x63, 0x68, 0x96, 0x88, 0xa2, 0x61, 0x4c, 0x5f, 0x41, 0x42, 0x37, 0x2e, 0x26, 0x21, 0x1f,
};
static char tm_power_on_param9[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param10[] =
{
    0xe2,
    0x00, 0x22, 0x31, 0x43, 0x54, 0x63, 0x68, 0x96, 0x88, 0xa2, 0x61, 0x4c, 0x5f, 0x41, 0x42, 0x37, 0x2e, 0x26, 0x21, 0x1f,
};
static char tm_power_on_param11[] =
{
    0x00,
    0x91,
};
static char tm_power_on_param12[] =
{
    0xca,
    0xe8, 0xff, 0xa3, 0xff, 0xa3, 0xff, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03,
};
static char tm_power_on_param13[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param14[] =
{
    0xc6,
    0x10,
};
static char tm_power_on_param15[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param16[] =
{
    0xc7,
    0xa0, 0xab, 0xac, 0xbc, 0xa7, 0xcc, 0xba, 0xbc, 0xbb, 0x88, 0x88, 0x78, 0x46, 0x44, 0x44, 0x44, 0x44, 0x44,
};
static char tm_power_on_param17[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param18[] =
{
    0xc6,
    0x11,
};
static char tm_power_on_param19[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param20[] =
{
    0xc7,
    0xa0, 0xaa, 0xab, 0xbc, 0x88, 0xcc, 0xaa, 0xbc, 0xba, 0x88, 0x88, 0x78, 0x56, 0x55, 0x55, 0x45, 0x44, 0x44,
};
static char tm_power_on_param21[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param22[] =
{
    0xc6,
    0x12,
};
static char tm_power_on_param23[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param24[] =
{
    0xc7,
    0xa0, 0x9a, 0xab, 0xac, 0x88, 0xbc, 0xaa, 0xbb, 0xaa, 0x88, 0x88, 0x78, 0x56, 0x55, 0x55, 0x55, 0x55, 0x55,
};
static char tm_power_on_param25[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param26[] =
{
    0xc6,
    0x13,
};
static char tm_power_on_param27[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param28[] =
{
    0xc7,
    0xa0, 0x99, 0xab, 0xba, 0x88, 0xbb, 0x9a, 0xbb, 0x9b, 0x88, 0x88, 0x88, 0x67, 0x55, 0x55, 0x55, 0x55, 0x55,
};
static char tm_power_on_param29[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param30[] =
{
    0xc6,
    0x14,
};
static char tm_power_on_param31[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param32[] =
{
    0xc7,
    0x90, 0x9a, 0xaa, 0xba, 0x88, 0xba, 0xa9, 0xaa, 0x9b, 0x88, 0x88, 0x88, 0x67, 0x66, 0x66, 0x55, 0x55, 0x55,
};
static char tm_power_on_param33[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param34[] =
{
    0xc6,
    0x15,
};
static char tm_power_on_param35[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param36[] =
{
    0xc7,
    0x90, 0x99, 0xaa, 0xb9, 0x88, 0xba, 0x99, 0xaa, 0x9b, 0x88, 0x88, 0x88, 0x67, 0x66, 0x66, 0x66, 0x56, 0x55,
};
static char tm_power_on_param37[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param38[] =
{
    0xc6,
    0x16,
};
static char tm_power_on_param39[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param40[] =
{
    0xc7,
    0x90, 0x99, 0x9a, 0xb9, 0x87, 0xba, 0xa8, 0x99, 0x9b, 0x88, 0x88, 0x88, 0x68, 0x66, 0x66, 0x66, 0x66, 0x66,
};
static char tm_power_on_param41[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param42[] =
{
    0xc6,
    0x17,
};
static char tm_power_on_param43[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param44[] =
{
    0xc7,
    0x90, 0x98, 0xaa, 0xc7, 0x87, 0xa9, 0x99, 0x9a, 0xaa, 0x88, 0x88, 0x88, 0x78, 0x67, 0x66, 0x66, 0x66, 0x66,
};
static char tm_power_on_param45[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param46[] =
{
    0xc6,
    0x18,
};
static char tm_power_on_param47[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param48[] =
{
    0xc7,
    0x90, 0x98, 0xa9, 0xb7, 0x88, 0xb8, 0x89, 0x99, 0xaa, 0x88, 0x88, 0x88, 0x78, 0x77, 0x77, 0x67, 0x66, 0x66,
};
static char tm_power_on_param49[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param50[] =
{
    0xc6,
    0x19,
};
static char tm_power_on_param51[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param52[] =
{
    0xc7,
    0x90, 0x97, 0xa9, 0xb7, 0x88, 0xa8, 0x89, 0x8a, 0xa9, 0x88, 0x88, 0x88, 0x78, 0x77, 0x77, 0x77, 0x77, 0x66,
};
static char tm_power_on_param53[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param54[] =
{
    0xc6,
    0x1a,
};
static char tm_power_on_param55[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param56[] =
{
    0xc7,
    0x70, 0x99, 0x99, 0xb7, 0x87, 0xb8, 0x88, 0x89, 0xa9, 0x88, 0x88, 0x88, 0x88, 0x77, 0x77, 0x77, 0x77, 0x77,
};
static char tm_power_on_param57[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param58[] =
{
    0xc6,
    0x1b,
};
static char tm_power_on_param59[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param60[] =
{
    0xc7,
    0x70, 0x89, 0x99, 0xa7, 0x88, 0xa8, 0x88, 0x89, 0x99, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x77, 0x77, 0x77,
};
static char tm_power_on_param61[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param62[] =
{
    0xc6,
    0x1c,
};
static char tm_power_on_param63[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param64[] =
{
    0xc7,
    0x90, 0x97, 0xa8, 0xa7, 0x78, 0xa8, 0x98, 0x88, 0x99, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x77, 0x77, 0x77,
};
static char tm_power_on_param65[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param66[] =
{
    0xc6,
    0x1d,
};
static char tm_power_on_param67[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param68[] =
{
    0xc7,
    0x90, 0x87, 0x89, 0x98, 0x88, 0x98, 0x89, 0x89, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x77, 0x77,
};
static char tm_power_on_param69[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param70[] =
{
    0xc6,
    0x1e,
};
static char tm_power_on_param71[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param72[] =
{
    0xc7,
    0x90, 0x87, 0x98, 0x97, 0x88, 0x98, 0x88, 0x89, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x77,
};
static char tm_power_on_param73[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param74[] =
{
    0xc6,
    0x1f,
};
static char tm_power_on_param75[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param76[] =
{
    0xc7,
    0x90, 0x87, 0x88, 0x98, 0x87, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
};
static char tm_power_on_param77[] =
{
    0x00,
    0x00,
};
static char tm_power_on_param78[] =
{
    0xc6,
    0x00,
};
// Set the pwm frequence to 45.572 KHz
static char tm_power_on_param109[] =
{
    0x00,
    0xB1,
};

static char tm_power_on_param110[] =
{
    0xC6,
    0x02,
};

static char tm_power_on_param_C6B4_B4[] =
{
    0x00,
    0xB4,
};

static char tm_power_on_param_C6B4_C6[] =
{
    0xC6,
    0x13,
};
//==========CE Setting start===========//
static char tm_power_on_param125[] =
{
    0x00,
    0xA0,
};

static char tm_power_on_param126[] =
{
    0xD6,
    0x01, 0x00, 0x01, 0x00, 0x01, 0x4d, 0x01, 0xb3, 0x01, 0x9a, 0x01, 0x9a,
};

static char tm_power_on_param127[] =
{
    0x00,
    0xB0,
};

static char tm_power_on_param128[] =
{
    0xD6,
    0x01, 0x9a, 0x15, 0x9a, 0x15, 0x9a, 0x15, 0x9a, 0x01, 0x9a, 0x01, 0x9a,
};

static char tm_power_on_param129[] =
{
    0x00,
    0xC0,
};

static char tm_power_on_param130[] =
{
    0xD6,
    0x33, 0x11, 0x00, 0x66, 0x11, 0x77, 0x66, 0x11, 0x66, 0x66, 0x11, 0x66,
};

static char tm_power_on_param131[] =
{
    0x00,
    0xD0,
};

static char tm_power_on_param132[] =
{
    0xD6,
    0x66, 0x11, 0x66, 0x66, 0x11, 0x66,
};

static char tm_power_on_param133[] =
{
    0x00,
    0xE0,
};

static char tm_power_on_param134[] =
{
    0xD6,
    0x33, 0x11, 0x33, 0x33, 0x11, 0x3c, 0x33, 0x11, 0x33, 0x33, 0x11, 0x33,
};

static char tm_power_on_param135[] =
{
    0x00,
    0xF0,
};

static char tm_power_on_param136[] =
{
    0xD6,
    0x33,0x11,0x33,0x33,0x11,0x33,
};
// CE enable
static char tm_power_on_param137[] =
{
    0x00,
    0x80,
};

static char tm_power_on_param138[] =
{
    0xD6,
    0x00,
};
static char tm_power_on_param_D9D0_D0[] =
{
    0x00,
    0xD0,
};

static char tm_power_on_param_D9D0_D9[] =
{
    0xD9,
    0xAA,0xAA,
};
//===========CE Setting done=======//
//==========AIE Setting start==========//
static char tm_power_on_param139[] =
{
    0x00,
    0x02,
};

static char tm_power_on_param140[] =
{
    0xC6,
    0x10,
};

static char tm_power_on_param141[] =
{
    0x00,
    0x00,
};

static char tm_power_on_param142[] =
{
    0xC9,
    0x30, 0x45, 0x67, 0x78, 0x98, 0x98, 0xAA, 0xA9, 0xCA, 0xCA, 0xCC, 0x99, 0x87, 0x87, 0x76, 0x66, 0x67, 0x67,
};

static char tm_power_on_param143[] =
{
    0x00,
    0x02,
};

static char tm_power_on_param144[] =
{
    0xC6,
    0x11,
};

static char tm_power_on_param145[] =
{
    0x00,
    0x00,
};

static char tm_power_on_param146[] =
{
    0xC9,
    0x20, 0x44, 0x55, 0x76, 0x76, 0x78, 0x98, 0x98, 0xB9, 0x99, 0x9A, 0xAB, 0xCC, 0xA9, 0xAC, 0x79, 0x76, 0x66,
};

static char tm_power_on_param147[] =
{
    0x00,
    0x02,
};

static char tm_power_on_param148[] =
{
    0xC6,
    0x12,
};

static char tm_power_on_param149[] =
{
    0x00,
    0x00,
};

static char tm_power_on_param150[] =
{
    0xC9,
    0x40, 0x66, 0xA8, 0x99, 0xBA, 0xEC, 0xAD, 0xA9, 0x98, 0x79, 0x78, 0x77, 0x67, 0x77, 0x76, 0x75, 0x66, 0x76,
};

static char tm_power_on_param151[] =
{
    0x00,
    0x01,
};

static char tm_power_on_param152[] =
{
    0xC6,
    0x10,
};

static char tm_power_on_param153[] =
{
    0x00,
    0x00,
};

static char tm_power_on_param154[] =
{
    0xC8,
    0x90, 0x78, 0x56, 0x34, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x43, 0x44, 0x43, 0x44, 0x44, 0x44, 0x44, 0x54,
};

static char tm_power_on_param155[] =
{
    0x00,
    0x01,
};

static char tm_power_on_param156[] =
{
    0xC6,
    0x11,
};

static char tm_power_on_param157[] =
{
    0x00,
    0x00,
};

static char tm_power_on_param158[] =
{
    0xC8,
    0xC0, 0x8A, 0x57, 0x34, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x44,
};

static char tm_power_on_param159[] =
{
    0x00,
    0x01,
};

static char tm_power_on_param160[] =
{
    0xC6,
    0x12,
};

static char tm_power_on_param161[] =
{
    0x00,
    0x00,
};

static char tm_power_on_param162[] =
{
    0xC8,
    0xF0, 0x9D, 0x57, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x23, 0x32, 0x23, 0x22, 0x44, 0x44, 0x44, 0x34,
};
// AIE disable
static char tm_power_on_param163[] =
{
    0x00,
    0x01,
};

static char tm_power_on_param164[] =
{
    0xC6,
    0x00,
};

static char tm_power_on_param165[] =
{
    0x00,
    0x02,
};

static char tm_power_on_param166[] =
{
    0xC6,
    0x00,
};
//==========AIE Setting done==========//

//Set SSC level
static char tm_power_on_param_C182_82[] =
{
    0x00,
    0x82,
};
static char tm_power_on_param_C182_C1[] =
{
    0xC1,
    0x30, 0x70,
};
static char tm_power_on_param_C185_85[] =
{
    0x00,
    0x85,
};
static char tm_power_on_param_C185_C1[] =
{
    0xC1,
    0x03,
};
//Disable  sharpness
static char tm_power_on_param167[] =
{
    0x00,
    0x00,
};

static char tm_power_on_param168[] =
{
    0x80,
    0x00, 0x00,
};
//Show black patten before fastboot
static char tm_power_on_param_C5B1_B1[] =
{
    0x00,
    0xB1,
};

static char tm_power_on_param_C5B1_C5[] =
{
    0xC5,
    0xA2,
};
//Reduce EMI
static char tm_power_on_param_C481_81[] =
{
    0x00,
    0x81,
};

static char tm_power_on_param_C481_C4[] =
{
    0xC4,
    0x82,
};
static char tm_power_on_param_C5B2_B2[] =
{
    0x00,
    0xB2,
};

static char tm_power_on_param_C5B2_C5[] =
{
    0xC5,
    0xE3,
};
static char tm_power_on_param_CA81_81[] =
{
    0x00,
    0x81,
};

static char tm_power_on_param_CA81_CA[] =
{
    0xCA,
    0x7F, 0x87, 0x8F, 0x97, 0x9F, 0xA7, 0xAF, 0xB7, 0xBF, 0xC7, 0xCF, 0xD7, 0xDF, 0xE7, 0xEF, 0xF7,
};
// Close Orise Mode
static char tm_power_on_param121[] =
{
    0x00,
    0x00,
};

static char tm_power_on_param122[] =
{
    0xff,
    0xff, 0xff, 0xff,
};

static char tm_power_on_param171[] =
{
    0x51,
    0x00,
};

static char tm_power_on_param172[] =
{
    0x53,
    0x24,
};
//Init cabc to UI mode when panel on
static char tm_power_on_param173[] =
{
    0x55,
    0x01,
};

static char tm_power_on_param174[] =
{
    0x5E,
    0x28,
};

//The reg 8100h is used for CE setting.(Low level:0x80)
static char tm_power_on_param175[] =
{
    0x00,
    0x00,
};

static char tm_power_on_param176[] =
{
    0x81,
    0x80,
};

/*----------------Power ON Sequence(sleep mode to Normal mode)---------------------*/
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
static char bl_level_0[] =
{
    0x51,
    0x00,
};

static char display_off[] =
{
    0x28,
};

static char enter_sleep[] =
{
    0x10,
};

static struct dsi_cmd_desc tm_display_on_cmds[] =
{
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param1), tm_power_on_param1
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param2), tm_power_on_param2
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param3), tm_power_on_param3
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param4), tm_power_on_param4
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param7), tm_power_on_param7
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param8), tm_power_on_param8
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param9), tm_power_on_param9
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param10), tm_power_on_param10
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param11), tm_power_on_param11
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param12), tm_power_on_param12
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param13), tm_power_on_param13
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param14), tm_power_on_param14
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param15), tm_power_on_param15
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param16), tm_power_on_param16
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param17), tm_power_on_param17
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param18), tm_power_on_param18
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param19), tm_power_on_param19
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param20), tm_power_on_param20
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param21), tm_power_on_param21
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param22), tm_power_on_param22
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param23), tm_power_on_param23
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param24), tm_power_on_param24
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param25), tm_power_on_param25
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param26), tm_power_on_param26
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param27), tm_power_on_param27
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param28), tm_power_on_param28
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param29), tm_power_on_param29
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param30), tm_power_on_param30
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param31), tm_power_on_param31
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param32), tm_power_on_param32
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param33), tm_power_on_param33
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param34), tm_power_on_param34
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param35), tm_power_on_param35
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param36), tm_power_on_param36
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param37), tm_power_on_param37
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param38), tm_power_on_param38
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param39), tm_power_on_param39
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param40), tm_power_on_param40
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param41), tm_power_on_param41
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param42), tm_power_on_param42
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param43), tm_power_on_param43
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param44), tm_power_on_param44
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param45), tm_power_on_param45
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param46), tm_power_on_param46
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param47), tm_power_on_param47
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param48), tm_power_on_param48
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param49), tm_power_on_param49
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param50), tm_power_on_param50
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param51), tm_power_on_param51
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param52), tm_power_on_param52
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param53), tm_power_on_param53
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param54), tm_power_on_param54
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param55), tm_power_on_param55
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param56), tm_power_on_param56
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param57), tm_power_on_param57
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param58), tm_power_on_param58
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param59), tm_power_on_param59
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param60), tm_power_on_param60
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param61), tm_power_on_param61
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param62), tm_power_on_param62
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param63), tm_power_on_param63
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param64), tm_power_on_param64
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param65), tm_power_on_param65
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param66), tm_power_on_param66
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param67), tm_power_on_param67
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param68), tm_power_on_param68
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param69), tm_power_on_param69
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param70), tm_power_on_param70
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param71), tm_power_on_param71
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param72), tm_power_on_param72
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param73), tm_power_on_param73
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param74), tm_power_on_param74
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param75), tm_power_on_param75
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param76), tm_power_on_param76
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param77), tm_power_on_param77
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param78), tm_power_on_param78
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param109), tm_power_on_param109
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param110), tm_power_on_param110
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_C6B4_B4), tm_power_on_param_C6B4_B4
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_C6B4_C6), tm_power_on_param_C6B4_C6
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param125), tm_power_on_param125
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param126), tm_power_on_param126
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param127), tm_power_on_param127
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param128), tm_power_on_param128
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param129), tm_power_on_param129
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param130), tm_power_on_param130
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param131), tm_power_on_param131
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param132), tm_power_on_param132
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param133), tm_power_on_param133
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param134), tm_power_on_param134
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param135), tm_power_on_param135
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param136), tm_power_on_param136
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param137), tm_power_on_param137
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param138), tm_power_on_param138
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_D9D0_D0), tm_power_on_param_D9D0_D0
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_D9D0_D9), tm_power_on_param_D9D0_D9
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param139), tm_power_on_param139
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param140), tm_power_on_param140
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param141), tm_power_on_param141
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param142), tm_power_on_param142
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param143), tm_power_on_param143
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param144), tm_power_on_param144
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param145), tm_power_on_param145
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param146), tm_power_on_param146
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param147), tm_power_on_param147
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param148), tm_power_on_param148
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param149), tm_power_on_param149
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param150), tm_power_on_param150
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param151), tm_power_on_param151
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param152), tm_power_on_param152
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param153), tm_power_on_param153
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param154), tm_power_on_param154
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param155), tm_power_on_param155
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param156), tm_power_on_param156
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param157), tm_power_on_param157
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param158), tm_power_on_param158
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param159), tm_power_on_param159
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param160), tm_power_on_param160
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param161), tm_power_on_param161
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param162), tm_power_on_param162
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param163), tm_power_on_param163
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param164), tm_power_on_param164
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param165), tm_power_on_param165
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param166), tm_power_on_param166
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_C182_82), tm_power_on_param_C182_82
    },

	{
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_C182_C1), tm_power_on_param_C182_C1
    },

	{
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_C185_85), tm_power_on_param_C185_85
    },

	{
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_C185_C1), tm_power_on_param_C185_C1
    },

	{
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param167), tm_power_on_param167
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param168), tm_power_on_param168
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_C5B1_B1), tm_power_on_param_C5B1_B1
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_C5B1_C5), tm_power_on_param_C5B1_C5
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_C481_81), tm_power_on_param_C481_81
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_C481_C4), tm_power_on_param_C481_C4
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_C5B2_B2), tm_power_on_param_C5B2_B2
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_C5B2_C5), tm_power_on_param_C5B2_C5
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_CA81_81), tm_power_on_param_CA81_81
    },
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param_CA81_CA), tm_power_on_param_CA81_CA
    },
    //Close Orise Mode
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param121), tm_power_on_param121
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param122), tm_power_on_param122
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param171), tm_power_on_param171
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param172), tm_power_on_param172
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param173), tm_power_on_param173
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param174), tm_power_on_param174
    },
    //The reg 8100h is used for CE setting.(Low level:0x80)
    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param175), tm_power_on_param175
    },

    {
        DTYPE_GEN_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param176), tm_power_on_param176
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

static struct dsi_cmd_desc tm_display_off_cmds[] =
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
    },
};

/************************************************************
 *
 * LCD VCC
 *
 ************************************************************/
#define VCC_BACKLIGHT_NAME      "lcd_backlight"
#define VCC_LCDBIAS_NAME        "vcc_lcdbias"
#define VCC_LCD_VSN_NAME        "lcd_vsn"
#define VCC_LCD_VSP_NAME        "lcd_vsp"
#define VCC_LCD_VSP_VSN_NAME    "lcd_vsp_vsn"

/* scharg regulator */
static struct regulator* lcd_bl_vcc;
static struct regulator* lcd_bias_vcc;
static struct regulator* lcd_vsn_vcc;
static struct regulator* lcd_vsp_vcc;
static struct regulator* lcd_vsp_vsn_vcc;

static struct vcc_desc tm_lcd_vcc_get_cmds[] =
{
    /* vcc get */
    {DTYPE_VCC_GET, VCC_BACKLIGHT_NAME, &lcd_bl_vcc,   0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_GET, VCC_LCDBIAS_NAME,    &lcd_bias_vcc, 0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_GET, VCC_LCD_VSN_NAME,   &lcd_vsn_vcc,  0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_GET, VCC_LCD_VSP_NAME,   &lcd_vsp_vcc,  0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_GET, VCC_LCD_VSP_VSN_NAME,   &lcd_vsp_vsn_vcc,  0, 0, 0, 0, 0, 0},
};

static struct vcc_desc tm_lcd_vcc_set_cmds[] =
{
    /* vcc set voltage */
    {DTYPE_VCC_SET_VOLTAGE, VCC_LCDBIAS_NAME, &lcd_bias_vcc,  0, 0, 5400000, 5400000, 0, 0},
    {DTYPE_VCC_SET_VOLTAGE, VCC_LCD_VSP_NAME, &lcd_vsp_vcc,   0, 0, 5400000, 5400000, 0, 0},
    {DTYPE_VCC_SET_VOLTAGE, VCC_LCD_VSN_NAME, &lcd_vsn_vcc,   0, 0, 5400000, 5400000, 0, 0},
};

static struct vcc_desc tm_lcd_vcc_put_cmds[] =
{
    /* vcc put */
    {DTYPE_VCC_PUT, VCC_BACKLIGHT_NAME, &lcd_bl_vcc,   0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_PUT, VCC_LCDBIAS_NAME,    &lcd_bias_vcc, 0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_PUT, VCC_LCD_VSN_NAME,   &lcd_vsn_vcc,  0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_PUT, VCC_LCD_VSP_NAME,   &lcd_vsp_vcc,  0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_PUT, VCC_LCD_VSP_VSN_NAME,    &lcd_vsp_vsn_vcc,  0, 0, 0, 0, 0, 0},
};

static struct vcc_desc tm_lcd_vcc_enable_vsp_vsn_cmds[] =
{
    /* vcc enable vsp/vsn*/
    {DTYPE_VCC_ENABLE, VCC_LCD_VSP_VSN_NAME,   &lcd_vsp_vsn_vcc,    WAIT_TYPE_MS, 50, 0, 0, 0, 0},
};

static struct vcc_desc tm_lcd_vcc_enable_cmds[] =
{
    /* vcc enable */
    {DTYPE_VCC_ENABLE, VCC_LCDBIAS_NAME,   &lcd_bias_vcc, WAIT_TYPE_MS, 12, 0, 0, 0, 0},
    {DTYPE_VCC_ENABLE, VCC_LCD_VSP_NAME,   &lcd_vsp_vcc,  WAIT_TYPE_MS, 10, 0, 0, 0, 0},
    {DTYPE_VCC_ENABLE, VCC_LCD_VSN_NAME,   &lcd_vsn_vcc,  WAIT_TYPE_MS, 50, 0, 0, 0, 0},
};

static struct vcc_desc tm_lcd_vcc_disable_cmds[] =
{
    /* vcc disable */
    {DTYPE_VCC_DISABLE, VCC_LCD_VSN_NAME,   &lcd_vsn_vcc,  WAIT_TYPE_MS, 5, 0, 0, 0, 0},
    {DTYPE_VCC_DISABLE, VCC_LCD_VSP_NAME,   &lcd_vsp_vcc,  WAIT_TYPE_MS, 5, 0, 0, 0, 0},
    {DTYPE_VCC_DISABLE, VCC_LCDBIAS_NAME,   &lcd_bias_vcc, WAIT_TYPE_MS, 1, 0, 0, 0, 0},
};

static struct vcc_desc tm_lcd_bl_enable_cmds[] =
{
    /* backlight enable */
    {DTYPE_VCC_ENABLE, VCC_BACKLIGHT_NAME, &lcd_bl_vcc,   WAIT_TYPE_MS, 10, 0, 0, 0, 0},
};

static struct vcc_desc tm_lcd_bl_disable_cmds[] =
{
    /* backlight disable */
    {DTYPE_VCC_DISABLE, VCC_BACKLIGHT_NAME, &lcd_bl_vcc,  WAIT_TYPE_MS, 1, 0, 0, 0, 0},
};

/************************************************************
 *
 * LCD GPIO PINCTRL
 *
 ************************************************************/
static struct pinctrl_data pctrl;

static struct pinctrl_cmd_desc tm_lcd_pinctrl_init_cmds[] =
{
    {DTYPE_PINCTRL_GET,       &pctrl, 0},
    {DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
    {DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_IDLE},
};
static struct pinctrl_cmd_desc tm_lcd_pinctrl_normal_cmds[] =
{
    {DTYPE_PINCTRL_SET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
};
static struct pinctrl_cmd_desc tm_lcd_pinctrl_lowpower_cmds[] =
{
    {DTYPE_PINCTRL_SET, &pctrl, DTYPE_PINCTRL_STATE_IDLE},
};

#define GPIO_LCD_RESET_NAME      "lcd_reset_gpio"
static u32 gpio_lcd_reset;

static struct gpio_desc tm_lcd_gpio_get_cmds[] =
{
    /* reset */
    {DTYPE_GPIO_GET, WAIT_TYPE_MS, 0, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
};

static struct gpio_desc tm_lcd_gpio_request_cmds[] =
{
    /* reset */
    {DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
};

static struct gpio_desc tm_lcd_gpio_free_cmds[] =
{
    /* reset */
    {DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
};

static struct gpio_desc tm_lcd_gpio_normal_cmds[] =
{
    /* reset */
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 1},
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 20, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 120, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 1},
};

static struct gpio_desc tm_lcd_gpio_lowpower_cmds[] =
{
    /* reset */
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 1, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
};

static volatile bool g_display_on;
static struct balong_fb_panel_data tm_panel_data;
static struct lcd_tuning_dev* p_tuning_dev = NULL;

static ssize_t tm_lcd_info_show(struct device* dev,
                                 struct device_attribute* attr, char* buf)
{
    int ret = 0;
    struct balong_panel_info* pinfo = NULL;

    pinfo = tm_panel_data.panel_info;
    snprintf(buf, PAGE_SIZE, "%s %d x %d\n", g_lcd_name_buf, pinfo->xres, pinfo->yres);
    ret = strlen(buf) + 1;

    return ret;
}

#define TM_ESD_DEBUG    0
#if TM_ESD_DEBUG
/*for esd test*/
static int esd_flag = 0;
static ssize_t tm_show_esd_test(struct device* dev,
                                 struct device_attribute* attr, char* buf)
{
    return sprintf(buf, "%d\n", esd_flag);
}
static ssize_t tm_store_esd_test(struct device* dev,
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
static DEVICE_ATTR(esd_test, 0644, tm_show_esd_test, tm_store_esd_test);
#endif
static DEVICE_ATTR(lcd_info, S_IRUGO, tm_lcd_info_show, NULL);

static struct attribute* tm_attrs[] =
{
    &dev_attr_lcd_info.attr,
#if TM_ESD_DEBUG
    /*for esd test*/
    &dev_attr_esd_test.attr,
#endif
    NULL,
};

static struct attribute_group tm_attr_group =
{
    .attrs = tm_attrs,
};

static int tm_sysfs_init(struct platform_device* pdev)
{
    int ret = 0;
    ret = sysfs_create_group(&pdev->dev.kobj, &tm_attr_group);
    if (ret)
    {
        balongfb_loge("create sysfs file failed!\n");
        return ret;
    }
    return 0;
}

static void tm_sysfs_deinit(struct platform_device* pdev)
{
    sysfs_remove_group(&pdev->dev.kobj, &tm_attr_group);
}

static int mipi_tm_panel_on(struct platform_device* pdev)
{
    struct balong_fb_data_type* balongfd = NULL;
    struct balong_panel_info* pinfo = NULL;
    struct balong_fb_panel_data* pdata = NULL;

#if defined (CONFIG_HUAWEI_DSM)
    u8* ade_base = NULL;
    u32 int_st0 = 0, int_st1 = 0;
#endif

    BUG_ON(pdev == NULL);

    pr_info("OTM1287A: %s enter succ!\n", __func__);
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
            vcc_cmds_tx(NULL, tm_lcd_vcc_set_cmds, \
                        ARRAY_SIZE(tm_lcd_vcc_set_cmds));

        pinfo->lcd_init_step = LCD_INIT_SEND_SEQUENCE;
    }
    else if (pinfo->lcd_init_step == LCD_INIT_SEND_SEQUENCE)
    {
        if (!g_display_on)
        {
            /*Jank log*/
            LOG_JANK_D(JLID_KERNEL_LCD_POWER_ON, "%s", "JL_KERNEL_LCD_POWER_ON");

            /* lcd pinctrl normal */
            pinctrl_cmds_tx(pdev, tm_lcd_pinctrl_normal_cmds, \
                            ARRAY_SIZE(tm_lcd_pinctrl_normal_cmds));

            /* lcd gpio request */
            gpio_cmds_tx(NULL, tm_lcd_gpio_request_cmds, \
                         ARRAY_SIZE(tm_lcd_gpio_request_cmds));

            /* lcd vcc enable */
            vcc_cmds_tx(NULL, tm_lcd_vcc_enable_cmds, \
                        ARRAY_SIZE(tm_lcd_vcc_enable_cmds));

            /* lcd gpio normal */
            gpio_cmds_tx(NULL, tm_lcd_gpio_normal_cmds, \
                         ARRAY_SIZE(tm_lcd_gpio_normal_cmds));


                /* lcd display on sequence */
                mipi_dsi_cmds_tx(tm_display_on_cmds, \
                                 ARRAY_SIZE(tm_display_on_cmds), balongfd->dsi_base);

            g_display_on = true;
            /*first set sbl to panel*/
            if (balongfd->panel_info.sbl_enable)
            {
                pdata = (struct balong_fb_panel_data*)balongfd->pdev->dev.platform_data;
                if (pdata->set_sre != NULL)
                {
                    pdata->set_sre(balongfd->pdev, balongfd->sbl_enable, balongfd->sbl_lsensor_value);
                }
            }
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

static int mipi_tm_panel_off(struct platform_device* pdev)
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
        mipi_dsi_cmds_tx(tm_display_off_cmds, \
                         ARRAY_SIZE(tm_display_off_cmds), balongfd->dsi_base);

        /* shutdown d_phy */
        set_MIPIDSI_PHY_RSTZ(0);

        /* lcd gpio lowpower */
        gpio_cmds_tx(NULL, tm_lcd_gpio_lowpower_cmds, \
                     ARRAY_SIZE(tm_lcd_gpio_lowpower_cmds));
        /* lcd gpio free */
        gpio_cmds_tx(NULL, tm_lcd_gpio_free_cmds, \
                     ARRAY_SIZE(tm_lcd_gpio_free_cmds));

        /* lcd pinctrl lowpower */
        pinctrl_cmds_tx(pdev, tm_lcd_pinctrl_lowpower_cmds, \
                        ARRAY_SIZE(tm_lcd_pinctrl_lowpower_cmds));

        /* lcd vcc disable */
        vcc_cmds_tx(NULL, tm_lcd_vcc_disable_cmds, \
                    ARRAY_SIZE(tm_lcd_vcc_disable_cmds));

        g_display_on = false;
    }

    pr_info("%s exit succ!\n", __func__);
    return 0;
}

static int mipi_tm_panel_remove(struct platform_device* pdev)
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
    vcc_cmds_tx(pdev, tm_lcd_vcc_put_cmds, \
                ARRAY_SIZE(tm_lcd_vcc_put_cmds));

    /* lcd pinctrl lowpower */
    pinctrl_cmds_tx(pdev, tm_lcd_pinctrl_lowpower_cmds, \
                    ARRAY_SIZE(tm_lcd_pinctrl_lowpower_cmds));

    tm_sysfs_deinit(pdev);

    return 0;
}

static int tm_set_gamma(struct lcd_tuning_dev* ltd, enum lcd_gamma gamma)
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
static int tm_set_cabc(struct platform_device* pdev, int cabc)
{
    int ret = 0;
    struct balong_fb_data_type* balongfd = NULL;
    //set cabc mode according to application situation
    //dimming off in UI mode
    char  tm_dimming_off_ui[] =
    {
        0x53,
        0x24,
    };
    //dimming on in Video mode
    char  tm_dimming_on_video[] =
    {
        0x53,
        0x2C,
    };
    char  tm_cabc_ui_on[] =
    {
        0x55,
        0x01,
    };

    char  tm_cabc_vid_on[] =
    {
        0x55,
        0x03,
    };

    char  tm_cabc_off[] =
    {
        0x55,
        0x00,
    };

    struct dsi_cmd_desc tm_dimming_off_ui_cmds[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
            sizeof(tm_dimming_off_ui), tm_dimming_off_ui
        },
    };

    struct dsi_cmd_desc tm_dimming_on_video_cmds[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
            sizeof(tm_dimming_on_video), tm_dimming_on_video
        },
    };

    struct dsi_cmd_desc tm_cabc_ui_cmds[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
            sizeof(tm_cabc_ui_on), tm_cabc_ui_on
        },
    };

    struct dsi_cmd_desc tm_cabc_vid_cmds[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
            sizeof(tm_cabc_vid_on), tm_cabc_vid_on
        },
    };

    struct dsi_cmd_desc tm_cabc_off_cmds[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
            sizeof(tm_cabc_off), tm_cabc_off
        },
    };

    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);

#if TM_CABC_ENABLED
    switch (cabc)
    {
        case CABC_UI:                     // set CABC as UI Mode
        {
            balongfd->g_CABC_mode = 0x01;
            mipi_dsi_cmds_tx(tm_cabc_ui_cmds, ARRAY_SIZE(tm_cabc_ui_cmds), balongfd->dsi_base);
            mipi_dsi_cmds_tx(tm_dimming_off_ui_cmds, ARRAY_SIZE(tm_dimming_off_ui_cmds), balongfd->dsi_base);  //dimming off in UI mode
        }
        break;

        case CABC_VID:                   // set CABC as Video Mode
        {
            balongfd->g_CABC_mode = 0x03;
            mipi_dsi_cmds_tx(tm_cabc_vid_cmds, ARRAY_SIZE(tm_cabc_vid_cmds), balongfd->dsi_base);
            mipi_dsi_cmds_tx(tm_dimming_on_video_cmds, ARRAY_SIZE(tm_dimming_on_video_cmds), balongfd->dsi_base); //dimming on in Video mode
        }
        break;

        case CABC_OFF:                   // close CABC
        {
            balongfd->g_CABC_mode = 0x00;
            mipi_dsi_cmds_tx(tm_cabc_off_cmds, ARRAY_SIZE(tm_cabc_off_cmds), balongfd->dsi_base);
        }
        break;

        default:
            ret = -1;
            break;
    }
    pr_info("%s CABC_MODE =  %d\n", __func__, cabc);
#endif
    return ret;
}

static struct lcd_tuning_ops sp_tuning_ops =
{
    .set_gamma = tm_set_gamma,
    .set_cabc = tm_set_cabc,
};

#if LCD_CHECK_MIPI_SUPPORT
static int mipi_tm_check_mipi_tr(struct platform_device* pdev)
{
    struct balong_fb_data_type* balongfd = NULL;
    u32 read_value = 0;
    int err = 0;

    BUG_ON(pdev == NULL);
    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);

    balongfd->lcd_readvalue = 0;
    //read 0x0a
    err = mipi_dsi_read_reg(balongfd, 0x0a, &read_value, DTYPE_GEN_READ1);
    if (err || (read_value & 0xff) != 0x9c)
    {
        err = -1;
        goto check_mipi_tr_error;
    }
    balongfd->lcd_readvalue |= (read_value & 0xff) << 24;
    //read 0x0b
    err = mipi_dsi_read_reg(balongfd, 0x0b, &read_value, DTYPE_GEN_READ1);
    if (err || (read_value & 0xff) != 0x00)
    {
        err = -1;
        goto check_mipi_tr_error;
    }
    balongfd->lcd_readvalue |= (read_value & 0xff) << 16;
    //read 0x0c
    err = mipi_dsi_read_reg(balongfd, 0x0c, &read_value, DTYPE_GEN_READ1);
    if (err || (read_value & 0xff) != 0x07)
    {
        err = -1;
        goto check_mipi_tr_error;
    }
    balongfd->lcd_readvalue |= (read_value & 0xff) << 8;
    //read 0x0d
    err = mipi_dsi_read_reg(balongfd, 0x0d, &read_value, DTYPE_GEN_READ1);
    if (err || (read_value & 0xff) != 0x00)
    {
        err = -1;
        goto check_mipi_tr_error;
    }
    balongfd->lcd_readvalue |= (read_value & 0xff);
check_mipi_tr_error:
    return err;
}

static char inversion_mode_1dot_shift_B4[] =
{
    0x00,
    0xB4,
};

static char inversion_mode_1dot_C0B4[] =
{
    0xC0,
    0x00,
};

static char inversion_mode_column_shift_B4[] =
{
    0x00,
    0xB4,
};

static char inversion_mode_column_C0B4[] =
{
    0xC0,
    0x55,
};

static struct dsi_cmd_desc  tm_lcd_inversion_type_1dot[] =
{
    /*First, open access mode*/
    {
        DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param1), tm_power_on_param1
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param2), tm_power_on_param2
    },
    {
        DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param3), tm_power_on_param3
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param4), tm_power_on_param4
    },

    /*Second, set 1dot inversion*/
    {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(inversion_mode_1dot_shift_B4), inversion_mode_1dot_shift_B4
    },
    {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(inversion_mode_1dot_C0B4), inversion_mode_1dot_C0B4
    },
    /*Third, close access mode*/
    {
        DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param121), tm_power_on_param121
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param122), tm_power_on_param122
    },
};

static struct dsi_cmd_desc  tm_lcd_inversion_type_column[] =
{
    /*First, open access mode*/
    {
        DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param1), tm_power_on_param1
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param2), tm_power_on_param2
    },
    {
        DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param3), tm_power_on_param3
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param4), tm_power_on_param4
    },
    /*Second, set column inversion*/
    {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(inversion_mode_column_shift_B4), inversion_mode_column_shift_B4
    },
    {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(inversion_mode_column_C0B4), inversion_mode_column_C0B4
    },
    /*Third, close access mode*/
    {
        DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param121), tm_power_on_param121
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(tm_power_on_param122), tm_power_on_param122
    },
};

static int mipi_tm_set_inversion_type(struct platform_device* pdev, unsigned int inversion_mode)
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
            mipi_dsi_cmds_tx(tm_lcd_inversion_type_1dot, \
                             ARRAY_SIZE(tm_lcd_inversion_type_1dot), balongfd->dsi_base);
            balongfb_loge("INVERSION_TYPE_1DOT\n");
            ret = 0;
            break;
        case INVERSION_TYPE_COLUMN:
            mipi_dsi_cmds_tx(tm_lcd_inversion_type_column, \
                             ARRAY_SIZE(tm_lcd_inversion_type_column), balongfd->dsi_base);
            balongfb_loge("INVERSION_TYPE_COLUMN\n");
            ret = 0;
            break;
        default:
            mipi_dsi_cmds_tx(tm_lcd_inversion_type_column, \
                             ARRAY_SIZE(tm_lcd_inversion_type_column), balongfd->dsi_base);
            balongfb_loge("default LCD inversion type, INVERSION_TYPE_COLUMN.\n");
            ret = -EINVAL;
            break;
    }
    return ret;
}

#endif

static int mipi_tm_panel_set_backlight(struct platform_device* pdev)
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

    struct dsi_cmd_desc tm_bl_level_adjust[] =
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

    //backlight may turn off when bl_level is below 7.
    if (level < BRIGHTNESS_MIN && level != 0)
    {
        level = BRIGHTNESS_MIN;
    }

    bl_level_adjust[1] = level;

    mipi_dsi_cmds_tx(tm_bl_level_adjust, ARRAY_SIZE(tm_bl_level_adjust), balongfd->dsi_base);
    if (!not_use_scharger)
    {
        //backlight use scharger
        if (level == 0)//power off, disable scharger
        {
            vcc_cmds_tx(NULL, tm_lcd_bl_disable_cmds, \
                    ARRAY_SIZE(tm_lcd_bl_disable_cmds));
        }
        else if (last_level == 0 && level != 0)//power on, enable scharger
        {
            /*Jank log*/
            LOG_JANK_D(JLID_KERNEL_LCD_BACKLIGHT_ON, "JL_KERNEL_LCD_BACKLIGHT_ON,%u", level);

            vcc_cmds_tx(NULL, tm_lcd_bl_enable_cmds, \
                    ARRAY_SIZE(tm_lcd_bl_enable_cmds));
        }
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

static int mipi_tm_panel_set_fastboot(struct platform_device* pdev)
{
    struct balong_fb_data_type* balongfd = NULL;

    BUG_ON(pdev == NULL);

    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);

    /* lcd gpio request */
    gpio_cmds_tx(NULL, tm_lcd_gpio_request_cmds, \
                 ARRAY_SIZE(tm_lcd_gpio_request_cmds));

    /* lcd vcc enable */
    vcc_cmds_tx(NULL, tm_lcd_vcc_enable_cmds, \
                ARRAY_SIZE(tm_lcd_vcc_enable_cmds));

    /*lcd vcc enable vsp/vsn*/
    vcc_cmds_tx(NULL, tm_lcd_vcc_enable_vsp_vsn_cmds, \
                ARRAY_SIZE(tm_lcd_vcc_enable_vsp_vsn_cmds));

    if (!not_use_scharger)
    {
        /* lcd backlight enable */
        vcc_cmds_tx(NULL, tm_lcd_bl_enable_cmds, \
                ARRAY_SIZE(tm_lcd_bl_enable_cmds));
    }
    g_display_on = true;

    return 0;
}

// This function is designed for SRE feature.
// According light sensor's value to enable or disable SRE(sunlight readable enhancement).
static int mipi_tm_panel_set_sre(struct platform_device* pdev, int enable, int value)
{
    struct balong_fb_data_type* balongfd = NULL;
    //The reg 8200h is used for SRE(AIE)'s setting.(Medium level:0x81)
    char sbl_level_setting1[2] =
    {
        0x00,
        0x00,
    };

    char sbl_level_setting2[2] =
    {
        0x82,
        0x00,
    };

    struct dsi_cmd_desc tm_sbl_level_setting[] =
    {
        {
            DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
            sizeof(sbl_level_setting1), sbl_level_setting1
        },
        {
            DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
            sizeof(sbl_level_setting2), sbl_level_setting2
        },
    };

    BUG_ON(pdev == NULL);
    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);

    //Swith SRE status depends on lightsensor's value.
    if (balongfd->sbl_enable == 1)             // Outdoor mode (enable SRE/AIE function)
    {
        if (0x81 != g_SRE_enable_level )       // set reg 8200h only when its value changed.
        {
            g_SRE_enable_level = 0x81;         // Set SRE(AIE) to Medium LEVEL. High level: 0x82, Low level : 0x80
            sbl_level_setting2[1]  =  g_SRE_enable_level;
            mipi_dsi_cmds_tx(tm_sbl_level_setting, ARRAY_SIZE(tm_sbl_level_setting), balongfd->dsi_base); //send value to IC reg
        }
    }
    else                                       // Indoor mode (disable sbl function)
    {
        if (0x81 == g_SRE_enable_level )        // set reg 0x8200h only when its value changed.
        {
            g_SRE_enable_level = 0x00;         // Disable SRE(AIE) Function
            sbl_level_setting2[1]  = g_SRE_enable_level;
            mipi_dsi_cmds_tx(tm_sbl_level_setting, ARRAY_SIZE(tm_sbl_level_setting), balongfd->dsi_base); //send value to IC reg
        }
    }
    pr_info("%s enter succ!SRE enable = %d reg8200h_value = 0x%x\n", __func__, balongfd->sbl_enable, g_SRE_enable_level);
    return 0;
}

#if LCD_ESD_CHECK_SUPPORT
/*for esd check*/
static int mipi_tm_panel_check_esd(struct platform_device* pdev)
{
    int ret = 0;
    int err = 0;
    unsigned int val = 0;
    struct balong_fb_data_type* balongfd = NULL;

    BUG_ON(pdev == NULL);

    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);

    ret = mipi_dsi_read_reg(balongfd, 0x0a, &val, DTYPE_GEN_READ1);
    if ((ret == 0) && ((val & 0xff) != 0x9c))
    {
        err = 1;
        balongfb_loge("check esd reg 0x0a is:0x%x.\n", val);
    }

#if TM_ESD_DEBUG
    if (esd_flag != 0)
    {
        err = 1;
    }
#endif

    return err;
}
#endif //LCD_ESD_CHECK_SUPPORT

static struct balong_panel_info tm_panel_info = {0};
static struct balong_fb_panel_data tm_panel_data =
{
    .panel_info = &tm_panel_info,
    .on = mipi_tm_panel_on,
    .off = mipi_tm_panel_off,
    .remove = mipi_tm_panel_remove,
    .set_backlight = mipi_tm_panel_set_backlight,
    .set_fastboot = mipi_tm_panel_set_fastboot,
    /*Sunlight Readability Enhancement function*/
    .set_sre = mipi_tm_panel_set_sre,
#if LCD_ESD_CHECK_SUPPORT
    /*for esd check*/
    .check_esd = mipi_tm_panel_check_esd,
#endif //LCD_ESD_CHECK_SUPPORT
    .lcd_cabc_mode_store  =  tm_set_cabc,
#if LCD_CHECK_MIPI_SUPPORT
    .check_mipi_tr = mipi_tm_check_mipi_tr,
    .set_inversion_type = mipi_tm_set_inversion_type,
#endif
    .lcd_gram_check_show  =  mipi_tm_check_mipi_tr,
    .lcd_inversion_mode_store = mipi_tm_set_inversion_type,
};

static int __init tm_probe(struct platform_device* pdev)
{
    struct balong_panel_info* pinfo = NULL;
    struct platform_device* reg_pdev = NULL;
    struct lcd_properities lcd_props;

    /*add lcd info*/
    char lcd_name[] = "tm_OTM1287A 5.0' VIDEO TFT";
    int len;
    pr_info("OTM1287A: %s enter succ!!!!\n", __func__);
    /*add lcd info*/
    len = strlen(lcd_name);
    memset(g_lcd_name_buf, 0, sizeof(g_lcd_name_buf));
    strncpy(g_lcd_name_buf, lcd_name, (len > 100 ? 100 : len));
    g_display_on = false;
    pinfo = tm_panel_data.panel_info;

    /* init lcd panel info */
    pinfo->xres = 720;       // HD
    pinfo->yres = 1280;
    pinfo->width  = 62;
    pinfo->height = 110;
    pinfo->type = PANEL_MIPI_VIDEO;
    pinfo->orientation = LCD_PORTRAIT;
    pinfo->bpp = ADE_OUT_RGB_888;
    pinfo->s3d_frm = ADE_FRM_FMT_2D;
    pinfo->bgr_fmt = ADE_RGB;
    pinfo->bl_set_type = BL_SET_BY_MIPI;
    pinfo->bl_max = PWM_LEVEL;
    pinfo->bl_min = 1;

    pinfo->frc_enable = 0;    //close FRC
    /*Sunlight Readability Enhancement function, enable 1, disable 0*/
    pinfo->sbl_enable = 1;//    //enable sbl
#if LCD_ESD_CHECK_SUPPORT
    /*for esd check enable 1,disable 0*/
    if (NULL != strstr(saved_command_line, "androidboot.swtype=factory"))
    {
        pinfo->esd_enable = 0;
    }
    else
    {
        pinfo->esd_enable = 0;
    }
#endif //LCD_ESD_CHECK_SUPPORT

    pinfo->sbl.bl_max = 0xff;
    pinfo->sbl.cal_a = 0x0f;
    pinfo->sbl.cal_b = 0xd8;
    pinfo->sbl.str_limit = 0x40;

    // porch
    pinfo->ldi.h_back_porch = 28;
    pinfo->ldi.h_front_porch = 200;
    pinfo->ldi.h_pulse_width = 2;
    pinfo->ldi.v_back_porch = 25;
    pinfo->ldi.v_front_porch = 25;
    pinfo->ldi.v_pulse_width = 2;

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

    // video mode
    pinfo->ldi.hsync_plr = 1;
    pinfo->ldi.vsync_plr = 1;
    pinfo->ldi.pixelclk_plr = 0;
    pinfo->ldi.data_en_plr = 0;

    pinfo->ldi.disp_mode = LDI_DISP_MODE_NOT_3D_FBF;

    /* init at DTS */
    pinfo->mipi.lane_nums = DSI_4_LANES;
    pinfo->mipi.color_mode = DSI_24BITS_1;
    pinfo->mipi.vc = 0;
    pinfo->frame_rate = 60;
    pdev->id = 1;

    /* lcd resource */
    get_resource_from_dts(pdev, pinfo);

    /* lcd gpio init */
    gpio_cmds_tx(pdev, tm_lcd_gpio_get_cmds, \
                 ARRAY_SIZE(tm_lcd_gpio_get_cmds));

    /* lcd vcc init */
    vcc_cmds_tx(pdev, tm_lcd_vcc_get_cmds, \
                ARRAY_SIZE(tm_lcd_vcc_get_cmds));

    /* lcd pinctrl init */
    pinctrl_cmds_tx(pdev, tm_lcd_pinctrl_init_cmds, \
                    ARRAY_SIZE(tm_lcd_pinctrl_init_cmds));

    /* alloc panel device data */
    if (platform_device_add_data(pdev, &tm_panel_data,
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
    /* for cabc */
    lcd_props.type = TFT;
    lcd_props.default_gamma = GAMMA22;
    p_tuning_dev = lcd_tuning_dev_register(&lcd_props, &sp_tuning_ops, (void*)reg_pdev);
    if (IS_ERR(p_tuning_dev))
    {
        balongfb_loge("lcd_tuning_dev_register failed!\n");
        return -1;
    }

    tm_sysfs_init(pdev);

    pr_info("%s exit succ!\n", __func__);
    return 0;
}
static const struct of_device_id mipi_tm_otm1287a_chm_match_table[] =
{
    {
        .compatible = "hisilicon,mipi-tm-otm1287a-chm",
        .data = NULL,
    },
    {},
};

static struct platform_driver this_driver =
{
    .probe = tm_probe,
    .remove = NULL,
    .suspend = NULL,
    .resume = NULL,
    .shutdown = NULL,
    .driver = {
        .name = "mipi_tm_OTM1287A_CHM",
        .of_match_table = mipi_tm_otm1287a_chm_match_table,
    },
};

static int __init mipi_tm_panel_init(void)
{
    int ret = 0;
#ifndef CONFIG_ARM64
    if ( get_lcd_type() != TM_OTM1287A_LCD)
    {
        balongfb_loge("lcd type is not TM_otm1287A_LCD.\n");
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

module_init(mipi_tm_panel_init);
