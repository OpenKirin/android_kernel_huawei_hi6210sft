/**************************************************************************//**
 *
 *  @file		tuner_mn8855x.c
 *
 *  @brief		The implementation that is independence in physical I/F.
 *
 *  @data		2011.07.25
 *
 *  @author	K.Kitamura(*)
 *  @author	K.Okawa(KXDA3)
 *
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
#include <linux/poll.h>
#include <linux/interrupt.h>
#include <linux/err.h>
#include <linux/slab.h>
#include <linux/gpio.h>
#include <asm/uaccess.h>
#include <asm/irq.h>
#include <linux/gpio.h>

#include "tuner_mn8855x.h"
#include "tuner_mn8855x_hw.h"

#include <linux/mm.h>
#include <linux/vmalloc.h>
#include <linux/kthread.h>
#include <linux/version.h>
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,37)
#include <linux/mutex.h>
#endif
#include <linux/delay.h>
#include <linux/time.h>

/******************************************************************************
 * data
 ******************************************************************************/
#define TUNER_TIME_MEASURE	1
#if TUNER_TIME_MEASURE
uint64_t time_max,time_min;
#endif

struct _mmtuner_cntxt g_cnt;	/* mm_tuner driver context */

#if LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,37)
#define mtxLock()		{ mutex_lock(&g_cnt.mtx); }
#define mtxUnlock()	{ mutex_unlock(&g_cnt.mtx); }
#define mtxInit()		{ mutex_init(&g_cnt.mtx); }
#else
#define mtxLock()		{ }
#define mtxUnlock()	{ }
#define mtxInit()		{ }
#endif

#if defined(DPATH_SPI) || defined(DPATH_SDIO)
struct _tsif_cntxt	g_tscnt;	/* TS I/F context */
#endif

/* TS packet size
 * Array index of this constant variables array is
 * equivalent to TUNER_DEV_PKTTYPE (enumeration type).
 */
const size_t g_ts_pkt_size[3] = { 188, 204, 192 };

/******************************************************************************
 * function
 ******************************************************************************/
static ssize_t tuner_module_entry_read(struct file* FIle, char* Buffer,
		size_t Count, loff_t* OffsetPosition);
static ssize_t tuner_module_entry_write(struct file* FIle, const char* Buffer,
		size_t Count, loff_t* OffsetPosition);
static unsigned int tuner_module_entry_poll(struct file *file,
		struct poll_table_struct *poll_tbl);

#if LINUX_VERSION_CODE < KERNEL_VERSION(2,6,36)
static int tuner_module_entry_ioctl( struct inode* Inode,
		struct file* FIle,
		unsigned int uCommand,
		unsigned long uArgument );
#else  /* LINUX_VERSION_CODE */ 
static long tuner_module_entry_ioctl( struct file *file,
		unsigned int uCommand,
		unsigned long uArgument );
#endif /* LINUX_VERSION_CODE */

static int tuner_module_entry_open(struct inode* Inode, struct file* FIle);
static int tuner_module_entry_close(struct inode* Inode, struct file* FIle);
static int __init tuner_probe(struct platform_device *pdev);
static int __exit tuner_remove(struct platform_device *pdev);
static int tuner_pm_suspend(struct device *dev);
static int tuner_pm_resume(struct device *dev);
static int __init tuner_drv_start(void);
static void __exit tuner_drv_end(void);
static int __inline tuner_drv_active_bw(enum _bw_cir *pbw);
static int tuner_drv_irq_th(void *arc);

#if defined(DPATH_SPI) || defined(DPATH_SDIO)
static int tuner_drv_tsif_start(void);
static int tuner_drv_tsif_stop(void);
static int tuner_drv_tsif_pktsize(void);
static int tuner_drv_tsif_th(void *arg);
#endif

/* entry point */
static struct file_operations TunerFileOperations = {
		.owner = THIS_MODULE,
		.read = tuner_module_entry_read,
		.write = tuner_module_entry_write,
		.poll = tuner_module_entry_poll,
#if LINUX_VERSION_CODE < KERNEL_VERSION(2,6,36)
		.ioctl = tuner_module_entry_ioctl,
#else  /* LINUX_VERSION_CODE */
		.unlocked_ioctl = tuner_module_entry_ioctl,
#endif /* LINUX_VERSION_CODE */
		.open = tuner_module_entry_open,
		.release = tuner_module_entry_close
};

static const struct dev_pm_ops mmtuner_driver_pm_ops = {
		.suspend = tuner_pm_suspend,
		.resume = tuner_pm_resume,
};

static struct platform_driver mmtuner_driver = {
		.probe = tuner_probe,
		.remove = __exit_p(tuner_remove),
		.driver = {
				.name = "mmtuner",
				.owner = THIS_MODULE,
				.pm = &mmtuner_driver_pm_ops,
		}
};

static struct platform_device *mmtuner_device;
static struct class *device_class;

dev_t tuner_dev = 0;                 //动态分配设备号
struct cdev tuner_dev_c;

#ifndef TUNER_CONFIG_IRQ_PC_LINUX
irqreturn_t tuner_interrupt(int irq, void *dev_id);
#else  /* TUNER_CONFIG_IRQ_PC_LINUX */
int tuner_interrupt( void );
#endif /* TUNER_CONFIG_IRQ_PC_LINUX */

/******************************************************************************
 * code area
 ******************************************************************************/

/**************************************************************************//**
 * probe control of a driver
 *
 * @date		2011.08.02
 *
 * @author		K.Kitamura(*)
 *
 * @retval		0		normal
 * @retval		<0		error
 *
 * @param [in] pdev	pointer to the structure "platform_device"
 ******************************************************************************/
static int tuner_probe(struct platform_device *pdev)
{
	INFO_PRINT("%s START", __FUNCTION__);
    int ret = 0;
    struct device *dev = NULL;
	/* register the driver */
    ret = alloc_chrdev_region(&tuner_dev, 0, 1,"mmtuner"); //动态分配设备号
    if (ret) { 
        ERROR_PRINT("tuner register failure."); 
        unregister_chrdev_region(tuner_dev, 1);
        platform_driver_unregister(&mmtuner_driver);
        return ret;
    }

    cdev_init(&tuner_dev_c, &TunerFileOperations);
 
    ret = cdev_add(&tuner_dev_c, tuner_dev, 1);
    if (ret) {
        ERROR_PRINT("register_chrdev() Failed error:%d", ret);
        unregister_chrdev_region(tuner_dev, 1);
        platform_driver_unregister(&mmtuner_driver);
        return ret;
   }

   	/* create the node of device */
	device_class = class_create(THIS_MODULE, "mmtuner");
	if (IS_ERR(device_class)) {
		ERROR_PRINT("init_module: Error: failed in class_create.");
		platform_device_put(mmtuner_device);
		platform_driver_unregister(&mmtuner_driver);
		return PTR_ERR(device_class);
	}

	/* create the logical device */
	dev = device_create(device_class, NULL, tuner_dev, NULL, "mmtuner");
	if (IS_ERR(dev)) {
		ERROR_PRINT("init_module: Error: failed in device_create.");
		platform_device_put(mmtuner_device);
		platform_driver_unregister(&mmtuner_driver);
		return PTR_ERR(dev);
	}

	INFO_PRINT("%s END", __FUNCTION__);
    printk(KERN_INFO "mmtuner:creat /dev/mmtuner ok!\n");

	return 0;
}

