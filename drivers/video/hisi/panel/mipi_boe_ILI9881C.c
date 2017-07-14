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

#define boe_CABC_ENABLED  1
static int g_IE_SRE_level = 0x80;

/*--------boe power on initial code -----------*/


static char boe_power_on_param1[]=
{
0xFF,
0x98,0x81,0x03,
};

static char boe_power_on_param2[]=
{
0x01,
0x00,
};

static char boe_power_on_param3[]=
{
0x02,
0x00,
};

static char boe_power_on_param4[]=
{
0x03,
0x73,
};

static char boe_power_on_param5[]=
{
0x04,
0x00,
};

static char boe_power_on_param6[]=
{
0x05,
0x00,
};

static char boe_power_on_param7[]=
{
0x06,
0x0C,
};

static char boe_power_on_param8[]=
{
0x07,
0x00,
};

static char boe_power_on_param9[]=
{
0x08,
0x00,
};

static char boe_power_on_param10[]=
{
0x09,
0x19,
};

static char boe_power_on_param11[]=
{
0x0a,
0x01,
};

static char boe_power_on_param12[]=
{
0x0b,
0x01,
};

static char boe_power_on_param13[]=
{
0x0c,
0x0B,
};

static char boe_power_on_param14[]=
{
0x0d,
0x01,
};

static char boe_power_on_param15[]=
{
0x0e,
0x01,
};

static char boe_power_on_param16[]=
{
0x0f,
0x19,
};

static char boe_power_on_param17[]=
{
0x10,
0x1D,
};

static char boe_power_on_param18[]=
{
0x11,
0x00,
};

static char boe_power_on_param19[]=
{
0x12,
0x00,
};

static char boe_power_on_param20[]=
{
0x13,
0x02,
};

static char boe_power_on_param21[]=
{
0x14,
0x00,
};

static char boe_power_on_param22[]=
{
0x15,
0x00,
};

static char boe_power_on_param23[]=
{
0x16,
0x00,
};

static char boe_power_on_param24[]=
{
0x17,
0x00,
};

static char boe_power_on_param25[]=
{
0x18,
0x00,
};

static char boe_power_on_param26[]=
{
0x19,
0x00,
};

static char boe_power_on_param27[]=
{
0x1a,
0x00,
};

static char boe_power_on_param28[]=
{
0x1b,
0x00,
};

static char boe_power_on_param29[]=
{
0x1c,
0x00,
};

static char boe_power_on_param30[]=
{
0x1d,
0x00,
};

static char boe_power_on_param31[]=
{
0x1e,
0x44,
};

static char boe_power_on_param32[]=
{
0x1f,
0xC0,
};

static char boe_power_on_param33[]=
{
0x20,
0x0A,
};

static char boe_power_on_param34[]=
{
0x21,
0x03,
};

static char boe_power_on_param35[]=
{
0x22,
0x0A,
};

static char boe_power_on_param36[]=
{
0x23,
0x00,
};

static char boe_power_on_param37[]=
{
0x24,
0x8C,
};

static char boe_power_on_param38[]=
{
0x25,
0x8C,
};

static char boe_power_on_param39[]=
{
0x26,
0x00,
};

static char boe_power_on_param40[]=
{
0x27,
0x00,
};

static char boe_power_on_param41[]=
{
0x28,
0x3B,
};

static char boe_power_on_param42[]=
{
0x29,
0x03,
};

static char boe_power_on_param43[]=
{
0x2a,
0x00,
};

static char boe_power_on_param44[]=
{
0x2b,
0x00,
};

static char boe_power_on_param45[]=
{
0x2c,
0x00,
};

static char boe_power_on_param46[]=
{
0x2d,
0x00,
};

static char boe_power_on_param47[]=
{
0x2e,
0x00,
};

static char boe_power_on_param48[]=
{
0x2f,
0x00,
};

static char boe_power_on_param49[]=
{
0x30,
0x00,
};

static char boe_power_on_param50[]=
{
0x31,
0x00,
};

static char boe_power_on_param51[]=
{
0x32,
0x00,
};

static char boe_power_on_param52[]=
{
0x33,
0x00,
};

static char boe_power_on_param53[]=
{
0x34,
0x00,
};

static char boe_power_on_param54[]=
{
0x35,
0x00,
};

static char boe_power_on_param55[]=
{
0x36,
0x00,
};

static char boe_power_on_param56[]=
{
0x37,
0x00,
};

static char boe_power_on_param57[]=
{
0x38,
0x00,
};

static char boe_power_on_param58[]=
{
0x39,
0x00,
};

static char boe_power_on_param59[]=
{
0x3a,
0x00,
};

static char boe_power_on_param60[]=
{
0x3b,
0x00,
};

static char boe_power_on_param61[]=
{
0x3c,
0x00,
};

static char boe_power_on_param62[]=
{
0x3d,
0x00,
};

static char boe_power_on_param63[]=
{
0x3e,
0x00,
};

static char boe_power_on_param64[]=
{
0x3f,
0x00,
};

static char boe_power_on_param65[]=
{
0x40,
0x00,
};

static char boe_power_on_param66[]=
{
0x41,
0x00,
};

static char boe_power_on_param67[]=
{
0x42,
0x00,
};

static char boe_power_on_param68[]=
{
0x43,
0x00,
};

static char boe_power_on_param69[]=
{
0x44,
0x00,
};

static char boe_power_on_param70[]=
{
0x50,
0x01,
};

static char boe_power_on_param71[]=
{
0x51,
0x23,
};

static char boe_power_on_param72[]=
{
0x52,
0x45,
};

static char boe_power_on_param73[]=
{
0x53,
0x67,
};

static char boe_power_on_param74[]=
{
0x54,
0x89,
};

static char boe_power_on_param75[]=
{
0x55,
0xab,
};

static char boe_power_on_param76[]=
{
0x56,
0x01,
};

static char boe_power_on_param77[]=
{
0x57,
0x23,
};

static char boe_power_on_param78[]=
{
0x58,
0x45,
};

static char boe_power_on_param79[]=
{
0x59,
0x67,
};

static char boe_power_on_param80[]=
{
0x5a,
0x89,
};

static char boe_power_on_param81[]=
{
0x5b,
0xab,
};

static char boe_power_on_param82[]=
{
0x5c,
0xcd,
};

static char boe_power_on_param83[]=
{
0x5d,
0xef,
};

static char boe_power_on_param84[]=
{
0x5e,
0x11,
};

static char boe_power_on_param85[]=
{
0x5f,
0x02,
};

static char boe_power_on_param86[]=
{
0x60,
0x00,
};
static char boe_power_on_param87[]=
{
0x61,
0x0C,
};

static char boe_power_on_param88[]=
{
0x62,
0x0D,
};

static char boe_power_on_param89[]=
{
0x63,
0x0E,
};

static char boe_power_on_param90[]=
{
0x64,
0x0F,
};

static char boe_power_on_param91[]=
{
0x65,
0x02,
};

static char boe_power_on_param92[]=
{
0x66,
0x02,
};

static char boe_power_on_param93[]=
{
0x67,
0x02,
};

static char boe_power_on_param94[]=
{
0x68,
0x02,
};

