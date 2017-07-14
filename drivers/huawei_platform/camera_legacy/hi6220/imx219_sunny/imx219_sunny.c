/*
 *  imx219 camera deriver source file
 *
 *  CopyRight (C) Hisilicon Co., Ltd.
 *	Author :
 *  Version:  1.2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <linux/module.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <linux/ctype.h>
#include <linux/types.h>
#include <linux/delay.h>
#include <linux/device.h>
#include <linux/i2c.h>
#include <linux/clk.h>
#include <linux/videodev2.h>
#include <linux/time.h>
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/string.h>
#include <linux/slab.h>
#include <linux/mm.h>
#include <linux/fb.h>
#include <linux/fs.h>
#include <linux/io.h>
#include <linux/unistd.h>
#include <linux/uaccess.h>
#include <linux/clk.h>
#include <linux/regulator/consumer.h>
#include <linux/of.h>
#include <linux/of_irq.h>
#include <linux/of_address.h>
#include <asm/div64.h>
#include "sensor_common.h"

#include "carmel/imx219_sunny_carmel.h"
#include <asm/bug.h>
#include <linux/device.h>

#define LOG_TAG "IMX219_SUNNY"
/* #define DEBUG_DEBUG 1 */
#include "cam_log.h"
#include "video_config.h"
//#include "../isp/effect.h"
#define IMX219_SUNNY_AP_WRITEAE_MODE
#include "effect.h"
#include "cam_util.h"

#define IMX219_SUNNY_SLAVE_ADDRESS    0x20

#define IMX219_SUNNY_CHIP_ID_REG_H        0x0000
#define IMX219_SUNNY_CHIP_ID_REG_L        0x0001
#define IMX219_SUNNY_CHIP_ID                    0x0219

#define IMX219_SUNNY_MIRROR_FLIP_REG         0x0172


#define IMX219_SUNNY_EXPOSURE_REG_H    0x015A
#define IMX219_SUNNY_EXPOSURE_REG_L    0x015B

#define IMX219_SUNNY_DIG_GAIN_REG_H    0x0158
#define IMX219_SUNNY_DIG_GAIN_REG_L    0x0159

#define IMX219_SUNNY_ANALOG_GAIN_REG	0x0157

#define IMX219_SUNNY_VTS_REG_H	    0x0160
#define IMX219_SUNNY_VTS_REG_L	    0x0161

#define IMX219_SUNNY_MAX_ANALOG_GAIN	            170//256/(256-232)*16

#define IMX219_SUNNY_EQUIVALENT_FOCUS		27 // 27mm

/* camera sensor override parameters, define in binning preview mode */
#define IMX219_SUNNY_MAX_ISO			800
#define IMX219_SUNNY_MIN_ISO			100

#define IMX219_SUNNY_APERTURE_FACTOR              200 //F2.0


#define IMX219_SUNNY_AUTOFPS_GAIN_LOW2MID		0x16
#define IMX219_SUNNY_AUTOFPS_GAIN_MID2HIGH		0x16
#define IMX219_SUNNY_AUTOFPS_GAIN_HIGH2MID		0x40
#define IMX219_SUNNY_AUTOFPS_GAIN_MID2LOW		0x40

#define IMX219_SUNNY_MAX_FRAMERATE		30
#define IMX219_SUNNY_MIDDLE_FRAMERATE		15
#define IMX219_SUNNY_MIN_FRAMERATE		15

#define IMX219_SUNNY_MIN_CAP_FRAMERATE	8

#define IMX219_SUNNY_FLASH_TRIGGER_GAIN	0x80

#define IMX219_SUNNY_SHARPNESS_PREVIEW	0x10
#define IMX219_SUNNY_SHARPNESS_CAPTURE	0x10

#define IMX219_SUNNY_ZSL    (0x00)//(1 << CAMERA_ZSL_OFF)

#define IMX219_SUNNY_I2C_RETRY_TIMES      5

#define IMX219_SUNNY_OTP_FEATURE 1

#define IMX219_SUNNY_LCS_SIZE           280

enum sensor_module_pull_type
{
	MODULE_SUNNY=1,//pin pull up
	MODULE_LITEON,//pin is float
	MODULE_UNSUPPORT
};

#ifdef IMX219_SUNNY_OTP_FEATURE
struct otp_struct {
	u8 year;
	u8 month;
	u8 date;
	u8 user_id;
	u8 vendor_version;
	u16 rg_ratio;
	u16 bg_ratio;
	u16 gb_gr_ratio;
	u8 lsc[IMX219_SUNNY_LCS_SIZE];
};

#define HUAWEI_MODULE_ID 0xc8 //HUAWEI MODOULE ID 23060200
#define IMX219_SUNNY_MODULE_ID        0x01//sunny

static u8 otp_tmp_buf[291]={0};
static struct otp_struct imx219_sunny_otp;

#define IMX219_SUNNY_OTP_INVALID 0x00
#define IMX219_SUNNY_OTP_VALID 0xff
static int imx219_sunny_otp_flag = IMX219_SUNNY_OTP_INVALID;
static int otp_offset = 0;//otp page reg offset

#endif

static camera_capability imx219_sunny_cap[] = {
    {V4L2_CID_FOCAL_LENGTH, 261},//2.61mm
    {V4L2_CID_ZSL,IMX219_SUNNY_ZSL},
    {V4L2_CID_HORIZONTAL_VIEW_ANGLE, 6500},//add FOV angel
    {V4L2_CID_VERTICAL_VIEW_ANGLE, 5090},
};

/*should be calibrated, three lights, from 0x1c264*/
/*here is long exposure*/
char imx219_sunny_lensc_param[86 * 3] = {
};

/*should be calibrated, 6 groups 3x3, from 0x1c1d8*/
short imx219_sunny_ccm_param[54] = {
};

char imx219_sunny_awb_param[] = {
};

/*y36721 todo*/
char imx219_sunny_awb_param_short[] = {
};

/******************effect begin*************************/
static effect_params effect_imx219_sunny_carmel = {
       #include "carmel/effect_imx219_sunny_carmel.h"
};
/*******************effect end*************************/

static const struct _sensor_reg_t imx219_sunny_stream_off_regs[] = {
	{0x0100, 0x00}
};
static const struct _sensor_reg_t imx219_sunny_stream_on_regs[] = {
	{0x0100, 0x01}
};


static sensor_setting_t imx219_sunny_carmel_init_array[] = {
      {imx219_sunny_init_regs, ARRAY_SIZE(imx219_sunny_init_regs)},
};

static framesize_s imx219_sunny_framesizes[] = {
       //1600x1200 29.7fps
      {0, 0, 1600, 1200, 3448, 2009, 30, 30, 0x255, 0x1F1, 0x100, VIEW_FULL, RESOLUTION_4_3, false, false, ECGC_TYPE_MAX, {imx219_sunny_framesize_quarter, ARRAY_SIZE(imx219_sunny_framesize_quarter)}, CLK_900M},
       //3264X2448 15.0fps
      {0, 0, 3264, 2448, 3448, 2608, 15, 15, 0x187, 0x146, 0xA8, VIEW_FULL, RESOLUTION_4_3, false, false, ECGC_TYPE_BSHUTTER_LONG, {imx219_sunny_framesize_full, ARRAY_SIZE(imx219_sunny_framesize_full)}, CLK_650M },
};