/**************************************************************************//**
 * remove control of a driver
 *
 * @date		2011.08.02
 *
 * @author		K.Kitamura(*)
 *
 * @retval		0	normal
 * @retval		<0	error
 *
 * @param [in] pdev	pointer to the structure "platform_device"
 ******************************************************************************/
static int __exit tuner_remove(struct platform_device *pdev)
{
	INFO_PRINT("%s START", __FUNCTION__);

	/* release interrupt (IRQ) */
	tuner_drv_hw_freeirq();

	/* un-register driver */
    unregister_chrdev_region(tuner_dev, 1);

	INFO_PRINT("%s END", __FUNCTION__);

	return 0;
}

/*************************************************************************//***
 * suspend control of a driver
 *
 * @date		2014.02.21
 *
 * @author		T.Abe(FSI)
 *
 * @retval		0	normal
 * @retval		<0	error
 *
 * @param [in] dev	device
 ******************************************************************************/
static int tuner_pm_suspend(struct device *dev)
{
	INFO_PRINT("%s START [%p]", __FUNCTION__, dev);

	/* TODO: implement suspend scheme of the tuner device */

	INFO_PRINT("%s END", __FUNCTION__);

	return 0;
}

/*************************************************************************//***
 * resume control of a driver
 *
 * @date		2014.02.21
 *
 * @author		T.Abe(FSI)
 *
 * @retval		0	normal
 * @retval		<0	error
 *
 * @param [in] dev	device
 ******************************************************************************/
static int tuner_pm_resume(struct device *dev)
{
	int ret = 0;

	INFO_PRINT("%s START [%p]", __FUNCTION__, dev);

	/* TODO: implement the resume scheme of the tuner device */

#if defined( DPATH_SPI ) || defined( DPATH_SDIO )
#ifdef CPATH_I2C
	ret = tuner_drv_hw_tsif_set_tpm();
	if (ret) {
		TRACE();
		return ret;
	}
#endif
#endif

	INFO_PRINT("%s END", __FUNCTION__);

	return ret;
}

/**************************************************************************//**
 * Interrupt handling thread function
 *
 * @date		2011.09.16
 *
 * @author		K.Kitamura(*)
 *
 * @retval		0	normal
 * @retval		<0	error
 *
 * @param [in] arg	(no effect)
 ******************************************************************************/
int tuner_drv_irq_th(void * arg)
{
	int ret = 0;
	unsigned long flags;
	unsigned long kthread_flg;

	mm_segment_t oldfs;
	struct sched_param param;

	TUNER_DATA_RW rw[1]; /* to read SYS_P */
	uint8_t buf[2] = { 0x00, 0x00 };
	enum _bw_cir active = TUNER_DRV_BW13;

	const enum _reg_bank bank[2] = { Main1, Main2 };
	const uint8_t intcnd[2] = { 0xE3, 0xCE };

	INFO_PRINT("%s: START", __FUNCTION__);

	/* initialize inner values */
	ret = 0;
	flags = 0;
	kthread_flg = 0;
	param.sched_priority = TUNER_CONFIG_KTH_PRI;

	memset(rw, 0x00, sizeof(TUNER_DATA_RW));
	rw[0].sngl.bank = Main1;
	rw[0].sngl.adr = 0xED; /* PSCOP1 */

	//daemonize( __FUNCTION__ );
	oldfs = get_fs();
	set_fs(KERNEL_DS);
	ret = sched_setscheduler(g_cnt.irqth_id, SCHED_FIFO, &param);
	set_fs(oldfs);

	while (1) {
		rw[0].sngl.param = 0;
		buf[0] = buf[1] = 0;

		DEBUG_PRINT("%s waiting...", __FUNCTION__);
		wait_event_interruptible(g_cnt.irqth_waitq, g_cnt.irqth_flag);

		spin_lock_irqsave(&g_cnt.poll_lock, flags);
		kthread_flg = g_cnt.irqth_flag;
		g_cnt.irqth_flag &= ~TUNER_IRQKTH_CATCHIRQ; /* 20121122 */
		spin_unlock_irqrestore(&g_cnt.poll_lock, flags);

		if ((kthread_flg & TUNER_IRQKTH_CATCHIRQ) == TUNER_IRQKTH_CATCHIRQ) {
			/* receive IRQ */
			DEBUG_PRINT("%s IRQHANDLER start", __FUNCTION__);

			/* detect which OFDM block is IRQ source */
			ret = tuner_drv_active_bw(&active);
			if (ret) {
				TRACE();
				kthread_flg |= TUNER_KTH_END;
			}
			g_cnt.ev.get.bw = active;

			/* Read  INTCND, INTST */
			ret = tuner_drv_hw_read_reg(
					bank[g_cnt.ev.get.bw],
					intcnd[g_cnt.ev.get.bw],
					2,
					buf);
			if (ret) {
				TRACE();
				kthread_flg |= TUNER_KTH_END;
			}
			/* clear the factor (register) for interrupt (IRQ) */
			/* write (back) INTCND */
			ret = tuner_drv_hw_write_reg(
					bank[g_cnt.ev.get.bw],
					intcnd[g_cnt.ev.get.bw],
					1,
					buf);
			if (ret) {
				TRACE();
				kthread_flg |= TUNER_KTH_END;
			}
			DEBUG_PRINT("bank:%d, adr:0x%02x, intcnd:0x%02x intst:0x%02x",
					bank[g_cnt.ev.get.bw],
					intcnd[g_cnt.ev.get.bw],
					buf[0], buf[1]);

			g_cnt.ev.get.intcnd |= buf[0];
			g_cnt.ev.get.intst |= buf[1];
			g_cnt.ev.get.irqnum++;

			DEBUG_PRINT( "IRQ factor update (%d): INTCND:0x%02x INTST:0x%02x",
					g_cnt.ev.get.irqnum, g_cnt.ev.get.intcnd, g_cnt.ev.get.intst);

			/* release poll/select */
			g_cnt.poll_flag = 0x01;
			wake_up(&g_cnt.poll_waitq);

			DEBUG_PRINT("tuner_interrupt end");

#ifdef TUNER_CONFIG_IRQ_LEVELTRIGGER
			/* activate (re-activate) the interrupt, if the level-interrupt is active */
			tuner_drv_hw_enable_interrupt();
#endif /* TUNER_CONFIG_IRQ_LEVELTRIGGER */
		}

		/* request to finish the interrupt kernel thread */
		if ((kthread_flg & TUNER_KTH_END) == TUNER_KTH_END) {
			DEBUG_PRINT("%s caught the stop request", __FUNCTION__);

			spin_lock_irqsave(&g_cnt.poll_lock, flags);
			g_cnt.irqth_flag &= ~TUNER_KTH_END;
			spin_unlock_irqrestore(&g_cnt.poll_lock, flags);

			break;
		}
	}

	return 0;
}