static char boe_power_on_param95[]=
{
0x69,
0x02,
};

static char boe_power_on_param96[]=
{
0x6a,
0x02,
};

static char boe_power_on_param97[]=
{
0x6b,
0x02,
};

static char boe_power_on_param98[]=
{
0x6c,
0x02,
};

static char boe_power_on_param99[]=
{
0x6d,
0x02,
};

static char boe_power_on_param100[]=
{
0x6e,
0x05,
};

static char boe_power_on_param101[]=
{
0x6f,
0x05,
};

static char boe_power_on_param102[]=
{
0x70,
0x05,
};

static char boe_power_on_param103[]=
{
0x71,
0x05,
};

static char boe_power_on_param104[]=
{
0x72,
0x01,
};

static char boe_power_on_param105[]=
{
0x73,
0x06,
};

static char boe_power_on_param106[]=
{
0x74,
0x07,
};

static char boe_power_on_param107[]=
{
0x75,
0x02,
};

static char boe_power_on_param108[]=
{
0x76,
0x00,
};

static char boe_power_on_param109[]=
{
0x77,
0x0C,
};

static char boe_power_on_param110[]=
{
0x78,
0x0D,
};

static char boe_power_on_param111[]=
{
0x79,
0x0E,
};

static char boe_power_on_param112[]=
{
0x7a,
0x0F,
};

static char boe_power_on_param113[]=
{
0x7b,
0x02,
};

static char boe_power_on_param114[]=
{
0x7c,
0x02,
};

static char boe_power_on_param115[]=
{
0x7d,
0x02,
};

static char boe_power_on_param116[]=
{
0x7e,
0x02,
};

static char boe_power_on_param117[]=
{
0x7f,
0x02,
};

static char boe_power_on_param118[]=
{
0x80,
0x02,
};

static char boe_power_on_param119[]=
{
0x81,
0x02,
};

static char boe_power_on_param120[]=
{
0x82,
0x02,
};

static char boe_power_on_param121[]=
{
0x83,
0x02,
};

static char boe_power_on_param122[]=
{
0x84,
0x05,
};

static char boe_power_on_param123[]=
{
0x85,
0x05,
};

static char boe_power_on_param124[]=
{
0x86,
0x05,
};

static char boe_power_on_param125[]=
{
0x87,
0x05,
};

static char boe_power_on_param126[]=
{
0x88,
0x01,
};

static char boe_power_on_param127[]=
{
0x89,
0x06,
};

static char boe_power_on_param128[]=
{
0x8A,
0x07,
};

static char boe_power_on_param129[]=
{
0xFF,
0x98,0x81,0x04,
};

static char boe_power_on_param_AF[]=
{
0xAF,
0x67,
};

static char boe_power_on_param_AB[]=
{
0xAB,
0x00,
};

static char boe_power_on_param130[]=
{
0x6C,
0x15,
};

static char boe_power_on_param131[]=
{
0x6E,
0x19,
};

static char boe_power_on_param132[]=
{
0x6F,
0x25,
};

static char boe_power_on_param133[]=
{
0x3A,
0x24,
};

static char boe_power_on_param135[]=
{
0x8D,
0x1F,
};

static char boe_power_on_param136[]=
{
0x87,
0xBA,
};

static char boe_power_on_param137[]=
{
0x7A,
0x10,
};

static char boe_power_on_param138[]=
{
0x71,
0xB0,
};

static char boe_power_on_param139[]=
{
0xFF,
0x98,0x81,0x01,
};

static char boe_power_on_param_F3[]=
{
0xF3,
0x05,
};

static char boe_power_on_param140[]=
{
0x22,
0x0A,
};

static char boe_power_on_param141[]=
{
0x31,
0x00,
};

static char boe_power_on_param142[]=
{
0x40,
0x53,
};

static char boe_power_on_param143[]=
{
0x43,
0x66,
};

static char boe_power_on_param144[]=
{
0x50,
0xA6,
};

static char boe_power_on_param145[]=
{
0x51,
0xA1,
};

static char boe_power_on_param146[]=
{
0x60,
0x15,
};

static char boe_power_on_param147[]=
{
0x61,
0x01,
};

static char boe_power_on_param148[]=
{
0x62,
0x0C,
};

static char boe_power_on_param149[]=
{
0x63,
0x00,
};

static char boe_power_on_param150[]=
{
0xA0,
0x00,
};

static char boe_power_on_param151[]=
{
0xA1,
0x13,
};

static char boe_power_on_param152[]=
{
0xA2,
0x1F,
};

static char boe_power_on_param153[]=
{
0xA3,
0x11,
};

static char boe_power_on_param154[]=
{
0xA4,
0x10,
};

static char boe_power_on_param155[]=
{
0xA5,
0x28,
};

static char boe_power_on_param156[]=
{
0xA6,
0x1A,
};

static char boe_power_on_param157[]=
{
0xA7,
0x1D,
};

static char boe_power_on_param158[]=
{
0xA8,
0x6D,
};

static char boe_power_on_param159[]=
{
0xA9,
0x1C,
};

static char boe_power_on_param160[]=
{
0xAA,
0x27,
};

static char boe_power_on_param161[]=
{
0xAB,
0x59,
};

static char boe_power_on_param162[]=
{
0xAC,
0x16,
};

static char boe_power_on_param163[]=
{
0xAD,
0x13,
};
static char boe_power_on_param168[]=
{
0xAE,
0x46,
};

static char boe_power_on_param169[]=
{
0xAF,
0x1D,
};

static char boe_power_on_param170[]=
{
0xB0,
0x26,
};

static char boe_power_on_param171[]=
{
0xB1,
0x52,
};

static char boe_power_on_param172[]=
{
0xB2,
0x64,
};

static char boe_power_on_param173[]=
{
0xB3,
0x3F,
};

static char boe_power_on_param174[]=
{
0xC0,
0x00,
};
static char boe_power_on_param175[]=
{
0xC1,
0x13,
};
static char boe_power_on_param176[]=
{
0xC2,
0x1F,
};

static char boe_power_on_param177[]=
{
0xC3,
0x11,
};

static char boe_power_on_param178[]=
{
0xC4,
0x10,
};

static char boe_power_on_param179[]=
{
0xC5,
0x28,
};

static char boe_power_on_param180[]=
{
0xC6,
0x1A,
};

static char boe_power_on_param181[]=
{
0xC7,
0x1D,
};

static char boe_power_on_param182[]=
{
0xC8,
0x6D,
};

static char boe_power_on_param183[]=
{
0xC9,
0x1C,
};

static char boe_power_on_param184[]=
{
0xCA,
0x27,
};

static char boe_power_on_param185[]=
{
0xCB,
0x59,
};

static char boe_power_on_param186[]=
{
0xCC,
0x16,
};

static char boe_power_on_param187[]=
{
0xCD,
0x13,
};

static char boe_power_on_param188[]=
{
0xCE,
0x46,
};

static char boe_power_on_param189[]=
{
0xCF,
0x1D,
};

static char boe_power_on_param190[]=
{
0xD0,
0x26,
};

static char boe_power_on_param191[]=
{
0xD1,
0x52,
};

static char boe_power_on_param192[]=
{
0xD2,
0x64,
};