static const sensor_config_s imx219_sunny_config_settings[]= {
    {
        "carmel",
        {imx219_sunny_carmel_init_array,  ARRAY_SIZE(imx219_sunny_carmel_init_array) },
        {imx219_sunny_framesizes, ARRAY_SIZE(imx219_sunny_framesizes)},
        &effect_imx219_sunny_carmel,
        NULL,
    },
};
static const sensor_config_s* imx219_sunny_config = imx219_sunny_config_settings;

static camera_sensor imx219_sunny_sensor;

static void imx219_sunny_set_default(void);
void imx219_sunny_set_vts(u16 vts);
static void imx219_sunny_config_dphy_clk(camera_state state);
static void imx219_sunny_reset_dphy(void);
/*
 **************************************************************************
 * FunctionName: imx219_sunny_read_reg;
 * Description : read imx219 reg by i2c;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int imx219_sunny_read_reg(u16 reg, u8 *val)
{
	return k3_ispio_read_reg(imx219_sunny_sensor.i2c_config.index,
				 imx219_sunny_sensor.i2c_config.addr, reg, (u16*)val, imx219_sunny_sensor.i2c_config.val_bits,imx219_sunny_sensor.i2c_config.addr_bits);
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_write_reg;
 * Description : write imx219 reg by i2c;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int imx219_sunny_write_reg(u16 reg, u8 val, u8 mask)
{
	return k3_ispio_write_reg(imx219_sunny_sensor.i2c_config.index,
			imx219_sunny_sensor.i2c_config.addr, reg, val, imx219_sunny_sensor.i2c_config.val_bits, mask,imx219_sunny_sensor.i2c_config.addr_bits);
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_write_seq;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
 */