/**************************************************************************//**
 * initialization control of a driver
 *
 * @date		2011.08.02
 * @author		K.Kitamura(*)
 *
 * @retval		0	normal
 * @retval		<0	error
 ******************************************************************************/
static int __init tuner_drv_start(void)
{
	int ret = 0;
//	struct device *dev = NULL;

	printk(KERN_INFO "mmtuner:%s START!\n", __FUNCTION__);

	/* register "mmtuner" driver */
	ret = platform_driver_register(&mmtuner_driver);
	
	if (ret != 0) {
		ERROR_PRINT(
				"init_module: Error:\
                     failed in platform_driver_register.");
		return ret;
	}

	/* memory allocation */
	mmtuner_device = platform_device_alloc("mmtuner", -1);

	if (!mmtuner_device) {
		ERROR_PRINT("init_module: Error: failed in platform_device_alloc.");
		platform_driver_unregister(&mmtuner_driver);
		return -ENOMEM;
	}
	/* add device */
	ret = platform_device_add(mmtuner_device);
	if (ret) {
		ERROR_PRINT("init_module: Error: failed in platform_device_add.");
		platform_device_put(mmtuner_device);
		platform_driver_unregister(&mmtuner_driver);
		return ret;
	}

    gpio_request(TUNER_CONFIG_PWR, "ISBN_PWR");
    gpio_direction_output(TUNER_CONFIG_PWR, 0);
       
    gpio_request(TUNER_CONFIG_1V8_EN, "ISBN_1V8_EN");
    gpio_direction_output(TUNER_CONFIG_1V8_EN, 0);
       
    gpio_request(TUNER_CONFIG_RESET, "ISBN_RST");
    gpio_direction_output(TUNER_CONFIG_RESET, 0);
    
    gpio_request(TUNER_CONFIG_LNA, "ISBN_LNA");
    gpio_direction_output(TUNER_CONFIG_LNA, 0);


#if defined(DPATH_SPI) || defined(DPATH_SDIO)
	/* initialize TS I/F driver */
	ret = tuner_drv_hw_tsif_register();
	if (ret) {
		TRACE();
		platform_device_put(mmtuner_device);
		platform_driver_unregister(&mmtuner_driver);
		return ret;
	}
#endif

	/* dispatch the kernel thread to handle the interrupt (IRQ) */
	g_cnt.irqth_flag = TUNER_IRQTH_NONE;
	init_waitqueue_head(&g_cnt.irqth_waitq);
	g_cnt.irqth_id =	kthread_create(tuner_drv_irq_th, NULL, "tuner_drv_irq_th");
	if (IS_ERR(g_cnt.irqth_id)) {
		g_cnt.irqth_id = NULL;
		platform_device_put(mmtuner_device);
		platform_driver_unregister(&mmtuner_driver);
		return -EIO;
	}

	init_waitqueue_head(&g_cnt.poll_waitq);
	spin_lock_init(&g_cnt.poll_lock);
	g_cnt.poll_flag = 0x00;

	g_cnt.ev.pack = 0;
	g_cnt.opcnt = 0;
	mtxInit();

	wake_up_process(g_cnt.irqth_id);

#if defined(DPATH_SPI) || defined(DPATH_SDIO)
	/* dispatch a kernel thread to receive TS data */
	g_tscnt.tsifth_wait = true;
	g_tscnt.tsifth_flag = TUNER_IRQTH_NONE;
	init_waitqueue_head(&g_tscnt.tsifth_waitq);
	g_tscnt.tsifth_id = kthread_create(tuner_drv_tsif_th, NULL, "tuner_drv_tsif_th");
	if (IS_ERR(g_tscnt.tsifth_id)) {
		g_tscnt.tsifth_id = NULL;
		platform_device_put(mmtuner_device);
		platform_driver_unregister(&mmtuner_driver);
		return -EIO;
	}
	g_tscnt.pktbuf = NULL;
	g_tscnt.pwr = g_tscnt.prd = 0;
	g_tscnt.ovf = 0;

	wake_up_process(g_tscnt.tsifth_id);

	/* initialize the status flag and the wait-queue for Ts Buffering Thread */
	g_tscnt.tsread_flag = TUNER_TSREAD_IDLE;
	init_waitqueue_head(&g_tscnt.tsread_waitq);
#endif

	printk(KERN_INFO "mmtuner:%s END!\n", __FUNCTION__);

	return 0;
}

/**************************************************************************//**
 * exit control of a driver
 *
 * @date		2011.08.02
 *
 * @author		K.Kitamura(*)
 ******************************************************************************/
static void __exit tuner_drv_end(void)
{
	printk(KERN_INFO "mmtuner:%s START!\n", __FUNCTION__);

	/* exit the kernel thread (for IRQ) */
	g_cnt.irqth_flag |= TUNER_KTH_END;
	if (waitqueue_active(&g_cnt.irqth_waitq)) {
		wake_up(&g_cnt.irqth_waitq);
	}

	/* unregister the IRQ kernel thread */
	if (g_cnt.irqth_id) {
		kthread_stop(g_cnt.irqth_id);
	}

#if defined(DPATH_SPI) || defined(DPATH_SDIO)
	/* exit the kernel thread (for TS) */
	g_tscnt.tsifth_flag &= ~TUNER_TSIFTH_ACTIVE;
	g_tscnt.tsifth_flag |= TUNER_TSIFTH_END;
	if (waitqueue_active(&g_tscnt.tsifth_waitq)) {
		wake_up_interruptible(&g_tscnt.tsifth_waitq);
	}
	g_tscnt.tsifth_wait = true;

	/* unregister the TS kernel thread */
	if (g_tscnt.tsifth_id) {
		kthread_stop(g_tscnt.tsifth_id);
	}

	/* execute the unregister scheme of TS I/F */
	tuner_drv_hw_tsif_unregister();
#endif
    /* delete GPIO request */
    gpio_free(TUNER_CONFIG_RESET);
    gpio_free(TUNER_CONFIG_LNA);
    gpio_free(TUNER_CONFIG_PWR);
    gpio_free(TUNER_CONFIG_1V8_EN);
	/* Destroy device */
	device_destroy(device_class, tuner_dev);
	/* delete a entry of class */
	class_destroy(device_class);
	/* unregister the driver */
	platform_device_unregister(mmtuner_device);
	/* unregister the platform entry */
	platform_driver_unregister(&mmtuner_driver);

	printk(KERN_INFO "mmtuner:%s END!\n", __FUNCTION__);
}

/**************************************************************************//**
 * open control of a driver
 *
 * @date		2011.08.02
 * @author		K.Kitamura(*)
 *
 * @retval		0	normal
 * @retval		<0	error
 *
 * @param [in] Inode, FIle
 ******************************************************************************/
