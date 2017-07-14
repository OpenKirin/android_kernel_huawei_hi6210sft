/*
 * Wacom Penabled Driver for I2C
 *
 * Copyright (c) 2011-2014 Tatsunosuke Tobita, Wacom.
 * <tobita.tatsunosuke@wacom.co.jp>
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General
 * Public License as published by the Free Software
 * Foundation; either version of 2 of the License,
 * or (at your option) any later version.
 */
#include "wacom.h"

static void parse_report_desc(struct wacom_features *features, u8 *report_desc, int report_desc_size)
{
	bool finger = false, pen = false;
	int i;
	int usage = 0, mouse = 0;

	for (i = 0; i < report_desc_size; i++) {
		switch (report_desc[i]) {
		case USAGE_PAGE:
			switch (report_desc[i + 1]) {
			case USAGE_PAGE_DIGITIZERS:
				usage = USAGE_PAGE_DIGITIZERS;
				if (report_desc[i + 3] == USAGE_TOUCHSCREEN || report_desc[i + 3] == USAGE_PEN) {
					mouse = 0;
					i += 4;
				}
				else
					i++;
				
				break;

			case USAGE_PAGE_DESKTOP:
				usage = USAGE_PAGE_DESKTOP;
				if (report_desc[i + 3] == USAGE_MOUSE) {
					mouse = 1;
					i += 4;
				}
				else
					i++;
				
				break;
			}
			break;

		case USAGE:
			switch (report_desc[i + 1]) {
			case USAGE_X:
				if (usage == USAGE_PAGE_DESKTOP && mouse == 0) {
					if (pen)
						features->x_max = get_unaligned_le16(&report_desc[i + 3]);
					else if (finger)
						features->x_touch = get_unaligned_le16(&report_desc[i + 3]);
					i += 4;
				}
				else if (usage == USAGE_PAGE_DIGITIZERS && mouse == 0) {
					if (pen)
						features->pressure_max = get_unaligned_le16(&report_desc[i + 3]);
					i += 4;
				}
				else
					i++;
				
				break;
				
			case USAGE_Y:
				if (usage == USAGE_PAGE_DESKTOP && mouse == 0) {
					if (pen)
						features->y_max = get_unaligned_le16(&report_desc[i + 3]);
					else if (finger)
						features->y_touch = get_unaligned_le16(&report_desc[i + 3]);
					i += 4;
				}
				else
					i++;
				
				break;
			case USAGE_FINGER:
				finger = true;
				pen = false;
				i++;
				break;

			case USAGE_STYLUS:
				pen = true;
				finger = false;
				i++;
				break;

			}
			break;
		}		
	}
}

static int retrieve_report_desc(struct i2c_client *client, struct wacom_features *features,
			 HID_DESC hid_desc)
{
	struct i2c_msg msgs_touch[2];
	int ret = -1;
	int report_desc_size = hid_desc.wReportDescLength;
	u8 cmd[] = {hid_desc.wReportDescRegister, 0x00};
	u8 *report_desc = NULL;

	report_desc = kzalloc(sizeof(u8) * report_desc_size, GFP_KERNEL);
	if (!report_desc) {
		TS_LOG_ERR( "No memory left for this device \n");
		return -ENOMEM;
	}

	msgs_touch[0].addr = client->addr;
	msgs_touch[0].flags = 0;
	msgs_touch[0].len = sizeof(cmd);
	msgs_touch[0].buf = cmd;

	msgs_touch[1].addr = client->addr;
	msgs_touch[1].flags = I2C_M_RD;
	msgs_touch[1].len = report_desc_size;
	msgs_touch[1].buf = report_desc;
		
	ret = i2c_transfer(client->adapter, msgs_touch, ARRAY_SIZE(msgs_touch));
	if (ret < 0) {
		TS_LOG_ERR( "%s obtaining report descriptor failed \n", __func__);
		goto err;
	}
	if (ret != ARRAY_SIZE(msgs_touch)) {
		ret = -EIO;
		goto err;
	}

	parse_report_desc(features, report_desc, report_desc_size);
	ret = 0;

 err:
	kfree(report_desc);
	report_desc = NULL;
	return ret;
}