static int imx219_sunny_write_seq(const struct _sensor_reg_t *seq, u32 size, u8 mask)
{
	print_debug("Enter %s, seq[%#x], size=%d", __func__, (int)seq, size);
	return k3_ispio_write_seq(imx219_sunny_sensor.i2c_config.index,
			imx219_sunny_sensor.i2c_config.addr, seq, size, imx219_sunny_sensor.i2c_config.val_bits, mask,imx219_sunny_sensor.i2c_config.addr_bits);
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_write_isp_seq;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
 */
static void imx219_sunny_write_isp_seq(const struct isp_reg_t *seq, u32 size)
{
	print_debug("Enter %s, seq[%#x], size=%d", __func__, (int)seq, size);
	k3_ispio_write_isp_seq(seq, size);
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_enum_frame_intervals;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/

#ifdef IMX219_SUNNY_OTP_FEATURE
static int imx219_sunny_read_otp_page(unsigned int page, unsigned int group_flag)
{
    int timeout = 5;
    unsigned char read_status = 0;
    int i =0;

    while(timeout--){
        imx219_sunny_read_reg(0x3201, &read_status);
        if((read_status & 0x01) != 0){
            print_info("imx219_read_otp read_status 0x%x timeout %d",read_status, timeout);
            break;
        }
        mdelay(5);
    }

    if(0 == timeout){
       print_error("imx219_read_otp_page error timeout %d",timeout);
       return -EINVAL;
    }

    imx219_sunny_write_reg(0x3202, page, 0x00);

    if(page == 4){
    if(group_flag==0){   //for group one otp data
            for(i=0;i<35;i++)  //group 4 only 35 valid data
            {
                imx219_sunny_read_reg(0x3204+i, (unsigned char*)&(otp_tmp_buf[otp_offset++]));
            }
    }
    else{   //for group two otp data
            for(i=0;i<28;i++)   //group 4 only 28 valid data
            {
                imx219_sunny_read_reg(0x3228+i, (unsigned char*)&(otp_tmp_buf[otp_offset++]));
            }
        }
    }
    else if(page == 9){  //this page only 7 valid otp data
        for(i=0;i<7;i++)
        {
            imx219_sunny_read_reg(0x3204+i, (unsigned char*)&(otp_tmp_buf[otp_offset++]));
        }
    }
    else{  // whole valid otp data
        for(i=0;i<64;i++)
        {
            imx219_sunny_read_reg(0x3204+i, (unsigned char*)&(otp_tmp_buf[otp_offset++]));
        }
    }

    timeout = 5;
    while(timeout--){
        imx219_sunny_read_reg(0x3201, &read_status);
        if((read_status & 0x01) != 0){
            print_info("imx219_read_otp read_status 0x%x timeout %d",read_status, timeout);
            break;
        }
        mdelay(5);
    }

    if(0 == timeout){
        print_error("imx219_read_otp_page error timeout %d",timeout);
        return -EINVAL;
    }

    return 0;
}
static int imx219_sunny_read_otp(void)
{
    int ret=-1;
    int timeout = 5;
    int i =0;
    u8 read_status = 0;
    u8 check_sum = 0;
    u8 check_sum_tmp = 0;
    unsigned long sum = 0;
    u8 vendor_id  = 0;
    otp_offset = 0;

    memset(&imx219_sunny_otp, 0, sizeof(struct otp_struct));
    memset(otp_tmp_buf,0,sizeof(otp_tmp_buf));

    imx219_sunny_write_reg(0x0100, 0x00, 0x00);
    imx219_sunny_write_reg(0x3302, 0x02, 0x00);
    imx219_sunny_write_reg(0x3303, 0x58, 0x00);
    imx219_sunny_write_reg(0x012A, 0x18, 0x00);
    imx219_sunny_write_reg(0x012B, 0x00, 0x00);
    imx219_sunny_write_reg(0x3300, 0x08, 0x00);
    imx219_sunny_write_reg(0x3200, 0x01, 0x00);

    while(timeout--){
        imx219_sunny_read_reg(0x3201, &read_status);
        if((read_status & 0x01) != 0){
            print_info("imx219_read_otp read_status 0x%x timeout %d",read_status, timeout);
            break;
        }
        mdelay(5);
    }

    //set page 9, read group second checksum
    imx219_sunny_write_reg(0x3202, 0x09, 0x00);

    imx219_sunny_read_reg(0x320B, &check_sum);
    print_info("imx219_read_otp group 2 check_sum 0x%x",check_sum);

    //group 2 is invalid
    if(check_sum==0)
    {
        //set page 4,  read group first checksum
        imx219_sunny_write_reg(0x3202, 0x04, 0x00);
        imx219_sunny_read_reg(0x3227, &check_sum);
        print_info("imx219_read_otp group 1 check_sum 0x%x",check_sum);

    if(check_sum == 0)
    {
        print_error("this module flash otp error");
        return -EINVAL;
    }
         //group one otp data from page 0-4
         for(i=0; i<5; i++)
         {
           ret = imx219_sunny_read_otp_page(i, 0);
           if(ret != 0)
           {
              print_error("read otp page error");
              return -EINVAL;
           }
         }
    }
    else
    {
         //group one otp data from page 4-9
         for(i=4; i<10; i++)
         {
           ret = imx219_sunny_read_otp_page(i, 1);
           if(ret != 0)
           {
              print_error("read otp page error");
              return -EINVAL;
           }
         }
    }

    for(i=0; i<291; i++){
        sum = otp_tmp_buf[i]+sum;
    }

    check_sum_tmp = sum %255 + 1;

    if(check_sum_tmp != check_sum){
        print_error("OTP checksum error");
        return -EINVAL;
    }

    imx219_sunny_otp.year = otp_tmp_buf[0];
    imx219_sunny_otp.month = otp_tmp_buf[1];
    imx219_sunny_otp.date = otp_tmp_buf[2];
    imx219_sunny_otp.user_id = otp_tmp_buf[3];
    imx219_sunny_otp.vendor_version = otp_tmp_buf[4];

    if(HUAWEI_MODULE_ID != imx219_sunny_otp.user_id)
    {
        print_error("invalid otp module id: 0x%x",imx219_sunny_otp.user_id);
        return -EINVAL;
    }

    vendor_id = imx219_sunny_otp.vendor_version>>4 & 0x0F;
    if(vendor_id != IMX219_SUNNY_MODULE_ID)
    {
        print_error("invalid otp vendor id: 0x%x",imx219_sunny_otp.vendor_version>>4);
        return -EINVAL;
    }

    print_info("year = %d, month = %d, day = %d, user_id = %d, vendor_version = %d",
                        imx219_sunny_otp.year,
                        imx219_sunny_otp.month,
                        imx219_sunny_otp.date,
                        imx219_sunny_otp.user_id,
                        imx219_sunny_otp.vendor_version);

    imx219_sunny_otp.rg_ratio = (otp_tmp_buf[5]<<8) | otp_tmp_buf[6];
    imx219_sunny_otp.bg_ratio = (otp_tmp_buf[7]<<8) | otp_tmp_buf[8];
    imx219_sunny_otp.gb_gr_ratio =(otp_tmp_buf[9]<<8) | otp_tmp_buf[10];

    if(imx219_sunny_otp.rg_ratio == 0 || imx219_sunny_otp.bg_ratio == 0){
        print_error("invalid otp awb");
        return -EINVAL;
    }
    print_info("rg_ratio = %d, bg_ratio = %d, gb_gr_ratio = %d", imx219_sunny_otp.rg_ratio, imx219_sunny_otp.bg_ratio, imx219_sunny_otp.gb_gr_ratio);

    if(NULL == memcpy(imx219_sunny_otp.lsc,&otp_tmp_buf[11],IMX219_SUNNY_LCS_SIZE))
    {
        print_error("imx219_sunny_read_otp copy lsc data failed");
        return -EINVAL;
    }

    imx219_sunny_otp_flag = IMX219_SUNNY_OTP_VALID;
    return 0;

}

static int imx219_sunny_otp_set_lsc(void)
{
	u32 i = 0;
	u32 j = 0;

	for(i=0; i < 4; i++){
		for(j=0; j<70; j++){
			imx219_sunny_write_reg(0xD200+j+i*72, imx219_sunny_otp.lsc[j+i*70], 0x00);
		}
	}

	imx219_sunny_write_reg(0x0190, 0x01, 0x00);//LSC enable A
	imx219_sunny_write_reg(0x0192, 0x00, 0x00);//LSC table 0
	imx219_sunny_write_reg(0x0191, 0x00, 0x00);//LCS color mode:4 color R/Gr/Gb/B
	imx219_sunny_write_reg(0x0193, 0x00, 0x00);//LSC tuning disable
	imx219_sunny_write_reg(0x01a4, 0x03, 0x00);//Knot point format A:u4.8

	print_info("%s, set OTP LSC to sensor OK.",__func__);

	return 0;
}

#endif

static int imx219_sunny_enum_frame_intervals(struct v4l2_frmivalenum *fi)
{
	assert(fi);

	if(NULL == fi) {
		return -EINVAL;
	}
	print_debug("enter %s", __func__);
	if (fi->index >= CAMERA_MAX_FRAMERATE) {
		return -EINVAL;
	}

	fi->type = V4L2_FRMIVAL_TYPE_DISCRETE;
	fi->discrete.numerator = 1;
	fi->discrete.denominator = (fi->index + 1);
	return 0;
}

static int imx219_sunny_get_capability(u32 id, u32 *value)
{
	int i;
	for (i = 0; i < sizeof(imx219_sunny_cap) / sizeof(imx219_sunny_cap[0]); ++i) {
		if (id == imx219_sunny_cap[i].id) {
			*value = imx219_sunny_cap[i].value;
			break;
		}
	}
	return 0;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_get_format;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int imx219_sunny_get_format(struct v4l2_fmtdesc *fmt)
{
	if (fmt->type == V4L2_BUF_TYPE_VIDEO_OVERLAY)
		fmt->pixelformat = V4L2_PIX_FMT_RAW10;
	else
		fmt->pixelformat = V4L2_PIX_FMT_RAW10;
	return 0;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_enum_framesizes;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int imx219_sunny_enum_framesizes(struct v4l2_frmsizeenum *framesizes)
{
	u32 max_index = ARRAY_SIZE(camera_framesizes) - 1;
	u32 this_max_index =   ARRAY_SIZE(imx219_sunny_framesizes) - 1;

	assert(framesizes);
	if(NULL == framesizes) {
		return -EINVAL;
	}

	print_debug("enter %s;", __func__);

	if (framesizes->index > max_index) {
		print_error("framesizes->index = %d error", framesizes->index);
		return -EINVAL;
	}

	if ((camera_framesizes[framesizes->index].width > imx219_sunny_framesizes[this_max_index].width)
		|| (camera_framesizes[framesizes->index].height > imx219_sunny_framesizes[this_max_index].height)) {
		print_error("framesizes->index = %d error", framesizes->index);
		return -EINVAL;
	}

	framesizes->type = V4L2_FRMSIZE_TYPE_DISCRETE;
	framesizes->discrete.width = imx219_sunny_framesizes[this_max_index].width;
	framesizes->discrete.height = imx219_sunny_framesizes[this_max_index].height;

	return 0;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_try_framesizes;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int imx219_sunny_try_framesizes(struct v4l2_frmsizeenum *framesizes)
{
       int max_index = ARRAY_SIZE(imx219_sunny_framesizes) - 1;

	assert(framesizes);

	if(NULL == framesizes) {
		return -EINVAL;
	}

	print_debug("Enter Function:%s ", __func__);

	if (framesizes->discrete.width <= imx219_sunny_framesizes[max_index].width
        && framesizes->discrete.height <= imx219_sunny_framesizes[max_index].height) {
		print_debug("===========width = %d", framesizes->discrete.width);
		print_debug("===========height = %d", framesizes->discrete.height);
		return 0;
	}

	print_error("frame size too large, [%d,%d]",
            framesizes->discrete.width, framesizes->discrete.height);
	return -EINVAL;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_set_framesizes;
 * Description : NA;
 * Input       : flag: if 1, set framesize to sensor,
 *					   if 0, only store framesize to camera_interface;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int imx219_sunny_set_framesizes(camera_state state,
                struct v4l2_frmsize_discrete *fs, int flag, camera_setting_view_type view_type, bool zsl_preview, camera_b_shutter_mode b_shutter_mode,ecgc_support_type_s ecgc_type)
{
    int i = 0;
    bool match = false;
    assert(fs);

    if(NULL == fs) {
        return -EINVAL;
    }

    (void)b_shutter_mode;//front sensor does not support b_shutter_mode
    (void)ecgc_type;

    print_debug("Enter Function:%s State(%d), flag=%d, width=%d, height=%d, b_shutter_mode=0x%x, ecgc_type=0x%x",
            __func__, state, flag, fs->width, fs->height,b_shutter_mode,ecgc_type);

    if (VIEW_FULL == view_type) {
        for (i = 0; i < ARRAY_SIZE(imx219_sunny_framesizes); i++) {
            if ((imx219_sunny_framesizes[i].width >= fs->width)
                && (imx219_sunny_framesizes[i].height >= fs->height)
                && (VIEW_FULL == imx219_sunny_framesizes[i].view_type)
                && (camera_get_resolution_type(fs->width, fs->height)
                <= imx219_sunny_framesizes[i].resolution_type)) {
                fs->width = imx219_sunny_framesizes[i].width;
                fs->height = imx219_sunny_framesizes[i].height;
                match = true;
                break;
            }
        }
    }

    if (false == match) {
        for (i = 0; i < ARRAY_SIZE(imx219_sunny_framesizes); i++) {
            if ((imx219_sunny_framesizes[i].width >= fs->width)
                && (imx219_sunny_framesizes[i].height >= fs->height)
                && (camera_get_resolution_type(fs->width, fs->height)
                <= imx219_sunny_framesizes[i].resolution_type)) {
                fs->width = imx219_sunny_framesizes[i].width;
                fs->height = imx219_sunny_framesizes[i].height;
                break;
            }
        }
    }

    if (i >= ARRAY_SIZE(imx219_sunny_framesizes)) {
        print_error("request resolution larger than sensor's max resolution");
        return -EINVAL;
    }

    if (state == STATE_PREVIEW)
        imx219_sunny_sensor.preview_frmsize_index = i;
    else
        imx219_sunny_sensor.capture_frmsize_index = i;

    return 0;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_get_framesizes;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int imx219_sunny_get_framesizes(camera_state state,
                struct v4l2_frmsize_discrete *fs)
{
	int frmsize_index;
	assert(fs);

	if(NULL == fs) {
		return -EINVAL;
	}

	if (state == STATE_PREVIEW)
		frmsize_index = imx219_sunny_sensor.preview_frmsize_index;
	else if (state == STATE_CAPTURE)
		frmsize_index = imx219_sunny_sensor.capture_frmsize_index;
	else
		return -EINVAL;
	fs->width = imx219_sunny_framesizes[frmsize_index].width;
	fs->height = imx219_sunny_framesizes[frmsize_index].height;

	return 0;
}


/*
 **************************************************************************
 * FunctionName: imx219_sunny_dump_reg_debug;
 * Description : dump standby, frame count, cap relate reg for debug
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void imx219_sunny_dump_reg_debug(void)
{
     u16 reg = 0;
     u8 val = 0;

     reg=0x0100;imx219_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);//stream on
     reg=0x0018;imx219_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);// frame counter
     reg=0x016C;imx219_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);//X output size H
     reg=0x016D;imx219_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);//X output size L
     reg=0x016E;imx219_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);//Y output size H
     reg=0x016F;imx219_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);//Y output size L
     reg=0x0162;imx219_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);//HTS H
     reg=0x0163;imx219_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);//HTS L
     reg=0x0160;imx219_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);//VTS H
     reg=0x0161;imx219_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);//VTS L
}


/*
 **************************************************************************
 * FunctionName: imx219_sunny_init_reg;
 * Description : download initial seq for sensor init;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int imx219_sunny_init_reg(void)
{
	int size = 0;

	print_info("Enter Function:%s  , initsize=%d", __func__, sizeof(imx219_sunny_init_regs));

	if (0 != k3_ispio_init_csi(imx219_sunny_sensor.mipi_index,
		 imx219_sunny_sensor.mipi_lane_count, imx219_sunny_sensor.lane_clk)) {
		return -EFAULT;
	}


	size = ARRAY_SIZE(imx219_sunny_init_regs);
	if (0 != imx219_sunny_write_seq(imx219_sunny_init_regs, size, 0x00)) {
		print_error("fail to init imx219 sensor");
		return -EFAULT;
	}

#ifdef IMX219_SUNNY_OTP_FEATURE
	if(IMX219_SUNNY_OTP_VALID == imx219_sunny_otp_flag) {
		imx219_sunny_otp_set_lsc();
	}
#endif

	return 0;
}


static int imx219_sunny_get_sensor_aperture(void)
{
	return IMX219_SUNNY_APERTURE_FACTOR;
}


static int imx219_sunny_set_hflip(int flip)
{
	print_debug("enter %s flip=%d", __func__, flip);
	imx219_sunny_sensor.hflip = flip;
	return 0;
}

static int imx219_sunny_set_vflip(int flip)
{
	print_debug("enter %s flip=%d", __func__, flip);
	imx219_sunny_sensor.vflip = flip;
	return 0;
}

static int imx219_sunny_get_hflip(void)
{
	print_debug("enter %s flip=%d", __func__, imx219_sunny_sensor.hflip);
	return imx219_sunny_sensor.hflip;
}

static int imx219_sunny_get_vflip(void)
{
	print_debug("enter %s flip=%d", __func__, imx219_sunny_sensor.vflip);
	return imx219_sunny_sensor.vflip;
}

static int imx219_sunny_update_flip(u16 width, u16 height)
{
    u8 new_flip = ((imx219_sunny_sensor.vflip << 1) | imx219_sunny_sensor.hflip);

    print_debug("Enter %s  ", __func__);

    if(imx219_sunny_sensor.old_flip != new_flip) {

        k3_ispio_update_flip((imx219_sunny_sensor.old_flip ^ new_flip) & 0x03, width, height, PIXEL_ORDER_CHANGED);

        imx219_sunny_sensor.old_flip = new_flip;

        imx219_sunny_write_reg(IMX219_SUNNY_MIRROR_FLIP_REG, imx219_sunny_sensor.vflip ? 0x00 : 0x02, ~0x02);
        imx219_sunny_write_reg(IMX219_SUNNY_MIRROR_FLIP_REG, imx219_sunny_sensor.hflip ? 0x00 : 0x01, ~0x01);

    }

    return 0;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_framesize_switch;
 * Description : switch frame size, used by preview and capture
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int imx219_sunny_framesize_switch(camera_state state)
{
	u8 next_frmsize_index;

	if (state == STATE_PREVIEW)
		next_frmsize_index = imx219_sunny_sensor.preview_frmsize_index;
	else
		next_frmsize_index = imx219_sunny_sensor.capture_frmsize_index;

	print_info("Enter Function:%s frm index=%d", __func__, next_frmsize_index);

	if (next_frmsize_index >= ARRAY_SIZE( imx219_sunny_framesizes )){
		print_error("Unsupport sensor setting index: %d",next_frmsize_index);
		return -ETIME;
	}

	if (0 != imx219_sunny_write_seq( imx219_sunny_sensor.frmsize_list[next_frmsize_index].sensor_setting.setting
		, imx219_sunny_sensor.frmsize_list[next_frmsize_index].sensor_setting.seq_size, 0x00)) {
		print_error("fail to init imx219 sensor");
		return -ETIME;
	}

	if(NULL != imx219_sunny_sensor.stream_on_setting)
	{
		if (0 != imx219_sunny_write_seq(imx219_sunny_sensor.stream_on_setting, imx219_sunny_sensor.stream_on_setting_size, 0x00)) {
			print_error("%s fail to stream on imx219 sensor", __func__);
			return -ETIME;
		}
	}

    return 0;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_start_preview;
 * Description : download preview seq for sensor preview;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int imx219_sunny_stream_on(camera_state state)
{
	int  ret = 0;

	print_debug("Enter Function:%s  , preview frmsize index=%d",
        __func__, imx219_sunny_sensor.preview_frmsize_index);

	imx219_sunny_config_dphy_clk(state);

	ret = imx219_sunny_framesize_switch(state);
	if (ret != 0)
	{
        print_warn("%s,imx219_sunny_framesize_switch fail.ret=%d.",__func__,ret);
        return ret;
	}

	return 0;
}

/*  **************************************************************************
* FunctionName: imx219_sunny_check_sensor;
* Description : NA;
* Input       : NA;
* Output      : NA;
* ReturnValue : NA;
* Other       : NA;
***************************************************************************/
static int imx219_sunny_check_sensor(void)
{
    u8 idl = 0;
    u8 idh = 0;
    u16 id = 0;
    int retry = 0;
    int ret = 0;

    for(retry = 0; retry < IMX219_SUNNY_I2C_RETRY_TIMES; retry++) {
        imx219_sunny_read_reg(IMX219_SUNNY_CHIP_ID_REG_H, &idh);
        imx219_sunny_read_reg(IMX219_SUNNY_CHIP_ID_REG_L, &idl);

        id = ((idh << 8) | idl);
        print_info("imx219 product id:0x%x ,retrytimes:%d", id, retry);
        if(IMX219_SUNNY_CHIP_ID == id) {
            break;
        }
        udelay(100);
    }

    if (IMX219_SUNNY_CHIP_ID != id) {
        print_error("Invalid product id ,Could not load sensor imx219");
        return -1;
    }

	ret = k3_socgpio_get_id_value_float(S_CAMERA_ID_PIN);
	if(ret < 0) {
		print_error("imx219_sunny_sensor fail to get gpio value!!!so return -1!\n");
		return -1;
	}

	if(ret != MODULE_SUNNY){
		print_info("%s this moudle is not imx219_sunny moudle",__func__);
		return -1;
	}

#ifdef IMX219_SUNNY_OTP_FEATURE
    if(IMX219_SUNNY_OTP_INVALID == imx219_sunny_otp_flag) {
        imx219_sunny_write_reg(0x0100, 0x01, 0x00);
        imx219_sunny_read_otp();
        imx219_sunny_write_reg(0x0100, 0x00, 0x00);
    }
#endif

    return 0;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_init_isp_reg;
 * Description : load initial seq for sensor init;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int imx219_sunny_init_isp_reg(void)
{
    int size = 0;

    camera_sensor *sensor = &imx219_sunny_sensor;

    size = CAMERA_MAX_SETTING_SIZE;

    imx219_sunny_write_isp_seq(sensor->effect->isp_settings, size);

    return 0;
}

/*  **************************************************************************
* FunctionName: imx219_sunny_power;
* Description : NA;
* Input       : NA;
* Output      : NA;
* ReturnValue : NA;
* Other       : NA;
***************************************************************************/
static int imx219_sunny_power(camera_power_state power)
{
	if (power == POWER_ON) {

		k3_ispldo_power_sensor(power, S_CAMERA_IO_VDD);
		k3_socgpio_power_sensor(1, S_CAMERA_ANALOG_VDD);//for external AVDD LDO
		k3_ispldo_power_sensor(power, S_CAMERA_ANALOG_VDD);
		k3_ispldo_power_sensor(power, M_CAMERA_CORE_VDD);//power on main sensor's DVDD
		udelay(100);
		k3_ispio_ioconfig(&imx219_sunny_sensor, power);
		k3_ispgpio_power_sensor(&imx219_sunny_sensor, power);

		k3_isp_io_enable_mclk(MCLK_ENABLE, imx219_sunny_sensor.sensor_index);
		msleep(5);
		k3_ispgpio_reset_sensor(imx219_sunny_sensor.sensor_index, power, imx219_sunny_sensor.power_conf.reset_valid);
		msleep(8);

	} else {
		k3_ispio_deinit_csi(imx219_sunny_sensor.mipi_index);
		k3_isp_io_enable_mclk(MCLK_DISABLE, imx219_sunny_sensor.sensor_index);
		udelay(100);
		k3_ispio_ioconfig(&imx219_sunny_sensor, power);
		k3_ispgpio_power_sensor(&imx219_sunny_sensor, power);

		k3_ispgpio_reset_sensor(imx219_sunny_sensor.sensor_index, power, imx219_sunny_sensor.power_conf.reset_valid);

		k3_ispldo_power_sensor(power, M_CAMERA_CORE_VDD);//power off main sensor' DVDD
		k3_ispldo_power_sensor(power, S_CAMERA_ANALOG_VDD);
		k3_socgpio_power_sensor(0, S_CAMERA_ANALOG_VDD);//for external AVDD  LDO

		k3_ispldo_power_sensor(power, S_CAMERA_IO_VDD);
		msleep(5);
	}

	return 0;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_shut_down;
 * Description : imx219 shut down function;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void imx219_sunny_shut_down(void)
{
	print_debug("enter %s", __func__);
	k3_ispgpio_power_sensor(&imx219_sunny_sensor, POWER_OFF);
}

/*
 * Here gain is in unit 1/16 of sensor gain,
 * y36721 todo, temporarily if sensor gain=0x10, ISO is 100
 * in fact we need calibrate an ISO-ET-gain table.
 */
u32 imx219_sunny_gain_to_iso(int gain)
{
	return (gain * 100) / 0x10;
}

u32 imx219_sunny_iso_to_gain(int iso)
{
	return (iso * 0x10) / 100;
}

void imx219_sunny_set_gain(u32 gain)
{
	u32   tmp_digital_gain = 0;
	u8    digital_ratio = 0;
	u8    digital_h = 0;
	u8    digital_l = 0;
	u32   analog_gain = 0;

	if (gain <= 0x10)//min gain = 16
		gain = 0x10;

    //isp2.2 gain = register_value/0x10
	if(gain > IMX219_SUNNY_MAX_ANALOG_GAIN)
	{
        /*tmp_digital_gain*256 is keep the decimal part*/
		tmp_digital_gain = (gain*256) >> 4;
		tmp_digital_gain = (tmp_digital_gain*16)/IMX219_SUNNY_MAX_ANALOG_GAIN;

		digital_ratio = gain/IMX219_SUNNY_MAX_ANALOG_GAIN;
		digital_h = digital_ratio;
		digital_l = tmp_digital_gain - digital_ratio*256;

		analog_gain = IMX219_SUNNY_MAX_ANALOG_GAIN;
	}
	else
	{
		analog_gain = gain;
		digital_h = 1;
		digital_l = 0;
	}

	analog_gain = 256 - (256*16)/analog_gain;
	imx219_sunny_write_reg(IMX219_SUNNY_ANALOG_GAIN_REG, analog_gain & 0xff, 0x00);

	imx219_sunny_write_reg(IMX219_SUNNY_DIG_GAIN_REG_H, digital_h & 0xff, 0x00);
	imx219_sunny_write_reg(IMX219_SUNNY_DIG_GAIN_REG_L, digital_l & 0xff, 0x00);

	return;
}

void imx219_sunny_set_exposure(u32 exposure)
{
	exposure >>= 4;
	imx219_sunny_write_reg(IMX219_SUNNY_EXPOSURE_REG_H, (exposure >> 8) & 0xff, 0x00);
	imx219_sunny_write_reg(IMX219_SUNNY_EXPOSURE_REG_L, exposure & 0xff, 0x00);	/*fraction part not used */
}

#if 0
static void imx219_sunny_set_exposure_gain(u32 exposure, u32 gain)
{
	u32   tmp_digital_gain = 0;
	u8    digital_ratio = 0;
	u8    digital_h = 0;
	u8    digital_l = 0;
	u32   analog_gain = 0;
	//sonyimx219_set_dpc_function(gain);//DPC effect of sonyimx219 sensor open by default

	/*adapter isp2.2 register value*/
	exposure >>= 4; //isp2.2 exposure = register_value/0x10
	imx219_sunny_write_reg(IMX219_SUNNY_EXPOSURE_REG_H, (exposure >> 8) & 0xff, 0x00);
	imx219_sunny_write_reg(IMX219_SUNNY_EXPOSURE_REG_L, exposure & 0xff, 0x00);

	if (gain <= 0x10)//min gain = 16
		gain = 0x10;

	//isp2.2 gain = register_value/0x10
	if(gain > IMX219_SUNNY_MAX_ANALOG_GAIN)
	{
        /*tmp_digital_gain*256 is keep the decimal part*/
		tmp_digital_gain = (gain*256) >> 4;
		tmp_digital_gain = (tmp_digital_gain*16)/IMX219_SUNNY_MAX_ANALOG_GAIN;

		digital_ratio = gain/IMX219_SUNNY_MAX_ANALOG_GAIN;
		digital_h = digital_ratio;
		digital_l = tmp_digital_gain - digital_ratio*256;

		analog_gain = IMX219_SUNNY_MAX_ANALOG_GAIN;
	}
	else
	{
		analog_gain = gain;
		digital_h = 1;
		digital_l = 0;
	}

	analog_gain = 256 - (256*16)/analog_gain;
	imx219_sunny_write_reg(IMX219_SUNNY_ANALOG_GAIN_REG, analog_gain & 0xff, 0x00);

	imx219_sunny_write_reg(IMX219_SUNNY_DIG_GAIN_REG_H, digital_h & 0xff, 0x00);
	imx219_sunny_write_reg(IMX219_SUNNY_DIG_GAIN_REG_L, digital_l & 0xff, 0x00);

	return;
}
#endif

u32 imx219_sunny_get_vts_reg_addr(void)
{
	return IMX219_SUNNY_VTS_REG_H;
}

void imx219_sunny_set_vts(u16 vts)
{
	print_debug("Enter %s  ", __func__);
	imx219_sunny_write_reg(IMX219_SUNNY_VTS_REG_H, (vts >> 8) & 0xff, 0x00);
	imx219_sunny_write_reg(IMX219_SUNNY_VTS_REG_L, vts & 0xff, 0x00);
}

static u32 imx219_sunny_get_override_param(camera_override_type_t type)
{
	u32 ret_val = sensor_override_params[type];

	switch (type) {
	case OVERRIDE_ISO_HIGH:
		ret_val = IMX219_SUNNY_MAX_ISO;
		break;

	case OVERRIDE_ISO_LOW:
		ret_val = IMX219_SUNNY_MIN_ISO;
		break;

	/* increase frame rate gain threshold */
	case OVERRIDE_AUTOFPS_GAIN_LOW2MID:
		ret_val = IMX219_SUNNY_AUTOFPS_GAIN_LOW2MID;
		break;
	case OVERRIDE_AUTOFPS_GAIN_MID2HIGH:
		ret_val = IMX219_SUNNY_AUTOFPS_GAIN_MID2HIGH;
		break;

	/* reduce frame rate gain threshold */
	case OVERRIDE_AUTOFPS_GAIN_MID2LOW:
		ret_val = IMX219_SUNNY_AUTOFPS_GAIN_MID2LOW;
		break;
	case OVERRIDE_AUTOFPS_GAIN_HIGH2MID:
		ret_val = IMX219_SUNNY_AUTOFPS_GAIN_HIGH2MID;
		break;

	case OVERRIDE_FPS_MAX:
		ret_val = IMX219_SUNNY_MAX_FRAMERATE;
		break;

	case OVERRIDE_FPS_MIN:
		ret_val = IMX219_SUNNY_MIN_FRAMERATE;
		break;

    case OVERRIDE_FPS_MID:
        ret_val = IMX219_SUNNY_MIDDLE_FRAMERATE;
        break;

	case OVERRIDE_CAP_FPS_MIN:
		ret_val = IMX219_SUNNY_MIN_CAP_FRAMERATE;
		break;

	case OVERRIDE_FLASH_TRIGGER_GAIN:
		ret_val = IMX219_SUNNY_FLASH_TRIGGER_GAIN;
		break;

	case OVERRIDE_SHARPNESS_PREVIEW:
		ret_val = IMX219_SUNNY_SHARPNESS_PREVIEW;
		break;

	case OVERRIDE_SHARPNESS_CAPTURE:
		ret_val = IMX219_SUNNY_SHARPNESS_CAPTURE;
		break;

	default:
		print_error("%s:not override or invalid type %d, use default",__func__, type);
		break;
	}

	return ret_val;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_reset;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int imx219_sunny_reset(camera_power_state power_state)
{
	print_debug("%s", __func__);

	imx219_sunny_sensor.old_flip = 0;

	return 0;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_init;
 * Description : imx219 init function;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : Error code indicating success or failure;
 * Other       : NA;
 **************************************************************************
*/
static int imx219_sunny_init(void)
{
        static bool imx219_sunny_check = false;
        int ret = 0;
        print_debug("%s", __func__);

        if (false == imx219_sunny_check) {
                if (video_check_suspensory_camera("imx219sunny_sensor") != 1) {
                        print_error("%s: product not have this sensor", __func__);
                        return -ENODEV;
                }
        print_info("%s:imx219_sunny_check ok",__func__);
        imx219_sunny_check = true;
        ret = camera_get_matching_sensor_config(imx219_sunny_config_settings, ARRAY_SIZE(imx219_sunny_config_settings),&imx219_sunny_config);
        if( ret < 0 ){
            print_error("%s: fail to match sensor config.", __func__);
            return -ENODEV;
        } else {
            print_info("%s: choose the %s's setting.",__func__,imx219_sunny_config->product);
        }
     }

        //S_CAMERA_CORE_VDD and S_CAMERA_IO_VDD use same vdd source, so only init once
        k3_ispio_power_init(S_CAMERA_ANALOG_VDD, LDO_VOLTAGE_28V, LDO_VOLTAGE_28V);	/*analog 2.8V - sec camera*/
        k3_ispio_power_init(S_CAMERA_IO_VDD, LDO_VOLTAGE_18V, LDO_VOLTAGE_18V);		/*IO 1.8V - sec camera*/
        k3_ispio_power_init(M_CAMERA_CORE_VDD, LDO_VOLTAGE_12V, LDO_VOLTAGE_12V);	/*core 1.2V - sec camera*/

	return 0;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_exit;
 * Description : imx219 exit function;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void imx219_sunny_exit(void)
{
	print_debug("enter %s", __func__);

	k3_ispio_power_deinit();

	if (imx219_sunny_sensor.owner) {
		module_put(imx219_sunny_sensor.owner);
	}
	print_debug("exit %s", __func__);
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_config_dphy_clk;
 * Description : set MIPI clock to dphy;
 * Input       : camera state
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void imx219_sunny_config_dphy_clk(camera_state state)
{
	u8 lane_clk;

	if (state == STATE_PREVIEW) {
		lane_clk =imx219_sunny_sensor.frmsize_list[imx219_sunny_sensor.preview_frmsize_index].lane_clk;
	} else {
		lane_clk =imx219_sunny_sensor.frmsize_list[imx219_sunny_sensor.capture_frmsize_index].lane_clk;
	}

	print_info("%s lane_clk = 0x%x state = %d",__func__, lane_clk, state);
	k3_ispio_config_lane_clk(imx219_sunny_sensor.mipi_index, imx219_sunny_sensor.mipi_lane_count, lane_clk);
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_reset_dphy;
 * Description : reset dphy;
 * Input       : index:sensor index; mipi_lane_count: mipi land count;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void imx219_sunny_reset_dphy(void)
{
       k3_ispio_reset_phy(imx219_sunny_sensor.mipi_index, imx219_sunny_sensor.mipi_lane_count);
}

static int imx219_sunny_get_equivalent_focus(void)
{
	print_debug("enter %s", __func__);
	return IMX219_SUNNY_EQUIVALENT_FOCUS;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_check_otp;
 * Description : check otp's status;
 * Input       : NA;
 * Output      : current otp status;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void imx219_sunny_check_otp(sensor_otp_status * status)
{
	if (NULL == status)
	{
		print_error("%s, NULL data pointer!", __func__);
		return;
	}
	if (IMX219_SUNNY_OTP_VALID ==imx219_sunny_otp_flag)
	{
		*status = OTP_VALID;
	}
	else
	{
		*status = OTP_INVALID;
	}
	print_info("otp status:%d", *status);
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_get_sensor_reg;
 * Description : read sensor's reg value;
 * Input       : reg, register to be read;
 * Output      : pvalue, value readed from reg;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/

static void imx219_sunny_get_sensor_reg(int reg, int *pvalue)
{
	u8 value = 0;
	if (NULL == pvalue)
	{
		print_error("%s, NULL data pointer!", __func__);
		return;
	}
	imx219_sunny_read_reg(reg, &value);
	*pvalue = value;
	//print_info("%s, reg:0x%x, value:0x%x", __func__, reg, *pvalue);
	return;
}
/*
 **************************************************************************
 * FunctionName: imx219_sunny_set_sensor_reg;
 * Description : write sensor's reg value;
 * Input       : reg, register to be write;
 * Output      : value, value to be writen;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void imx219_sunny_set_sensor_reg(int reg, int value)
{
	imx219_sunny_write_reg(reg, value & 0xff, 0x00);
	return;
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_set_default;
 * Description : init imx219_sunny_sensor;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void imx219_sunny_set_default(void)
{
	imx219_sunny_sensor.init = imx219_sunny_init;
	imx219_sunny_sensor.exit = imx219_sunny_exit;
	imx219_sunny_sensor.reset = imx219_sunny_reset;
	imx219_sunny_sensor.shut_down = imx219_sunny_shut_down;
	imx219_sunny_sensor.check_sensor = imx219_sunny_check_sensor;
	imx219_sunny_sensor.power = imx219_sunny_power;
	imx219_sunny_sensor.init_reg = imx219_sunny_init_reg;
	imx219_sunny_sensor.stream_on = imx219_sunny_stream_on;

	imx219_sunny_sensor.get_format = imx219_sunny_get_format;
	imx219_sunny_sensor.set_flash = NULL;
	imx219_sunny_sensor.get_flash = NULL;
	imx219_sunny_sensor.set_scene = NULL;
	imx219_sunny_sensor.get_scene = NULL;

	imx219_sunny_sensor.enum_framesizes = imx219_sunny_enum_framesizes;
	imx219_sunny_sensor.try_framesizes = imx219_sunny_try_framesizes;
	imx219_sunny_sensor.set_framesizes = imx219_sunny_set_framesizes;
	imx219_sunny_sensor.get_framesizes = imx219_sunny_get_framesizes;

	imx219_sunny_sensor.enum_frame_intervals = imx219_sunny_enum_frame_intervals;
	imx219_sunny_sensor.try_frame_intervals = NULL;
	imx219_sunny_sensor.set_frame_intervals = NULL;
	imx219_sunny_sensor.get_frame_intervals = NULL;
	imx219_sunny_sensor.get_capability = imx219_sunny_get_capability;

	strncpy(imx219_sunny_sensor.info.name, "imx219_sunny", sizeof(imx219_sunny_sensor.info.name));
	imx219_sunny_sensor.interface_type = MIPI2;
	imx219_sunny_sensor.mipi_lane_count = CSI_LINES_2;
	imx219_sunny_sensor.mipi_index = CSI_INDEX_1;
	imx219_sunny_sensor.sensor_index = CAMERA_SENSOR_SECONDARY;
	imx219_sunny_sensor.skip_frames = 2;

	imx219_sunny_sensor.capture_skip_frames = CAPTURE_SKIP_2;


	imx219_sunny_sensor.power_conf.pd_valid = LOW_VALID;
	imx219_sunny_sensor.power_conf.reset_valid = LOW_VALID;
	imx219_sunny_sensor.i2c_config.index = I2C_SECONDARY;
	imx219_sunny_sensor.i2c_config.speed = I2C_SPEED_400;
	imx219_sunny_sensor.i2c_config.addr = IMX219_SUNNY_SLAVE_ADDRESS;
	imx219_sunny_sensor.i2c_config.addr_bits = I2C_16BIT;
	imx219_sunny_sensor.i2c_config.val_bits = I2C_8BIT;

	imx219_sunny_sensor.preview_frmsize_index = 0;
	imx219_sunny_sensor.capture_frmsize_index = 0;
	imx219_sunny_sensor.frmsize_list =  imx219_sunny_framesizes;
	imx219_sunny_sensor.fmt[STATE_PREVIEW] = V4L2_PIX_FMT_RAW10;
	imx219_sunny_sensor.fmt[STATE_CAPTURE] = V4L2_PIX_FMT_RAW10;
#ifdef IMX219_SUNNY_AP_WRITEAE_MODE
	imx219_sunny_sensor.aec_addr[0] = 0;
	imx219_sunny_sensor.aec_addr[1] = 0;
	imx219_sunny_sensor.aec_addr[2] = 0;
	imx219_sunny_sensor.agc_addr[0] = 0;
	imx219_sunny_sensor.agc_addr[1] = 0;
	imx219_sunny_sensor.ap_writeAE_delay = 0;
#else
	imx219_sunny_sensor.aec_addr[0] = 0x3500;
	imx219_sunny_sensor.aec_addr[1] = 0x3501;
	imx219_sunny_sensor.aec_addr[2] = 0x3502;
	imx219_sunny_sensor.agc_addr[0] = 0x350a;
	imx219_sunny_sensor.agc_addr[1] = 0x350b;
#endif

	imx219_sunny_sensor.sensor_type = SENSOR_OV;
	//imx219_sunny_sensor.sensor_type = SENSOR_LIKE_SONY;

	imx219_sunny_sensor.get_vts_reg_addr = imx219_sunny_get_vts_reg_addr;
	imx219_sunny_sensor.set_vts = imx219_sunny_set_vts;

	imx219_sunny_sensor.set_gain = imx219_sunny_set_gain;
	imx219_sunny_sensor.set_exposure = imx219_sunny_set_exposure;
	//imx219_sunny_sensor.set_exposure_gain = imx219_sunny_set_exposure_gain;

	imx219_sunny_sensor.sensor_dump_reg = imx219_sunny_dump_reg_debug;

	imx219_sunny_sensor.get_override_param = imx219_sunny_get_override_param;

	imx219_sunny_sensor.sensor_gain_to_iso = imx219_sunny_gain_to_iso;
	imx219_sunny_sensor.sensor_iso_to_gain = imx219_sunny_iso_to_gain;


	imx219_sunny_sensor.get_sensor_aperture = imx219_sunny_get_sensor_aperture;

	imx219_sunny_sensor.get_equivalent_focus = imx219_sunny_get_equivalent_focus;

	imx219_sunny_sensor.isp_location = CAMERA_USE_K3ISP;
	imx219_sunny_sensor.sensor_tune_ops = NULL;

	imx219_sunny_sensor.af_enable = 0;

	imx219_sunny_sensor.sensor_gain_to_iso = imx219_sunny_gain_to_iso;
	imx219_sunny_sensor.sensor_iso_to_gain = imx219_sunny_iso_to_gain;
	imx219_sunny_sensor.image_setting.lensc_param = imx219_sunny_lensc_param;
	imx219_sunny_sensor.image_setting.ccm_param = imx219_sunny_ccm_param;
	imx219_sunny_sensor.image_setting.awb_param = imx219_sunny_awb_param;

	/*default is preview size */
	imx219_sunny_sensor.fps_max = 30;
	imx219_sunny_sensor.fps_min = 16;
	imx219_sunny_sensor.fps = 25;

	/*defalt flip*/
	imx219_sunny_sensor.vflip			= 0;
	imx219_sunny_sensor.hflip			= 0;
	imx219_sunny_sensor.old_flip		= 0;
	imx219_sunny_sensor.set_vflip		= imx219_sunny_set_vflip;
	imx219_sunny_sensor.set_hflip		= imx219_sunny_set_hflip;
	imx219_sunny_sensor.get_vflip		= imx219_sunny_get_vflip;
	imx219_sunny_sensor.get_hflip		= imx219_sunny_get_hflip;
	imx219_sunny_sensor.update_flip		= imx219_sunny_update_flip;
	imx219_sunny_sensor.sensor_rgb_type = SENSOR_BGGR;//SENSOR_GRBG,SENSOR_RGGB,SENSOR_BGGR,SENSOR_GBRG,

	imx219_sunny_sensor.owner = THIS_MODULE;

	imx219_sunny_sensor.info.facing = CAMERA_FACING_FRONT;
	imx219_sunny_sensor.info.orientation = 270;
	imx219_sunny_sensor.info.focal_length = 238; /* 2.38mm*/
	imx219_sunny_sensor.info.h_view_angle = 75;
	imx219_sunny_sensor.info.v_view_angle = 60;

	imx219_sunny_sensor.lane_clk = CLK_550M;
	imx219_sunny_sensor.effect = imx219_sunny_config_settings[0].effect;
	imx219_sunny_sensor.support_summary = false;
	imx219_sunny_sensor.init_isp_reg = imx219_sunny_init_isp_reg;
	imx219_sunny_sensor.isp_idi_skip = false;

	imx219_sunny_sensor.stream_off_setting = imx219_sunny_stream_off_regs;
	imx219_sunny_sensor.stream_off_setting_size = ARRAY_SIZE(imx219_sunny_stream_off_regs);

	/*if there have different data rate of sensor resolution we need this config_dphy_clk
	   otherwise if all resolution is same rate config_dphy_clk must to be null*/
	imx219_sunny_sensor.config_dphy_clk = imx219_sunny_config_dphy_clk;
	imx219_sunny_sensor.reset_dphy = imx219_sunny_reset_dphy;
	imx219_sunny_sensor.check_otp_status = imx219_sunny_check_otp;
	imx219_sunny_sensor.get_sensor_reg = imx219_sunny_get_sensor_reg;
	imx219_sunny_sensor.set_sensor_reg = imx219_sunny_set_sensor_reg;

}


/*
 **************************************************************************
 * FunctionName: imx219_sunny_module_init;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
 */
static __init int imx219_sunny_module_init(void)
{
	imx219_sunny_set_default();
	return register_camera_sensor(imx219_sunny_sensor.sensor_index, &imx219_sunny_sensor);
}

/*
 **************************************************************************
 * FunctionName: imx219_sunny_module_exit;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
 */
static void __exit imx219_sunny_module_exit(void)
{
	unregister_camera_sensor(imx219_sunny_sensor.sensor_index, &imx219_sunny_sensor);
}

MODULE_AUTHOR("Hisilicon");
module_init(imx219_sunny_module_init);
module_exit(imx219_sunny_module_exit);
MODULE_LICENSE("GPL");

/********************************** END **********************************************/