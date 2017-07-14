/**
 * TSIF driver client
 *
 * Character device that, being read
 * returns stream of TSIF packets.
 *
 * Copyright: 	(C) 2015 huawei.
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

#include <linux/module.h>  
#include <linux/kernel.h>      
#include <linux/cdev.h>
#include <linux/err.h>        
#include <linux/fs.h>
#include <linux/device.h>
#include <linux/sched.h> 
#include <linux/uaccess.h>  
#include <asm/cacheflush.h>
#include <linux/dma-direction.h>
#include <tsif_api.h>
#include <asm/cacheflush.h>



struct tsif_chrdev {
	struct cdev cdev;
	struct device *dev;
	wait_queue_head_t wq_read;
	void *cookie;
	/* mirror for tsif data */
	void *data_buffer;
	unsigned buf_size_packets; /**< buffer size in packets */
	unsigned ri, wi;
	enum tsif_state state;
	unsigned rptr;
};



static struct class *tsif_class;
struct class *hisi_tsi_class = NULL;

struct class *hisi_tsi_get_class(void)
{        
    if(NULL == hisi_tsi_class)
    {
        hisi_tsi_class = class_create(THIS_MODULE, "hisi_tsi");
        if(IS_ERR(hisi_tsi_class))
        {
            printk("hisi_tsi_get_class create fail\n");
            return NULL;
        }
    }
    return hisi_tsi_class;
}

static ssize_t tsif_open(struct inode *inode, struct file *file)
{
	int rc;
	struct tsif_chrdev *the_dev =
	       container_of(inode->i_cdev, struct tsif_chrdev, cdev);
	if (!the_dev->cookie)  /* not bound yet */
		return -ENODEV;
	file->private_data = the_dev;
	rc = tsif_start(the_dev->cookie);
	if (rc)
		return rc;
	tsif_get_info(the_dev->cookie, &the_dev->data_buffer,
		      &the_dev->buf_size_packets);
	the_dev->rptr = 0;
	return nonseekable_open(inode, file);
}

static ssize_t tsif_release(struct inode *inode, struct file *filp)
{
	struct tsif_chrdev *the_dev = filp->private_data;
	tsif_stop(the_dev->cookie);
	return 0;
}



static ssize_t tsif_read(struct file *filp, char __user *buf, size_t count,
			 loff_t *f_pos)
{
	int avail = 0;
	int wi;
	struct tsif_chrdev *the_dev = filp->private_data;
	tsif_get_state(the_dev->cookie, &the_dev->ri, &the_dev->wi,
		       &the_dev->state);

	/* consistency check */
	if (the_dev->ri != (the_dev->rptr / TSIF_PKT_SIZE)) {
		dev_err(the_dev->dev,
			"%s: inconsistent read pointers: ri %d rptr %d\n",
			__func__, the_dev->ri, the_dev->rptr);
		the_dev->rptr = the_dev->ri * TSIF_PKT_SIZE;
	}
	/* ri == wi if no data */
	if (the_dev->ri == the_dev->wi) {
		/* shall I block waiting for data? */
		if (filp->f_flags & O_NONBLOCK) {
			if (the_dev->state == tsif_state_running) {
				return -EAGAIN;
			} else {
				/* not running -> EOF */
				return 0;
			}
		}
		if (wait_event_interruptible(the_dev->wq_read,
		      (the_dev->ri != the_dev->wi) ||
		      (the_dev->state != tsif_state_running))) {
			/* got signal -> tell FS to handle it */
			return -ERESTARTSYS;
		}
		if (the_dev->ri == the_dev->wi) {
			/* still no data -> EOF */
			return 0;
		}
	}
	/* contiguous chunk last up to wi or end of buffer */
	wi = (the_dev->wi > the_dev->ri) ?
		the_dev->wi : the_dev->buf_size_packets;
	avail = min(wi * TSIF_PKT_SIZE - the_dev->rptr, count);
    __dma_map_area(the_dev->data_buffer + the_dev->rptr, avail, DMA_FROM_DEVICE);
	if (copy_to_user(buf, the_dev->data_buffer + the_dev->rptr, avail))
		return -EFAULT;
	the_dev->rptr = (the_dev->rptr + avail) %
		(TSIF_PKT_SIZE * the_dev->buf_size_packets);
	the_dev->ri = the_dev->rptr / TSIF_PKT_SIZE;
	*f_pos += avail;
	tsif_reclaim_packets(the_dev->cookie, the_dev->ri);
	return avail;
}

static void tsif_notify(void *data)
{
	struct tsif_chrdev *the_dev = data;
	tsif_get_state(the_dev->cookie, &the_dev->ri, &the_dev->wi,
		       &the_dev->state);
	wake_up_interruptible(&the_dev->wq_read);
}

static const struct file_operations tsif_fops = {
	.owner   = THIS_MODULE,
	.read    = tsif_read,
	.open    = tsif_open,
	.release = tsif_release,
};