bool wacom_i2c_set_feature(struct i2c_client *client, u8 report_id, unsigned int buf_size, u8 *data, 
			   u16 cmdreg, u16 datareg)
{
	int i, ret = -1;
	int total = SFEATURE_SIZE + buf_size;
	u8 *sFeature = NULL;
	bool bRet = false;

	sFeature = kzalloc(sizeof(u8) * total, GFP_KERNEL);
	if (!sFeature) {
		TS_LOG_ERR( "%s cannot preserve memory \n", __func__);
		goto out;
	}
	memset(sFeature, 0, sizeof(u8) * total);

	sFeature[0] = (u8)(cmdreg & 0x00ff);
	sFeature[1] = (u8)((cmdreg & 0xff00) >> 8);
	sFeature[2] = (RTYPE_FEATURE << 4) | report_id;
	sFeature[3] = SET_FEATURE;
	sFeature[4] = (u8)(datareg & 0x00ff);
	sFeature[5] = (u8)((datareg & 0xff00) >> 8);

	if ( (buf_size + 2) > 255) {
		sFeature[6] = (u8)((buf_size + 2) & 0x00ff);
		sFeature[7] = (u8)(( (buf_size + 2) & 0xff00) >> 8);
	} else {
		sFeature[6] = (u8)(buf_size + 2);
		sFeature[7] = (u8)(0x00);
	}

	for (i = 0; i < buf_size; i++)
		sFeature[i + SFEATURE_SIZE] = *(data + i);

	ret = i2c_master_send(client, sFeature, total);
	if (ret != total) {
		TS_LOG_ERR( "Sending Set_Feature failed sent bytes: %d \n", ret);
		goto err;
	}

	bRet = true;
 err:
	kfree(sFeature);
	sFeature = NULL;

 out:
	return bRet;
}

bool wacom_i2c_get_feature(struct i2c_client *client, u8 report_id, unsigned int buf_size, u8 *data, 
			   u16 cmdreg, u16 datareg)
{
	int ret = -1;
	u8 *recv = NULL;
	bool bRet = false;
	u8 gFeature[] = {
		(u8)(cmdreg & 0x00ff),
		(u8)((cmdreg & 0xff00) >> 8),
		(RTYPE_FEATURE << 4) | report_id,
		GET_FEATURE,
		(u8)(datareg & 0x00ff),
		(u8)((datareg & 0xff00) >> 8)
	};

	/*"+ 2", adding 2 more spaces for organizeing again later in the passed data, "data"*/
	recv = kzalloc(sizeof(u8) * (buf_size + 2), GFP_KERNEL);
	if (!recv) {
		TS_LOG_ERR( "%s cannot preserve memory \n", __func__);
		goto out;
	}
	memset(recv, 0, sizeof(u8) * (buf_size + 2)); /*Append 2 bytes for length low and high of the byte*/

	ret = i2c_master_send(client, gFeature, GFEATURE_SIZE);
	if (ret != GFEATURE_SIZE) {
		TS_LOG_ERR( "%s Sending Get_Feature failed; sent bytes: %d \n", __func__, ret);
		goto err;
	}

	ret = i2c_master_recv(client, recv, (buf_size));
	if (ret != buf_size) {
		TS_LOG_ERR( "%s Receiving data failed; recieved bytes: %d \n", __func__, ret);
		goto err;
	}

	/*Coppy data pointer, subtracting the first two bytes of the length*/
	memcpy(data, (recv + 2), buf_size);

	bRet = true;
 err:
	kfree(recv);
	recv = NULL;

 out:
	return bRet;
}

int wacom_query_device(struct i2c_client *client, struct wacom_features *features)
{
	HID_DESC hid_descriptor;		
	int ret = -1;
	u16 cmd_reg;
	u16 data_reg;
	u8 cmd[] = {HID_DESC_REGISTER, 0x00};
	struct i2c_msg msgs[] = {
		{
			.addr = client->addr,
			.flags = 0,
			.len = sizeof(cmd),
			.buf = cmd,
		},
		{
			.addr = client->addr,
			.flags = I2C_M_RD,
			.len = sizeof(HID_DESC),
			.buf = (u8 *)(&hid_descriptor),
		},
	};
	
	ret = i2c_transfer(client->adapter, msgs, ARRAY_SIZE(msgs));
	if (ret < 0) {
		TS_LOG_ERR( "%s obtaining query failed: %d \n", __func__, ret);
		goto err;
	}
	if (ret != ARRAY_SIZE(msgs)) {
		TS_LOG_ERR( "%s input/output error occured; \n returned: %dbyte(s) \n", __func__, ret);
		ret = -EIO;
		goto err;
	}

	cmd_reg = hid_descriptor.wCommandRegister;
	data_reg = hid_descriptor.wDataRegister;
	features->input_size = hid_descriptor.wMaxInputLength;
	features->vendorId = hid_descriptor.wVendorID;
	features->productId = hid_descriptor.wProductID;
	features->fw_version = hid_descriptor.wVersion;
	memcpy(&features->hid_desc, &hid_descriptor, sizeof(HID_DESC));	

	TS_LOG_INFO( "Retrieving report descriptor \n");
	ret = retrieve_report_desc(client, features, hid_descriptor);
	if (ret < 0)
		goto err;

	TS_LOG_INFO( "addr: %x, x_max:%d, y_max:%d\n", client->addr, 
	       features->x_max, features->y_max);
	TS_LOG_INFO( "addr: %x, x_touch:%d, y_touch:%d\n", client->addr, 
	       features->x_touch, features->y_touch);
	TS_LOG_INFO( "pressure_max:%d, fw_version:%x \n",
	       features->pressure_max, features->fw_version);
	
	ret = 0;
 err:
	return ret;
}
