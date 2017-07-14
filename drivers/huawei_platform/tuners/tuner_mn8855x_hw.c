/**************************************************************************//**
 *
 *  @file		tuner_mn8855x_hw.c
 *
 *  @brief		The HW Wrapping Layer for Tmm Tuner Driver
 *
 *  @data		2011.07.25
 *
 *  @author	K.Kitamura(*)
 *  @author	K.Okawa(KXDA3)
 ******************************************************************************/
/******************************************************************************
 *  $Rev::                            $ Revision of Last commit
 *  $Date::                           $ Date of last commit
 *
 *              Copyright (C) 2011 by Panasonic Co., Ltd.
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
#include <linux/mm.h>
#include <linux/gpio.h>
#include <asm/uaccess.h>

#include "tuner_mn8855x.h"

#ifdef TUNER_CONFIG_IRQ_PC_LINUX
#include "../../../i2c-parport-x/i2c-parport.h"
#else
#ifdef PANDABOARD
#include <asm/gpio.h>
#include <linux/irq.h>
#endif
#endif

/******************************************************************************
 * data
 ******************************************************************************/
static bool g_tuner_irq_flag = false;

/******************************************************************************
 * code area
 ******************************************************************************/

/**************************************************************************//**
 * interruption registration control of a driver
 *
 * @date		2011.08.26
 * @author		M.Takahashi(*)
 *
 * @retval 	0	normal
 * @retval		<0	error
 ******************************************************************************/
int tuner_drv_hw_reqirq(void)
{
	int ret = 0; /* function return */

	/* the sub-system of IRQ has been already activated */
	if (g_tuner_irq_flag == true) {
		pr_err("IRQ (#%d) is already active, so do nothing\n", TUNER_CONFIG_INT);
		return 0;
	}

#ifdef TUNER_CONFIG_IRQ_ENABLE
#ifndef TUNER_CONFIG_IRQ_PC_LINUX

#ifdef PANDABOARD
	irq_set_irq_type(TUNER_CONFIG_INT, IRQ_TYPE_EDGE_RISING);
#endif

	DEBUG_PRINT("*** request IRQ ***")
	/* request IRQ */
	ret = request_irq(
			TUNER_CONFIG_INT,		/* number of IRQ */
			tuner_interrupt,		/* call-back function */
			IRQF_DISABLED,		/* when call-back is active */
			"mm_tuner",			/* IRQ name */
			NULL					/* device ID is not specified */
			);
	if (ret != 0) {
		pr_err("request_irq() fail (return:%d)\n", ret);
		return -EINVAL;
	}

#else  /* TUNER_CONFIG_IRQ_PC_LINUX */
	i2c_set_interrupt( tuner_interrupt );
#endif /* TUNER_CONFIG_IRQ_PC_LINUX */
#else
	INFO_PRINT("TUNER_CONFIG_IRQ_ENABLE is not defined");
#endif
	/* IRQ status flag: on */
	g_tuner_irq_flag = true;

	return 0;
}

/**************************************************************************//**
 * interruption registration release control of a driver
 *
 * @date		2011.08.26
 * @author		M.Takahashi(*)
 ******************************************************************************/
void tuner_drv_hw_freeirq(void)
{
	if (g_tuner_irq_flag == false) {
		/* IRQ line is not active */
		pr_err("IRQ (#%d) is not active, so do nothing.\n", TUNER_CONFIG_INT);
		return;
	}

#ifdef TUNER_CONFIG_IRQ_ENABLE
#ifndef TUNER_CONFIG_IRQ_PC_LINUX
	/* disable IRQ line */
	DEBUG_PRINT("*** FREE IRQ ***")
	free_irq(TUNER_CONFIG_INT, NULL);

#else  /* TUNER_CONFIG_IRQ_PC_LINUX */
	i2c_release_interrupt( NULL );
#endif /* TUNER_CONFIG_IRQ_PC_LINUX */
#else
	INFO_PRINT("TUNER_CONFIG_IRQ_ENABLE is not defined");
#endif

	/* flag off */
	g_tuner_irq_flag = false;
}

#ifdef TUNER_CONFIG_IRQ_LEVELTRIGGER
/**************************************************************************//**
 * interruption registration enable control of a driver
 *
 * @date		2011.09.18
 * @author		M.Takahashi(*)(*)
 ******************************************************************************/
void tuner_drv_hw_enable_interrupt(void)
{
#ifndef TUNER_CONFIG_IRQ_PC_LINUX
	/* enabling interrupt */
	enable_irq(TUNER_CONFIG_INT, NULL);

#else  /* TUNER_CONFIG_IRQ_PC_LINUX */
	i2c_set_interrupt(tuner_interrupt);
#endif /* TUNER_CONFIG_IRQ_PC_LINUX */
}

/**************************************************************************//**
 * interruption registration disable control of a driver
 *
 * @date		2011.09.18
 * @author		M.Takahashi(*)
 ******************************************************************************/
void tuner_drv_hw_disable_interrupt(void)
{
#ifndef TUNER_CONFIG_IRQ_PC_LINUX 
	/* disabling interrupt */
	disable_irq(TUNER_CONFIG_INT, NULL);

#else  /* TUNER_CONFIG_IRQ_PC_LINUX */
	i2c_release_interrupt(NULL);
#endif /* TUNER_CONFIG_IRQ_PC_LINUX */
}
#endif /* TUNER_CONFIG_IRQ_LEVELTRIGGER */

/*******************************************************************************
 *              Copyright(c) 2011 Panasonc Co., Ltd.
 ******************************************************************************/
