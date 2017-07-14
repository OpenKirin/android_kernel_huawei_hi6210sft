/*
** =========================================================================
** File:
**     tspdrv.c
**
** Description:
**     TouchSense Kernel Module main entry-point.
**
** Portions Copyright (c) 2008-2014 Immersion Corporation. All Rights Reserved.
**
** This file contains Original Code and/or Modifications of Original Code
** as defined in and that are subject to the GNU Public License v2 -
** (the 'License'). You may not use this file except in compliance with the
** License. You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software Foundation, Inc.,
** 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA or contact
** TouchSenseSales@immersion.com.
**
** The Original Code and all software distributed under the License are
** distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
** EXPRESS OR IMPLIED, AND IMMERSION HEREBY DISCLAIMS ALL SUCH WARRANTIES,
** INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY, FITNESS
** FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT. Please see
** the License for the specific language governing rights and limitations
** under the License.
** =========================================================================
*/

#ifndef __KERNEL__
#define __KERNEL__
#endif

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/timer.h>
#include <linux/fs.h>
#include <linux/version.h>
#include <linux/miscdevice.h>
#include <linux/platform_device.h>
#include <asm/uaccess.h>
#include <asm/atomic.h>
#include <tspdrv.h>
#include <../../../../../kernel/drivers/misc/drv2605/drv2605.h>
#include <linux/of.h>

/* 5ms timer by default. This variable could be used by the SPI.*/
static int g_nTimerPeriodMs = 5;

/* This SPI supports only one actuator.*/
#define NUM_ACTUATORS 1

/* Device name and version information */
#define VERSION_STR " v5.1.71.6\n"                  /* DO NOT CHANGE - this is auto-generated */
#define VERSION_STR_LEN 16                          /* account extra space for future extra digits in version number */
static char g_szDeviceName[  (VIBE_MAX_DEVICE_NAME_LENGTH
                            + VERSION_STR_LEN)
                            * NUM_ACTUATORS];       /* initialized in init_module */
static size_t g_cchDeviceName;                      /* initialized in init_module */

/* Flag indicating whether the driver is in use */
static char g_bIsPlaying = false;

/* Flag indicating the debug level*/
static atomic_t g_nDebugLevel;

/* Buffer to store data sent to SPI */
#define MAX_SPI_BUFFER_SIZE (NUM_ACTUATORS * (VIBE_OUTPUT_SAMPLE_SIZE + SPI_HEADER_SIZE))

static char g_cWriteBuffer[MAX_SPI_BUFFER_SIZE];

#ifndef HAVE_UNLOCKED_IOCTL
#define HAVE_UNLOCKED_IOCTL 0
#endif

/* Needs to be included after the global variables because they use them */
#include <tspdrvOutputDataHandler.c>
#include <VibeOSKernelLinuxHRTime.c>

/* File IO */
static int open(struct inode *inode, struct file *file);
static int release(struct inode *inode, struct file *file);
static ssize_t read(struct file *file, char *buf, size_t count, loff_t *ppos);
static ssize_t write(struct file *file, const char *buf, size_t count, loff_t *ppos);
#if HAVE_UNLOCKED_IOCTL
static long unlocked_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
#else
static int ioctl(struct inode *inode, struct file *file, unsigned int cmd, unsigned long arg);
#endif
static struct file_operations fops =
{
	.owner =            THIS_MODULE,
	.read =             read,
	.write =            write,
#if HAVE_UNLOCKED_IOCTL
	.unlocked_ioctl =   unlocked_ioctl,
#if HAVE_COMPAT_IOCTL
	.compat_ioctl   =   unlocked_ioctl,
#endif
#else
	.ioctl =            ioctl,
#endif
	.open =             open,
	.release =          release,
	.llseek =           default_llseek    /* using default implementation as declared in linux/fs.h */
};

static struct miscdevice miscdev =
{
	.minor =    MISC_DYNAMIC_MINOR,
	.name =     MODULE_NAME,
	.fops =     &fops
};

static int open(struct inode *inode, struct file *file)
{
	printk(KERN_ERR "tspdrv: open.\n");

	if (!try_module_get(THIS_MODULE))
		return -ENODEV;

	return 0;
}

