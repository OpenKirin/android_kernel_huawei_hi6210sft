/* Copyright (c) 2011-2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */


#include "hisi_sensor.h"
#include "../cci/hisi_cci.h"
#include "sensor_common.h"

#define S5K4E1GA_GROUP_HOLD_REG			0x0104
#define S5K4E1GA_EXPOSURE_REG_H			0x0202
#define S5K4E1GA_EXPOSURE_REG_L			0x0203
#define S5K4E1GA_GAIN_REG_H				0x0204
#define S5K4E1GA_GAIN_REG_L				0x0205
#define S5K4E1GA_VTS_REG_H				0x0340
#define S5K4E1GA_VTS_REG_L				0x0341
#define S5K4E1GA_HTS_REG_H				0x0342
#define S5K4E1GA_HTS_REG_L				0x0343
#define S5K4E1GA_OTP_FEATURE

#ifdef S5K4E1GA_OTP_FEATURE
static int RG_Ratio_Typical = 0x30a;
static int BG_Ratio_Typical = 0x2e3;
#define S5K4E1GA_OTP_MSB  1
#define S5K4E1GA_OTP_LSB  2
static bool otp_read = false;
#endif
struct otp_struct
{
	uint16_t module_id;
	int rg_ratio;
	int bg_ratio;
	int r_gain;
	int g_gain;
	int b_gain;
};
static bool otp_valid = true;
static struct otp_struct otp_struct;
struct sensor_power_setting s5k4e1ga_power_setting[] = {
	{
		.seq_type = SENSOR_AVDD,
		.data = (void*)"main-sensor-avdd",
		.config_val = LDO_VOLTAGE_2P8V,
		.sensor_index = SENSOR_INDEX_INVALID,
		.delay = 1,
	},
	{
		.seq_type = SENSOR_IOVDD,
		.data = (void*)"common-iovdd",
		.config_val = LDO_VOLTAGE_1P8V,
		.sensor_index = SENSOR_INDEX_INVALID,
		.delay = 1,
	},
	{
		.seq_type = SENSOR_DVDD,
		.config_val = LDO_VOLTAGE_1P05V,
		.sensor_index = SENSOR_INDEX_INVALID,
		.delay = 1,
	},
	{
		.seq_type = SENSOR_AVDD2,
		.data = (void*)"slave-sensor-avdd",
		.config_val = LDO_VOLTAGE_2P8V,
		.sensor_index = SENSOR_INDEX_INVALID,
		.delay = 1,
	},
	{
		.seq_type = SENSOR_MCLK,
		.sensor_index = SENSOR_INDEX_INVALID,
		.delay = 1,
	},
	{
		.seq_type = SENSOR_PWDN,
		.config_val = SENSOR_GPIO_LOW,
		.sensor_index = SENSOR_INDEX_INVALID,
		.delay = 1,
	},
	{
		.seq_type = SENSOR_RST,
		.config_val = SENSOR_GPIO_LOW,
		.sensor_index = SENSOR_INDEX_INVALID,
		.delay = 1,
	},
	{
		.seq_type = SENSOR_I2C,
		.sensor_index = SENSOR_INDEX_INVALID,
		.delay = 1,
	},
	{
		.seq_type = SENSOR_SUSPEND,
		.config_val = SENSOR_GPIO_HIGH,
		.sensor_index = SENSOR_INDEX_INVALID,
	},
};

int s5k4e1ga_write_reg(struct hisi_sensor_ctrl_t *s_ctrl, u16 reg, u8 val, u8 mask)
{
	i2c_t *i2c_info = &s_ctrl->sensor->sensor_info->i2c_config;
	return isp_write_sensor_byte(i2c_info, reg, val, mask, SCCB_BUS_MUTEX_WAIT);
}

int s5k4e1ga_read_reg(struct hisi_sensor_ctrl_t *s_ctrl, u16 reg, u8 *val)
{
	i2c_t *i2c_info = &s_ctrl->sensor->sensor_info->i2c_config;
	return isp_read_sensor_byte(i2c_info, reg, (u16*)val);
}

#ifdef S5K4E1GA_OTP_FEATURE