static int tuner_module_entry_open(struct inode* Inode, struct file* FIle)
{
	printk(KERN_INFO "mmtuner:%s START!\n", __FUNCTION__);

#ifdef  TUNER_CONFIG_DRV_MULTI
	g_cnt.opcnt++;
#else  /* TUNER_CONFIG_DRV_MULTI */
	if (g_cnt.opcnt > 0) {
		ERROR_PRINT("open error");
		return -EBUSY;
	} else {
        gpio_set_value(TUNER_CONFIG_1V8_EN, 1);
        gpio_set_value(TUNER_CONFIG_PWR, 1);  /* Turn on the Tuner */
        msleep(5);
        gpio_set_value(TUNER_CONFIG_LNA, 0);
        /* Reset Operation*/
        gpio_set_value(TUNER_CONFIG_RESET, 1);
        msleep(5);
        gpio_set_value(TUNER_CONFIG_RESET, 0);
        msleep(15);
        gpio_set_value(TUNER_CONFIG_RESET, 1);
        INFO_PRINT("mmtuner:The EN Pin status is: %d\n", gpio_get_value(TUNER_CONFIG_PWR));
		g_cnt.opcnt++;
		INFO_PRINT("open count = %u", g_cnt.opcnt);
	}
#endif /* TUNER_CONFIG_DRV_MULTI */

	printk(KERN_INFO "mmtuner:%s END!\n", __FUNCTION__);

	return 0;
}

/**************************************************************************//**
 * close control of a driver
 *
 * @date		2011.08.02
 * @author		K.Kitamura(*)
 *
 * @retval		0	normal
 * @retval		<0	error
 *
 * @param [in] Inode, FIle	regular argument for linux system call
 ******************************************************************************/
static int tuner_module_entry_close(struct inode* Inode, struct file* FIle)
{
	struct devone_data *dev;

	printk(KERN_INFO "mmtuner:%s START!\n", __FUNCTION__);

	if (g_cnt.opcnt == 0) {	/* There is not the opened logical device */
		ERROR_PRINT("close error");
		return -ENODEV;
	} else {
		g_cnt.opcnt--;
	}

	if (g_cnt.opcnt == 0) { /* All logical device is closed. */
		/* free IRQ */
		tuner_drv_hw_freeirq();
        gpio_set_value(TUNER_CONFIG_1V8_EN, 0);
        gpio_set_value(TUNER_CONFIG_PWR, 0); /* Turn off the Tuner */
        INFO_PRINT("mmtuner:The EN Pin status is: %d\n", gpio_get_value(TUNER_CONFIG_PWR));
		if (FIle == NULL) {
			return -EINVAL;
		}
		dev = FIle->private_data;
		if (dev) {
			kfree(dev);
		}
	}
       printk(KERN_INFO "mmtuner:%s END!\n", __FUNCTION__);
	return 0;
}

/**************************************************************************//**
 * "read" system call of mm_tuner device
 *
 * The "read" of "mm_tuner" device acquires the TS data stream of
 * the designated byte size.
 *
 * @date		2014.08.05
 * @author		K.Okawa(KXDA3)
 *
 * @retval >=0		normal (byte size)
 * @retval <0			error
 ******************************************************************************/
static ssize_t tuner_module_entry_read(struct file * FIle, char * Buffer,
		size_t Count, loff_t * OffsetPosition)
{
#if !defined(DPATH_SPI) && !defined(DPATH_SDIO)
	return -ENOSYS;
#else
	ssize_t size = 0;
	int ret;
	int copy_size;

	INFO_PRINT("%s START, TS size = %d [bytes]", __FUNCTION__, Count);

	if (!Buffer) {
		ERROR_PRINT("arg. \"Buffer\" is Null");
		return -EINVAL;
	}
	if (Count <= 0) {
		ERROR_PRINT("arg. \"Count\" is illegal (%d)", Count);
		return -EINVAL;
	}

	if (g_tscnt.tsifth_wait) {
		INFO_PRINT("TS I/F thread is NOT active (waiting...)");
		return -EAGAIN;
	}
	if (g_tscnt.tsread_flag != TUNER_TSREAD_IDLE) {
		ERROR_PRINT("read (TS) system call is executed in duplicate");
		return -EBUSY;
	} else {
		g_tscnt.tsread_flag |= TUNER_TSREAD_ACTIVE;
	}

	g_tscnt.ovf = 0;	/* clear the over-flow flag of the packet buffer */

	do {
		int able_size = 0;

		/* TS FIFO is empty */
		if (g_tscnt.prd == g_tscnt.pwr) {
//			INFO_PRINT("%s: waiting...", __FUNCTION__);
			g_tscnt.tsread_flag = TUNER_TSREAD_WAIT;
			usleep_range(100, 500);
			wait_event_interruptible(g_tscnt.tsread_waitq, g_tscnt.tsread_flag);
//			INFO_PRINT("%s: resume!", __FUNCTION__);
			if (g_tscnt.tsread_flag & TUNER_TSREAD_END) {
				INFO_PRINT("%s: stop reading TS data", __FUNCTION__);
				break;
			} else {
				g_tscnt.tsread_flag |= TUNER_TSREAD_ACTIVE;
			}
			continue;
		}

		/* readable data size of TS FIFO */
		able_size = (g_tscnt.pwr > g_tscnt.prd) ?
				(g_tscnt.pwr - g_tscnt.prd) :
				(g_tscnt.ts_pktbuf_size - g_tscnt.prd);
		/* decide copy_size */
		copy_size = ((size + able_size) > Count) ?
				(Count - size) :
				able_size;
		ret = copy_to_user(
				Buffer + size,
				g_tscnt.pktbuf + g_tscnt.prd,
				copy_size);
		if (ret) {
			ERROR_PRINT("copy_to_user() failed with %d", ret);
			return -EFAULT;
		}

		/* increment read position */
		g_tscnt.prd += copy_size;
		if (g_tscnt.prd == g_tscnt.ts_pktbuf_size) {
			g_tscnt.prd = 0;
		}

		/* increment total copied size */
		size += copy_size;

	} while (size != Count);

	g_tscnt.tsread_flag &= ~TUNER_TSREAD_ACTIVE;

	return size;

#endif
}

/**************************************************************************//**
 * write control of a driver
 *
 * @caution	The previous version of mm_tuner driver have "write"
 * 				system call as writing registers in address continuously.
 * 				But, ioctl(TUNER_IOCTL_CNTSET) is implemented in this
 * 				version.
 *
 * @date		2011.10.31
 * @author		K.Okawa(KXD14)
 *
 * @retval		0			normal
 * @retval		-ENOSYS	(not implemented)
 *
 * @param [in] FIle, Buffer, Count, OffsetPosition
 *		These are regular argument of the system call "write"
 ******************************************************************************/
static ssize_t tuner_module_entry_write(struct file* FIle,
		const char* Buffer, size_t Count, loff_t* OffsetPosition)
{
	TRACE();
	return -ENOSYS;
}

/**************************************************************************//**
 * ioctl system call
 *
 * @date		2011.08.02
 *
 * @author		K.Kitamura(*)
 * @author		K.Okawa(KXDA3)
 *
 * @retval 0			normal
 * @retval <0			error
 ******************************************************************************/
#if LINUX_VERSION_CODE < KERNEL_VERSION(2,6,36)
static int tuner_module_entry_ioctl(struct inode* Inode, struct file* FIle,
		unsigned int uCommand, unsigned long uArgument)
