/*BEGIN PN: DTS2015122802301, added by wx290899, 2015/12/28*/
/*BEGIN PN: DTS2015121011596, added by wx294303, 2015/12/10*/

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
#include "carmel/ov8856_sunny.h"
#include <asm/bug.h>
#include <linux/device.h>

#define LOG_TAG "OV8856_SUNNY"
/* #define DEBUG_DEBUG 1 */
#include "cam_log.h"
#include "video_config.h"
#define OV8856_SUNNY_AP_WRITEAE_MODE
#include "effect.h"
#include "cam_util.h"

//slave add:0x20 read/0x21 write
#define OV8856_SUNNY_SLAVE_ADDRESS    0x20

//chip id for ov8856
#define OV8856_SUNNY_CHIP_ID          0x885a
#define OV8856_CHIP_ID_REG_H 0x300a
#define OV8856_CHIP_ID_REG_M 0x300b
#define OV8856_CHIP_ID_REG_L 0x300c


#define OV8856_SUNNY_FLIP_REG         0x3820
#define OV8856_SUNNY_MIRROR_REG       0x3821

#define OV8856_SUNNY_EXPOSURE_REG_0	0x3500
#define OV8856_SUNNY_EXPOSURE_REG_1	0x3501
#define OV8856_SUNNY_EXPOSURE_REG_2	0x3502
#define OV8856_SUNNY_GAIN_REG_H		0x3508
#define OV8856_SUNNY_GAIN_REG_L		0x3509

#define OV8856_SUNNY_DIGITAL_GAIN_REG_H		0x350a
#define OV8856_SUNNY_DIGITAL_GAIN_REG_L		0x350b

#define GAIN_BASE_1X 0x10
#define OV8856_SUNNY_DGAIN_BASE_1X 0x400
#define OV8856_SUNNY_AGAIN_BASE_1X 0x080

#define OV8856_SUNNY_VTS_REG_H	    0x380e
#define OV8856_SUNNY_VTS_REG_L	    0x380f

#define OV8856_GROUP_HOLD_FUNCTION_REG 0x3208
#define OV8856_GROUP_SWITCH_CTRL_REG 0x320B

#define OV8856_SUNNY_EQUIVALENT_FOCUS		22 // 22mm
/* camera sensor override parameters, define in binning preview mode */
#define OV8856_SUNNY_MAX_ISO			800
#define OV8856_SUNNY_MIN_ISO			100

#define OV8856_SUNNY_APERTURE_FACTOR              240 //F2.4

#define OV8856_SUNNY_AUTOFPS_GAIN_LOW2MID		0x16
#define OV8856_SUNNY_AUTOFPS_GAIN_MID2HIGH		0x16
#define OV8856_SUNNY_AUTOFPS_GAIN_HIGH2MID		0x40
#define OV8856_SUNNY_AUTOFPS_GAIN_MID2LOW		0x40

#define OV8856_SUNNY_MAX_FRAMERATE		30
#define OV8856_SUNNY_MIDDLE_FRAMERATE		15
#define OV8856_SUNNY_MIN_FRAMERATE		15

#define OV8856_SUNNY_MIN_CAP_FRAMERATE	8

#define OV8856_SUNNY_FLASH_TRIGGER_GAIN	0x80

#define OV8856_SUNNY_SHARPNESS_PREVIEW	0x10
#define OV8856_SUNNY_SHARPNESS_CAPTURE	0x10

#define OV8856_SUNNY_ZSL    (0x00)//(1 << CAMERA_ZSL_OFF)

#define OV8856_SUNNY_I2C_RETRY_TIMES      5

#define OV8856_SUNNY_OTP_FEATURE 1//open OTP debug

#ifdef OV8856_SUNNY_OTP_FEATURE
#define OV8856_LSC_REG_NO 240
#define OV8856_OTP_REG_NO 504
#define OV8856_MODULE_REG_NO 5
#define OV8856_AWB_REG_NO 6
#define OTP_AWB_OFFSET 5
#define OTP_LSC_OFFSET 11

struct ov8856_sunny_otp_struct {
	u8 year;
	u8 month;
	u8 date;
	u8 module_id;
	u8 vendor_coding;
	u8 version_id;
	u16 rg_ratio;
	u16 bg_ratio;
	u16 gb_gr_ratio;
	u16 lsc[OV8856_LSC_REG_NO];
};

#define HUAWEI_MODULE_ID 0xc8 //HUAWEIMODOULE ID 23060200
#define VENDOR_ID        0x01//sunny
static int RG_Ratio_Typical = 0x21B;//The average value of the three golden samples
static int BG_Ratio_Typical = 0x27E;//The average value of the three golden samples
static u32 otpsumval = 0;
static u8 group_checksum = 0;
#define OTP_GROUP1_START_ADDR 0x7010
#define OTP_GROUP2_START_ADDR 0x710c

static struct ov8856_sunny_otp_struct ov8856_sunny_otp;

#define OV8856_SUNNY_OTP_INVALID 0x00
#define OV8856_SUNNY_OTP_VALID 0xff
static int ov8856_sunny_otp_flag = OV8856_SUNNY_OTP_INVALID;
#endif
/******************effect begin*************************/
static effect_params effect_ov8856_sunny_carmel = {
#include "carmel/effect_ov8856_sunny.h"
};

static camera_capability ov8856_sunny_cap[] = {
    {V4L2_CID_FOCAL_LENGTH, 238},//2.38mm
    {V4L2_CID_ZSL,OV8856_SUNNY_ZSL},
    {V4L2_CID_HORIZONTAL_VIEW_ANGLE, 7560},//add FOV angel
    {V4L2_CID_VERTICAL_VIEW_ANGLE, 6000},
};

/*should be calibrated, three lights, from 0x1c264*/
/*here is long exposure*/
char ov8856_sunny_lensc_param[86 * 3] = {
};

/*should be calibrated, 6 groups 3x3, from 0x1c1d8*/
short ov8856_sunny_ccm_param[54] = {
};

char ov8856_sunny_awb_param[] = {
};

/*y36721 todo*/
char ov8856_sunny_awb_param_short[] = {
};

static const struct _sensor_reg_t ov8856_sunny_stream_off_regs[] = {
	{0x0100, 0x00},
};
static const struct _sensor_reg_t ov8856_sunny_stream_on_regs[] = {
    {0x0100, 0x01},
};
static sensor_setting_t ov8856_sunny_carmel_init_array[] = {
    {ov8856_sunny_init_regs, ARRAY_SIZE(ov8856_sunny_init_regs)},
};

static framesize_s ov8856_sunny_framesizes[] = {
     //1600x1200 29.7fps
	{0, 0, 1600, 1200, 3530, 1334, 30, 30, 0x172, 0x134, 0x100, VIEW_FULL, RESOLUTION_4_3, false, false, ECGC_TYPE_MAX, {ov8856_sunny_framesize_quarter, ARRAY_SIZE(ov8856_sunny_framesize_quarter)}, CLK_750M},
	//3264X2448 15.0fps
	{0, 0, 3264, 2448, 3428, 2720, 15, 15, 0x174, 0x136, 0x101, VIEW_FULL, RESOLUTION_4_3, false, false, ECGC_TYPE_MAX, {ov8856_sunny_framesize_full, ARRAY_SIZE(ov8856_sunny_framesize_full)}, CLK_750M },
};