static u16 s5k4e1_read_layer(struct hisi_sensor_ctrl_t *s_ctrl, int layer, u16 addr, u16 MSBorLSB)
{
	u8 otpData = 0;
	/* select the layer */
	s5k4e1ga_write_reg(s_ctrl, 0x310C, layer,0x00);

	/*read the data form the layer and addr by byte*/
	s5k4e1ga_read_reg(s_ctrl, addr, &otpData);

	if(S5K4E1GA_OTP_LSB == MSBorLSB)
	{
		otpData = otpData & 0x000F;
	}
	else
	{
		otpData = (otpData & 0x00FF) >> 4;
	}

	return otpData;
}
static int s5k4e1_otp_check_awb(struct hisi_sensor_ctrl_t *s_ctrl, u16 *pAddr, u16 *pMSBorLSB)
{
	u8 otpData = 0;
	u16 otpAddr = 0;
	u8  otpDataLsb= 0;
	u8  otpDataMsb= 0;

	/* select the layer 18 to read the year */
	s5k4e1ga_write_reg(s_ctrl, 0x310C, 18,0x00);

	/* read 0x310D LSB */
	otpAddr = 0x310D;
	s5k4e1ga_read_reg(s_ctrl, otpAddr, &otpData);
	otpDataLsb = otpData & 0x000F;
	if(0 != otpDataLsb)
	{
		goto END_LSB;
	}

	/* read 0x310E MSB and LSB */
	otpAddr = 0x310E;
	s5k4e1ga_read_reg(s_ctrl, otpAddr, &otpData);
	otpDataMsb = (otpData & 0x00FF) >> 4;
	otpDataLsb = otpData & 0x000F;
	if(0 != otpDataMsb)
	{
		goto END_MSB;
	}
	if(0 != otpDataLsb)
	{
		goto END_LSB;
	}

	/* read 0x310F MSB and LSB */
	otpAddr = 0x310F;
	s5k4e1ga_read_reg(s_ctrl, otpAddr, &otpData);
	otpDataMsb = (otpData & 0x00FF) >> 4;
	otpDataLsb = otpData & 0x000F;
	if(0 != otpDataMsb)
	{
		goto END_MSB;
	}
	if(0 != otpDataLsb)
	{
		goto END_LSB;
	}

	goto END_FAILED;

END_LSB:
	*pAddr = otpAddr;
	*pMSBorLSB = S5K4E1GA_OTP_LSB;
	return otpDataLsb;

END_MSB:
	*pAddr = otpAddr;
	*pMSBorLSB = S5K4E1GA_OTP_MSB;
	return otpDataMsb;

END_FAILED:
	cam_info("%s: check otp failed\n",__func__);
	return 0;
}

static int s5k4e1ga_read_otp(struct hisi_sensor_ctrl_t *s_ctrl,struct otp_struct * otp_ptr)
{
	int rc = -1;
	int i=0;
	int start_data=28;
	int moduleid_layer = 26;
	u16 otpAddr = 0;
	u16 MSBorLSB = 0;
	/*ready for reading different layer*/
	s5k4e1ga_write_reg(s_ctrl,0x30F9, 0x0E,0x00);
	s5k4e1ga_write_reg(s_ctrl,0x30FA, 0x0A,0x00);
	s5k4e1ga_write_reg(s_ctrl,0x30FB, 0x71,0x00);
	s5k4e1ga_write_reg(s_ctrl,0x30FB, 0x70,0x00);
	msleep(5);

	/*check awb */
	if(0 == s5k4e1_otp_check_awb(s_ctrl, &otpAddr, &MSBorLSB))
	{
		return -1;
	}

	/*read module id*/
	otp_ptr->module_id = s5k4e1_read_layer(s_ctrl,moduleid_layer, otpAddr, MSBorLSB);

	/*read r/g*/
	for(i=0;i<4;i++)
	{
		otp_ptr->rg_ratio += s5k4e1_read_layer(s_ctrl,start_data, otpAddr, MSBorLSB)*(1<<(4*(3-i)));
		start_data++;
	}

	/*read b/g*/
	for(i=0;i<4;i++)
	{
		otp_ptr->bg_ratio += s5k4e1_read_layer(s_ctrl,start_data, otpAddr, MSBorLSB)*(1<<(4*(3-i)));
		start_data++;
	}

	cam_notice("%s:module_id=0x%x,rg=0x%x,bg=0x%x\n",__func__,otp_ptr->module_id,otp_ptr->rg_ratio,otp_ptr->bg_ratio);
	rc = (0 == otp_ptr->rg_ratio || 0 == otp_ptr->module_id || 0 == otp_ptr->bg_ratio)?-1:0;
	s_ctrl->sensor->sensor_otp.awb_otp.awb_otp_succeed = 1;
	return rc;
}