static char boe_power_on_param193[]=
{
0xD3,
0x3F,
};

static char boe_power_on_param194[]=
{
0xFF,
0x98,0x81,0x02,
};
static char boe_power_on_param195[]=
{
0x06,
0x20,    //PWM=31.32K,
};
static char boe_power_on_param196[]=
{
0x07,
0x00,    //PWM=31.32K
};
static char boe_power_on_param197[] =
{
0x00,
0xFD,
};

static char boe_power_on_param198[]=
{
0x01,
0x3F,
};

static char boe_power_on_param199[]=
{
0x02,
0xF6,
};

static char boe_power_on_param200[]=
{
0x08,
0x30,
};

static char boe_power_on_param201[]=
{
0x20,
0x3E,
};

static char boe_power_on_param202[]=
{
0x21,
0x3E,
};

static char boe_power_on_param203[]=
{
0x22,
0x3E,
};

static char boe_power_on_param204[]=
{
0x23,
0x3D,
};

static char boe_power_on_param205[]=
{
0x24,
0x3C,
};

static char boe_power_on_param206[]=
{
0x25,
0x3C,
};

static char boe_power_on_param207[]=
{
0x26,
0x38,
};

static char boe_power_on_param208[]=
{
0x29,
0x29,
};

static char boe_power_on_param209[]=
{
0x2C,
0xFE,
};

static char boe_power_on_param210[]=
{
0x2D,
0x3E,
};

static char boe_power_on_param211[]=
{
0x2E,
0xFD,
};

static char boe_power_on_param212[]=
{
0x2F,
0x3C,
};

static char boe_power_on_param213[]=
{
0x30,
0x38,
};

static char boe_power_on_param214[]=
{
0x31,
0xB4,
};

static char boe_power_on_param215[]=
{
0x32,
0xB0,
};

static char boe_power_on_param216[]=
{
0x33,
0xEE,
};

static char boe_power_on_param217[]=
{
0x34,
0xFE,
};

static char boe_power_on_param218[]=
{
0x35,
0x3E,
};

static char boe_power_on_param219[]=
{
0x36,
0xFD,
};

static char boe_power_on_param220[]=
{
0x03,
0x0C,
};

static char boe_power_on_param221[]=
{
0x04,
0x33,
};

static char boe_power_on_param222[]=
{
0x05,
0x30,
};

static char boe_power_on_param223[] =
{
0xFF,
0x98,0x81,0x00,
};

static char boe_power_on_param224[] =
{
0x11,
};

static char boe_power_on_param225[] =
{
0x29,
};

/*----------------Power ON Sequence(sleep mode to Normal mode)---------------------*/
static char bl_level_0[]=
{
0x51,
0x00,0x00
};

static char bl_enable[]=
{
0x53,
0x24,
};
//CABC
#if  boe_CABC_ENABLED
//Init cabc to UI mode when panel on
static char cabc_mode[] =
{
    0x55,
    0x81,
};
//set cabc mode according to application situation
static char  boe_cabc_ui_on[] =
{
    0x55,
    0x01,
};

static char  boe_cabc_vid_on[] =
{
    0x55,
    0x03,
};

static struct dsi_cmd_desc boe_cabc_ui_cmds[] =
{
    {
        DTYPE_DCS_WRITE1, 0, 30, WAIT_TYPE_US,
        sizeof(boe_cabc_ui_on), boe_cabc_ui_on
    },
};

static struct dsi_cmd_desc boe_cabc_vid_cmds[] =
{
    {
        DTYPE_DCS_WRITE1, 0, 30, WAIT_TYPE_US,
        sizeof(boe_cabc_vid_on), boe_cabc_vid_on
    },
};
#endif

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

