/* 
 *  Hisilicon K3 SOC camera driver source file 
 * 
 *  Copyright (C) Huawei Technology Co., Ltd. 
 * 
 * Author:	  h00145353 
 * Email:	  alan.hefeng@huawei.com
 * Date:	  2013-12-12
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


#ifndef __HW_ALAN_KERNEL_HWCAM_SENSOR_CFG_H__
#define __HW_ALAN_KERNEL_HWCAM_SENSOR_CFG_H__

#include <linux/ioctl.h>
#include <linux/types.h>
#include <linux/videodev2.h>
#include <media/huawei/camera.h>


#define ISO_OTP_DATA_LENGTH            (18)
#define LSC_OTP_DATA_LENGTH            (1402)
#define AF_OTP_DATA_LENGTH             (34)
#define HDC_OTP_DATA_LENGTH            (480)

typedef struct {
    uint8_t   ucYear;
    uint8_t   ucMonth;
    uint8_t   ucDate;
    uint8_t   ucCameraCode;
    uint8_t   ucVenderAndVersion;
    uint8_t   ucCheckSum;
    uint8_t   aucISO_AWBCalib[ISO_OTP_DATA_LENGTH];
    uint8_t   aucLSC[LSC_OTP_DATA_LENGTH];
    uint8_t   aucAF[AF_OTP_DATA_LENGTH];
    uint8_t   aucHDC[HDC_OTP_DATA_LENGTH];
    uint8_t   ucTotalCheckSum;
    uint8_t   ucDataVaild;
    uint8_t   ucHeaderValid;
    uint8_t   ucISOLVaild;
    uint8_t   ucISORValid;
    uint8_t   ucLSCLVaild;
    uint8_t   ucLSCRValid;
    uint8_t   ucVCMLVaild;
    uint8_t   ucVCMRValid;
    uint8_t   ucHDCLValid;
    uint8_t   ucHDCRValid;
}hwsensor_otp_info_t;


enum 
{
    DEVICE_NAME_SIZE                          =   32,
}; 

typedef enum _tag_hwsensor_position_kind 
{
    HWSENSOR_POSITION_INVALID                      =    -1,
    HWSENSOR_POSITION_REAR                      =    0,
    HWSENSOR_POSITION_FORE                      =    1,
} hwsensor_position_kind_t;

typedef struct _tag_hwsensor_info
{
    uint32_t                                    dev_id; 

    char                                        name[DEVICE_NAME_SIZE];
    char                                        vcm_name[DEVICE_NAME_SIZE];
    int                                         vcm_enable;
    hwsensor_position_kind_t                    mount_position; 
    uint32_t                                    mount_angle;
    int extisp_type;
} hwsensor_info_t; 

/********************* cfg data define ************************************/
enum sensor_config_type
{
	SEN_CONFIG_POWER_ON = 0,
	SEN_CONFIG_POWER_OFF,
	SEN_CONFIG_WRITE_REG,
	SEN_CONFIG_READ_REG,
	SEN_CONFIG_WRITE_REG_SETTINGS,
	SEN_CONFIG_READ_REG_SETTINGS,
	SEN_CONFIG_ENABLE_CSI,
	SEN_CONFIG_DISABLE_CSI,
	SEN_CONFIG_MATCH_ID,
	SEN_CONFIG_READ_REG_OTP,
	SEN_CONFIG_MAX_INDEX
};

struct sensor_i2c_reg {
	uint32_t subaddr;
	uint32_t value;
	uint8_t mask;
	uint16_t size;
};

/* add for 32+64 */
struct sensor_i2c_setting {
	union {
		struct sensor_i2c_reg *setting;
		int64_t _setting;
	};
	uint32_t size;
};

/*sensor ioctl arg*/
struct sensor_cfg_data {
	int cfgtype;
	int mode;
	int data;
	int addr_bit;
	int val_bit;
	uint32_t i2c_addr;

	union {
	char name[DEVICE_NAME_SIZE];
	struct sensor_i2c_reg reg;
	struct sensor_i2c_setting setting;
	//struct hisi_sensor_af_otp af_otp;
	} cfg;
};


#define HWSENSOR_IOCTL_GET_INFO                 _IOR('S', BASE_VIDIOC_PRIVATE + 1, hwsensor_info_t)
#define HWSENSOR_IOCTL_SENSOR_CFG 		        _IOWR('V', BASE_VIDIOC_PRIVATE + 2, struct sensor_cfg_data)

#endif // __HW_ALAN_KERNEL_HWCAM_SENSOR_CFG_H__

