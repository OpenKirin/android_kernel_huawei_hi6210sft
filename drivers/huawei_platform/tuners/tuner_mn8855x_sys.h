/**************************************************************************//**
 *
 *  @file		tuner_mn8855x_sys.h
 *  @brief		The public header for the mm_tuner55x driver
 *
 *  @date		2011.08.01
 *  @author	K.Kitamura(*)
 *  @author	K.Okawa(KXDA3)
 *
 ******************************************************************************/
/******************************************************************************
 *  $Rev::                            $ Revision of Last commit
 *  $Date::                           $ Date of last commit
 ******************************************************************************/
/******************************************************************************
 *              Copyright (C) 2011 by Panasonic Co., Ltd.
 *
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
#ifndef _TUNER_MN8855X_SYS_H
#define _TUNER_MN8855X_SYS_H

/******************************************************************************
 * include
 ******************************************************************************/
#include "tuner_mn8855x_config.h"

/******************************************************************************
 * define
 ******************************************************************************/
/* IOCTL parameters */
#define TUNER_IOC_MAGIC 'd'
#define TUNER_IOCTL_VALGET			_IOW(TUNER_IOC_MAGIC, 1, union _tuner_data_rw)
#define TUNER_IOCTL_VALSET			_IOR(TUNER_IOC_MAGIC, 2, union _tuner_data_rw)
#define TUNER_IOCTL_EVENT_GET		_IOR(TUNER_IOC_MAGIC, 5, union _tuner_data_event)
#define TUNER_IOCTL_EVENT_SET		_IOW(TUNER_IOC_MAGIC, 6, union _tuner_data_event)
#define TUNER_IOCTL_EVENT_REL		_IOW(TUNER_IOC_MAGIC, 7, union _tuner_data_event)
#define TUNER_IOCTL_CNTSET			_IOR(TUNER_IOC_MAGIC, 3, union _tuner_data_rw)
#define TUNER_IOCTL_CNTGET			_IOR(TUNER_IOC_MAGIC, 4, union _tuner_data_rw)

#if defined(DPATH_SPI) || defined(DPATH_SDIO)
#define TUNER_IOCTL_TSIF_START		_IOW(TUNER_IOC_MAGIC, 10, struct _tuner_data_tsif)
#define TUNER_IOCTL_TSIF_STOP		_IO(TUNER_IOC_MAGIC,  11)
#define TUNER_IOCTL_TSIF_PKTSIZE	_IOR(TUNER_IOC_MAGIC, 12, unsigned int)
#endif

/******************************************************************************
 * enumerator type
 ******************************************************************************/
/** @addtogroup group_libtuner_API_public
 * @{ */

/** @brief Register bank enumerator */
enum _reg_bank {
	Sub = 0,		//!< Register bank in RF circuit
	Main1 = 1,		//!< Register bank in the 13(full)-segment demodulator
	Main2 = 2,		//!< Register bank in the 1-segment dedicated demodulator
};

/** @brief Event (interrupt) setting mode */
enum _evset_mode {
	/** Add the specified event definition to existence definitions */
	TUNER_EVENT_MODE_ADD = 0,
	/** Clear existence definitions and set specified definitions only */
	TUNER_EVENT_MODE_OVW = 1,
};

/** @brief OFDM demodulator circuit enumerators. */
enum _bw_cir {
	TUNER_DRV_BW13	= 0,	//!< 13(full)-segment demodulator
	TUNER_DRV_BW1		= 1,	//!< 1-segment dedicated demodulator
};

/** @brief TS packet type enumerator */
enum _ts_pkt_type {
	TUNER_DRV_TS_NORMAL = 0,	//!< 188 bytes length
	TUNER_DRV_TS_ADDFEC = 1,	//!< 204 bytes length (with redundancy bits)
	TUNER_DRV_TS_TSTAMP = 2,	//!< 192 bytes length (with Time-Stamp)
};
/** @} */
/******************************************************************************
 * struct/union type
 ******************************************************************************/
/* for register read/write */
typedef union _tuner_data_rw {
	struct {
		enum _reg_bank bank;	/* reg. bank */
		uint8_t adr;			/* reg. address */
		uint8_t sbit;			/* start bit position */
		uint8_t ebit;			/* end bit position */
		uint8_t param;		/* write/read value */
		uint8_t enabit;		/* enable bit mask */
	} sngl;
	struct {
		enum _reg_bank bank;	/* reg. bank */
		uint8_t adr;			/* reg. address */
		uint8_t *buf;			/* buffer for continuous read/write */
		uint16_t len;			/* continuous length */
	} cont;
} tuner_rwreg_t;
#define TUNER_DATA_RW	tuner_rwreg_t

#define rwSnglSet(rw, b, a, e, p)	{ \
		(rw).sngl.bank = (b); \
		(rw).sngl.adr = (a); \
		(rw).sngl.param = (p); \
		(rw).sngl.enabit = (e); \
	}

/** @addtogroup group_libtuner_API_public
 * @{ */

/** @brief Union to set/get the event (interrupt) definitions/factors */
union _tuner_data_event {
	struct {
		unsigned intst:		8;	//!< INTST register
		unsigned intcnd:		8;	//!< INTCND register
		unsigned intset1:		8;	//!< INTSET1 register
		unsigned irqnum:		7;	//!< Num of the IRQ
		unsigned bw:			1;	//!< Active demodulator
	} get;		//!< To access as the event (interrupt) factor
	struct {
		unsigned intdef2:		4;	//!< INTDEF2[3:0] register
		unsigned reserve:		4;	//!< reserve bits
		unsigned intdef1:		8;	//!< INTDEF1 register
		unsigned intset1:		8;	//!< INTSET1 register
		unsigned mode:		4;	//!< ::_evset_mode
		unsigned reserve1:	3;	//!< reserve vits
		unsigned bw:			1;	//!< Define target demodulator
	}set;		//!< To access as the event (interrupt) definition
	/** @brief For the Event Enumerator (::_tuner_event) */
	uint32_t pack;
};

/** @brief Event (interrupt) definition/factor type */
typedef union _tuner_data_event tuner_event_t;

#define TUNER_DATA_EVENT		tuner_event_t

/** @brief TS slave I/F control parameters
 *
 * Control TS slave I/F sub-system of the tuner device.
 */
struct _tuner_data_tsif {
	uint8_t thu[2];	//!< Water line upper threshold for BW13(index=0)/BW1(index=1)
	uint8_t thl[2];	//!< Water line lower threshold for BW13(index=0)/BW1(index=1)

	enum _ts_pkt_type ts_pkt_type;	//!< TS packet type

#if defined(DPATH_SPI)
	/* depend on the SPI (HOST-Master) I/F */
	uint8_t ts_bit_per_word;	//!< Bits per a word of SPI I/F
#elif defined(DPATH_SDIO)
	/* depend on the SDIO I/F */

#endif
};
/** @brief TS slave I/F control type */
typedef struct _tuner_data_tsif tuner_tsif_t;

#define TUNER_DATA_TSIF		tuner_tsif_t
/** @} */

#endif/* _TUNER_DRV_SYS_H */
/*******************************************************************************
 *              Copyright(c) 2014 Panasonic Co., Ltd.
 ******************************************************************************/