static struct dsi_cmd_desc boe_display_on_cmds[] =
{
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param1), boe_power_on_param1
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param2), boe_power_on_param2
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param3), boe_power_on_param3
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param4), boe_power_on_param4
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param5), boe_power_on_param5
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param6), boe_power_on_param6
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param7), boe_power_on_param7
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param8), boe_power_on_param8
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param9), boe_power_on_param9
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param10), boe_power_on_param10
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param11), boe_power_on_param11
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param12), boe_power_on_param12
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param13), boe_power_on_param13
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param14), boe_power_on_param14
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param15), boe_power_on_param15
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param16), boe_power_on_param16
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param17), boe_power_on_param17
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param18), boe_power_on_param18
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param19), boe_power_on_param19
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param20), boe_power_on_param20
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param21), boe_power_on_param21
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param22), boe_power_on_param22
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param23), boe_power_on_param23
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param24), boe_power_on_param24
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param25), boe_power_on_param25
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param26), boe_power_on_param26
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param27), boe_power_on_param27
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param28), boe_power_on_param28
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param29), boe_power_on_param29
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param30), boe_power_on_param30
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param31), boe_power_on_param31
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param32), boe_power_on_param32
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param33), boe_power_on_param33
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param34), boe_power_on_param34
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param35), boe_power_on_param35
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param36), boe_power_on_param36
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param37), boe_power_on_param37
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param38), boe_power_on_param38
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param39), boe_power_on_param39
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param40), boe_power_on_param40
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param41), boe_power_on_param41
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param42), boe_power_on_param42
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param43), boe_power_on_param43
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param44), boe_power_on_param44
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param45), boe_power_on_param45
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param46), boe_power_on_param46
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param47), boe_power_on_param47
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param48), boe_power_on_param48
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param49), boe_power_on_param49
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param50), boe_power_on_param50
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param51), boe_power_on_param51
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param52), boe_power_on_param52
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param53), boe_power_on_param53
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param54), boe_power_on_param54
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param55), boe_power_on_param55
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param56), boe_power_on_param56
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param57), boe_power_on_param57
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param58), boe_power_on_param58
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param59), boe_power_on_param59
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param60), boe_power_on_param60
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param61), boe_power_on_param61
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param62), boe_power_on_param62
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param63), boe_power_on_param63
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param64), boe_power_on_param64
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param65), boe_power_on_param65
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param66), boe_power_on_param66
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param67), boe_power_on_param67
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param68), boe_power_on_param68
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param69), boe_power_on_param69
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param70), boe_power_on_param70
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param71), boe_power_on_param71
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param72), boe_power_on_param72
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param73), boe_power_on_param73
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param74), boe_power_on_param74
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param75), boe_power_on_param75
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param76), boe_power_on_param76
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param77), boe_power_on_param77
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param78), boe_power_on_param78
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param79), boe_power_on_param79
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param80), boe_power_on_param80
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param81), boe_power_on_param81
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param82), boe_power_on_param82
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param83), boe_power_on_param83
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param84), boe_power_on_param84
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param85), boe_power_on_param85
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param86), boe_power_on_param86
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param87), boe_power_on_param87
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param88), boe_power_on_param88
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param89), boe_power_on_param89
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param90), boe_power_on_param90
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param91), boe_power_on_param91
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param92), boe_power_on_param92
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param93), boe_power_on_param93
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param94), boe_power_on_param94
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param95), boe_power_on_param95
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param96), boe_power_on_param96
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param97), boe_power_on_param97
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param98), boe_power_on_param98
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param99), boe_power_on_param99
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param100), boe_power_on_param100
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param101), boe_power_on_param101
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param102), boe_power_on_param102
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param103), boe_power_on_param103
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param104), boe_power_on_param104
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param105), boe_power_on_param105
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param106), boe_power_on_param106
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param107), boe_power_on_param107
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param108), boe_power_on_param108
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param109), boe_power_on_param109
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param110), boe_power_on_param110
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param111), boe_power_on_param111
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param112), boe_power_on_param112
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param113), boe_power_on_param113
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param114), boe_power_on_param114
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param115), boe_power_on_param115
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param116), boe_power_on_param116
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param117), boe_power_on_param117
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param118), boe_power_on_param118
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param119), boe_power_on_param119
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param120), boe_power_on_param120
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param121), boe_power_on_param121
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param122), boe_power_on_param122
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param123), boe_power_on_param123
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param124), boe_power_on_param124
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param125), boe_power_on_param125
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param126), boe_power_on_param126
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param127), boe_power_on_param127
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param128), boe_power_on_param128
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param129), boe_power_on_param129
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param_AF), boe_power_on_param_AF
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param_AB), boe_power_on_param_AB
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param130), boe_power_on_param130
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param131), boe_power_on_param131
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param132), boe_power_on_param132
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param133), boe_power_on_param133
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param135), boe_power_on_param135
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param136), boe_power_on_param136
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param137), boe_power_on_param137
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param138), boe_power_on_param138
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param139), boe_power_on_param139
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param_F3), boe_power_on_param_F3
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param140), boe_power_on_param140
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param141), boe_power_on_param141
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param142), boe_power_on_param142
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param143), boe_power_on_param143
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param144), boe_power_on_param144
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param145), boe_power_on_param145
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param146), boe_power_on_param146
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param147), boe_power_on_param147
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param148), boe_power_on_param148
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param149), boe_power_on_param149
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param150), boe_power_on_param150
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param151), boe_power_on_param151
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param152), boe_power_on_param152
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param153), boe_power_on_param153
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param154), boe_power_on_param154
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param155), boe_power_on_param155
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param156), boe_power_on_param156
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param157), boe_power_on_param157
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param158), boe_power_on_param158
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param159), boe_power_on_param159
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param160), boe_power_on_param160
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param161), boe_power_on_param161
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param162), boe_power_on_param162
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param163), boe_power_on_param163
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param168), boe_power_on_param168
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param169), boe_power_on_param169
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param170), boe_power_on_param170
    },
    {
        DTYPE_DCS_LWRITE, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param171), boe_power_on_param171
    },
    {
        DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param172), boe_power_on_param172
    },
    {
        DTYPE_DCS_WRITE1, 0, 100, WAIT_TYPE_US,
        sizeof(boe_power_on_param173), boe_power_on_param173
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param174), boe_power_on_param174
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param175), boe_power_on_param175
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param176), boe_power_on_param176
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param177), boe_power_on_param177
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param178), boe_power_on_param178
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param179), boe_power_on_param179
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param180), boe_power_on_param180
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param181), boe_power_on_param181
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param182), boe_power_on_param182
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param183), boe_power_on_param183
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param184), boe_power_on_param184
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param185), boe_power_on_param185
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param186), boe_power_on_param186
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param187), boe_power_on_param187
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param188), boe_power_on_param188
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param189), boe_power_on_param189
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param190), boe_power_on_param190
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param191), boe_power_on_param191
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param192), boe_power_on_param192
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param193), boe_power_on_param193
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param194), boe_power_on_param194
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param195), boe_power_on_param195
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param196), boe_power_on_param196
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param197), boe_power_on_param197
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param198), boe_power_on_param198
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param199), boe_power_on_param199
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param200), boe_power_on_param200
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param201), boe_power_on_param201
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param202), boe_power_on_param202
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param203), boe_power_on_param203
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param204), boe_power_on_param204
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param205), boe_power_on_param205
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param206), boe_power_on_param206
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param207), boe_power_on_param207
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param208), boe_power_on_param208
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param209), boe_power_on_param209
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param210), boe_power_on_param210
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param211), boe_power_on_param211
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param212), boe_power_on_param212
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param213), boe_power_on_param213
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param214), boe_power_on_param214
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param215), boe_power_on_param215
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param216), boe_power_on_param216
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param217), boe_power_on_param217
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param218), boe_power_on_param218
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param219), boe_power_on_param219
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param220), boe_power_on_param220
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param221), boe_power_on_param221
    },
    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param222), boe_power_on_param222
    },

    {
        DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
        sizeof(boe_power_on_param223), boe_power_on_param223
    },

    {
        DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
        sizeof(bl_level_0), bl_level_0
    },
    {
        DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
        sizeof(bl_enable), bl_enable
    },
#if  boe_CABC_ENABLED
    {
        DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
        sizeof(cabc_mode), cabc_mode
    },
#endif
    {
        DTYPE_DCS_WRITE, 0, 120, WAIT_TYPE_MS,
        sizeof(boe_power_on_param224), boe_power_on_param224
    },
    {
        DTYPE_DCS_WRITE, 0, 20, WAIT_TYPE_MS,
        sizeof(boe_power_on_param225), boe_power_on_param225
    },
};

static struct dsi_cmd_desc boe_display_off_cmds[] =
{
    {
        DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
        sizeof(bl_level_0), bl_level_0
    },
    {
        DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_MS,
        sizeof(display_off), display_off
    },
    {
        DTYPE_DCS_WRITE1, 0, 120, WAIT_TYPE_MS,
        sizeof(enter_sleep), enter_sleep
    },
};

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
static struct regulator* lcd_bl_vcc;
static struct regulator* lcd_bias_vcc;
static struct regulator* lcd_vsn_vcc;
static struct regulator* lcd_vsp_vcc;

static struct vcc_desc boe_lcd_vcc_get_cmds[] =
{
    /* vcc get */
    {DTYPE_VCC_GET, VCC_BACKLIGHT_NAME, &lcd_bl_vcc,   0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_GET, VCC_LCDBIAS_NAME,   &lcd_bias_vcc, 0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_GET, VCC_LCD_VSN_NAME,   &lcd_vsn_vcc,  0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_GET, VCC_LCD_VSP_NAME,   &lcd_vsp_vcc,  0, 0, 0, 0, 0, 0},
};

static struct vcc_desc boe_lcd_vcc_set_cmds[] =
{
    /* vcc set voltage */
    {DTYPE_VCC_SET_VOLTAGE, VCC_LCDBIAS_NAME, &lcd_bias_vcc,  0, 0, 5400000, 5400000, 0, 0},
    {DTYPE_VCC_SET_VOLTAGE, VCC_LCD_VSP_NAME, &lcd_vsp_vcc,   0, 0, 5400000, 5400000, 0, 0},
    {DTYPE_VCC_SET_VOLTAGE, VCC_LCD_VSN_NAME, &lcd_vsn_vcc,   0, 0, 5400000, 5400000, 0, 0},
};