static int s5k4e1ga_update_otp(struct hisi_sensor_ctrl_t *s_ctrl,struct otp_struct * otp_ptr)
{
	int R_gain = 0, G_gain = 0, B_gain = 0, G_gain_R = 0, G_gain_B = 0;
	int rg = 0,bg = 0;

	// R/G and B/G of current camera module is read out from sensor OTP
	// check first OTP with valid data
	if(-1 == s5k4e1ga_read_otp(s_ctrl,otp_ptr))
	{
		otp_valid = false;
		return -1;
	}
	otp_read = true;
	rg = otp_ptr->rg_ratio;
	bg = otp_ptr->bg_ratio;

	//calculate G gain
	//0x100 = 1x gain
	if(bg < BG_Ratio_Typical)
	{
		if (rg< RG_Ratio_Typical)
		{
			// current_otp.bg_ratio < BG_Ratio_typical &&
			// current_otp.rg_ratio < RG_Ratio_typical
			G_gain = 0x100;
			B_gain = 0x100 * BG_Ratio_Typical / bg;
			R_gain = 0x100 * RG_Ratio_Typical / rg;
		}
		else
		{
			// current_otp.bg_ratio < BG_Ratio_typical &&
			// current_otp.rg_ratio >= RG_Ratio_typical
			R_gain = 0x100;
			G_gain = 0x100 * rg / RG_Ratio_Typical;
			B_gain = G_gain * BG_Ratio_Typical /bg;
		}
	}
	else
	{
		if (rg < RG_Ratio_Typical)
		{
			// current_otp.bg_ratio >= BG_Ratio_typical &&
			// current_otp.rg_ratio < RG_Ratio_typical
			B_gain = 0x100;
			G_gain = 0x100 * bg / BG_Ratio_Typical;
			R_gain = G_gain * RG_Ratio_Typical / rg;
		}
		else
		{
			// current_otp.bg_ratio >= BG_Ratio_typical &&
			// current_otp.rg_ratio >= RG_Ratio_typical
			G_gain_B = 0x100 * bg / BG_Ratio_Typical;
			G_gain_R = 0x100 * rg / RG_Ratio_Typical;

			if(G_gain_B > G_gain_R )
			{
				B_gain = 0x100;
				G_gain = G_gain_B;
				R_gain = G_gain * RG_Ratio_Typical /rg;
			}
			else
			{
				R_gain = 0x100;
				G_gain = G_gain_R;
				B_gain = G_gain * BG_Ratio_Typical / bg;
			}
		}
	}

	otp_ptr->r_gain = R_gain;
	otp_ptr->g_gain = G_gain;
	otp_ptr->b_gain = B_gain;

	return 0;

}

#endif

static int update_awb_gain(struct hisi_sensor_ctrl_t *s_ctrl,int R_gain, int G_gain, int B_gain)
{
	if (R_gain>0x100)
	{
	        s5k4e1ga_write_reg(s_ctrl, 0x0210, R_gain>>8,0x00);
	        s5k4e1ga_write_reg(s_ctrl, 0x0211, R_gain & 0x00ff,0x00);
	}

	if (G_gain>0x100)
	{
	        //digital_gain_greenR
	        s5k4e1ga_write_reg(s_ctrl, 0x020E, G_gain>>8,0x00);
	        s5k4e1ga_write_reg(s_ctrl, 0x020F, G_gain & 0x00ff,0x00);

	        //digital_gain_greenB
	        s5k4e1ga_write_reg(s_ctrl, 0x0214, G_gain>>8,0x00);
	        s5k4e1ga_write_reg(s_ctrl, 0x0215, G_gain & 0x00ff,0x00);

	}

	if (B_gain>0x100)
	{
	        s5k4e1ga_write_reg(s_ctrl, 0x0212, B_gain>>8,0x00);
	        s5k4e1ga_write_reg(s_ctrl, 0x0213, B_gain & 0x00ff,0x00);
	}

	cam_notice("%s: R_gain=%d, G_gain=%d, B_gain=%d \n",__func__,R_gain,G_gain,B_gain);

	return 0;
}

int  s5k4e1_write_otp (struct hisi_sensor_ctrl_t *s_ctrl)
{
	if(true == otp_valid)
	{
		update_awb_gain(s_ctrl,otp_struct.r_gain,otp_struct.g_gain,otp_struct.b_gain);
	}
	return 0;
}