#else  /* LINUX_VERSION_CODE */
static long tuner_module_entry_ioctl(struct file *file,
		unsigned int uCommand, unsigned long uArgument)
#endif /* LINUX_VERSION_CODE */
{
	int ret = 0;
	TUNER_DATA_RW rw;
	TUNER_DATA_EVENT ev;
	unsigned long copy_ret;

	INFO_PRINT("%s START", __FUNCTION__);

	mtxLock(); /* exclusive control (lock) */

	switch (uCommand) {
	/* get a parameter of the register of Tuner */
	case TUNER_IOCTL_VALGET:
		copy_ret = copy_from_user(&rw, &(*(TUNER_DATA_RW *) uArgument), sizeof(TUNER_DATA_RW));
		if (copy_ret != 0) {
			TRACE();
			mtxLock(); /* exclusive control (lock) */
			return -EINVAL;
		}
		ret = tuner_drv_read_regs(&rw, 1);
		if (ret == 0) {
			copy_ret = copy_to_user(&(*(TUNER_DATA_RW *) uArgument), &rw, sizeof(TUNER_DATA_RW));
			if (copy_ret != 0) {
				TRACE();
				mtxUnlock(); /* exclusive control (unlock) */
				return -EINVAL;
			}
		}
		break;
	/* write a parameters to the register of Tuner */
	case TUNER_IOCTL_VALSET:
		copy_ret = copy_from_user(&rw, &(*(TUNER_DATA_RW *) uArgument), sizeof(TUNER_DATA_RW));
		if (copy_ret != 0) {
			TRACE();
			mtxUnlock(); /* exclusive control (unlock) */
			return -EINVAL;
		}
		ret = tuner_drv_write_regs(&rw, 1);
		break;
	/* write the continuous address registers */
	case TUNER_IOCTL_CNTSET:
	{
        DEBUG_PRINT("*** TUNER_IOCTL_CNTSET_EVENT ***");
		uint8_t *buf;
		copy_ret = copy_from_user(&rw, &(*(TUNER_DATA_RW *)uArgument), sizeof(TUNER_DATA_RW));
		if (copy_ret != 0) {
			TRACE();
			mtxUnlock() /* exclusive control (unlock) */
			return -EINVAL;
		}
		buf = (uint8_t *)vmalloc(rw.cont.len);
		if (buf == NULL) {
			TRACE();
			mtxUnlock() /* exclusive control (unlock) */
			return -ENOMEM;
		}
		copy_ret = copy_from_user(buf, rw.cont.buf, rw.cont.len);
		if (copy_ret != 0) {
			TRACE();
			mtxUnlock() /* exclusive control (unlock) */
			vfree(buf);
			return -EINVAL;
		}
		ret = tuner_drv_hw_write_reg(rw.cont.bank, rw.cont.adr, rw.cont.len, buf);

		vfree(buf);
	}
		break;
		/* write the continuous address registers */
	case TUNER_IOCTL_CNTGET:
	{
		uint8_t *buf;
		copy_ret = copy_from_user(&rw, &(*(TUNER_DATA_RW *)uArgument), sizeof(TUNER_DATA_RW));
		if (copy_ret != 0) {
			TRACE();
			mtxUnlock() /* exclusive control (unlock) */
			return -EINVAL;
		}
		buf = (uint8_t *)vmalloc(rw.cont.len);
		if (buf == NULL) {
			TRACE();
			mtxUnlock() /* exclusive control (unlock) */
			return -ENOMEM;
		}
		ret = tuner_drv_hw_read_reg(rw.cont.bank, rw.cont.adr, rw.cont.len, buf);
		if (ret == 0) {
			copy_ret = copy_to_user(((TUNER_DATA_RW *)uArgument)->cont.buf, buf, rw.cont.len);
			if (copy_ret != 0) {
				TRACE();
				mtxUnlock() /* exclusive control (unlock) */
				vfree(buf);
				return -EINVAL;
			}
		}
		vfree(buf);
	}
		break;
	/* get the interrupt factor and status */
	case TUNER_IOCTL_EVENT_GET:
		copy_ret = copy_to_user(&(*(TUNER_DATA_EVENT *)uArgument),
				&g_cnt.ev, sizeof(TUNER_DATA_EVENT));
		if (copy_ret) {
			TRACE();
			mtxUnlock(); /* exclusive control (unlock) */
			return -EINVAL;
		}
		DEBUG_PRINT( "// IRQ factor send: bw:%u intset1:0x%02x intcnd:0x%02x intst:0x%02x",
				g_cnt.ev.get.bw, g_cnt.ev.get.intset1, g_cnt.ev.get.intcnd, g_cnt.ev.get.intst );

		/* initialize the variables for the interrupt information */
		g_cnt.ev.pack = 0;
		ret = copy_ret;
		break;
	/* be available some interrupts */
	case TUNER_IOCTL_EVENT_SET:
		DEBUG_PRINT("*** VALSET_EVENT ***");
		copy_ret = copy_from_user(&ev, &(*(TUNER_DATA_EVENT *)uArgument),
				sizeof(TUNER_DATA_EVENT));
		if (copy_ret != 0) {
			TRACE();
			mtxUnlock(); /* exclusive control (unlock) */
			return -EINVAL;
		}
		ret = tuner_drv_setev(&ev);
		if (ret) {
			TRACE();
			mtxUnlock(); /* exclusive control (unlock) */
			return ret;
		}
		break;
	/* be disable some interrupts */
	case TUNER_IOCTL_EVENT_REL:
		copy_ret = copy_from_user(&ev, &(*(TUNER_DATA_EVENT *) uArgument),	sizeof(TUNER_DATA_EVENT));
		if (copy_ret != 0) {
			TRACE();
			mtxUnlock(); /* exclusive control (unlock) */
			return -EINVAL;
		}
		ret = tuner_drv_relev(&ev);
		break;
#if defined(DPATH_SPI) || defined(DPATH_SDIO)
	/* start to receive TS data from Tuner */
	case TUNER_IOCTL_TSIF_START:
		if (!g_tscnt.tsifth_wait) {
			TRACE();
			mtxUnlock();
			return -EBUSY;
		}
		if (g_tscnt.tsif != NULL) {
			TRACE();
			mtxUnlock();
			return -EBUSY;
		}
		g_tscnt.tsif = (TUNER_DATA_TSIF *)kmalloc(sizeof(TUNER_DATA_TSIF), GFP_KERNEL);
		if (g_tscnt.tsif == NULL) {
			ERROR_PRINT("memory allocation error");
			mtxUnlock();
			return -ENOMEM;
		}
		copy_ret = copy_from_user(g_tscnt.tsif, &(*(TUNER_DATA_TSIF *)uArgument), sizeof(TUNER_DATA_TSIF));
		if (copy_ret) {
			TRACE();
			mtxUnlock(); /* exclusive control (unlock) */
			return -EINVAL;
		}
		ret = tuner_drv_tsif_start();
		break;
	/* stop to receive TS data from Tuner */
	case TUNER_IOCTL_TSIF_STOP:
		ret = tuner_drv_tsif_stop();
		break;
	/* return byte num of a TS packet */
	case TUNER_IOCTL_TSIF_PKTSIZE:
	{
		int len = 0;
		len = tuner_drv_tsif_pktsize();
		if (len < 0) {
			TRACE();
			mtxUnlock();
			return len;
		}
		copy_ret = copy_to_user(&(*(unsigned int *) uArgument), &len, sizeof(unsigned int));
		if (copy_ret != 0) {
			TRACE();
			mtxUnlock(); /* exclusive control (unlock) */
			return -EINVAL;
		}
	}
		break;
#endif
	default:
		TRACE();
		ret = -EINVAL;
		break;
	}

	mtxUnlock(); /* exclusive control (unlock) */

//	INFO_PRINT("%s END", __FUNCTION__);

	return ret;
}