static struct vcc_desc boe_lcd_vcc_put_cmds[] =
{
    /* vcc put */
    {DTYPE_VCC_PUT, VCC_BACKLIGHT_NAME, &lcd_bl_vcc,   0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_PUT, VCC_LCDBIAS_NAME,   &lcd_bias_vcc, 0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_PUT, VCC_LCD_VSN_NAME,   &lcd_vsn_vcc,  0, 0, 0, 0, 0, 0},
    {DTYPE_VCC_PUT, VCC_LCD_VSP_NAME,   &lcd_vsp_vcc,  0, 0, 0, 0, 0, 0},
};

static struct vcc_desc boe_lcd_vcc_enable_cmds[] =
{
    /* vcc enable */
    {DTYPE_VCC_ENABLE, VCC_LCDBIAS_NAME,   &lcd_bias_vcc, WAIT_TYPE_MS, 12, 0, 0, 0, 0},
    {DTYPE_VCC_ENABLE, VCC_LCD_VSP_NAME,   &lcd_vsp_vcc,  WAIT_TYPE_MS, 10, 0, 0, 0, 0},
    {DTYPE_VCC_ENABLE, VCC_LCD_VSN_NAME,   &lcd_vsn_vcc,  WAIT_TYPE_MS, 50, 0, 0, 0, 0},
};

static struct vcc_desc boe_lcd_vcc_disable_cmds[] =
{
    /* vcc disable */
    {DTYPE_VCC_DISABLE, VCC_LCD_VSN_NAME,   &lcd_vsn_vcc,  WAIT_TYPE_MS, 5, 0, 0, 0, 0},
    {DTYPE_VCC_DISABLE, VCC_LCD_VSP_NAME,   &lcd_vsp_vcc,  WAIT_TYPE_MS, 5, 0, 0, 0, 0},
    {DTYPE_VCC_DISABLE, VCC_LCDBIAS_NAME,   &lcd_bias_vcc, WAIT_TYPE_MS, 1, 0, 0, 0, 0},
};

static struct vcc_desc boe_lcd_bl_enable_cmds[] =
{
    /* backlight enable */
    {DTYPE_VCC_ENABLE, VCC_BACKLIGHT_NAME, &lcd_bl_vcc,   WAIT_TYPE_MS, 10, 0, 0, 0, 0},
};

static struct vcc_desc boe_lcd_bl_disable_cmds[] =
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

static struct pinctrl_cmd_desc boe_lcd_pinctrl_init_cmds[] =
{
    {DTYPE_PINCTRL_GET,       &pctrl, 0},
    {DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
    {DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_IDLE},
};
static struct pinctrl_cmd_desc boe_lcd_pinctrl_normal_cmds[] =
{
    {DTYPE_PINCTRL_SET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
};
static struct pinctrl_cmd_desc boe_lcd_pinctrl_lowpower_cmds[] =
{
    {DTYPE_PINCTRL_SET, &pctrl, DTYPE_PINCTRL_STATE_IDLE},
};

#define GPIO_LCD_RESET_NAME      "lcd_reset_gpio"
static u32 gpio_lcd_reset;

static struct gpio_desc boe_lcd_gpio_get_cmds[] =
{
    /* reset */
    {DTYPE_GPIO_GET, WAIT_TYPE_MS, 0, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
};

static struct gpio_desc boe_lcd_gpio_request_cmds[] =
{
    /* reset */
    {DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
};

static struct gpio_desc boe_lcd_gpio_free_cmds[] =
{
    /* reset */
    {DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
};

static struct gpio_desc boe_lcd_gpio_normal_cmds[] =
{
    /* reset */
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 1},
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 20, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 1},
};

static struct gpio_desc boe_lcd_gpio_lowpower_cmds[] =
{
    /* reset */
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 1, GPIO_LCD_RESET_NAME, &gpio_lcd_reset, 0},
};

static volatile bool g_display_on;
static struct balong_fb_panel_data boe_panel_data;
static struct lcd_tuning_dev* p_tuning_dev = NULL;

static ssize_t boe_lcd_info_show(struct device* dev,
                                   struct device_attribute* attr, char* buf)
{
    int ret = 0;
    struct balong_panel_info* pinfo = NULL;

    pinfo = boe_panel_data.panel_info;
    snprintf(buf, PAGE_SIZE, "%s %d x %d\n", g_lcd_name_buf, pinfo->xres, pinfo->yres);
    ret = strlen(buf) + 1;

