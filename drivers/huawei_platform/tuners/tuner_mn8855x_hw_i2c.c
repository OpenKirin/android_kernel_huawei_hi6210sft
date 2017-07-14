/**************************************************************************//**
 *
 *  @file		tuner_mn8855x_hw_i2c.c
 *
 *  @brief		Implementation of the hardware control layer in I2C.
 *
 *  @data		2014.07.18
 *
 *  @author	H.Kawano (KXDA3)
 *  @author	K.Okawa (KXDA3)
 *
 ******************************************************************************/
/******************************************************************************
 *  $Rev::                            $ Revision of Last commit
 *  $Date::                           $ Date of last commit
 *
 *              Copyright (C) 2014 by Panasonic Co., Ltd.
 ******************************************************************************/
/******************************************************************************
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 ******************************************************************************/
/*..+....1....+....2....+....3....+....4....+....5....+....6....+....7....+...*/

/******************************************************************************
 * include
 ******************************************************************************/
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/types.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/sched.h>
#include <linux/platform_device.h>
#include <linux/device.h>
#include <linux/err.h>
#include <linux/slab.h>
#include <linux/i2c.h>
#include <linux/i2c-dev.h>
#include <asm/uaccess.h>
#include <linux/mm.h>
#include <linux/vmalloc.h>

#include "tuner_mn8855x.h"

#include "tuner_mn8855x_hw.h"

const uint8_t g_slvadr[3] = {
		0x60,	/* Sub */
		0x61,	/* Main1 */
		0x62,	/* Main2 */
};

/******************************************************************************
 * code area
 ******************************************************************************/
/**************************************************************************//**
 * read some of registers continuously
 *
 * @date	2014.07.18
 *
 * @author H.Kawano (KXDA3)
 * @author K.Okawa (KXDA3)
 *
 * @retval 0					Normal end
 * @retval -EINVAL			error
 *
 * @param [in] bank	register bank enumerator
 * @param [in] adr	address of the register to read-out start
 * @param [in] len	continuous read length
 * @param [out] rd	pointer to the buffer
 ******************************************************************************/
int tuner_drv_hw_read_reg(enum _reg_bank bank, uint8_t adr, uint16_t len, uint8_t *rd)
{
	int ret;
	struct i2c_adapter *adap;
	struct i2c_msg msgs[2];

	/* argument check */
	if (rd == NULL) {
		TRACE();
		return -EINVAL;
	}

	/* initialize */
	memset( msgs, 0x00, sizeof(struct i2c_msg) * 2);

	/* get i2c adapter */
	adap = i2c_get_adapter(TUNER_CONFIG_I2C_BUSNUM);
	if (adap == NULL) {
		TRACE();
		return -EINVAL;
	}

	msgs[0].addr = g_slvadr[(int)bank];
	msgs[0].flags = 0; /* reg address write */
	msgs[0].len = 1;
	msgs[0].buf = &adr;
	msgs[1].addr = g_slvadr[(int)bank];
	msgs[1].flags = I2C_M_RD;
	msgs[1].len = len;
	msgs[1].buf = rd;

#ifdef TUNER_MN8855X_DEBUG
	DEBUG_PRINT("hw_read_reg: bank:%d slv:0x%02x adr:0x%02x len:%d",
			(int)bank, g_slvadr[(int)bank], adr, len);
#endif

	ret = i2c_transfer(adap, msgs, 2);
	if (ret < 0) {
		TRACE();
		i2c_put_adapter(adap);
		DEBUG_PRINT("(RETURN:%d)\n", ret);
		return -EINVAL;
	}

#ifdef TUNER_MN8855X_DEBUG
	if (len == 1) {
		DEBUG_PRINT("0x%02x", rd[0]);
	} else {
		DEBUG_PRINT("0x%02x 0x%02x ...", rd[0], rd[1]);
	}
#endif

	i2c_put_adapter(adap);
	return 0;

}

/**************************************************************************//**
 * write some of registers continuously
 *
 * @date	2011.07.18
 *
 * @author H.Kawano (KXDA3)
 * @author K.Okawa (KXDA3)
 *
 * @retval 0					Normal end
 * @retval <0					error (refer the errno)
 *
 * @param [in] bank	register bank enumerator
 * @param [in] adr	start address for continuous write
 * @param [in] len	continuous write length
 * @param [out] wd	pointer to the write data array
 ******************************************************************************/
int tuner_drv_hw_write_reg(enum _reg_bank bank, uint8_t adr, uint16_t len, uint8_t *wd)
{

	int ret;
	struct i2c_adapter *adap;
	struct i2c_msg msgs[1];
	uint8_t *wbuf;

	/* argument check */
	if (wd == NULL) {
		TRACE();
		return -EINVAL;
	}
	/* TODO:
	 * confirm the write length (len)
	 */

	/* initialize */
	memset( msgs, 0x00, sizeof(struct i2c_msg));

	/* get i2c adapter */
	adap = i2c_get_adapter(TUNER_CONFIG_I2C_BUSNUM);
	if (adap == NULL) {
		TRACE();
		return -EBUSY;
	}

	/* write register */
	msgs[0].addr = g_slvadr[(int)bank];
	msgs[0].flags = 0;				/* write */
	msgs[0].len = len + 1;			/* len(length of wd) + 1(reg. address) */
	wbuf = (uint8_t *)vmalloc(msgs[0].len);
	if (wbuf == NULL) {
		TRACE();
		return -ENOMEM;
	}
	*wbuf = adr;					/* start address */
	memcpy((wbuf+1), wd, len);	/* write data */
	msgs[0].buf = wbuf;

#ifdef TUNER_MN8855X_DEBUG
	DEBUG_PRINT("hw_write_reg: bank:%d slv:0x%02x adr:0x%02x len:%d",
				(int)bank, g_slvadr[(int)bank], adr, len);
#endif

	ret = i2c_transfer(adap, msgs, 1);
	if (ret < 0) {
		TRACE();
		vfree(wbuf);
		i2c_put_adapter(adap);
		return ret;
	}

#ifdef TUNER_MN8855X_DEBUG
	if (len == 1) {
		DEBUG_PRINT("0x%02x", wd[0]);
	} else {
		DEBUG_PRINT("0x%02x 0x%02x ...", wd[0], wd[1]);
	}
#endif

	vfree(wbuf);
	i2c_put_adapter(adap);

	return 0;
}

/*******************************************************************************
 *              Copyright(c) 2014 Panasonic Co., Ltd.
 ******************************************************************************/