static const sensor_config_s ov8856_sunny_config_settings[]= {
    {
        "carmel",
        {ov8856_sunny_carmel_init_array,  ARRAY_SIZE(ov8856_sunny_carmel_init_array) },
        {ov8856_sunny_framesizes, ARRAY_SIZE(ov8856_sunny_framesizes)},
        &effect_ov8856_sunny_carmel,
        NULL,
    },
};
static const sensor_config_s* ov8856_sunny_config = ov8856_sunny_config_settings;

static camera_sensor ov8856_sunny_sensor;

static void ov8856_sunny_set_default(void);
void ov8856_sunny_set_vts(u16 vts);
static void ov8856_sunny_config_dphy_clk(camera_state state);
static void ov8856_sunny_reset_dphy(void);
/*
 **************************************************************************
 * FunctionName: ov8856_sunny_read_reg;
 * Description : read ov8856 reg by i2c;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_read_reg(u16 reg, u8 *val)
{
	return k3_ispio_read_reg(ov8856_sunny_sensor.i2c_config.index,
				 ov8856_sunny_sensor.i2c_config.addr, reg, (u16*)val, ov8856_sunny_sensor.i2c_config.val_bits,ov8856_sunny_sensor.i2c_config.addr_bits);
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_write_reg;
 * Description : write ov8856 reg by i2c;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_write_reg(u16 reg, u8 val, u8 mask)
{
	return k3_ispio_write_reg(ov8856_sunny_sensor.i2c_config.index,
			ov8856_sunny_sensor.i2c_config.addr, reg, val, ov8856_sunny_sensor.i2c_config.val_bits, mask,ov8856_sunny_sensor.i2c_config.addr_bits);
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_write_seq;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
 */