    return ret;
}

#define boe_ESD_DEBUG	0
#if boe_ESD_DEBUG
/*for esd test*/
static int esd_flag = 0;
static ssize_t boe_show_esd_test(struct device* dev,
                                   struct device_attribute* attr, char* buf)
{
    return sprintf(buf, "%d\n", esd_flag);
}
static ssize_t boe_store_esd_test(struct device* dev,
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
static DEVICE_ATTR(esd_test, 0644, boe_show_esd_test, boe_store_esd_test);
#endif
static DEVICE_ATTR(lcd_info, S_IRUGO, boe_lcd_info_show, NULL);

static struct attribute* boe_attrs[] =
{
    &dev_attr_lcd_info.attr,
#if boe_ESD_DEBUG
    /*for esd test*/
    &dev_attr_esd_test.attr,
#endif
    NULL,
};

static struct attribute_group boe_attr_group =
{
    .attrs = boe_attrs,
};

static int boe_sysfs_init(struct platform_device* pdev)
{
    int ret = 0;
    ret = sysfs_create_group(&pdev->dev.kobj, &boe_attr_group);
    if (ret)
    {
        balongfb_loge("create sysfs file failed!\n");
        return ret;
    }
    return 0;
}

static void boe_sysfs_deinit(struct platform_device* pdev)
{
    sysfs_remove_group(&pdev->dev.kobj, &boe_attr_group);
}

static int mipi_boe_panel_on(struct platform_device* pdev)
{
    struct balong_fb_data_type* balongfd = NULL;
    struct balong_panel_info* pinfo = NULL;
    struct balong_fb_panel_data* pdata = NULL;

#if defined (CONFIG_HUAWEI_DSM)
    u8* ade_base = NULL;
    u32 int_st0 = 0, int_st1 = 0;
#endif

    BUG_ON(pdev == NULL);

    pr_info("ili9881c: %s enter succ!\n", __func__);
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
        vcc_cmds_tx(NULL, boe_lcd_vcc_set_cmds, \
                    ARRAY_SIZE(boe_lcd_vcc_set_cmds));

        pinfo->lcd_init_step = LCD_INIT_SEND_SEQUENCE;
    }
    else if (pinfo->lcd_init_step == LCD_INIT_SEND_SEQUENCE)
    {
        if (!g_display_on)
        {
            /*Jank log*/
            LOG_JANK_D(JLID_KERNEL_LCD_POWER_ON, "%s", "JL_KERNEL_LCD_POWER_ON");

            /* lcd pinctrl normal */
            pinctrl_cmds_tx(pdev, boe_lcd_pinctrl_normal_cmds, \
                            ARRAY_SIZE(boe_lcd_pinctrl_normal_cmds));

            /* lcd gpio request */
            gpio_cmds_tx(NULL, boe_lcd_gpio_request_cmds, \
                         ARRAY_SIZE(boe_lcd_gpio_request_cmds));

            /* lcd vcc enable */
            if(1==is_vcc_disabled)
            {
                balongfb_logi("enable VSP and VSN \n");
                vcc_cmds_tx(NULL, boe_lcd_vcc_enable_cmds, \
                            ARRAY_SIZE(boe_lcd_vcc_enable_cmds));
            }
            else
            {
                /* lcd vcc does not enable vsp_vsn*/
                balongfb_logi("VSP VSN does not power on for is_vcc_disabled = %d\n",is_vcc_disabled);
            }
            /* lcd gpio normal */
            gpio_cmds_tx(NULL, boe_lcd_gpio_normal_cmds, \
                         ARRAY_SIZE(boe_lcd_gpio_normal_cmds));

            /* lcd display on sequence */
            mipi_dsi_cmds_tx(boe_display_on_cmds, \
                             ARRAY_SIZE(boe_display_on_cmds), balongfd->dsi_base);
            balongfb_loge("ARRAY_SIZE(boe_display_on_cmds):%d.\n", ARRAY_SIZE(boe_display_on_cmds));

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

static int mipi_boe_panel_off(struct platform_device* pdev)
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
        mipi_dsi_cmds_tx(boe_display_off_cmds, \
                         ARRAY_SIZE(boe_display_off_cmds), balongfd->dsi_base);

        /* shutdown d_phy */
        set_MIPIDSI_PHY_RSTZ(0);

        /* lcd gpio lowpower */
        gpio_cmds_tx(NULL, boe_lcd_gpio_lowpower_cmds, \
                     ARRAY_SIZE(boe_lcd_gpio_lowpower_cmds));
        /* lcd gpio free */
        gpio_cmds_tx(NULL, boe_lcd_gpio_free_cmds, \
                     ARRAY_SIZE(boe_lcd_gpio_free_cmds));

        /* lcd pinctrl lowpower */
        pinctrl_cmds_tx(pdev, boe_lcd_pinctrl_lowpower_cmds, \
                        ARRAY_SIZE(boe_lcd_pinctrl_lowpower_cmds));

        /* lcd vcc disable */
        if((!enable_PT_test) || (NULL == strstr(saved_command_line, "androidboot.swtype=factory")))
        {
            balongfb_logi("disable VSP and VSN \n");
            vcc_cmds_tx(NULL, boe_lcd_vcc_disable_cmds, \
                        ARRAY_SIZE(boe_lcd_vcc_disable_cmds));
            is_vcc_disabled = 1;
        }
        else
        {
            is_vcc_disabled = 0;
            balongfb_logi("VSP/VSN do not power off for enable_PT_test = %d\n",enable_PT_test);
        }

        g_display_on = false;
    }

    pr_info("%s exit succ!\n", __func__);
    return 0;
}

static int mipi_boe_panel_remove(struct platform_device* pdev)
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
    vcc_cmds_tx(pdev, boe_lcd_vcc_put_cmds, \
                ARRAY_SIZE(boe_lcd_vcc_put_cmds));

    /* lcd pinctrl lowpower */
    pinctrl_cmds_tx(pdev, boe_lcd_pinctrl_lowpower_cmds, \
                    ARRAY_SIZE(boe_lcd_pinctrl_lowpower_cmds));

    boe_sysfs_deinit(pdev);

    return 0;
}

static int boe_set_gamma(struct lcd_tuning_dev* ltd, enum lcd_gamma gamma)
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

static int boe_set_cabc(struct platform_device *pdev, int cabc)
{
    int ret = 0;
    struct balong_fb_data_type* balongfd = NULL;
    //set cabc mode according to application situation
    char  boe_cabc_ui_on[] =
    {
        0x55,
        0x01 | g_IE_SRE_level,
    };

    char  boe_cabc_vid_on[] =
    {
        0x55,
        0x03 | g_IE_SRE_level,
    };

    char  boe_cabc_off[] =
    {
        0x55,
        0x00 | g_IE_SRE_level,
    };
    char boe_enter_page1[] =
    {
    0xFF,
    0x98, 0x81, 0x01,
    };
    char boe_enter_page0[] =
    {
    0xFF,
    0x98, 0x81, 0x00,
    };
    char  boe_cabc_F3_ui_on[] =
    {
        0xF3,
        0x05,
    };
    char  boe_cabc_F3_vid_on[] =
    {
        0xF3,
        0x07,
    };
    char  boe_cabc_F3_off[] =
    {
        0xF3,
        0x00,
    };
    char boe_dimming_off_ui[] =
    {
        0x53,
        0x24,
    };

    char boe_dimming_on_video[] =
    {
        0x53,
        0x2C,
    };
    struct dsi_cmd_desc boe_cabc_ui_cmds[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
            sizeof(boe_cabc_ui_on), boe_cabc_ui_on
        },
        {
            DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
            sizeof(boe_enter_page1), boe_enter_page1
        },
        {
            DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
            sizeof(boe_cabc_F3_ui_on), boe_cabc_F3_ui_on
        },
        {
            DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
            sizeof(boe_enter_page0), boe_enter_page0
        },
        {
            DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
            sizeof(boe_dimming_off_ui), boe_dimming_off_ui
        },
    };

    struct dsi_cmd_desc boe_cabc_vid_cmds[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
            sizeof(boe_cabc_vid_on), boe_cabc_vid_on
        },
        {
            DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
            sizeof(boe_enter_page1), boe_enter_page1
        },
        {
            DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
            sizeof(boe_cabc_F3_vid_on), boe_cabc_F3_vid_on
        },
        {
            DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
            sizeof(boe_enter_page0), boe_enter_page0
        },
        {
            DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
            sizeof(boe_dimming_on_video), boe_dimming_on_video
        },
    };
    struct dsi_cmd_desc boe_cabc_off_cmds[] =
    {
        {
            DTYPE_DCS_WRITE1, 0, 200, WAIT_TYPE_US,
            sizeof(boe_cabc_off), boe_cabc_off
    },
        {
            DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
            sizeof(boe_enter_page1), boe_enter_page1
        },
        {
            DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
            sizeof(boe_cabc_F3_off), boe_cabc_F3_off
        },
        {
            DTYPE_DCS_LWRITE, 0, 20, WAIT_TYPE_US,
            sizeof(boe_enter_page0), boe_enter_page0
        },
        {
            DTYPE_DCS_WRITE1, 0, 20, WAIT_TYPE_US,
            sizeof(boe_dimming_off_ui), boe_dimming_off_ui
        },
    };

    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);

    pr_info("%s CABC_MODE =  %d\n", __func__, cabc);

#if boe_CABC_ENABLED
    switch (cabc)
    {
        case CABC_UI:                     // set CABC as UI Mode
        {
            balongfd->g_CABC_mode = 0x01;
            mipi_dsi_cmds_tx(boe_cabc_ui_cmds, ARRAY_SIZE(boe_cabc_ui_cmds), balongfd->dsi_base);
        }
        break;

        case CABC_VID:                   // set CABC as Video Mode
        {
            balongfd->g_CABC_mode = 0x03;
            mipi_dsi_cmds_tx(boe_cabc_vid_cmds, ARRAY_SIZE(boe_cabc_vid_cmds), balongfd->dsi_base);
        }
        break;

        case CABC_OFF:                   // close CABC
        {
            balongfd->g_CABC_mode = 0x00;
            mipi_dsi_cmds_tx(boe_cabc_off_cmds, ARRAY_SIZE(boe_cabc_off_cmds), balongfd->dsi_base);
        }
        break;

        default:
            ret = -1;
            break;
    }
