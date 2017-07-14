/*
 *  camera driver source file
 *
 *  Copyright (C) Huawei Technology Co., Ltd.
 *
 * Author:
 * Email:
 * Date:	  2015-03-27
 *
 * This file is write for camera HAL to get camera numbers on phone
 * Camera HAL cam read form node "sys/class/camerafs/node/cam_number" to get it
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
#include <linux/types.h>
#include <linux/platform_device.h>
#include <linux/module.h>
#include "cam_log.h"
#include <linux/miscdevice.h>
#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/of.h>

#define MAX_ATTRIBUTE_BUFFER_SIZE 128
static int product_cam_number = -1;

static ssize_t hw_cam_number_show(struct device *dev,
struct device_attribute *attr,char *buf)
{
    int rc=0;

    snprintf(buf, MAX_ATTRIBUTE_BUFFER_SIZE, "%d\n",
        product_cam_number);
    rc = strlen(buf)+1;
    return rc;
}

static ssize_t hw_cam_number_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
{
    int rc=0;
    return rc;
}

extern int register_camerafs_attr(struct device_attribute *attr);
static struct device_attribute hw_cam_number_attribute =
__ATTR(cam_number, 0664, hw_cam_number_show, hw_cam_number_store);
static int32_t cam_number_platform_probe(struct platform_device *pdev)
{
	int rc = 0;
        struct device_node *of_node = pdev->dev.of_node;
        cam_info("enter %s",__func__);
        register_camerafs_attr(&hw_cam_number_attribute);
	if (pdev->dev.of_node) {
        	rc = of_property_read_u32(of_node, "hisi,product-cam-num", &product_cam_number);
        	cam_info("%s hisi,product-cam-num %d, rc %d\n", __func__, product_cam_number, rc);
        	if (rc < 0) {
        		cam_err("%s failed %d\n", __func__, __LINE__);
        		goto fail;
        	}
	} else {
		cam_err("%s cam number of_node is NULL.\n", __func__);
              rc = -1;
		goto fail;
	}

fail:
	return rc;
}

static const struct of_device_id hw_cam_number_dt_match[] = {
	{.compatible = "hisi,camnumber"},
	{}
};
MODULE_DEVICE_TABLE(of, hw_cam_number_dt_match);
static struct platform_driver hw_cam_number_platform_driver = {
	.driver = {
		.name = "camnumber",
		.owner = THIS_MODULE,
		.of_match_table = hw_cam_number_dt_match,
	},
};

static int __init hw_cam_number_module_init(void)
{
	int rc = 0;
	cam_info("%s:%d\n", __func__, __LINE__);
       product_cam_number = -1;
	rc = platform_driver_probe(&hw_cam_number_platform_driver,
		cam_number_platform_probe);
	if (rc < 0) {
		cam_notice("%s platform_driver_probe error.\n", __func__);
	}
	return rc;
}

static void __exit hw_cam_number_module_exit(void)
{
	platform_driver_unregister(&hw_cam_number_platform_driver);
}

module_init(hw_cam_number_module_init);
module_exit(hw_cam_number_module_exit);
MODULE_DESCRIPTION("Camera Number");
MODULE_LICENSE("GPL v2");