int s5k4e1ga_match_id(struct hisi_sensor_ctrl_t *s_ctrl)
{
	int ret = 0;
	u16 id_h = 0;
	u16 id_l = 0;
	u16 sensor_id = 0;

	cam_info( "%s, sensor_chipid:0x%x\n",
		__func__, s_ctrl->sensor->sensor_info->sensor_chipid);

	ret = hisi_sensor_power_up(s_ctrl);
	if(ret) {
		cam_err("sensor[%s] power up failed.", s_ctrl->sensor->sensor_info->name);
		ret = -1;
		goto out;
	}

	/* check sensor id */
	isp_read_sensor_byte(&s_ctrl->sensor->sensor_info->i2c_config, 0x0000, &id_h);

	isp_read_sensor_byte(&s_ctrl->sensor->sensor_info->i2c_config, 0x0001, &id_l);

	sensor_id = id_h << 8 | id_l;

	cam_notice( "%s sensor id:  0x%x", __func__, sensor_id);
	if (sensor_id != s_ctrl->sensor->sensor_info->sensor_chipid) {
		ret =  -1;
	}
	#ifdef S5K4E1GA_OTP_FEATURE
		memset(&otp_struct, 0, sizeof(struct otp_struct));
		s5k4e1ga_update_otp(s_ctrl,&otp_struct);
	#endif
out:
	hisi_sensor_power_down(s_ctrl);

	return ret;
}

int s5k4e1ga_ioctl(struct hisi_sensor_ctrl_t *s_ctrl, void *data)
{
	struct sensor_cfg_data *cdata = (struct sensor_cfg_data*)data;
	int   rc = 0;

	cam_debug("%s enter.\n", __func__);

	switch (cdata->cfgtype) {
	case CFG_SENSOR_SET_VTS:
		cam_info("%s set vts.\n", __func__);
		break;
	case CFG_SENSOR_UPDATE_OTP_AWB:
		if (s_ctrl->sensor->sensor_otp.awb_otp.awb_otp_succeed) {
			s5k4e1_write_otp(s_ctrl);
		} else {
			cam_err("%s awb otp is error.", __func__);
		}
		break;
	default:
		rc = -EFAULT;
		break;
	}

	return rc;
}

/* change for DTS2014022806370 by y00215412 2014-02-28 */
int s5k4e1ga_set_expo_gain(struct hisi_sensor_t *sensor,
	u32 expo, u16 gain, bool stream_off_mode)
{
	int rc = 0;
	int wait = SCCB_BUS_MUTEX_NOWAIT;

	if (stream_off_mode == true)
		isp_write_sensor_byte(&sensor->sensor_info->i2c_config,
			0x100, 0x00, 0x00, wait);

	rc = isp_write_sensor_byte(&sensor->sensor_info->i2c_config,
		S5K4E1GA_GROUP_HOLD_REG, 0x01, 0x00, wait);
	if (rc < 0) {
		return rc;
	}

	gain = gain << 1;

	isp_write_sensor_byte(&sensor->sensor_info->i2c_config,
		S5K4E1GA_GAIN_REG_H, (gain >> 8) & 0xff, 0x00, wait);
	isp_write_sensor_byte(&sensor->sensor_info->i2c_config,
		S5K4E1GA_GAIN_REG_L, gain & 0xff, 0x00, wait);

	expo = expo >> 4;

	isp_write_sensor_byte(&sensor->sensor_info->i2c_config,
		S5K4E1GA_EXPOSURE_REG_H, (expo >> 8) & 0xff, 0x00, wait);
	isp_write_sensor_byte(&sensor->sensor_info->i2c_config,
		S5K4E1GA_EXPOSURE_REG_L, expo & 0xff, 0x00, wait);

	isp_write_sensor_byte(&sensor->sensor_info->i2c_config,
		S5K4E1GA_GROUP_HOLD_REG, 0x00, 0x00, wait);

	if (stream_off_mode == true)
		isp_write_sensor_byte(&sensor->sensor_info->i2c_config,
			0x100, 0x01, 0x00, wait);

	return rc;
}

int s5k4e1ga_set_hts(struct hisi_sensor_t *sensor, u16 hts)
{
	isp_write_sensor_byte(&sensor->sensor_info->i2c_config,
		S5K4E1GA_HTS_REG_H, (hts >> 8) & 0xff, 0x00, SCCB_BUS_MUTEX_WAIT);
	isp_write_sensor_byte(&sensor->sensor_info->i2c_config,
		S5K4E1GA_HTS_REG_L, hts & 0xff, 0x00, SCCB_BUS_MUTEX_WAIT);

	return 0;
}

int s5k4e1ga_set_vts(struct hisi_sensor_t *sensor, u16 vts)
{
	isp_write_sensor_byte(&sensor->sensor_info->i2c_config,
		S5K4E1GA_VTS_REG_H, (vts >> 8) & 0xff, 0x00, SCCB_BUS_MUTEX_WAIT);
	isp_write_sensor_byte(&sensor->sensor_info->i2c_config,
		S5K4E1GA_VTS_REG_L, vts & 0xff, 0x00, SCCB_BUS_MUTEX_WAIT);

	return 0;
}