static dev_t tsif_dev;  /**< 1-st dev_t from allocated range */
static dev_t tsif_dev0; /**< next not yet assigned dev_t */

static int tsif_init_one(struct tsif_chrdev *the_dev, int index)
{
	int rc;
	pr_info("%s[%d]\n", __func__, index);
	cdev_init(&the_dev->cdev, &tsif_fops);
	the_dev->cdev.owner = THIS_MODULE;
	init_waitqueue_head(&the_dev->wq_read);
	rc = cdev_add(&the_dev->cdev, tsif_dev0, 1);
	the_dev->dev = device_create(tsif_class, NULL, the_dev->cdev.dev,
				     the_dev, "tsif%d", index);
	if (IS_ERR(the_dev->dev)) {
		rc = PTR_ERR(the_dev->dev);
		pr_err("device_create failed: %d\n", rc);
		goto err_create;
	}
	the_dev->cookie = tsif_attach(index, tsif_notify, the_dev);
	if (IS_ERR(the_dev->cookie)) {
		rc = PTR_ERR(the_dev->cookie);
		pr_err("tsif_attach failed: %d\n", rc);
		goto err_attach;
	}
	/* now data buffer is not allocated yet */
	tsif_get_info(the_dev->cookie, &the_dev->data_buffer, NULL);
	dev_info(the_dev->dev,
		 "Device %d.%d attached to TSIF, buffer size %d\n",
		 MAJOR(the_dev->cdev.dev), MINOR(the_dev->cdev.dev),
		 the_dev->buf_size_packets);
	return 0;
err_attach:
	device_destroy(tsif_class, the_dev->cdev.dev);
err_create:
	cdev_del(&the_dev->cdev);
	return rc;
}

static void tsif_exit_one(struct tsif_chrdev *the_dev)
{
	dev_info(the_dev->dev, "%s\n", __func__);
	tsif_detach(the_dev->cookie);
	device_destroy(tsif_class, the_dev->cdev.dev);
	cdev_del(&the_dev->cdev);
}

#define TSIF_NUM_DEVS 1 /**< support this many devices */

struct tsif_chrdev the_devices[TSIF_NUM_DEVS];

static int __init mod_init(void)
{
	int rc;
	int instance;
	rc = alloc_chrdev_region(&tsif_dev, 0, TSIF_NUM_DEVS, "tsif");
	if (rc) {
		pr_err("alloc_chrdev_region failed: %d\n", rc);
		goto err_devrgn;
	}
	tsif_dev0 = tsif_dev;
	tsif_class = hisi_tsi_get_class();//class_create(THIS_MODULE, "tsif");
	if (IS_ERR(tsif_class)) {
		rc = PTR_ERR(tsif_class);
		pr_err("Error creating tsif class: %d\n", rc);
		goto err_class;
	} 

	instance = tsif_get_active();
    printk("chrdev 2 instance = %d\n",instance);
	if (instance >= 0)
		rc = tsif_init_one(&the_devices[0], instance);
	else
		rc = instance;
	if (rc)
		goto err_init1;
    printk("tsif chrdev is ok!\n");
	return 0;
err_init1:
	class_destroy(tsif_class);
err_class:
	unregister_chrdev_region(tsif_dev, TSIF_NUM_DEVS);
err_devrgn:
	return rc;
}

static void __exit mod_exit(void)
{
	tsif_exit_one(&the_devices[0]);
	class_destroy(tsif_class);
	unregister_chrdev_region(tsif_dev, TSIF_NUM_DEVS);
}

#if 0
char g_tsif_buff[1024*1024]={0};


int tsif_dev_test(void)
{
	mm_segment_t fs;
	struct file *filp = NULL;
	int rc=0;
    int tmp = 0;

	fs = get_fs();
	set_fs(KERNEL_DS);

	filp = sys_open("/dev/tsif0", O_RDONLY, 0666);
	if (IS_ERR_OR_NULL(filp)) {
		rc = -EFAULT;
		pr_err("%s, fail to open file,filp = %d,.\n", __func__,filp);
		return rc;
	}
    pr_err("sys open ok =%p.\n",filp);

	//tmp = filp->f_op->read(filp, (char*)&g_tsif_buff, sizeof(g_tsif_buff), &filp->f_pos);
    tmp = sys_read(filp, &g_tsif_buff, 188*16*8);
    pr_err("%s, read reurn is %d.\n", __func__,tmp);
    pr_err("%s, g_tsif_buff is  0x%x.\n", __func__,&g_tsif_buff);
    set_fs(fs);

	if (NULL != filp) {
		sys_close(filp,NULL);
	}

	return rc;
}
#endif

late_initcall(mod_init);
module_exit(mod_exit);

MODULE_DESCRIPTION("TSIF character device interface");
MODULE_LICENSE("GPL v2");