/**************************************************************************//**
 * poll control of a driver
 *
 * @date		2011.08.23
 * @author		M.Takahashi(*)
 *
 * @retval		0	normal
 * @retval		<0	error
 ******************************************************************************/
static unsigned int tuner_module_entry_poll(struct file *file,
		struct poll_table_struct *poll_tbl)
{
	unsigned long tuner_flags;
	unsigned int tuner_mask;

	/* initialize */
	tuner_mask = 0;

	/* wait */
	poll_wait(file, &g_cnt.poll_waitq, poll_tbl);

	/* disable the interrupt */
	spin_lock_irqsave(&g_cnt.poll_lock, tuner_flags);

	/* release */
	if (g_cnt.poll_flag == 0x01) {
		tuner_mask = (POLLIN | POLLRDNORM);
	}

	g_cnt.poll_flag = 0x00;

	/* enable the interrupt */
	spin_unlock_irqrestore(&g_cnt.poll_lock, tuner_flags);

	return tuner_mask;
}

/**************************************************************************//**
 * interrupt control of a driver
 *
 * @date		2011.08.23
 * @author		M.Takahashi(*)
 *
 * @retval		IRQ_NONE			interrupt was not from this device
 * @retval		IRQ_HANDLED		interrupt was handled by this device
 * @retval		IRQ_WAKE_THREAD	handler requests to wake the handler
 * 									thread
 *
 * @param [in] irq		irq#
 * @parma [in] dev_id	device ID
 ******************************************************************************/
#ifndef TUNER_CONFIG_IRQ_PC_LINUX
irqreturn_t tuner_interrupt(int irq, void *dev_id)
#else  /* TUNER_CONFIG_IRQ_PC_LINUX */
int tuner_interrupt( void )
#endif /* TUNER_CONFIG_IRQ_PC_LINUX */
{
	INFO_PRINT("%s START", __FUNCTION__);

	/* The main scheme for IRQ is in the IRQ kernel thread.
	 * Here is the wake up operation, only.
	 */
	g_cnt.irqth_flag |= TUNER_IRQKTH_CATCHIRQ;
	if (waitqueue_active(&g_cnt.irqth_waitq)) {
#ifdef TUNER_CONFIG_IRQ_LEVELTRIGGER
		/* disabling IRQ, when the level interrupt is avail. */
		tuner_drv_hw_disable_interrupt();
#endif /* TUNER_CONFIG_IRQ_LEVELTRIGGER */
		wake_up( &g_cnt.irqth_waitq);
	} else {
		DEBUG_PRINT("tuner_interrupt waitqueue_active err!!! ");
		/* When the wake-up scheme don't work, stop the receiving IRQ */
		//20121122        tuner_drv_release_interrupt();
	}

	DEBUG_PRINT("%s END", __FUNCTION__);

	return IRQ_HANDLED;
}

/**************************************************************************//**
 * read some registers
 *
 * (no description)
 *
 * @date		2014.07.28
 * @author		K.Okawa(KXDA3)
 *
 * @retval 0		normal
 * @retval <0		error
 ******************************************************************************/
int tuner_drv_read_regs(TUNER_DATA_RW *rw, int num)
{
	int i;
	int ret;

	if (rw == NULL) {
		TRACE();
		return -EINVAL;
	}
	for (i = 0; i < num; i++) {
		ret = tuner_drv_hw_read_reg(
				rw[i].sngl.bank,
				rw[i].sngl.adr,
				1,
				&(rw[i].sngl.param));
		if (ret) {
			TRACE();
			return ret;
		}
	}
	return 0;
}

/**************************************************************************//**
 * write some registers of the tuner device.
 *
 * (no description)
 *
 * @date		2014.07.28
 * @author		K.Okawa(KXDA3)
 *
 * @retval 0			normal
 * @retval -EINVAL	error
 ******************************************************************************/
int tuner_drv_write_regs(TUNER_DATA_RW *rw, int num)
{
	int i;
	int ret;
	uint8_t bitmask;
	uint8_t wdata;

	if (rw == NULL) {
		TRACE();
		return -EINVAL;
	}
	for (i = 0; i < num; i++) {
		if (rw[i].sngl.enabit == 0x00) {
			if (rw[i].sngl.sbit > 7 || rw[i].sngl.ebit > 7
					|| rw[i].sngl.sbit > rw[i].sngl.ebit) {
				TRACE();
				return -EINVAL;
			}
			if (rw[i].sngl.sbit == 7 && rw[i].sngl.ebit == 0) {
				bitmask = 0xff;
			} else {
				bitmask = (uint8_t)(((1U << (1+rw[i].sngl.ebit-rw[i].sngl.sbit))-1) << rw[i].sngl.sbit);
			}
		} else {
			bitmask = rw[i].sngl.enabit;
		}
		if (bitmask == 0xff) {
			/* write all bit */
			DEBUG_PRINT("Write ALL BITS");
			wdata = rw[i].sngl.param;
		} else {
			/* read-(bit)modify-write */
			ret = tuner_drv_hw_read_reg(rw[i].sngl.bank, rw[i].sngl.adr, 1, &wdata);
			DEBUG_PRINT("Read-Modify-Write current:0x%02x bitmask:0x%02x", wdata, bitmask);
			if (ret) {
				TRACE();
				return ret;
			}
			wdata = (~bitmask & wdata) | (bitmask & rw[i].sngl.param);
		}
		ret = tuner_drv_hw_write_reg(rw[i].sngl.bank, rw[i].sngl.adr, 1, &wdata);
		if (ret) {
			TRACE();
			return ret;
		}
	}
	return 0;
}

/**************************************************************************//**
 * Set the event (interrupt) condition.
 *
 * This function set some specified interrupt (event) conditions,
 * and, be enable the interrupt sub system.
 *
 * @date		2014.08.01
 * @author		K.Okawa(KXDA3)
 *
 * @retval 0			normal
 * @retval <0			error
 ******************************************************************************/
