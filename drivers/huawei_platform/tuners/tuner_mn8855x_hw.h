/**************************************************************************//**
 *
 *  @file		tuner_mn8855x_hw.h
 *
 *  @brief		Common header file of the HardWare control layer.
 *
 *  @data		2014.07.10
 *
 *  @author	H.Kawano(KXDA3)
 *  @author	K.Okawa(KXDA3)
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
 *
 ******************************************************************************/
/*..+....1....+....2....+....3....+....4....+....5....+....6....+....7....+...*/
#ifndef _TUNER_MN8855x_HW_H
#define _TUNER_MN8855x_HW_H
/******************************************************************************
 * include
 ******************************************************************************/

/******************************************************************************
 * prototype
 ******************************************************************************/

/* following functions are described in "tuner_drv_hw.c" */
int tuner_drv_hw_reqirq(void);
void tuner_drv_hw_freeirq(void);

#ifdef TUNER_CONFIG_IRQ_LEVELTRIGGER

void tuner_drv_hw_enable_interrupt(void);
void tuner_drv_hw_disable_interrupt(void);

#endif

/*
 * following functions are described in "tuner_drv_<if>.c"
 */
int tuner_drv_hw_read_reg(
		enum _reg_bank bank,
		uint8_t adr,
		uint16_t len,
		uint8_t *rd
		);
int tuner_drv_hw_write_reg(
		enum _reg_bank bank,
		uint8_t adr,
		uint16_t len,
		uint8_t *wd
		);

/*
 * following functions are described in "tuner_drv_<tsif>.c".
 * <tsif> is NOT "i2c".
 */
#if defined(DPATH_SPI) || defined(DPATH_SDIO)
#ifdef CPATH_I2C
int tuner_drv_hw_tsif_set_tpm(void);
#endif
int tuner_drv_hw_tsif_register(void);
void tuner_drv_hw_tsif_unregister(void);

int tuner_drv_hw_tsif_set_cntxt(struct _tsif_cntxt *tc);
int tuner_drv_hw_tsif_config(struct _tsif_cntxt *tc);
int tuner_drv_hw_tsif_get_pkts(struct _tsif_cntxt *tc);
int tuner_drv_hw_tsif_get_dready(void);
int tuner_drv_hw_tsif_sync_pkt(void);

#endif

#endif /* _TUNER_DRV_HW_H */
/*******************************************************************************
 *              Copyright(c) 2014 Panasonic Co., Ltd.
 ******************************************************************************/