static int release(struct inode *inode, struct file *file)
{
	printk(KERN_ERR "tspdrv: release.\n");

	/*
	** Reset force and stop timer when the driver is closed, to make sure
	** no dangling semaphore remains in the system, especially when the
	** driver is run outside of immvibed for testing purposes.
	*/
	VibeOSKernelLinuxStopTimer();

	/*
	** Clear the variable used to store the magic number to prevent
	** unauthorized caller to write data. TouchSense service is the only
	** valid caller.
	*/
	file->private_data = (void*)NULL;

	module_put(THIS_MODULE);

	return 0;
}

static ssize_t read(struct file *file, char *buf, size_t count, loff_t *ppos)
{
	int i = 0;

	/* Get and concatenate device name and initialize data buffer */
	g_cchDeviceName = 0;
	for (i=0; i<NUM_ACTUATORS; i++)
	{
		char *szName = g_szDeviceName + g_cchDeviceName;
		ImmVibeSPI_Device_GetName(i, szName, VIBE_MAX_DEVICE_NAME_LENGTH);

		/* Append version information and get buffer length */
		strcat(szName, VERSION_STR);
		g_cchDeviceName += strlen(szName);
	}

	const size_t nBufSize = (g_cchDeviceName > (size_t)(*ppos)) ? min(count, g_cchDeviceName - (size_t)(*ppos)) : 0;

	/* End of buffer, exit */
	if (0 == nBufSize)
		return 0;

	if (0 != copy_to_user(buf, g_szDeviceName + (*ppos), nBufSize))
	{
		/* Failed to copy all the data, exit */
		printk(KERN_ERR "tspdrv: copy_to_user failed.\n");
		return 0;
	}

	/* Update file position and return copied buffer size */
	*ppos += nBufSize;
	return nBufSize;
}

static ssize_t write(struct file *file, const char *buf, size_t count, loff_t *ppos)
{
	*ppos = 0;  /* file position not used, always set to 0 */

	/*
	** Prevent unauthorized caller to write data.
	** TouchSense service is the only valid caller.
	*/
	if (file->private_data != (void*)TSPDRV_MAGIC_NUMBER)
	{
		printk(KERN_ERR "tspdrv: unauthorized write.\n");
		return -EACCES;
	}

	/*
	** Ignore packets that have size smaller than SPI_HEADER_SIZE or bigger than MAX_SPI_BUFFER_SIZE.
	** Please note that the daemon may send an empty buffer (count == SPI_HEADER_SIZE)
	** during quiet time between effects while playing a Timeline effect in order to maintain
	** correct timing: if "count" is equal to SPI_HEADER_SIZE, the call to VibeOSKernelLinuxStartTimer()
	** will just wait for the next timer tick.
	*/
	if ((count < SPI_HEADER_SIZE) || (count > MAX_SPI_BUFFER_SIZE))
	{
		printk(KERN_ERR "tspdrv: invalid buffer size.\n");
		return -EINVAL;
	}

	/* Copy immediately the input buffer */
	if (0 != copy_from_user(g_cWriteBuffer, buf, count))
	{
		printk(KERN_ERR "tspdrv: copy_from_user failed.\n");
		return -EIO;
	}

	/* Extract force output samples and save them in an internal buffer */
	if (!SaveOutputData(g_cWriteBuffer, count))
	{
	    printk(KERN_ERR "tspdrv: SaveOutputData failed.\n");
	    return -EIO;
	}

	/* Start the timer after receiving new output force */
	g_bIsPlaying = true;

	VibeOSKernelLinuxStartTimer();

	return count;
}