int tuner_drv_setev(TUNER_DATA_EVENT *ev)
{
	int ret;
	enum _bw_cir active;
	TUNER_DATA_RW rw[1];
	uint8_t buf[2] = { 0x00, 0x00 };

	const enum _reg_bank bank[2] = { Main1, Main2 };
	const uint8_t intdef1[2] = { 0xDC, 0xC7 };
	const uint8_t intset1[2] = { 0xDE, 0xC9 };

	if (ev == NULL) {
		TRACE();
		return -EINVAL;
	}

	/* to detect which OFDM block is active */
	ret = tuner_drv_active_bw(&active);
	if (ret) {
		TRACE();
		return ret;
	}

	DEBUG_PRINT("bw:%u mode:%u intset1:0x%02x intdef1:0x%02x intdef2:0x%01x",
			ev->set.bw, ev->set.mode, ev->set.intset1, ev->set.intdef1, ev->set.intdef2);

	if (ev->set.mode == TUNER_EVENT_MODE_ADD) {
		ret = tuner_drv_hw_read_reg(bank[ev->set.bw],	intdef1[ev->set.bw], 2, buf);
		if (ret) {
			TRACE();
			return ret;
		}
		buf[0] |= ev->set.intdef1;
		buf[1] |= ev->set.intdef2;
	} else if (ev->set.mode == TUNER_EVENT_MODE_OVW) {
		buf[0] = ev->set.intdef1;
		buf[1] = ev->set.intdef2;
	} else {
		TRACE();
		return -EINVAL;
	}

	/* write INTDEF */
	ret = tuner_drv_hw_write_reg(bank[ev->set.bw], intdef1[ev->set.bw], 2, buf);
	if (ret) {
		TRACE();
		return ret;
	}

	/* write INTSET1 */
	memset(rw, 0x00, sizeof(TUNER_DATA_RW));
	rw[0].sngl.bank = bank[ev->set.bw];
	rw[0].sngl.adr = intset1[ev->set.bw];
	rw[0].sngl.enabit = 0x09; /* bit-3:INTEN, bit-0:INTMD */
	rw[0].sngl.param = ev->set.intset1;
	ret = tuner_drv_write_regs(rw, 1);
	if (ret) {
		TRACE();
		return ret;
	}

	if (ev->set.bw == active && (buf[0] | (buf[1] & 0x0F)) != 0x00) {
		ret = tuner_drv_hw_reqirq();
		if (ret) {
			TRACE();
			return ret;
		}
	}

	return 0;
}

/**************************************************************************//**
 * Clear the IRQ (interrupt) conditions.
 *
 * This function clear the specified interrupt conditions.
 * And, be disabled the IRQ sub-system, when the all interrupt conditions
 * are not active.
 *
 * @date		2014.08.05
 * @author		K.Okawa(KXDA3)
 *
 * @retval 0			normal
 * @retval <0			error
 ******************************************************************************/
int tuner_drv_relev(TUNER_DATA_EVENT *ev)
{
	int ret;
	enum _bw_cir active;
	//TUNER_DATA_RW rw[1];
	uint8_t buf[2] = { 0x00, 0x00 };

	const enum _reg_bank bank[2] = { Main1, Main2 };
	const uint8_t intdef1[2] = { 0xDC, 0xC7 };

	if (ev == NULL) {
		TRACE();
		return -EINVAL;
	}

	/* to detect which OFDM block is active */
	ret = tuner_drv_active_bw(&active);
	if (ret) {
		TRACE();
		return ret;
	}

	/* read INTDEF1/2 */
	ret = tuner_drv_hw_read_reg(bank[ev->set.bw], intdef1[ev->set.bw], 2, buf);
	if (ret) {
		TRACE();
		return ret;
	}

	/* clear specified bits */
	buf[0] &= ~(ev->set.intdef1);
	buf[1] &= ~(ev->set.intdef2);

	/* write INTDEF1/2 */
	ret = tuner_drv_hw_write_reg(bank[ev->set.bw], intdef1[ev->set.bw], 2, buf);
	if (ret) {
		TRACE();
		return ret;
	}

	if (active == ev->set.bw && (buf[0] | (buf[1] & 0x0F)) == 0x00) {
		tuner_drv_hw_freeirq();
	}

	return 0;
}

/**************************************************************************//**
 * detect active OFDM block (BW13 or BW01)
 *
 * @date		2014.08.22
 *
 * @author		K.Okawa(KXDA3)
 *
 * @retval 0			normal
 * @retval <0			error
 ******************************************************************************/
static int __inline tuner_drv_active_bw(enum _bw_cir *pbw)
{
	int ret;
	TUNER_DATA_RW rw[1];

	memset(rw, 0x00, sizeof(TUNER_DATA_RW));
	rwSnglSet(rw[0], Main1, 0xED, 0x00, 0x00);
	ret = tuner_drv_read_regs(rw, 1);
	if (ret) {
		TRACE();
		return ret;
	}
	*pbw = ((rw[0].sngl.param & 0xC0) == 0x40) ? TUNER_DRV_BW1 : TUNER_DRV_BW13;
	return 0;
}

#if defined(DPATH_SPI) || defined(DPATH_SDIO)
/**************************************************************************//**
 * TS I/F (buffering) thread function
 *
 * @caption
 * 	Original is "tuner_tsbufferring_thread" implemented by
 * 	T.Abe(FSI).
 *
 * @date	2014.08.21
 *
 * @author K.Okawa (KXDA3)
 *
 * @retval 0			Normal end
 * @retval <0			error (refer the errno)
 *
 * @param [in] arg	pointer to the TUNER_DATA_TSIF structure
 ******************************************************************************/
int tuner_drv_tsif_th(void *arg)
{
	int ret = 0;
	struct sched_param param;
	mm_segment_t oldfs;
	int dataready = 0;

	INFO_PRINT("%s START", __FUNCTION__);

	/* set the priority of thread */
	param.sched_priority = TUNER_CONFIG_TSBTH_PRI;
	//daemonize("mmtuner_tsifth");

	oldfs = get_fs();
	set_fs(KERNEL_DS);
	ret = sched_setscheduler(g_tscnt.tsifth_id, SCHED_FIFO, &param);
	set_fs(oldfs);

	/* thread main loop */
	while (1) {
		wait_event_interruptible(g_tscnt.tsifth_waitq, g_tscnt.tsifth_flag);

		/* TS buffering */
		if (g_tscnt.tsifth_flag & TUNER_TSIFTH_ACTIVE) {
			ret = tuner_drv_hw_tsif_get_dready();
			if (ret < 0) {
				TRACE();
				return ret;
			} else {
				dataready = (uint8_t)ret;
			}
			if (dataready & 0x04) {	/* OVERRUN */
				ERROR_PRINT("OVER-Run error:0x%02x", dataready);
				ret = tuner_drv_hw_tsif_sync_pkt();
				if (ret) {
					TRACE();
					return ret;
				}
				continue;
			}
			if (!(dataready & 0x01)) {	/* not DATAREADY */
				if (dataready & 0x02) { /* UNDERRUN */
					INFO_PRINT("UNDER-Run error:0x%02x", dataready);
					ret = tuner_drv_hw_tsif_sync_pkt();
					if (ret) {
						TRACE();
						return ret;
					}
				}
				usleep_range(100, 500);
				continue;
			}

			/* TS buffering */
			ret = tuner_drv_hw_tsif_get_pkts(&g_tscnt);
			if (ret < 0) {
				TRACE();
				return ret;
			}

			/* TS packet buffer over-flow detection */
			if (g_tscnt.pwr <= g_tscnt.prd &&
					g_tscnt.prd < g_tscnt.pwr + g_tscnt.ts_rx_size) {
				if (g_tscnt.tsread_flag) {
					g_tscnt.ovf ++;
				}
				if ((g_tscnt.ovf % 100) == 1) {
					INFO_PRINT("packet buffer over flow (%d)", g_tscnt.ovf);
				}
			}

			/* wake up the TS read */
			if (g_tscnt.tsread_flag == TUNER_TSREAD_WAIT) {
				g_tscnt.tsread_flag |= TUNER_TSREAD_IDLE;
				if (waitqueue_active(&g_tscnt.tsread_waitq)) {
					wake_up_interruptible(&g_tscnt.tsread_waitq);
				}
			}
		}

		/* check the stop request to the TS I/F thread */
		if (g_tscnt.tsifth_flag & TUNER_TSIFTH_END) {
			DEBUG_PRINT("%s caught the stop request", __FUNCTION__);
			g_tscnt.tsifth_flag &= ~TUNER_TSIFTH_END;
			break;
		}
	} /* while */

	INFO_PRINT("%s END", __FUNCTION__);

	return ret;
}