#endif
    return ret;
}

static struct lcd_tuning_ops sp_tuning_ops =
{
    .set_gamma = boe_set_gamma,
    .set_cabc = boe_set_cabc,
};

static int mipi_boe_panel_set_backlight(struct platform_device* pdev)
{
    struct balong_fb_data_type* balongfd = NULL;
    u32 level = 0;
    static u32 last_level = 255;

    /* Our eyes are more sensitive to small brightness.
    So we adjust the brightness of lcd following iphone4 */
    char bl_level_adjust[3] =
    {
        0x51,
        0x00,0x00,
    };

    struct dsi_cmd_desc boe_bl_level_adjust[] =
    {
        {
            DTYPE_DCS_LWRITE, 0, 0, WAIT_TYPE_US,
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

    bl_level_adjust[1] = ((level&0xF0)>>4) & 0x0F;
    bl_level_adjust[2] = ((level&0x0F)<<4) | 0x0F;

    mipi_dsi_cmds_tx(boe_bl_level_adjust, ARRAY_SIZE(boe_bl_level_adjust), balongfd->dsi_base);
    /* BEGIN PN:DTS2014102704586   , modifed by z00280572, 2014/10/27*/
    if (level == 0)
    {
        vcc_cmds_tx(NULL, boe_lcd_bl_disable_cmds, \
            ARRAY_SIZE(boe_lcd_bl_disable_cmds));
    }
    else if (last_level == 0 && level !=0)
    {
        /*Jank log*/
        LOG_JANK_D(JLID_KERNEL_LCD_BACKLIGHT_ON, "JL_KERNEL_LCD_BACKLIGHT_ON,%u", level);
        vcc_cmds_tx(NULL, boe_lcd_bl_enable_cmds, \
            ARRAY_SIZE(boe_lcd_bl_enable_cmds));
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

#if LCD_CHECK_MIPI_SUPPORT
static int mipi_boe_check_mipi_tr(struct platform_device* pdev)
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
    if (err ||  (read_value & 0xff) != 0x9c)
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
    if (err ||  (read_value & 0xff) != 0x07)
    {
        err = -1;
        goto check_mipi_tr_error;
    }
    balongfd->lcd_readvalue |= (read_value & 0xff) << 8;
    //read 0x0d
    err = mipi_dsi_read_reg(balongfd, 0x0d, &read_value, DTYPE_GEN_READ1);
    if (err ||  (read_value & 0xff) != 0x00)
    {
        err = -1;
        goto check_mipi_tr_error;
    }
    balongfd->lcd_readvalue |= (read_value & 0xff);
check_mipi_tr_error:
    return err;

}

static char ili_enter_page0[] =
{
    0xFF,
    0x98, 0x81, 0x00,
};

static char ili_enter_page1[] =
{
    0xFF,
    0x98, 0x81, 0x01,
};

static char inversion_mode_1dot[] =
{
    0x31,
    0x01,
};

static char inversion_mode_column[] =
{
    0x31,
    0x00,
};

static char scan_mode_forword[] =
{
    0x22,
    0x0A,
};

static char scan_mode_revert[] =
{
    0x22,
    0x09,
};
static struct dsi_cmd_desc  ili_lcd_inversion_type_1dot[] =
{
    /*switch page1*/
    {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(ili_enter_page1), ili_enter_page1
    },
    /*1-dot inversion*/
    {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(inversion_mode_1dot), inversion_mode_1dot
    },
    /*switch page0*/
    {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(ili_enter_page0), ili_enter_page0
    },
};

static struct dsi_cmd_desc  ili_lcd_inversion_type_column[] =
{
    {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(ili_enter_page1), ili_enter_page1
    },
    {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(inversion_mode_column), inversion_mode_column
    },
    /*switch page0*/
    {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(ili_enter_page0), ili_enter_page0
    },
};
static struct dsi_cmd_desc  ili_lcd_scan_type_forword[] =
{
    {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(ili_enter_page1), ili_enter_page1
    },

    {
        DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(scan_mode_forword), scan_mode_forword
    },
    {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(ili_enter_page0), ili_enter_page0
    },

};

static struct dsi_cmd_desc  ili_lcd_scan_type_revert[] =
{
   {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(ili_enter_page1), ili_enter_page1
    },

    {
        DTYPE_GEN_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(scan_mode_revert), scan_mode_revert
    },
    {
        DTYPE_DCS_LWRITE, 0, 200, WAIT_TYPE_US,
        sizeof(ili_enter_page0), ili_enter_page0
    },

};

static int mipi_boe_set_inversion_type(struct platform_device* pdev, unsigned int inversion_mode)
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
            mipi_dsi_cmds_tx(ili_lcd_inversion_type_1dot, \
                             ARRAY_SIZE(ili_lcd_inversion_type_1dot), balongfd->dsi_base);
            balongfb_loge("INVERSION_TYPE_1DOT\n");
            ret = 0;
            break;
        case INVERSION_TYPE_COLUMN:
            mipi_dsi_cmds_tx(ili_lcd_inversion_type_column, \
                             ARRAY_SIZE(ili_lcd_inversion_type_column), balongfd->dsi_base);
            balongfb_loge("INVERSION_TYPE_COLUMN\n");
            ret = 0;
            break;
        default:
            mipi_dsi_cmds_tx(ili_lcd_inversion_type_column, \
                             ARRAY_SIZE(ili_lcd_inversion_type_column), balongfd->dsi_base);
            balongfb_loge("default LCD inversion type, INVERSION_TYPE_COLUMN.\n");
            ret = -EINVAL;
            break;
    }
    return ret;
}

#endif

static int mipi_boe_set_scan_type(struct platform_device* pdev, unsigned int scanmode)
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
            mipi_dsi_cmds_tx(ili_lcd_scan_type_forword, \
                             ARRAY_SIZE(ili_lcd_scan_type_forword),balongfd->dsi_base);
            balongfb_loge("SCAN_TYPE_FORWORD\n");
            ret = 0;
            break;
        case SCAN_TYPE_REVERT:
            mipi_dsi_cmds_tx(ili_lcd_scan_type_revert, \
                             ARRAY_SIZE(ili_lcd_scan_type_revert),balongfd->dsi_base);
            balongfb_loge("SCAN_TYPE_REVERT\n");
            ret = 0;
            break;
        default:
            mipi_dsi_cmds_tx(ili_lcd_scan_type_forword, \
                             ARRAY_SIZE(ili_lcd_scan_type_forword),balongfd->dsi_base);
            balongfb_loge("default LCD Scan type, SCAN_TYPE_FORWORD.\n");
            ret = -EINVAL;
            break;
    }
    return ret;
}