#if HAVE_UNLOCKED_IOCTL
static long unlocked_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
#else
static int ioctl(struct inode *inode, struct file *file, unsigned int cmd, unsigned long arg)
#endif
{
	switch (cmd)
	{
		case TSPDRV_SET_MAGIC_NUMBER:
			file->private_data = (void*)TSPDRV_MAGIC_NUMBER;
			break;

		case TSPDRV_ENABLE_AMP:
			ImmVibeSPI_ForceOut_AmpEnable(arg);
			printk(KERN_ERR "------- TSPDRV_ENABLE_AMP ---------\n");
			break;

		case TSPDRV_DISABLE_AMP:
			ImmVibeSPI_ForceOut_AmpDisable(arg);
			printk(KERN_ERR "------- TSPDRV_DISABLE_AMP ---------\n");
			break;

		case TSPDRV_GET_NUM_ACTUATORS:
			return NUM_ACTUATORS;

		case TSPDRV_SET_DEVICE_PARAMETER:
		{
			device_parameter deviceParam;

			if (0 != copy_from_user((void *)&deviceParam, (const void __user *)arg, sizeof(deviceParam)))
			{
				/* Error copying the data */
				printk(KERN_ERR "tspdrv: copy_from_user failed to copy kernel parameter data.\n");
				return -1;
			}

			switch (deviceParam.nDeviceParamID)
			{
				case VIBE_KP_CFG_UPDATE_RATE_MS:
					/* Update the timer period */
					g_nTimerPeriodMs = deviceParam.nDeviceParamValue;
					printk(KERN_ERR "tspdrv: g_nTimerPeriodMs = %d.\n", g_nTimerPeriodMs);

					/* For devices using high resolution timer we need to update the ktime period value */
					g_ktTimerPeriod = ktime_set(0, g_nTimerPeriodMs * 1000000);
					break;

				case VIBE_KP_CFG_FREQUENCY_PARAM1:
				case VIBE_KP_CFG_FREQUENCY_PARAM2:
				case VIBE_KP_CFG_FREQUENCY_PARAM3:
				case VIBE_KP_CFG_FREQUENCY_PARAM4:
				case VIBE_KP_CFG_FREQUENCY_PARAM5:
				case VIBE_KP_CFG_FREQUENCY_PARAM6:
					if (0 > ImmVibeSPI_ForceOut_SetFrequency(deviceParam.nDeviceIndex, deviceParam.nDeviceParamID, deviceParam.nDeviceParamValue))
					{
						printk(KERN_ERR "tspdrv: cannot set device frequency parameter.\n");
						return -1;
					}
					break;
				default:
					printk(KERN_ERR "tspdrv: unknow DeviceParamID.\n");
					break;
			}
		}

		default:
			printk(KERN_ERR "tspdrv: unknow cmd.\n");
			break;
	}
	return 0;
}


static int check_immersion_version(void)
{
	int len = 0;
	struct device_node *immersion_node = NULL;
	const char *is_immersion = NULL;
	immersion_node = of_find_compatible_node(NULL, NULL, "immersion,tspdrv");
	if (!immersion_node) {
		printk(KERN_ERR "tspdrv: can't find node immersion\n");
		return false;
	}
	is_immersion = of_get_property(immersion_node, "immersion_exist", &len);
	if (!is_immersion) {
		printk(KERN_ERR "tspdrv: can't find property immersion_exist\n");
		return false;
	}
	if (!strncmp(is_immersion, "yes", sizeof("yes"))) {
		printk(KERN_ERR "tspdrv: immersion feature exsit!\n");
		return true;
	} else {
		printk(KERN_ERR "tspdrv: immersion feature no exsit!\n");
		return false;
	}
}

static int __init tspdrv_init(void)
{
	printk(KERN_ERR "tspdrv: init_module.\n");

	int nRet = 0;   /* initialized below */
	int immersion_version = false;

	immersion_version = check_immersion_version();
	if(immersion_version == false){
		printk(KERN_ERR "tspdrv: no immersion feature.\n");
		return 0;
	}

	nRet = misc_register(&miscdev);
	if (nRet)
	{
		printk(KERN_ERR "tspdrv: misc_register failed.\n");
		return nRet;
	}

	VibeOSKernelLinuxInitTimer();
	ResetOutputData();

	printk(KERN_ERR "tspdrv: init_module end.\n");
	return 0;
}

static void __exit tspdrv_exit(void)
{
	printk(KERN_ERR "tspdrv: cleanup_module.\n");

	VibeOSKernelLinuxTerminateTimer();
	ImmVibeSPI_ForceOut_AmpDisable(0);

	misc_deregister(&miscdev);
}

module_init(tspdrv_init);
module_exit(tspdrv_exit);
/* Module info */
MODULE_AUTHOR("Immersion Corporation");
MODULE_DESCRIPTION("TouchSense Kernel Module");
MODULE_LICENSE("GPL v2");