/**************************************************************************//**
 * Start to receive TS data.
 *
 * This function activate to receive TS data.
 * The "tsifth" which is the kernel thread to receive and store
 * the TS data from the tuner device had been dispatched and wait.
 *
 * @date		2013.12.06
 *
 * @author		S.Sasaki(FSI)
 * @author		K.Okawa(KXDA3)
 *
 * @retval 0			normal
 * @retval <0			error
 ******************************************************************************/
static int tuner_drv_tsif_start(void)
{
	int ret = 0;

	INFO_PRINT("%s START", __FUNCTION__);


	if (!g_tscnt.tsifth_wait) {
		/* TS I/F active! */
		TRACE();
		return -EINPROGRESS;
	}

	ret = tuner_drv_hw_tsif_set_cntxt(&g_tscnt);
	if (ret) {
		TRACE();
		return ret;
	}

	INFO_PRINT("BW:%d PKTSIZE:%d PKTNUM:%d RXSIZE:%d BUFSIZE:%d",
			g_tscnt.bw, g_ts_pkt_size[g_tscnt.tsif->ts_pkt_type],
			g_tscnt.ts_rxpkt_num, g_tscnt.ts_rx_size,
			g_tscnt.ts_pktbuf_size);

	g_tscnt.pktbuf = (uint8_t *)kmalloc(g_tscnt.ts_pktbuf_size, GFP_KERNEL);
	if (g_tscnt.pktbuf == NULL) {
		TRACE();
		return -ENOMEM;
	}

	memset(g_tscnt.pktbuf, 0, g_tscnt.ts_pktbuf_size);
	g_tscnt.pwr = g_tscnt.prd = 0;
	g_tscnt.ovf = 0;

	ret = tuner_drv_hw_tsif_config(&g_tscnt);
	if (ret) {
		TRACE();
		kfree(g_tscnt.pktbuf);
		return ret;
	}

	/* TS read operation is IDLE state. */
	g_tscnt.tsread_flag = TUNER_TSREAD_IDLE;

	/* re-activate TS I/F */
	g_tscnt.tsifth_flag |= TUNER_TSIFTH_ACTIVE;
	if (waitqueue_active(&g_tscnt.tsifth_waitq)) {
		wake_up_interruptible(&g_tscnt.tsifth_waitq);
	}
	g_tscnt.tsifth_wait = false;

	DEBUG_PRINT("%s END", __FUNCTION__);

	return ret;
}

/**************************************************************************//**
 * Stop receiving TS data.
 *
 * This function make the TS I/F thread wait status.
 *
 * @date		2014.08.21
 *
 * @author		S.Sasaki(FSI)
 * @author		K.Okawa(KXDA3)
 *
 * @retval 0			normal
 * @retval <0			error
 ******************************************************************************/
static int tuner_drv_tsif_stop(void)
{
	int ret = 0;
	uint32_t i = 0;

	INFO_PRINT("%s START", __FUNCTION__);

	if (g_tscnt.tsifth_wait) {
		/* TS I/F is NOT active! */
		TRACE();
		return -EALREADY;
	}

	/* stop (be waiting status) TS I/F thread */
	g_tscnt.tsifth_flag &= ~TUNER_TSIFTH_ACTIVE;
	g_tscnt.tsifth_wait = true;

	/* confirm the status of the TS I/F thread */
	while (1) {
		/*
		 * NOTE
		 * It takes about 20-30[ms] to become able to detect the TS
		 * I/F thread changed in waiting state in the return value of
		 * the waitqueue_activate() function.
		 */
		if (waitqueue_active(&g_tscnt.tsifth_waitq)) {
			DEBUG_PRINT("TS I/F thread is going to do the stop procedure.");
			break;
		}

		usleep_range(TUNER_TSIFTH_SLEEP_MIN, TUNER_TSIFTH_SLEEP_MAX);

		i++;
		if (TUNER_TSIFTH_SLEEP_RETRY <= i) {
			ERROR_PRINT("cannot stop TS I/F thread");
			break;
		}
	}

	/* release the waiting in TS read operation */
	if (g_tscnt.tsread_flag == TUNER_TSREAD_WAIT) {
		g_tscnt.tsread_flag |= TUNER_TSREAD_END;
		if (waitqueue_active(&g_tscnt.tsread_waitq)) {
			wake_up_interruptible( &g_tscnt.tsread_waitq);
		}
	}

	g_tscnt.pwr = g_tscnt.prd = 0;
	g_tscnt.ovf = 0;
	g_tscnt.ts_rxpkt_num = 0;
	g_tscnt.ts_rx_size = 0;
	g_tscnt.ts_pktbuf_size = 0;

	kfree(g_tscnt.pktbuf);
	kfree(g_tscnt.tsif);

	g_tscnt.pktbuf = NULL;
	g_tscnt.tsif = NULL;

#if TUNER_TIME_MEASURE
	DEBUG_PRINT("Time_max = %lld / Time_min = %lld\n", time_max, time_min);
#endif

	DEBUG_PRINT("%s END", __FUNCTION__);

	return ret;
}

/**************************************************************************//**
 * return TS packet size
 *
 * @date		2014.09.02
 *
 * @author		K.Okawa(KXDA3)
 *
 * @retval		>0	packet size
 * @retval		<0	error
 ******************************************************************************/
int tuner_drv_tsif_pktsize(void)
{
	INFO_PRINT("%s START",__FUNCTION__);

	if (g_tscnt.tsifth_wait) {
		INFO_PRINT("TS I/F thread is not active");
		return -EAGAIN;
	}

	return (int)(g_ts_pkt_size[g_tscnt.tsif->ts_pkt_type]);
}

#endif /* TUNER_CONFIG_DPATH != TUNER_DPATH_NONE */

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Panasonic Co., Ltd.");
MODULE_DESCRIPTION("MM Tuner Driver");

module_init(tuner_drv_start);
module_exit(tuner_drv_end);
/*******************************************************************************
 *              Copyright(c) 2011 Panasonic Co., Ltd.
 ******************************************************************************/