struct hisi_sensor_fn_t s5k4e1ga_func_tbl = {
	.sensor_config = hisi_sensor_config,
	.sensor_power_up = hisi_sensor_power_up,
	.sensor_power_down = hisi_sensor_power_down,
	.sensor_i2c_read = hisi_sensor_i2c_read,
	.sensor_i2c_write = hisi_sensor_i2c_write,
	.sensor_i2c_read_seq = hisi_sensor_i2c_read_seq,
	.sensor_i2c_write_seq = hisi_sensor_i2c_write_seq,
	.sensor_ioctl = s5k4e1ga_ioctl,
	.sensor_match_id = s5k4e1ga_match_id,
	.sensor_set_expo_gain = s5k4e1ga_set_expo_gain,
	.sensor_apply_expo_gain = hisi_sensor_apply_expo_gain,
	.sensor_suspend_eg_task = hisi_sensor_suspend_eg_task,
	.sensor_set_hts = s5k4e1ga_set_hts,
	.sensor_set_vts = s5k4e1ga_set_vts,	
};

static int32_t s5k4e1ga_sensor_probe(struct platform_device *pdev)
{
	int32_t rc = -1;
	struct hisi_sensor_t *sensor = NULL;

	cam_info("%s pdev name %s\n", __func__, pdev->name);

	sensor = (struct hisi_sensor_t*)kzalloc(sizeof(struct hisi_sensor_t),
						GFP_KERNEL);
	if (NULL == sensor) {
		return -ENOMEM;
	}

	sensor->func_tbl = &s5k4e1ga_func_tbl;
	sensor->power_setting_array.power_setting = s5k4e1ga_power_setting;
	sensor->power_setting_array.size = ARRAY_SIZE(s5k4e1ga_power_setting);

	if (pdev->dev.of_node) {
		rc = hisi_sensor_get_dt_data(pdev, sensor);
		if (rc < 0) {
			cam_err("%s failed line %d\n", __func__, __LINE__);
			goto s5k4e1ga_sensor_probe_fail;
		}
	} else {
		cam_err("%s s5k4e1ga of_node is NULL.\n", __func__);
		goto s5k4e1ga_sensor_probe_fail;
	}

	rc = hisi_sensor_add(sensor);
	if (rc < 0) {
		cam_err("%s fail to add sensor into sensor array.\n", __func__);
		goto s5k4e1ga_sensor_probe_fail;
	}
	if (!dev_get_drvdata(&pdev->dev)) {
		dev_set_drvdata(&pdev->dev, (void *)sensor);
	}
	return rc;
s5k4e1ga_sensor_probe_fail:
	cam_err("%s error exit.\n", __func__);
	kfree(sensor);
	sensor = NULL;
	return rc;
}

static const struct of_device_id hisi_s5k4e1ga_dt_match[] = {
	{.compatible = "hisi,s5k4e1gx_sunny"},
	{}
};
MODULE_DEVICE_TABLE(of, hisi_s5k4e1ga_dt_match);
static struct platform_driver s5k4e1ga_platform_driver = {
	.driver = {
		.name = "s5k4e1ga",
		.owner = THIS_MODULE,
		.of_match_table = hisi_s5k4e1ga_dt_match,
	},
};

static int32_t s5k4e1ga_platform_probe(struct platform_device *pdev)
{
	int32_t rc = 0;
	const struct of_device_id *match;

	match = of_match_device(hisi_s5k4e1ga_dt_match, &pdev->dev);
	cam_notice("%s compatible=%s.\n", __func__, match->compatible);
	rc = s5k4e1ga_sensor_probe(pdev);
	return rc;
}

static int __init s5k4e1ga_module_init(void)
{
	int rc = 0;
	cam_info("%s:%d\n", __func__, __LINE__);

	rc = platform_driver_probe(&s5k4e1ga_platform_driver,
		s5k4e1ga_platform_probe);
	if (rc < 0) {
		cam_notice("%s platform_driver_probe error.\n", __func__);
	}
	return rc;
}

static void __exit s5k4e1ga_module_exit(void)
{
	platform_driver_unregister(&s5k4e1ga_platform_driver);
}

MODULE_AUTHOR("HISI");
module_init(s5k4e1ga_module_init);
module_exit(s5k4e1ga_module_exit);
MODULE_LICENSE("GPL");