static ssize_t mipi_boe_panel_lcd_support_mode_show(struct platform_device *pdev,
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

static ssize_t mipi_boe_panel_lcd_support_mode_store(struct platform_device *pdev,
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

static int mipi_boe_panel_set_fastboot(struct platform_device* pdev)
{
    struct balong_fb_data_type* balongfd = NULL;

    BUG_ON(pdev == NULL);

    balongfd = (struct balong_fb_data_type*)platform_get_drvdata(pdev);
    BUG_ON(balongfd == NULL);

    /* lcd gpio request */
    gpio_cmds_tx(NULL, boe_lcd_gpio_request_cmds, \
                 ARRAY_SIZE(boe_lcd_gpio_request_cmds));

    /* lcd vcc enable */
    vcc_cmds_tx(NULL, boe_lcd_vcc_enable_cmds, \
                ARRAY_SIZE(boe_lcd_vcc_enable_cmds));

    /* lcd backlight enable */
    vcc_cmds_tx(NULL, boe_lcd_bl_enable_cmds, \
                ARRAY_SIZE(boe_lcd_bl_enable_cmds));
    g_display_on = true;

    return 0;
}

static int mipi_boe_panel_set_sre(struct platform_device* pdev, int enable, int value)
{
    struct balong_fb_data_type* balongfd = NULL;

    /* As the reg 0x55 is used by CABC and SRE /IE, so use local data to enable each funtion seperately */
    char sbl_level_setting[2] =
    {
        0x55,
        0x00,
    };

    struct dsi_cmd_desc boe_sbl_level_setting[] =
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
    if (balongfd->sbl_enable == 1)	                        // Outdoor mode (check the SRE select box)
    {
        if (0x50 != g_IE_SRE_level )         //  set reg 0x55 only when the value changed
        {
            g_IE_SRE_level = 0x50;           //SRE Medium LEVEL  0x5x,
            sbl_level_setting[1]  = balongfd->g_CABC_mode | g_IE_SRE_level;
            mipi_dsi_cmds_tx(boe_sbl_level_setting, ARRAY_SIZE(boe_sbl_level_setting), balongfd->dsi_base); //send to IC reg
        }
    }
    else                   // 1.Indoor mode (check the SRE select box).  2.Uncheck the SRE select box.
    {
        if (0x50 == g_IE_SRE_level )        //  set reg 0x55 only when the value changed
        {
            g_IE_SRE_level = 0x80;          //IE LOW LEVEL 0x8x,
            sbl_level_setting[1]  = balongfd->g_CABC_mode | g_IE_SRE_level;
            mipi_dsi_cmds_tx(boe_sbl_level_setting, ARRAY_SIZE(boe_sbl_level_setting), balongfd->dsi_base);//send to IC reg
        }
    }
    pr_info("%s enter succ!SRE sbl_enable = %d reg0x55_value = 0x%x\n", __func__, balongfd->sbl_enable, balongfd->g_CABC_mode | g_IE_SRE_level);
    return 0;
}

#if LCD_ESD_CHECK_SUPPORT
/*for esd check*/
static int mipi_boe_panel_check_esd(struct platform_device* pdev)
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
#if boe_ESD_DEBUG
    if (esd_flag != 0)
    {
        err = 1;
    }
#endif

    return err;
}
#endif //LCD_ESD_CHECK_SUPPORT

static struct balong_panel_info boe_panel_info = {0};
static struct balong_fb_panel_data boe_panel_data =
{
    .panel_info = &boe_panel_info,
    .on = mipi_boe_panel_on,
    .off = mipi_boe_panel_off,
    .remove = mipi_boe_panel_remove,
    .set_backlight = mipi_boe_panel_set_backlight,
    .set_fastboot = mipi_boe_panel_set_fastboot,
    /*Sunlight Readability Enhancement function*/
    .set_sre = mipi_boe_panel_set_sre,
#if LCD_ESD_CHECK_SUPPORT
    /*for esd check*/
    .check_esd = mipi_boe_panel_check_esd,
#endif //LCD_ESD_CHECK_SUPPORT
    .lcd_cabc_mode_store  =  boe_set_cabc,
#if  LCD_CHECK_MIPI_SUPPORT
    .check_mipi_tr = mipi_boe_check_mipi_tr,
    .set_inversion_type = mipi_boe_set_inversion_type,
#endif
    .lcd_gram_check_show  =  mipi_boe_check_mipi_tr,
    .lcd_inversion_mode_store = mipi_boe_set_inversion_type,
    .lcd_scan_mode_store = mipi_boe_set_scan_type,
    .lcd_support_mode_store = mipi_boe_panel_lcd_support_mode_store,
    .lcd_support_mode_show = mipi_boe_panel_lcd_support_mode_show,
};

static int __init boe_probe(struct platform_device* pdev)
{
    struct balong_panel_info* pinfo = NULL;
    struct platform_device* reg_pdev = NULL;
    struct lcd_properities lcd_props;
    /*add lcd info*/
    char lcd_name[] = "boe_ILI9881C 5.5' VIDEO TFT";
    int len;
    pr_info("ILI9881C: %s enter succ!!!!\n", __func__);
    /*add lcd info*/
    len = strlen(lcd_name);
    memset(g_lcd_name_buf, 0, sizeof(g_lcd_name_buf));
    strncpy(g_lcd_name_buf, lcd_name, (len > 100 ? 100 : len));
    g_display_on = false;
    pinfo = boe_panel_data.panel_info;

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
    pinfo->ldi.h_back_porch = 28;//180;//20;
    pinfo->ldi.h_front_porch = 200;//180;//200;
    pinfo->ldi.h_pulse_width = 2;
    pinfo->ldi.v_back_porch = 25;
    pinfo->ldi.v_front_porch = 25;
    pinfo->ldi.v_pulse_width = 2;

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
    gpio_cmds_tx(pdev, boe_lcd_gpio_get_cmds, \
                 ARRAY_SIZE(boe_lcd_gpio_get_cmds));

    /* lcd vcc init */
    vcc_cmds_tx(pdev, boe_lcd_vcc_get_cmds, \
                ARRAY_SIZE(boe_lcd_vcc_get_cmds));

    /* lcd pinctrl init */
    pinctrl_cmds_tx(pdev, boe_lcd_pinctrl_init_cmds, \
                    ARRAY_SIZE(boe_lcd_pinctrl_init_cmds));

    /* alloc panel device data */
    if (platform_device_add_data(pdev, &boe_panel_data,
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

    boe_sysfs_init(pdev);

    pr_info("%s exit succ!\n", __func__);
    return 0;
}
static const struct of_device_id mipi_boe_ili9881c_match_table[] =
{
    {
        .compatible = "hisilicon,mipi-boe-ili9881c",
        .data = NULL,
    },
    {},
};

static struct platform_driver this_driver =
{
    .probe = boe_probe,
    .remove = NULL,
    .suspend = NULL,
    .resume = NULL,
    .shutdown = NULL,
    .driver = {
        .name = "mipi_boe_ILI9881C",
        .of_match_table = mipi_boe_ili9881c_match_table,
    },
};

static int __init mipi_boe_panel_init(void)
{
    int ret = 0;
#ifndef CONFIG_ARM64
    if ( get_lcd_type() != YASSY_ILI9881_3_LCD)
    {
        balongfb_loge("lcd type is not YASSY_ILI9881_3_LCD.\n");
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

module_init(mipi_boe_panel_init);