static int ov8856_sunny_write_seq(const struct _sensor_reg_t *seq, u32 size, u8 mask)
{
	print_debug("Enter %s, seq[%#x], size=%d", __func__, (int)seq, size);
	return k3_ispio_write_seq(ov8856_sunny_sensor.i2c_config.index,
			ov8856_sunny_sensor.i2c_config.addr, seq, size, ov8856_sunny_sensor.i2c_config.val_bits, mask,ov8856_sunny_sensor.i2c_config.addr_bits);
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_write_isp_seq;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
 */
static void ov8856_sunny_write_isp_seq(const struct isp_reg_t *seq, u32 size)
{
	print_debug("Enter %s, seq[%#x], size=%d", __func__, (int)seq, size);
	k3_ispio_write_isp_seq(seq, size);
}

#ifdef OV8856_SUNNY_OTP_FEATURE
static void ov8856_sunny_clean_buffer(u16 address, u16 count)
{
	u16 i = 0;

	for (i=0; i<count; i++)
	{
		ov8856_sunny_write_reg(address + i, 0x00, 0x00);
	}
}

static void ov8856_sunny_read_block_reg(u16 address, u16 count, u16 *buf)
{
	u8 reg_value = 0;
	u8 i = 0;

	if( NULL == buf){
		print_error("%s value buf is null", __func__);
		return;
	}

	for (i=0; i<count; i++){
		ov8856_sunny_read_reg(address + i, &reg_value);
		buf[i] = reg_value;
		otpsumval += reg_value;
	}

}

/********************************************************************************************
* To avoid OTP memory access timing conflict,before doing OTP read/write,register 0x5001[3]
* must be set to 0. After OTP memory access,set register 0x5001[3] back to 1.
********************************************************************************************/
static void ov8856_sunny_otp_enable_dpc(void)
{
	u16 dpc_addr = 0x5001;//otp ctrl reg
	u8 dpc_data = 0;

	//first read 0x5001 reg to data
	ov8856_sunny_read_reg(dpc_addr, &dpc_data);
	/* set 0x5001[3] to 1 */
	ov8856_sunny_write_reg(dpc_addr, dpc_data|0x08, 0x00);
}

static void ov8856_sunny_otp_disable_dpc(void)
{
	u16 dpc_addr = 0x5001;//otp ctrl reg
	u8 dpc_data = 0;

	//first read 0x5001 reg to data
	ov8856_sunny_read_reg(dpc_addr, &dpc_data);
	/* set 0x5001[3] to 0 */
	ov8856_sunny_write_reg(dpc_addr, (dpc_data&(~0x08)), 0x00);
}

static void ov8856_sunny_otp_clean_buffer(void)
{
	u16 buffer_addr = 0x7010;
	u16 buffer_count = OV8856_OTP_REG_NO;

	ov8856_sunny_clean_buffer(buffer_addr, buffer_count);
}

static void ov8856_sunny_otp_enable_read(void)
{
	ov8856_sunny_write_reg(0x3d84, 0xC0, 0x00);//enable otp read mode
	ov8856_sunny_write_reg(0x3d88, 0x70, 0x00);//write start address to 0x3d88&0x3d89,start address 0x7010
	ov8856_sunny_write_reg(0x3d89, 0x10, 0x00);
	ov8856_sunny_write_reg(0x3d8a, 0x72, 0x00);//write end address to 0x3d8a&0x3d8b,end address 0x7207
	ov8856_sunny_write_reg(0x3d8b, 0x07, 0x00);
	ov8856_sunny_write_reg(0x3d81, 0x01, 0x00);//load OTP info
}

static int ov8856_sunny_otp_read_module_info(u16 address)
{
	u16 module_info[OV8856_MODULE_REG_NO] = {0};
	ov8856_sunny_read_block_reg(address, OV8856_MODULE_REG_NO, module_info);

	print_info("%s Year:%d Month:%d Day:%d Module_ID:%d Version_Coding:%d Version_ID:%d",
		__func__, module_info[0],module_info[1], module_info[2], module_info[3], (module_info[4]>>4)&0x0f, module_info[4]&0x0f);

	//check Module_ID and version_coding
	if (HUAWEI_MODULE_ID != module_info[3])
	{
		print_error("%s module id is incorrent, please check", __func__);
		return -EINVAL;
	}

	//check  version_coding
	if (((module_info[4]>>4)&0x0f) != VENDOR_ID)
	{
		print_error("%s version id is incorrent, please check", __func__);
		return -EINVAL;
	}

	//save to otp struct
	ov8856_sunny_otp.year = module_info[0];
	ov8856_sunny_otp.month = module_info[1];
	ov8856_sunny_otp.date = module_info[2];
	ov8856_sunny_otp.module_id = module_info[3];
	ov8856_sunny_otp.vendor_coding = (module_info[4]>>4)&0x0f;
	ov8856_sunny_otp.version_id= module_info[4]&0x0f;

	return 0;
}
static int ov8856_sunny_otp_read_awb(u16 address)
{
	u16 awb_info[OV8856_AWB_REG_NO] = {0};
	ov8856_sunny_read_block_reg(address, OV8856_AWB_REG_NO, awb_info);

	//save to otp struct
	ov8856_sunny_otp.rg_ratio = (awb_info[0]<<8) | awb_info[1];
	ov8856_sunny_otp.bg_ratio = (awb_info[2]<<8) | awb_info[3];
	ov8856_sunny_otp.gb_gr_ratio =(awb_info[4]<<8) | awb_info[5];

	if((ov8856_sunny_otp.rg_ratio == 0) || (ov8856_sunny_otp.bg_ratio == 0) || (ov8856_sunny_otp.gb_gr_ratio == 0)){
		print_error("invalid otp awb");
		return -EINVAL;
	}
	print_info("rg_ratio = %d, bg_ratio = %d, gb_gr_ratio = %d", ov8856_sunny_otp.rg_ratio, ov8856_sunny_otp.bg_ratio, ov8856_sunny_otp.gb_gr_ratio);
	return 0;
}

static int ov8856_sunny_otp_get_checksum(u16 *address)
{
	u16 group1_addr = 0x710B;//group 1 checksum address
	u16 group2_addr = 0x7207;//group 2 checksum address
	u8 group1_value = 0;
	u8 group2_value = 0;

	ov8856_sunny_read_reg(group2_addr, &group2_value);

	if (group2_value){//first read group2
		*address = OTP_GROUP2_START_ADDR;
		group_checksum = group2_value;
		print_info("%s group2_checksum:%d", __func__, group_checksum);
		return 0;
	}
	else{
		ov8856_sunny_read_reg(group1_addr, &group1_value);

		if (group1_value)//if group2 is 0,then we read group1
		{
			*address= OTP_GROUP1_START_ADDR;
			group_checksum = group1_value;
			print_info("%s group1_checksum:%d", __func__, group_checksum);
			return 0;
		}
	}

	print_error("%s group2 and group1 checksum is 0", __func__);
	return -EINVAL;
}

static int ov8856_sunny_otp_do_checksum()
{
	u16 checksum = 0;

	checksum = otpsumval%255 + 1;
	if (group_checksum != checksum){
		return -EINVAL;
	}

	ov8856_sunny_otp_flag = OV8856_SUNNY_OTP_VALID;
	return 0;
}

static void ov8856_sunny_otp_read(void)
{
	int rc = 0;
	u16 start_addr = 0;


	ov8856_sunny_otp_flag  = OV8856_SUNNY_OTP_INVALID;
	otpsumval = 0;
	memset(&ov8856_sunny_otp, 0, sizeof(ov8856_sunny_otp));

	//clean otp buffer
	ov8856_sunny_otp_clean_buffer();

	//disable OTP DPC
	ov8856_sunny_otp_disable_dpc();

	//enable otp function
	ov8856_sunny_otp_enable_read();
	mdelay(10);

	rc = ov8856_sunny_otp_get_checksum(&start_addr);
	if (rc < 0)
	{
		print_error("%s group select error!please check", __func__);
		return;
	}

	//read module info
	rc = ov8856_sunny_otp_read_module_info(start_addr);
	if (rc < 0)
	{
		print_error("%s otp read module info error", __func__);
		return;
	}

	//read awb info
	rc = ov8856_sunny_otp_read_awb(start_addr + OTP_AWB_OFFSET);
	if (rc < 0)
	{
		print_error("%s otp read awb error", __func__);
		return;
	}

	//read lsc info
	ov8856_sunny_read_block_reg(start_addr + OTP_LSC_OFFSET, OV8856_LSC_REG_NO, ov8856_sunny_otp.lsc);

	//do checksum
	rc = ov8856_sunny_otp_do_checksum();
	if (rc < 0)
	{
		print_error("%s checksum is error! please check", __func__);
		return;
	}

	//clean otp buffer
	ov8856_sunny_otp_clean_buffer();

	//enable OTP DPC
	ov8856_sunny_otp_enable_dpc();
}

static void ov8856_sunny_otp_update_awb(void)
{
	u16 R_gain = RG_Ratio_Typical*1000/ov8856_sunny_otp.rg_ratio;
	u16 B_gain = BG_Ratio_Typical*1000/ov8856_sunny_otp.bg_ratio;
	u16 G_gain = 1000;
	u16 Base_gain = 0;

	//calculate G gain
	//0x400 = 1x gain
	if (R_gain<1000 || B_gain<1000)
	{
		if (R_gain < B_gain)
		{
			Base_gain = R_gain;
		}
		else
		{
			Base_gain = B_gain;
		}
	}
	else
	{
		Base_gain = G_gain;
	}

	R_gain = 0x400*R_gain/Base_gain;
	B_gain = 0x400*B_gain/Base_gain;
	G_gain = 0x400*G_gain/Base_gain;

	//update sensor WB gain
	if (R_gain > 0x400)
	{
		ov8856_sunny_write_reg(0x5019, R_gain>>8, 0x00);
		ov8856_sunny_write_reg(0x501a, R_gain&0xff, 0x00);
	}

	if (G_gain > 0x400)
	{
		ov8856_sunny_write_reg(0x501b, G_gain>>8, 0x00);
		ov8856_sunny_write_reg(0x501c, G_gain&0xff, 0x00);
	}

	if (B_gain > 0x400)
	{
		ov8856_sunny_write_reg(0x501d, B_gain>>8, 0x00);
		ov8856_sunny_write_reg(0x501e, B_gain&0xff, 0x00);
	}

	print_info("set OTP AWB to sensor OK R_gain 0x%x G_gain 0x%x B_gain 0x%x ", R_gain, G_gain, B_gain);
	print_info("RG_Ratio_Typical 0x%x BG_Ratio_Typical 0x%x ", RG_Ratio_Typical, BG_Ratio_Typical);
}

static void ov8856_sunny_otp_update_lsc(void)
{
	u8 temp = 0;
	u8 i = 0;

	ov8856_sunny_read_reg(0x5000, &temp);
	temp =0x20 | temp;
	ov8856_sunny_write_reg(0x5000, temp, 0x00);

	for (i=0; i<OV8856_LSC_REG_NO; i++)
	{
		ov8856_sunny_write_reg(0x5900+i, ov8856_sunny_otp.lsc[i], 0x00);
	}
}
#endif

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_enum_frame_intervals;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_enum_frame_intervals(struct v4l2_frmivalenum *fi)
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

static int ov8856_sunny_get_capability(u32 id, u32 *value)
{
	int i;
	for (i = 0; i < sizeof(ov8856_sunny_cap) / sizeof(ov8856_sunny_cap[0]); ++i) {
		if (id == ov8856_sunny_cap[i].id) {
			*value = ov8856_sunny_cap[i].value;
			break;
		}
	}
	return 0;
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_get_format;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_get_format(struct v4l2_fmtdesc *fmt)
{
	if (fmt->type == V4L2_BUF_TYPE_VIDEO_OVERLAY)
		fmt->pixelformat = V4L2_PIX_FMT_RAW10;
	else
		fmt->pixelformat = V4L2_PIX_FMT_RAW10;
	return 0;
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_enum_framesizes;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_enum_framesizes(struct v4l2_frmsizeenum *framesizes)
{
	u32 max_index = ARRAY_SIZE(camera_framesizes) - 1;
	u32 this_max_index = ARRAY_SIZE(ov8856_sunny_framesizes) - 1;

	assert(framesizes);
	if(NULL == framesizes) {
		return -EINVAL;
	}

	print_debug("enter %s;", __func__);

	if (framesizes->index > max_index) {
		print_error("framesizes->index = %d error", framesizes->index);
		return -EINVAL;
	}

	if ((camera_framesizes[framesizes->index].width > ov8856_sunny_framesizes[this_max_index].width)
		|| (camera_framesizes[framesizes->index].height > ov8856_sunny_framesizes[this_max_index].height)) {
		print_error("framesizes->index = %d error", framesizes->index);
		return -EINVAL;
	}

	framesizes->type = V4L2_FRMSIZE_TYPE_DISCRETE;
	framesizes->discrete.width = ov8856_sunny_framesizes[this_max_index].width;
	framesizes->discrete.height = ov8856_sunny_framesizes[this_max_index].height;

	return 0;
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_try_framesizes;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_try_framesizes(struct v4l2_frmsizeenum *framesizes)
{
	int max_index = ARRAY_SIZE(ov8856_sunny_framesizes) - 1;

	assert(framesizes);

	if(NULL == framesizes) {
		return -EINVAL;
	}

	print_debug("Enter Function:%s ", __func__);

	if (framesizes->discrete.width <= ov8856_sunny_framesizes[max_index].width
	    && framesizes->discrete.height <= ov8856_sunny_framesizes[max_index].height) {
		print_error("===========width = %d", framesizes->discrete.width);
		print_error("===========height = %d", framesizes->discrete.height);
		return 0;
	}

	print_error("frame size too large, [%d,%d]",
		    framesizes->discrete.width, framesizes->discrete.height);
	return -EINVAL;
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_set_framesizes;
 * Description : NA;
 * Input       : flag: if 1, set framesize to sensor,
 *					   if 0, only store framesize to camera_interface;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_set_framesizes(camera_state state,
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
	print_info("Enter Function:%s State(%d), flag=%d, width=%d, height=%d, b_shutter_mode=0x%x, ecgc_type=0x%x",
		    __func__, state, flag, fs->width, fs->height,b_shutter_mode,ecgc_type);

	if (VIEW_FULL == view_type) {
		for (i = 0; i < ARRAY_SIZE(ov8856_sunny_framesizes); i++) {
			if ((ov8856_sunny_framesizes[i].width >= fs->width)
			    && (ov8856_sunny_framesizes[i].height >= fs->height)
			    && (VIEW_FULL == ov8856_sunny_framesizes[i].view_type)
			    && (camera_get_resolution_type(fs->width, fs->height)
			    <= ov8856_sunny_framesizes[i].resolution_type)) {
				fs->width = ov8856_sunny_framesizes[i].width;
				fs->height = ov8856_sunny_framesizes[i].height;
				match = true;
				break;
			}
		}
	}

	if (false == match) {
		for (i = 0; i < ARRAY_SIZE(ov8856_sunny_framesizes); i++) {
			if ((ov8856_sunny_framesizes[i].width >= fs->width)
			    && (ov8856_sunny_framesizes[i].height >= fs->height)
			    && (camera_get_resolution_type(fs->width, fs->height)
			    <= ov8856_sunny_framesizes[i].resolution_type)) {
				fs->width = ov8856_sunny_framesizes[i].width;
				fs->height = ov8856_sunny_framesizes[i].height;
				break;
			}
		}
	}
#if 0
	for (i = 0; i < ARRAY_SIZE(ov8856_sunny_framesizes); i++) {
		if ((ov8856_sunny_framesizes[i].width >= fs->width)
		    && (ov8856_sunny_framesizes[i].height >= fs->height)) {
			fs->width = ov8856_sunny_framesizes[i].width;
			fs->height = ov8856_sunny_framesizes[i].height;
			break;
		}
	}
#endif
	if (i >= ARRAY_SIZE(ov8856_sunny_framesizes)) {
		print_error("request resolution larger than sensor's max resolution");
		return -EINVAL;
	}

	if (state == STATE_PREVIEW)
		ov8856_sunny_sensor.preview_frmsize_index = i;
	else
		ov8856_sunny_sensor.capture_frmsize_index = i;

	return 0;
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_get_framesizes;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_get_framesizes(camera_state state,
				 struct v4l2_frmsize_discrete *fs)
{
	int frmsize_index;
	assert(fs);

	if(NULL == fs) {
		return -EINVAL;
	}

	if (state == STATE_PREVIEW)
		frmsize_index = ov8856_sunny_sensor.preview_frmsize_index;
	else if (state == STATE_CAPTURE)
		frmsize_index = ov8856_sunny_sensor.capture_frmsize_index;
	else
		return -EINVAL;
	fs->width = ov8856_sunny_framesizes[frmsize_index].width;
	fs->height = ov8856_sunny_framesizes[frmsize_index].height;

	return 0;
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_init_reg;
 * Description : download initial seq for sensor init;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_init_reg(void)
{
	int size = 0;

	print_info("Enter Function:%s  , initsize=%d", __func__, sizeof(ov8856_sunny_init_regs));

	if (0 != k3_ispio_init_csi(ov8856_sunny_sensor.mipi_index,
		 ov8856_sunny_sensor.mipi_lane_count, ov8856_sunny_sensor.lane_clk)) {
    	return -EFAULT;
	}
	ov8856_sunny_write_reg(0x0103, 0x01, 0x00);//reset all registers to their default value
	mdelay(5);
	size = ARRAY_SIZE(ov8856_sunny_init_regs);
	if (0 != ov8856_sunny_write_seq(ov8856_sunny_init_regs, size, 0x00)) {
		print_error("fail to init ov8856 sensor");
		return -EFAULT;
	}

#ifdef OV8856_SUNNY_OTP_FEATURE
	if(OV8856_SUNNY_OTP_VALID == ov8856_sunny_otp_flag) {
		ov8856_sunny_otp_update_awb();
		ov8856_sunny_otp_update_lsc();
	}
#endif

	return 0;
}

static int ov8856_sunny_get_sensor_aperture(void)
{
	return OV8856_SUNNY_APERTURE_FACTOR;
}

static int ov8856_sunny_set_hflip(int flip)
{
	print_debug("enter %s flip=%d", __func__, flip);
	ov8856_sunny_sensor.hflip = flip;
	return 0;
}

static int ov8856_sunny_set_vflip(int flip)
{
	print_debug("enter %s flip=%d", __func__, flip);
	ov8856_sunny_sensor.vflip = flip;
	return 0;
}

static int ov8856_sunny_get_hflip(void)
{
	print_debug("enter %s flip=%d", __func__, ov8856_sunny_sensor.hflip);
	return ov8856_sunny_sensor.hflip;
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_dump_reg_debug;
 * Description : dump standby, frame count, cap relate reg for debug
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void ov8856_sunny_dump_reg_debug(void)
{
     u16 reg = 0;
     u8 val = 0;

     reg=0x0100;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);

     reg=0x4868;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x4869;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);

     reg=0x3035;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x3036;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x3708;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x3709;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x370c;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x3808;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x3809;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x380a;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x380b;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x380c;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x380d;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x380e;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x380f;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x3811;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x3813;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x3814;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x3815;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
     reg=0x4837;ov8856_sunny_read_reg(reg,&val);print_info("0x%0x=0x%0x", reg, val);
}

static int ov8856_sunny_get_vflip(void)
{
	print_debug("enter %s flip=%d", __func__, ov8856_sunny_sensor.vflip);
	return ov8856_sunny_sensor.vflip;
}

static int ov8856_sunny_update_flip(u16 width, u16 height)
{
	u8 new_flip = ((ov8856_sunny_sensor.vflip << 1) | ov8856_sunny_sensor.hflip);
	print_info("Enter %s", __func__);
	k3_ispio_update_flip((ov8856_sunny_sensor.old_flip ^ new_flip) & 0x03, width, height, PIXEL_ORDER_NO_CHANGED);
	ov8856_sunny_write_reg(OV8856_SUNNY_FLIP_REG, ov8856_sunny_sensor.vflip ? 0x06 : 0x00, ~0x06);
	ov8856_sunny_write_reg(OV8856_SUNNY_MIRROR_REG, ov8856_sunny_sensor.hflip ? 0x00 : 0x06, ~0x06);
	ov8856_sunny_sensor.old_flip = new_flip;
	return 0;
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_framesize_switch;
 * Description : switch frame size, used by preview and capture
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_framesize_switch(camera_state state)
{
	u8 next_frmsize_index;

	if (state == STATE_PREVIEW)
		next_frmsize_index = ov8856_sunny_sensor.preview_frmsize_index;
	else
		next_frmsize_index = ov8856_sunny_sensor.capture_frmsize_index;

	print_info("Enter Function:%s frm index=%d", __func__, next_frmsize_index);

	if (next_frmsize_index >= ARRAY_SIZE( ov8856_sunny_framesizes )){
		print_error("Unsupport sensor setting index: %d",next_frmsize_index);
		return -ETIME;
	}

	if (0 != ov8856_sunny_write_seq( ov8856_sunny_sensor.frmsize_list[next_frmsize_index].sensor_setting.setting
		, ov8856_sunny_sensor.frmsize_list[next_frmsize_index].sensor_setting.seq_size, 0x00)) {
		print_error("fail to init ov5648 sensor");
		return -ETIME;
	}

	if(NULL != ov8856_sunny_sensor.stream_on_setting)
	{
		if (0 != ov8856_sunny_write_seq(ov8856_sunny_sensor.stream_on_setting, ov8856_sunny_sensor.stream_on_setting_size, 0x00)) {
			print_error("%s fail to stream on ov8856 sensor", __func__);
			return -ETIME;
		}		
	}

	#if 0
	msleep(3);
	/* use auto fps level at coolboot */
	vts = ov8856_sunny_sensor.frmsize_list[next_frmsize_index].vts *
		ov8856_sunny_sensor.frmsize_list[next_frmsize_index].fps / ov8856_sunny_sensor.fps;
	ov8856_sunny_set_vts(vts);
	ov8856_sunny_update_flip(ov8856_sunny_framesizes[next_frmsize_index].width,
		ov8856_sunny_framesizes[next_frmsize_index].height);
	#endif
    return 0;
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_start_preview;
 * Description : download preview seq for sensor preview;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_stream_on(camera_state state)
{
	int  ret = 0;

	print_debug("Enter Function:%s  , preview frmsize index=%d",
		    __func__, ov8856_sunny_sensor.preview_frmsize_index);

	ov8856_sunny_config_dphy_clk(state);

	ret = ov8856_sunny_framesize_switch(state);
	if (ret != 0)
	{
	    print_warn("%s,ov8856_sunny_framesize_switch fail.ret=%d.",__func__,ret);
	    return ret;
	}

	return 0;
}

/*  **************************************************************************
* FunctionName: ov8856_sunny_check_sensor;
* Description : NA;
* Input       : NA;
* Output      : NA;
* ReturnValue : NA;
* Other       : NA;
***************************************************************************/
static int ov8856_sunny_check_sensor(void)
{
	u8 idl = 0;
	u8 idm =0;
	u8 idh = 0;
	u32 id = 0;
	int retry = 0;

    for(retry = 0; retry < OV8856_SUNNY_I2C_RETRY_TIMES; retry++) {
		ov8856_sunny_read_reg(OV8856_CHIP_ID_REG_H, &idh);
		ov8856_sunny_read_reg(OV8856_CHIP_ID_REG_M, &idm);
		ov8856_sunny_read_reg(OV8856_CHIP_ID_REG_L, &idl);

		id = ((idh << 16) | (idm << 8) | idl);
		print_info("ov8856 product id:0x%x ,retrytimes:%d", id, retry);
		if(OV8856_SUNNY_CHIP_ID == id) {
            break;
        }
        udelay(100);
    }
	if (OV8856_SUNNY_CHIP_ID != id) {
		print_error("Invalid product id ,Could not load sensor ov8856");
		return -1;
	}

#ifdef OV8856_SUNNY_OTP_FEATURE
	if(OV8856_SUNNY_OTP_INVALID == ov8856_sunny_otp_flag) {
		ov8856_sunny_write_reg(0x0103, 0x01, 0x00);//reset
		ov8856_sunny_write_reg(0x3D85, 0x17, 0x00);//set otp start addr
		ov8856_sunny_write_reg(0x0100, 0x01, 0x00);//stream on before read otp

		ov8856_sunny_otp_read();

		ov8856_sunny_write_reg(0x0100, 0x00, 0x00);//stream off no matter success or fail
	}
#endif
	return 0;
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_init_isp_reg;
 * Description : load initial seq for sensor init;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_init_isp_reg(void)
{
	int size = 0;

	camera_sensor *sensor = &ov8856_sunny_sensor;

	size = CAMERA_MAX_SETTING_SIZE;

	ov8856_sunny_write_isp_seq(sensor->effect->isp_settings, size);

	return 0;
}

/*  **************************************************************************
* FunctionName: ov8856_sunny_check_sensor;
* Description : NA;
* Input       : NA;
* Output      : NA;
* ReturnValue : NA;
* Other       : NA;
***************************************************************************/
int ov8856_sunny_power(camera_power_state power)
{
	if (power == POWER_ON) {
		k3_ispldo_power_sensor(power, S_CAMERA_IO_VDD);//DOVDD
		k3_socgpio_power_sensor(1, S_CAMERA_ANALOG_VDD);
		k3_ispldo_power_sensor(power, S_CAMERA_ANALOG_VDD);//for af analog
		k3_ispldo_power_sensor(power, M_CAMERA_CORE_VDD);//power on main and sub sensor's DVDD
		udelay(100);
		k3_ispio_ioconfig(&ov8856_sunny_sensor, power);
		k3_ispgpio_power_sensor(&ov8856_sunny_sensor, power);
		k3_ispgpio_reset_sensor(ov8856_sunny_sensor.sensor_index, power, ov8856_sunny_sensor.power_conf.reset_valid);
		msleep(8);
		k3_isp_io_enable_mclk(MCLK_ENABLE, ov8856_sunny_sensor.sensor_index);
		msleep(5);
	} else {
		k3_ispio_deinit_csi(ov8856_sunny_sensor.mipi_index);
		k3_isp_io_enable_mclk(MCLK_DISABLE, ov8856_sunny_sensor.sensor_index);
		udelay(100);
		k3_ispio_ioconfig(&ov8856_sunny_sensor, power);
		k3_ispgpio_power_sensor(&ov8856_sunny_sensor, power);
		k3_ispgpio_reset_sensor(ov8856_sunny_sensor.sensor_index, power, ov8856_sunny_sensor.power_conf.reset_valid);

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
 * FunctionName: ov8856_sunny_shut_down;
 * Description : ov8856 shut down function;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void ov8856_sunny_shut_down(void)
{
	print_debug("enter %s", __func__);
	k3_ispgpio_power_sensor(&ov8856_sunny_sensor, POWER_OFF);
}

/*
 * Here gain is in unit 1/16 of sensor gain,
 * y36721 todo, temporarily if sensor gain=0x10, ISO is 100
 * in fact we need calibrate an ISO-ET-gain table.
 */
u32 ov8856_sunny_gain_to_iso(int gain)
{
	return (gain * 100) / 0x10;
}

u32 ov8856_sunny_iso_to_gain(int iso)
{
	return (iso * 0x10) / 100;
}

void ov8856_sunny_set_gain(u32 gain)
{  
	u32 again = 0; 
	print_info("%s set gain=%d ", __func__, gain);

	if (gain < GAIN_BASE_1X)
	{
		gain = GAIN_BASE_1X;
	}
	
	if (gain > 248)//if gain beyond max again,we set gain to max again  15.5*16
	{
		gain = 248;
	}
	again = gain * OV8856_SUNNY_AGAIN_BASE_1X / GAIN_BASE_1X; 
	//real gain
	ov8856_sunny_write_reg(OV8856_SUNNY_GAIN_REG_H, (again >> 8) & 0x1f, 0x00);//bit[4]~bit[0]
	ov8856_sunny_write_reg(OV8856_SUNNY_GAIN_REG_L, again & 0xff, 0x00);//bit[7]~bit[0] 
}
u32 ov8856_sunny_get_gain(void)
{
	u32 gain = 0;
	u8 gain_h = 0;
	u8 gain_l = 0;
	
	ov8856_sunny_read_reg(OV8856_SUNNY_GAIN_REG_H, &gain_h);
	ov8856_sunny_read_reg(OV8856_SUNNY_GAIN_REG_L, &gain_l);

	gain = ((gain_h<<8)&0x1f00) | gain_l;

	return gain;
}
void ov8856_sunny_set_exposure(u32 exposure)
{
	print_info("%s set exposure=%d ", __func__, exposure);
	if (exposure < 4)//must be at least 4 Tline
	{
		exposure = 4;
	}
	ov8856_sunny_write_reg(OV8856_SUNNY_EXPOSURE_REG_0, (exposure >> 16) & 0x0f, 0x00);
	ov8856_sunny_write_reg(OV8856_SUNNY_EXPOSURE_REG_1, (exposure >> 8) & 0xff, 0x00);
	ov8856_sunny_write_reg(OV8856_SUNNY_EXPOSURE_REG_2, exposure & 0xf0, 0x00);	/*fraction part not used */
}
#if 0
static void ov8856_sunny_set_exposure_gain(u32 exposure, u32 gain)
{
	print_info("%s exposure = %d gain = %d ", __func__, exposure, gain);
	ov8856_sunny_write_reg(OV8856_GROUP_HOLD_FUNCTION_REG, 0x00, 0x00);//group hold start
	//set exposure
	ov8856_sunny_set_exposure(exposure);
	//set gain
	ov8856_sunny_set_gain(gain);
 
	ov8856_sunny_write_reg(OV8856_GROUP_HOLD_FUNCTION_REG, 0x10, 0x00);//group hold end
	ov8856_sunny_write_reg(OV8856_GROUP_SWITCH_CTRL_REG, 0x00, 0x00);//manual launch on
	ov8856_sunny_write_reg(OV8856_GROUP_HOLD_FUNCTION_REG, 0xA0, 0x00);
}
#endif
u32 ov8856_sunny_get_vts_reg_addr(void)
{
	return OV8856_SUNNY_VTS_REG_H;
}

void ov8856_sunny_set_vts(u16 vts)
{
	ov8856_sunny_write_reg(OV8856_SUNNY_VTS_REG_H, (vts >> 8) & 0xff, 0x00);
	ov8856_sunny_write_reg(OV8856_SUNNY_VTS_REG_L, vts & 0xff, 0x00);
}

static u32 ov8856_sunny_get_override_param(camera_override_type_t type)
{
	u32 ret_val = sensor_override_params[type];

	switch (type) {
	case OVERRIDE_ISO_HIGH:
		ret_val = OV8856_SUNNY_MAX_ISO;
		break;

	case OVERRIDE_ISO_LOW:
		ret_val = OV8856_SUNNY_MIN_ISO;
		break;

	/* increase frame rate gain threshold */
	case OVERRIDE_AUTOFPS_GAIN_LOW2MID:
		ret_val = OV8856_SUNNY_AUTOFPS_GAIN_LOW2MID;
		break;
	case OVERRIDE_AUTOFPS_GAIN_MID2HIGH:
		ret_val = OV8856_SUNNY_AUTOFPS_GAIN_MID2HIGH;
		break;

	/* reduce frame rate gain threshold */
	case OVERRIDE_AUTOFPS_GAIN_MID2LOW:
		ret_val = OV8856_SUNNY_AUTOFPS_GAIN_MID2LOW;
		break;
	case OVERRIDE_AUTOFPS_GAIN_HIGH2MID:
		ret_val = OV8856_SUNNY_AUTOFPS_GAIN_HIGH2MID;
		break;

	case OVERRIDE_FPS_MAX:
		ret_val = OV8856_SUNNY_MAX_FRAMERATE;
		break;

	case OVERRIDE_FPS_MIN:
		ret_val = OV8856_SUNNY_MIN_FRAMERATE;
		break;

    case OVERRIDE_FPS_MID:
        ret_val = OV8856_SUNNY_MIDDLE_FRAMERATE;
        break;

	case OVERRIDE_CAP_FPS_MIN:
		ret_val = OV8856_SUNNY_MIN_CAP_FRAMERATE;
		break;

	case OVERRIDE_FLASH_TRIGGER_GAIN:
		ret_val = OV8856_SUNNY_FLASH_TRIGGER_GAIN;
		break;

	case OVERRIDE_SHARPNESS_PREVIEW:
		ret_val = OV8856_SUNNY_SHARPNESS_PREVIEW;
		break;

	case OVERRIDE_SHARPNESS_CAPTURE:
		ret_val = OV8856_SUNNY_SHARPNESS_CAPTURE;
		break;

	default:
		print_error("%s:not override or invalid type %d, use default",__func__, type);
		break;
	}

	return ret_val;
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_reset;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_reset(camera_power_state power_state)
{
	print_debug("%s", __func__);
	ov8856_sunny_sensor.old_flip = 0;
	return 0;
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_init;
 * Description : ov5648 init function;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : Error code indicating success or failure;
 * Other       : NA;
 **************************************************************************
*/
static int ov8856_sunny_init(void)
{
	static bool ov8856_sunny_check = false;
	int ret = 0;
	print_info("%s", __func__);

	if (false == ov8856_sunny_check) {
        if (video_check_suspensory_camera("ov8856sunny_sensor") != 1) {
			print_info("%s: product not have this sensor", __func__);
            return -ENODEV;
        }
		print_info("%s:ov8856_sunny_check ok",__func__);
        ov8856_sunny_check = true;
        ret = camera_get_matching_sensor_config(ov8856_sunny_config_settings, ARRAY_SIZE(ov8856_sunny_config_settings),&ov8856_sunny_config);
        if( ret < 0 ){
            print_error("%s: fail to match sensor config.", __func__);
           return -ENODEV;
        } else {
            print_info("%s: choose the %s's setting.",__func__,ov8856_sunny_config->product);
        }

	}

    // S_CAMERA_CORE_VDD and S_CAMERA_IO_VDD use same vdd source, so only init once
	k3_ispio_power_init(S_CAMERA_ANALOG_VDD, LDO_VOLTAGE_28V, LDO_VOLTAGE_28V);	/*main camera af analog 2.8V*/
	k3_ispio_power_init(S_CAMERA_IO_VDD, LDO_VOLTAGE_18V, LDO_VOLTAGE_18V);		/*IO 1.8V - sec camera*/
	k3_ispio_power_init(M_CAMERA_CORE_VDD, LDO_VOLTAGE_12V, LDO_VOLTAGE_12V);	/*core 1.2V - pri camera*/

	return 0;
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_exit;
 * Description : ov5648 exit function;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void ov8856_sunny_exit(void)
{
	print_debug("enter %s", __func__);

	k3_ispio_power_deinit();

	if (ov8856_sunny_sensor.owner) {
		module_put(ov8856_sunny_sensor.owner);
	}
	print_debug("exit %s", __func__);
}

/*
 **************************************************************************
 * FunctionName: sonyimx134_config_dphy_clk;
 * Description : set MIPI clock to dphy;
 * Input       : camera state
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void ov8856_sunny_config_dphy_clk(camera_state state)
{
	u8 lane_clk;

	if (state == STATE_PREVIEW) {
		lane_clk =ov8856_sunny_sensor.frmsize_list[ov8856_sunny_sensor.preview_frmsize_index].lane_clk;
	} else {
		lane_clk =ov8856_sunny_sensor.frmsize_list[ov8856_sunny_sensor.capture_frmsize_index].lane_clk;
	}

	print_info("%s lane_clk = 0x%x state = %d",__func__, lane_clk, state);
	k3_ispio_config_lane_clk(ov8856_sunny_sensor.mipi_index, ov8856_sunny_sensor.mipi_lane_count, lane_clk);
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_reset_dphy;
 * Description : reset dphy;
 * Input       : index:sensor index; mipi_lane_count: mipi land count;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void ov8856_sunny_reset_dphy(void)
{
       k3_ispio_reset_phy(ov8856_sunny_sensor.mipi_index, ov8856_sunny_sensor.mipi_lane_count);
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_check_otp;
 * Description : check otp's status;
 * Input       : NA;
 * Output      : current otp status;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void ov8856_sunny_check_otp(sensor_otp_status * status)
{
	if (NULL == status)
	{
		print_error("%s, NULL data pointer!", __func__);
		return;
	}
	if (OV8856_SUNNY_OTP_VALID ==ov8856_sunny_otp_flag)
	{
		*status = OTP_VALID;
	}
	else
	{
		*status = OTP_INVALID;
	}
	print_info("otp status:%d", *status);
}
static int ov8856_sunny_get_equivalent_focus(void)
{
	print_debug("enter %s", __func__);
	return OV8856_SUNNY_EQUIVALENT_FOCUS;
}
/*
 **************************************************************************
 * FunctionName: ov8856_sunny_set_default;
 * Description : init ov8856_sunny_sensor;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
*/
static void ov8856_sunny_set_default(void)
{
	ov8856_sunny_sensor.init = ov8856_sunny_init;
	ov8856_sunny_sensor.exit = ov8856_sunny_exit;
	ov8856_sunny_sensor.reset = ov8856_sunny_reset;
	ov8856_sunny_sensor.shut_down = ov8856_sunny_shut_down;
	ov8856_sunny_sensor.check_sensor = ov8856_sunny_check_sensor;
	ov8856_sunny_sensor.power = ov8856_sunny_power;
	ov8856_sunny_sensor.init_reg = ov8856_sunny_init_reg;
	ov8856_sunny_sensor.stream_on = ov8856_sunny_stream_on;

	ov8856_sunny_sensor.get_format = ov8856_sunny_get_format;
	ov8856_sunny_sensor.set_flash = NULL;
	ov8856_sunny_sensor.get_flash = NULL;
	ov8856_sunny_sensor.set_scene = NULL;
	ov8856_sunny_sensor.get_scene = NULL;

	ov8856_sunny_sensor.enum_framesizes = ov8856_sunny_enum_framesizes;
	ov8856_sunny_sensor.try_framesizes = ov8856_sunny_try_framesizes;
	ov8856_sunny_sensor.set_framesizes = ov8856_sunny_set_framesizes;
	ov8856_sunny_sensor.get_framesizes = ov8856_sunny_get_framesizes;

	ov8856_sunny_sensor.enum_frame_intervals = ov8856_sunny_enum_frame_intervals;
	ov8856_sunny_sensor.try_frame_intervals = NULL;
	ov8856_sunny_sensor.set_frame_intervals = NULL;
	ov8856_sunny_sensor.get_frame_intervals = NULL;
	ov8856_sunny_sensor.get_capability = ov8856_sunny_get_capability;

	//ov8856_sunny_sensor.sensor_hw_3a.support_awb_otp = ov8856_sunny_support_awb_otp;

	strncpy(ov8856_sunny_sensor.info.name, "ov8856_sunny", sizeof(ov8856_sunny_sensor.info.name));
	ov8856_sunny_sensor.interface_type = MIPI2;
	ov8856_sunny_sensor.mipi_lane_count = CSI_LINES_2;
	ov8856_sunny_sensor.mipi_index = CSI_INDEX_1;
	ov8856_sunny_sensor.sensor_index = CAMERA_SENSOR_SECONDARY;
	ov8856_sunny_sensor.skip_frames = 2;

	ov8856_sunny_sensor.capture_skip_frames = CAPTURE_SKIP_1;


	ov8856_sunny_sensor.power_conf.pd_valid = LOW_VALID;
	ov8856_sunny_sensor.power_conf.reset_valid = LOW_VALID;
	ov8856_sunny_sensor.i2c_config.index = I2C_SECONDARY;
	ov8856_sunny_sensor.i2c_config.speed = I2C_SPEED_400;
	ov8856_sunny_sensor.i2c_config.addr = OV8856_SUNNY_SLAVE_ADDRESS;
	ov8856_sunny_sensor.i2c_config.addr_bits = I2C_16BIT;
	ov8856_sunny_sensor.i2c_config.val_bits = I2C_8BIT;

	ov8856_sunny_sensor.preview_frmsize_index = 0;
	ov8856_sunny_sensor.capture_frmsize_index = 0;
	ov8856_sunny_sensor.frmsize_list = ov8856_sunny_framesizes;
	ov8856_sunny_sensor.fmt[STATE_PREVIEW] = V4L2_PIX_FMT_RAW10;
	ov8856_sunny_sensor.fmt[STATE_CAPTURE] = V4L2_PIX_FMT_RAW10;
#ifdef OV8856_SUNNY_AP_WRITEAE_MODE
	ov8856_sunny_sensor.aec_addr[0] = 0;
	ov8856_sunny_sensor.aec_addr[1] = 0;
	ov8856_sunny_sensor.aec_addr[2] = 0;
	ov8856_sunny_sensor.agc_addr[0] = 0;
	ov8856_sunny_sensor.agc_addr[1] = 0;
	ov8856_sunny_sensor.ap_writeAE_delay = 0;
#else
	ov8856_sunny_sensor.aec_addr[0] = 0x3500;
	ov8856_sunny_sensor.aec_addr[1] = 0x3501;
	ov8856_sunny_sensor.aec_addr[2] = 0x3502;
	ov8856_sunny_sensor.agc_addr[0] = 0x350a;
	ov8856_sunny_sensor.agc_addr[1] = 0x350b;
#endif
	ov8856_sunny_sensor.sensor_type = SENSOR_OV;
	ov8856_sunny_sensor.get_vts_reg_addr = ov8856_sunny_get_vts_reg_addr;
	ov8856_sunny_sensor.set_vts = ov8856_sunny_set_vts;
	ov8856_sunny_sensor.set_gain = ov8856_sunny_set_gain;
	ov8856_sunny_sensor.get_gain = ov8856_sunny_get_gain;
	ov8856_sunny_sensor.set_exposure = ov8856_sunny_set_exposure;
	ov8856_sunny_sensor.set_exposure_gain = NULL;
    ov8856_sunny_sensor.sensor_dump_reg = NULL;//ov8856_sunny_dump_reg_debug;

	ov8856_sunny_sensor.get_override_param = ov8856_sunny_get_override_param;

	ov8856_sunny_sensor.sensor_gain_to_iso = ov8856_sunny_gain_to_iso;
	ov8856_sunny_sensor.sensor_iso_to_gain = ov8856_sunny_iso_to_gain;

	ov8856_sunny_sensor.get_sensor_aperture = ov8856_sunny_get_sensor_aperture;
	ov8856_sunny_sensor.get_equivalent_focus = ov8856_sunny_get_equivalent_focus;
	ov8856_sunny_sensor.isp_location = CAMERA_USE_K3ISP;
	ov8856_sunny_sensor.sensor_tune_ops = NULL;

	ov8856_sunny_sensor.af_enable = 0;

	ov8856_sunny_sensor.sensor_gain_to_iso = ov8856_sunny_gain_to_iso;
	ov8856_sunny_sensor.sensor_iso_to_gain = ov8856_sunny_iso_to_gain;
	ov8856_sunny_sensor.image_setting.lensc_param = ov8856_sunny_lensc_param;
	ov8856_sunny_sensor.image_setting.ccm_param = ov8856_sunny_ccm_param;
	ov8856_sunny_sensor.image_setting.awb_param = ov8856_sunny_awb_param;

	/*default is preview size */
	ov8856_sunny_sensor.fps_max = 30;
	ov8856_sunny_sensor.fps_min = 16;
	ov8856_sunny_sensor.fps = 25;

	/*defalt flip*/
	ov8856_sunny_sensor.vflip			= 0;
	ov8856_sunny_sensor.hflip			= 0;
	ov8856_sunny_sensor.old_flip		= 0;
	ov8856_sunny_sensor.set_vflip		= ov8856_sunny_set_vflip;
	ov8856_sunny_sensor.set_hflip		= ov8856_sunny_set_hflip;
	ov8856_sunny_sensor.get_vflip		= ov8856_sunny_get_vflip;
	ov8856_sunny_sensor.get_hflip		= ov8856_sunny_get_hflip;
	ov8856_sunny_sensor.update_flip		= NULL;//ov8856_sunny_update_flip;
	ov8856_sunny_sensor.sensor_rgb_type = SENSOR_BGGR;

	ov8856_sunny_sensor.owner = THIS_MODULE;

	ov8856_sunny_sensor.info.facing = CAMERA_FACING_FRONT;
	ov8856_sunny_sensor.info.orientation = 270;
	ov8856_sunny_sensor.info.focal_length = 238; /* 2.38mm*/
	ov8856_sunny_sensor.info.h_view_angle = 75;
	ov8856_sunny_sensor.info.v_view_angle = 60;

	ov8856_sunny_sensor.lane_clk = CLK_750M;
	ov8856_sunny_sensor.effect = ov8856_sunny_config_settings[0].effect;
	ov8856_sunny_sensor.support_summary = false;
	ov8856_sunny_sensor.init_isp_reg = ov8856_sunny_init_isp_reg;
	ov8856_sunny_sensor.isp_idi_skip = false;

	ov8856_sunny_sensor.stream_off_setting = ov8856_sunny_stream_off_regs;
	ov8856_sunny_sensor.stream_off_setting_size = ARRAY_SIZE(ov8856_sunny_stream_off_regs);
//	ov8856_sunny_sensor.stream_on_setting = ov8856_sunny_stream_on_regs;
//	ov8856_sunny_sensor.stream_on_setting_size = ARRAY_SIZE(ov8856_sunny_stream_on_regs);

	/*if there have different data rate of sensor resolution we need this config_dphy_clk
	   otherwise if all resolution is same rate config_dphy_clk must to be null*/
	ov8856_sunny_sensor.config_dphy_clk = ov8856_sunny_config_dphy_clk;
	ov8856_sunny_sensor.reset_dphy = ov8856_sunny_reset_dphy;
	ov8856_sunny_sensor.check_otp_status = ov8856_sunny_check_otp;

}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_module_init;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
 */
static __init int ov8856_sunny_module_init(void)
{
	ov8856_sunny_set_default();
	return register_camera_sensor(ov8856_sunny_sensor.sensor_index, &ov8856_sunny_sensor);
}

/*
 **************************************************************************
 * FunctionName: ov8856_sunny_module_exit;
 * Description : NA;
 * Input       : NA;
 * Output      : NA;
 * ReturnValue : NA;
 * Other       : NA;
 **************************************************************************
 */
static void __exit ov8856_sunny_module_exit(void)
{
	unregister_camera_sensor(ov8856_sunny_sensor.sensor_index, &ov8856_sunny_sensor);
}

MODULE_AUTHOR("Hisilicon");
module_init(ov8856_sunny_module_init);
module_exit(ov8856_sunny_module_exit);
MODULE_LICENSE("GPL");

/********************************** END **********************************************/
/*END PN: DTS2015121011596, added by wx294303, 2015/12/10*/
/*END PN: DTS2015122802301, added by wx290899, 2015/12/28*/