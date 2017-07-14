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


#ifndef __HW_ALAN_KERNEL_HWCAM_FLASH_CFG_H__
#define __HW_ALAN_KERNEL_HWCAM_FLASH_CFG_H__

#include <linux/ioctl.h>
#include <linux/types.h>
#include <linux/videodev2.h>
#include <media/huawei/camera.h>

/***************************** cfg type define *******************************/
#define CFG_FLASH_TURN_ON		0
#define CFG_FLASH_TURN_OFF		1
#define CFG_FLASH_GET_FLASH_NAME	2
#define CFG_FLASH_GET_FLASH_STATE	3

typedef enum {
	STANDBY_MODE=0,
	FLASH_MODE,
	TORCH_MODE,
	TORCH_LEFT_MODE,
	TORCH_RIGHT_MODE,
	TORCH_VIDEO_MODE,
	MAX_MODE,
} flash_mode;

typedef enum {
	LED_FLASH = 0,
	XEON_FLASH,
} flash_type;

struct flash_i2c_reg {
	unsigned int address;
	unsigned int value;
};

struct hw_flash_cfg_data {
	int cfgtype;
	flash_mode mode;
	int data;

	union {
	char name[32];
	} cfg;
};

/********************** v4l2 subdev ioctl case id define **********************/
#define VIDIOC_HISI_FLASH_CFG	\
	_IOWR('V', BASE_VIDIOC_PRIVATE + 41, struct hw_flash_cfg_data)

#endif // __HW_ALAN_KERNEL_HWCAM_FLASH_CFG_H__

