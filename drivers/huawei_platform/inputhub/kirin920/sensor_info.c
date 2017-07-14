/*
 * Copyright (C) huawei company
 *
 * This	program	is free	software; you can redistribute it and/or modify
 * it under	the	terms of the GNU General Public	License	version	2 as
 * published by	the	Free Software Foundation.
 */

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/err.h>
#include <linux/delay.h>
#include "inputhub_route.h"
#include "inputhub_bridge.h"
#include "protocol.h"
#include <linux/wait.h>
#include <linux/sched.h>
#include <linux/slab.h>
#include <linux/io.h>
#include <linux/uaccess.h>
#include <linux/types.h>
#include <linux/fs.h>
#include <linux/ktime.h>
#include "sensor_info.h"
#include "sensor_sys_info.h"
#include <linux/mtd/hisi_nve_interface.h>
#include <linux/of.h>
#include <linux/of_gpio.h>
#ifdef CONFIG_HUAWEI_HW_DEV_DCT
#include <linux/hw_dev_dec.h>
#endif
#include <dsm/dsm_pub.h>

int hisi_nve_direct_access(struct hisi_nve_info_user *user_info);

#define SENSOR_CONFIG_DATA_OK 0
#define MAX_MCU_DATA_LENGTH  30
#define ACC_OFFSET_NV_NUM	231
#define MAG_CALIBRATE_DATA_NV_NUM 233
#define MAG_CALIBRATE_DATA_NV_SIZE (MAX_MAG_CALIBRATE_DATA_LENGTH)
#define NV_READ_TAG	1
#define NV_WRITE_TAG	0
#define OFFSET_BIG               127
#define OFFSET_SMALL             -128
#define Z_SCALE_BIG              255
#define Z_SCALE_SMALL            175
#define MAX_STR_SIZE	1024
#define MAX_FILE_ID	64
#define GPIO_INVENSENSE_DMP_POWER_SUPPLY 74
#define DMP_DRIVER_FILE_ID 5
#define DMP_IMG_FILE_ID 6

#define ICM20628_ADDR   0x68
#define REG_BANK_SEL    0x7f
#define INT_PIN_CFG     0x0f
#define PWR_MGMT_1      0x06
#define SENSOR_LIST_NUM 50

#define DEBUG_DATA_LENGTH 10

/* < DTS2014072107524 ligang/00183889 20140721 begin */
bool sensor_info_isensor_version = false;
/*  DTS2014072107524 ligang/00183889 20140721 end > */

bool is_invensense_dmp_exist = false;
static char sensor_chip_info[SENSOR_MAX][50];
static int gsensor_offset[3]; //g-sensor校准参数
static RET_TYPE return_calibration = EXEC_FAIL;
struct sensor_status sensor_status;
static struct sensor_status sensor_status_backup;
extern int first_start_flag;
static char buf[MAX_PKT_LENGTH]={0};
pkt_sys_dynload_req_t *dyn_req = (pkt_sys_dynload_req_t *)buf;
// Indicates whether or not FingerSense mode is enabled
static bool fingersense_enabled = false;
// Indicates if the data requested by the AP was already received
static bool fingersense_data_ready = false;
// z-axis data received from the Sensor hub
static s16 fingersense_data[FINGERSENSE_DATA_NSAMPLES];
static uint16_t sensorlist[SENSOR_LIST_NUM] = {0};
static const char *str_soft_para = "softiron_parameter";
static const char *str_comp = "compass_extend_data";

extern struct dsm_client *shb_dclient;

static uint8_t debug_read_data_buf[DEBUG_DATA_LENGTH] = {0};

static struct gyro_platform_data gyro_data={
		.poll_interval=10,
		.axis_map_x=1,
		.axis_map_y=0,
		.axis_map_z=2,
		.negate_x=1,
		.negate_y=0,
		.negate_z=1,
		.gpio_int1=210,
	};
static struct g_sensor_platform_data gsensor_data={
	.poll_interval=10,
	.axis_map_x=1,
	.axis_map_y=0,
	.axis_map_z=2,
	.negate_x=0,
	.negate_y=1,
	.negate_z=0,
	.gpio_int1=208,
};
static struct compass_platform_data mag_data={
	.poll_interval=10,
	.outbit=0,
	.axis_map_x=0,
	.axis_map_y=1,
	.axis_map_z=2,
};
static struct als_platform_data als_data={
	.threshold_value = 1,
	.GA1 = 4166,
	.GA2 = 3000,
	.GA3 = 3750,
	.gpio_int1 = 206,
	.atime = 0xdb,
	.again = 1,
	.poll_interval = 1000,
	.init_time = 150,
};

static struct ps_platform_data ps_data={
	.min_proximity_value = 750,
	.pwindows_value = 100,
	.pwave_value = 60,
	.threshold_value = 70,
	.rdata_under_sun = 5500,
	.ps_pulse_count = 5,
	.gpio_int1 = 206,
	.persistent = 0x33,
	.ptime = 0xFF,
	.poll_interval = 250,
	.init_time = 100,
};
static int write_customize_cmd_noresp(int tag, int cmd, const void *data, int length)
{
	uint8_t buf[MAX_PKT_LENGTH] = {0};//

	((pkt_header_t *)buf)->tag = tag;
	((pkt_header_t *)buf)->cmd = cmd;
	((pkt_header_t *)buf)->resp = NO_RESP;
	((pkt_header_t *)buf)->length = length;
	memcpy(buf + sizeof(pkt_header_t), data, ((pkt_header_t *)buf)->length);
	return inputhub_mcu_write_cmd_nolock(&buf, sizeof(pkt_header_t) + ((pkt_header_t *)buf)->length);
}

void update_fingersense_zaxis_data(s16 *buffer, int nsamples)
{
    int i = 0;
//	hwlog_err("[FINGERSENSE] Read z-axis data from sensorhub: %lums\n", (unsigned long) ktime_to_ms(ktime_get()));
	memcpy(fingersense_data, buffer, min(nsamples, FINGERSENSE_DATA_NSAMPLES) * sizeof(*buffer));
    fingersense_data_ready = true;
}

static int set_fingersense_enable_internal(unsigned long enable, bool lock)
{
	int ret = -1;
	write_info_t pkg_ap;
	read_info_t pkg_mcu;

	hwlog_err("[FINGERSENSE] Setting FingerSense from %d to %d\n", fingersense_enabled, enable);

	// If FingerSense is activated then open the accel
	if(enable) {
		// Open the accel (if needed)
		if(lock) {
			ret = inputhub_sensor_enable(TAG_ACCEL, CMD_CMN_OPEN_REQ);
		} else {
			ret = inputhub_sensor_enable_nolock(TAG_ACCEL, CMD_CMN_OPEN_REQ);
		}
		if(ret) {
			hwlog_err("[FINGERSENSE] Error when opening accel for Fingersense, ret=%d\n", ret);
			return -1;
		}
        // Set minimum delay (if needed)
		if(lock) {
			ret = inputhub_sensor_setdelay(TAG_ACCEL, 200);
		} else {
			ret = inputhub_sensor_setdelay_nolock(TAG_ACCEL, 200);
		}
		if(ret) {
			hwlog_err("[FINGERSENSE] Error when setting accel delay for Fingersense, ret=%d\n",\
					ret);
			return -1;
		}
	}

	if(lock) {
		// Send enable request command
		memset(&pkg_ap, 0, sizeof(pkg_ap));
		memset(&pkg_mcu, 0, sizeof(pkg_mcu));
		pkg_ap.tag=TAG_ACCEL;
		pkg_ap.cmd=CMD_ACCEL_FINGERSENSE_ENABLE_REQ;
		pkg_ap.wr_buf=&enable;
		pkg_ap.wr_len=sizeof(enable);
		ret=write_customize_cmd(&pkg_ap, NULL);
		if(ret) {
			hwlog_err("[FINGERSENSE] Failed to send FS enable command to mcu, ret=%d\n", ret);
			return -1;
		}
		if(pkg_mcu.errno!=0) {
			hwlog_err("[FINGERSENSE] Set fingersense enable fail\n");
			return -1;
		}
	} else {
		ret = write_customize_cmd_noresp(TAG_ACCEL, CMD_ACCEL_FINGERSENSE_ENABLE_REQ, &enable, sizeof(enable));
		if(ret) {
			hwlog_err("[FINGERSENSE] Failed to send FS enable command to mcu, ret=%d\n", ret);
			return -1;
		}
	}

    // If FingerSense is disabled then close the accel instance
    if(!enable) {
		if(lock) {
			ret = inputhub_sensor_enable(TAG_ACCEL, CMD_CMN_CLOSE_REQ);
		} else {
			ret = inputhub_sensor_enable_nolock(TAG_ACCEL, CMD_CMN_CLOSE_REQ);
		}
		if(ret) {
			hwlog_err("[FINGERSENSE] Error when opening accel for Fingersense, ret=%d\n", ret);
			return -1;
		}
    }

	fingersense_enabled = enable;
    hwlog_err("[FINGERSENSE] Set fingersense to '%ld' success\n", enable);

    return 0;
}

static bool should_be_processed_when_sr(int sensor_tag)
{
	bool ret = true;//can be closed default
	switch (sensor_tag) {
		case TAG_PS:
			ret = false;
			break;

		case TAG_STEP_COUNTER:
			ret = false;
			break;

		default:
			break;
	}

	return ret;
}

static DEFINE_MUTEX(mutex_update);
void update_sensor_info(const pkt_header_t *pkt)//To keep same with mcu, to activate sensor need open first and then setdelay
{
	if (TAG_SENSOR_BEGIN <= pkt->tag && pkt->tag < TAG_SENSOR_END) {
		mutex_lock(&mutex_update);
		if (CMD_CMN_OPEN_REQ == pkt->cmd) {
			sensor_status.opened[pkt->tag] = 1;
		} else if (CMD_CMN_CLOSE_REQ == pkt->cmd) {
			sensor_status.opened[pkt->tag] = 0;
			sensor_status.status[pkt->tag] = 0;
		} else if (CMD_CMN_INTERVAL_REQ == pkt->cmd) {
			if (sensor_status.opened[pkt->tag]) {
				sensor_status.delay[pkt->tag] = ((const pkt_cmn_interval_req_t *)pkt)->param.period;
				sensor_status.status[pkt->tag] = 1;
			}
		}
		mutex_unlock(&mutex_update);
	}
}

void disable_sensors_when_reboot(void)
{
	int tag;
	for (tag = TAG_SENSOR_BEGIN; tag < TAG_SENSOR_END; ++tag) {
		if (sensor_status.status[tag]) {
			inputhub_sensor_enable(tag, false);
			msleep(50);
			hwlog_info("disable sensor - %d before reboot\n", tag);
		}
	}
}

void disable_sensors_when_suspend(void)
{
	int tag;

	memcpy(&sensor_status_backup, &sensor_status, sizeof(sensor_status_backup));
	for (tag = TAG_SENSOR_BEGIN; tag < TAG_SENSOR_END; ++tag) {
		if (sensor_status_backup.status[tag]) {
			if (should_be_processed_when_sr(tag)) {
				inputhub_sensor_enable(tag, false);
			}
		}
	}
}

void enable_sensors_when_resume(void)
{
	int tag;

	for (tag = TAG_SENSOR_BEGIN; tag < TAG_SENSOR_END; ++tag) {
		if (sensor_status_backup.status[tag] && (0 == sensor_status.status[tag])) {
			if (should_be_processed_when_sr(tag)) {
				inputhub_sensor_enable(tag, true);
				inputhub_sensor_setdelay(tag, sensor_status_backup.delay[tag]);
			}
		}
	}
}

void dmd_log_report(int dmd_mark,const char *err_func, const char *err_msg)
{
	if(!dsm_client_ocuppy(shb_dclient)){
		dsm_client_record(shb_dclient, "[%s]%s", err_func, err_msg);
		dsm_client_notify(shb_dclient, dmd_mark);
	}
}

static uint8_t gsensor_calibrate_data[MAX_MAG_CALIBRATE_DATA_LENGTH];
static uint8_t msensor_calibrate_data[MAX_MAG_CALIBRATE_DATA_LENGTH];
/*******************************************************************************************
Function:	read_gsensor_offset_from_nv
Description:   读取NV项中的gsensor 校准数据，并发送给mcu 侧
Data Accessed:  无
Data Updated:   无
Input:         无
Output:         无
Return:         成功或者失败信息: 0->成功, -1->失败
*******************************************************************************************/
int read_gsensor_offset_from_nv(void)
{
	int ret = 0;
	struct hisi_nve_info_user user_info;
	write_info_t	pkg_ap;
	read_info_t	pkg_mcu;
	memset(&user_info, 0, sizeof(user_info));
	memset(&pkg_ap, 0, sizeof(pkg_ap));
	memset(&pkg_mcu, 0, sizeof(pkg_mcu));
	user_info.nv_operation = NV_READ_TAG;
	user_info.nv_number = ACC_OFFSET_NV_NUM;
	user_info.valid_size = 15;
	strncpy(user_info.nv_name, "gsensor", sizeof(user_info.nv_name));
	user_info.nv_name[sizeof(user_info.nv_name) - 1] = '\0';
	if ((ret = hisi_nve_direct_access(&user_info))!=0)
	{
		hwlog_err("nve_direct_access read error(%d)\n", ret);
		return -1;
	}
	first_start_flag=1;
	gsensor_offset[0] = (int8_t)user_info.nv_data[0];
	gsensor_offset[1] = (int8_t)user_info.nv_data[1];
	gsensor_offset[2] = user_info.nv_data[2];
	hwlog_info( "nve_direct_access read gsensor_offset (%d %d %d )\n",gsensor_offset[0],gsensor_offset[1],gsensor_offset[2]);

	gsensor_data.offset_x=gsensor_offset[0];
	gsensor_data.offset_y=gsensor_offset[1];
	gsensor_data.offset_z=gsensor_offset[2];
	pkg_ap.tag=TAG_ACCEL;
	pkg_ap.cmd=CMD_ACCEL_OFFSET_REQ;
	pkg_ap.wr_buf=&gsensor_data.offset_x;
	pkg_ap.wr_len=sizeof(int)*3;
	ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
	memcpy(&gsensor_calibrate_data, pkg_ap.wr_buf, sizeof(gsensor_calibrate_data));
	if(ret)
	{
		hwlog_err("send gsensor offset data to mcu fail,ret=%d\n", ret);
		return -1;
	}
	if(pkg_mcu.errno!=0)
	{
		hwlog_err("set gsensor offset fail,err=%d\n", pkg_mcu.errno);
		dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "set gsensor offset fail\n");
	}
	else
	{
		hwlog_info("send gsensor offset data to mcu success\n");
	}
	return 0;
}

/*******************************************************************************************
Function:	write_gsensor_offset_to_nv
Description:  将temp数据写入NV 项中
Data Accessed:  无
Data Updated:   无
Input:        g-sensor 校准值
Output:         无
Return:         成功或者失败信息: 0->成功, -1->失败
*******************************************************************************************/
int write_gsensor_offset_to_nv(char* temp)
{
	int ret = 0;
	struct hisi_nve_info_user user_info;

	if(temp==NULL)
	{
		hwlog_err("write_gsensor_offset_to_nv fail, invalid para!\n");
		return -1;
	}
	memset(&user_info, 0, sizeof(user_info));
	user_info.nv_operation = NV_WRITE_TAG;
	user_info.nv_number = ACC_OFFSET_NV_NUM;
	user_info.valid_size = 15;
	strncpy(user_info.nv_name, "gsensor", sizeof(user_info.nv_name));
	user_info.nv_name[sizeof(user_info.nv_name) - 1] = '\0';

	user_info.nv_data[0] = temp[0];
	user_info.nv_data[1] = temp[1];
	user_info.nv_data[2] = temp[2];
	if ((ret = hisi_nve_direct_access(&user_info))!=0)
	{
		hwlog_err("nve_direct_access write error(%d)\n", ret);
		return -1;
	}
	hwlog_info( "nve_direct_access write temp (%d %d %d )\n",user_info.nv_data[0],user_info.nv_data[1],user_info.nv_data[2]);

	msleep(10);
	memset(&user_info, 0, sizeof(user_info));
	user_info.nv_operation = NV_READ_TAG;
	user_info.nv_number = ACC_OFFSET_NV_NUM;
	user_info.valid_size = 15;
	strncpy(user_info.nv_name, "gsensor", sizeof(user_info.nv_name));
	user_info.nv_name[sizeof(user_info.nv_name) - 1] = '\0';
	if ((ret = hisi_nve_direct_access(&user_info))!=0)
	{
		hwlog_err("nve direct access read error(%d)\n", ret);
		return -1;
	}
	if(user_info.nv_data[0] != temp[0] || user_info.nv_data[1] != temp[1] || user_info.nv_data[2] != temp[2])
	{
		hwlog_err("nv write fail, (%d %d %d)\n", user_info.nv_data[0],user_info.nv_data[1],user_info.nv_data[2]);
		return -1;
	}
	return ret;
}

int read_mag_calibrate_data_from_nv(void)
{
	int ret = 0;
	struct hisi_nve_info_user user_info;
	write_info_t pkg_ap;

	memset(&user_info, 0, sizeof(user_info));
	memset(&pkg_ap, 0, sizeof(pkg_ap));

	//read from nv
	user_info.nv_operation = NV_READ_TAG;
	user_info.nv_number = MAG_CALIBRATE_DATA_NV_NUM;
	user_info.valid_size = MAG_CALIBRATE_DATA_NV_SIZE;
	strncpy(user_info.nv_name, "msensor", sizeof(user_info.nv_name));
	user_info.nv_name[sizeof(user_info.nv_name) - 1] = '\0';
	if ((ret = hisi_nve_direct_access(&user_info))!=0) {
		hwlog_err("nve_direct_access read error(%d)\n", ret);
		return -1;
	}

	//send to mcu
	pkg_ap.tag = TAG_MAG;
	pkg_ap.cmd = CMD_MAG_SET_CALIBRATE_TO_MCU_REQ;
	pkg_ap.wr_buf = &user_info.nv_data;
	pkg_ap.wr_len = MAG_CALIBRATE_DATA_NV_SIZE;
	memcpy(&msensor_calibrate_data, pkg_ap.wr_buf, sizeof(msensor_calibrate_data));
	if((ret = write_customize_cmd(&pkg_ap, NULL)) != 0) {
		hwlog_err("set mag_sensor data failed, ret = %d!\n", ret);
		return ret;
	} else {
		hwlog_info("send mag_sensor data to mcu success\n");
	}

	return 0;
}

static int write_magsensor_calibrate_data_to_nv(const char *src)
{
	int ret = 0;
	struct hisi_nve_info_user user_info;

	if(NULL == src) {
		hwlog_err("%s fail, invalid para!\n", __func__);
		return -1;
	}

	memset(&user_info, 0, sizeof(user_info));
	user_info.nv_operation = NV_WRITE_TAG;
	user_info.nv_number = MAG_CALIBRATE_DATA_NV_NUM;
	user_info.valid_size = MAG_CALIBRATE_DATA_NV_SIZE;
	strncpy(user_info.nv_name, "msensor", sizeof(user_info.nv_name));
	user_info.nv_name[sizeof(user_info.nv_name) - 1] = '\0';
	memcpy(user_info.nv_data, src, sizeof(user_info.nv_data));
	if ((ret = hisi_nve_direct_access(&user_info)) != 0) {
		hwlog_err("nve_direct_access write error(%d)\n", ret);
		return -1;
	}

	return ret;
}

static int mag_calibrate_data_from_mcu(const pkt_header_t *head)
{
	return write_magsensor_calibrate_data_to_nv(((const pkt_mag_calibrate_data_req_t *)head)->calibrate_data);
}

void enable_sensors_when_recovery_iom3(void)
{
	int tag;

	for (tag = TAG_SENSOR_BEGIN; tag < TAG_SENSOR_END; ++tag) {
		if (sensor_status.status[tag]) {
			inputhub_sensor_enable_nolock(tag, true);
			inputhub_sensor_setdelay_nolock(tag, sensor_status.delay[tag]);
		}
	}
	if(fingersense_enabled) {
		fingersense_enabled = false;
		hwlog_err("[FINGERSENSE] Recovering from sensorhub crash. Enabling FingerSense...\n");
		set_fingersense_enable_internal(1, false);
	}
}

void reset_calibrate_when_recovery_iom3(void)
{
	write_customize_cmd_noresp(TAG_ACCEL, CMD_ACCEL_OFFSET_REQ, &gsensor_calibrate_data, sizeof(int) * 3);
    	msleep(10);
	write_customize_cmd_noresp(TAG_MAG, CMD_MAG_SET_CALIBRATE_TO_MCU_REQ, &msensor_calibrate_data, MAG_CALIBRATE_DATA_NV_SIZE);
	msleep(10);
}

static int detect_i2c_device(struct device_node *dn, char *device_name)
{
	write_info_t	pkg_ap;
	read_info_t	pkg_mcu;
	pkt_i2c_read_req_t pkt_i2c_read;
	int i=0, ret=0, i2c_address=0, i2c_bus_num=0, register_add=0, len=0;
	u32 wia[10]={0};
	struct property *prop = NULL;

	memset(&pkt_i2c_read, 0, sizeof(pkt_i2c_read));
	memset(&pkg_ap, 0, sizeof(pkg_ap));
	memset(&pkg_mcu, 0, sizeof(pkg_mcu));
	if(of_property_read_u32(dn, "bus_number", &i2c_bus_num) || of_property_read_u32(dn, "reg", &i2c_address)
				|| of_property_read_u32(dn, "chip_id_register", &register_add))
	{
		hwlog_err("%s:read i2c bus_number (%d)or bus address(%x) or chip_id_register(%x) from dts fail\n",
			device_name, i2c_bus_num, i2c_address, register_add);
		return -1;
	}

	prop = of_find_property(dn, "chip_id_value", NULL);
	if (!prop)
		return -EINVAL;
	if (!prop->value)
		return -ENODATA;
	len = prop->length/4;
	hwlog_info("%s:chip_id_value len=%d \n", device_name, len);
	if(of_property_read_u32_array(dn, "chip_id_value", wia, len))
	{
		hwlog_err("%s:read chip_id_value (id0=%x) from dts fail len=%d\n", device_name,  wia[0], len);
		return -1;
	}
	hwlog_info("chipid value 0x%x  0x%x  0x%x 0x%x--\n", wia[0], wia[1], wia[2], wia[3]);
	pkt_i2c_read.busid = i2c_bus_num;
	pkt_i2c_read.addr = i2c_address;
	pkt_i2c_read.reg = register_add;
	pkt_i2c_read.length = 1;
	pkg_ap.tag = TAG_I2C;
	pkg_ap.cmd = CMD_I2C_READ_REQ;
	pkg_ap.wr_buf = &pkt_i2c_read.busid;
	pkg_ap.wr_len = sizeof(pkt_i2c_read) - sizeof(pkt_i2c_read.hd);
	ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
	if(ret)
	{
		hwlog_err("%s:detect_i2c_device:send i2c read cmd to mcu fail,ret=%d\n", device_name, ret);
		return -1;
	}
	if(pkg_mcu.errno != 0)
	{
		hwlog_err("%s:detect_i2c_device:i2c read fail\n", device_name);
		return -1;
	}else
	{
		hwlog_info("%s:i2c read success, data=0x%x\n", device_name, pkg_mcu.data[0]);
		for(i=0;i<len;i++)
			if(pkg_mcu.data[0] == (char)wia[i])
			{
				hwlog_info("%s:i2c detect  suc!\n", device_name);
				return 0;
			}
		hwlog_info("%s:i2c detect  fail!\n", device_name);
		return -1;
	}
}

/* delete the repeated file id by map table*/
static uint8_t check_file_list(uint8_t file_count, uint16_t *file_list)
{
	uint8_t map[MAX_FILE_ID];
	int i;
	uint8_t count = 0;

	memset(map, 0, sizeof(map));
	if ((file_count == 0) ||(NULL == file_list)) {
		hwlog_err("%s, val invalid\n", __func__);
		return count;
	}

	for (i = 0; i < file_count; i++) {
		if (file_list[i] < sizeof(map))
			map[file_list[i]]++;
	}

	for(i = 0; i < sizeof(map); i++) {
		if (map[i]) {
			file_list[count] = i;
			count ++;
		}
	}

	return count;
}

static int send_fileid_to_mcu(void)
{
	write_info_t	pkg_ap;
	read_info_t	pkg_mcu;
	int ret = 0;

	memset(&pkg_ap, 0, sizeof(pkg_ap));
	memset(&pkg_mcu, 0, sizeof(pkg_mcu));
	dyn_req->end = 1;
	pkg_ap.tag = TAG_SYS;
	pkg_ap.cmd = CMD_SYS_DYNLOAD_REQ;
	pkg_ap.wr_buf = &(dyn_req->end);
	pkg_ap.wr_len = dyn_req->file_count * sizeof(dyn_req->file_list[0]) 
					+ sizeof(dyn_req->end) + sizeof(dyn_req->file_count);

	ret = write_customize_cmd(&pkg_ap, &pkg_mcu);
	if (ret)
	{
		hwlog_err("send file id to mcu fail,ret=%d\n", ret);
		return -1;
	}
	if (pkg_mcu.errno != 0)
	{
		hwlog_err("file id set fail\n");
		return -1;
	}
	hwlog_info("set file id to mcu  success, data len=%d\n", pkg_mcu.data_length);
	return 0;
}

static bool check_invensense_exist(void)
{
	int len = 0;
	struct device_node *sensorhub_node = NULL;
	const char *is_invensense_exist = NULL;

	sensorhub_node = of_find_compatible_node(NULL, NULL, "huawei,sensorhub");
	if (!sensorhub_node) {
		hwlog_err("%s, can't find node sensorhub\n", __func__);
		return false;
	}

	is_invensense_exist = of_get_property(sensorhub_node, "invensense_exist", &len);
	if (!is_invensense_exist) {
		hwlog_err("%s, can't find property boardname\n", __func__);
		return false;
	}

	/*just send current to IOM3 in Mogolia*/
	if (strstr(is_invensense_exist, "yes")) {
		hwlog_info("%s, invensense exist\n", __func__);
		return true;
	} else {
		hwlog_info("%s, invensense not exist\n", __func__);
		return false;
	}
}

/* < DTS2014072107524 ligang/00183889 20140721 begin */
static bool check_sensorhub_isensor_version(void)
{
    int len = 0;
    struct device_node *sensorhub_node = NULL;
    const char *is_isensor = NULL;

    sensorhub_node = of_find_compatible_node(NULL, NULL, "huawei,sensorhub");
    if (!sensorhub_node) {
        hwlog_err("%s, can't find node sensorhub\n", __func__);
        return false;
    }

    is_isensor = of_get_property(sensorhub_node, "isensor_version", &len);
    if (!is_isensor) {
        hwlog_err("%s, can't find property isensor_version\n", __func__);
        return false;
    }

     if (strstr(is_isensor, "yes")) {
        hwlog_info("%s, sensorhub is isensor interface version\n", __func__);
        return true;
    } else {
        hwlog_info("%s, sensorhub is not isensor interface version\n", __func__);
        return false;
    }
}
/*  DTS2014072107524 ligang/00183889 20140721 end > */

static int mcu_i2c_rw(uint8_t bus_num, uint8_t i2c_add, uint8_t register_add, uint8_t rw, int len, uint8_t *buf)
{
    int ret=0;
    write_info_t	pkg_ap;
    read_info_t	pkg_mcu;
    pkt_i2c_read_req_t pkt_i2c_read;
    pkt_i2c_write_req_t *pkt_i2c_write = kzalloc(sizeof(pkt_i2c_write_req_t)+len,GFP_KERNEL);
    memset(&pkt_i2c_read, 0, sizeof(pkt_i2c_read));
    memset(&pkg_ap, 0, sizeof(pkg_ap));
    memset(&pkg_mcu, 0, sizeof(pkg_mcu));

    if (rw) {
        pkt_i2c_read.busid = bus_num;
        pkt_i2c_read.addr = i2c_add;
        pkt_i2c_read.reg = register_add;
        pkt_i2c_read.length = len;
        pkg_ap.tag = TAG_I2C;
        pkg_ap.cmd = CMD_I2C_READ_REQ;
        pkg_ap.wr_buf = &pkt_i2c_read.busid;
        pkg_ap.wr_len = sizeof(pkt_i2c_read) - sizeof(pkt_i2c_read.hd);
        ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
        if(ret) {
            hwlog_err("send i2c read cmd to mcu fail, addr=%d, reg=%d,rw=%d\n", i2c_add, register_add, rw);
            return -1;
        }

        if(pkg_mcu.errno != 0) {
            hwlog_err("mcu_i2c_rw read fail, addr=%d, reg=%d,rw=%d\n", i2c_add, register_add, rw);
            return -1;
        } else {
            strncpy(buf, pkg_mcu.data, len);
            return pkg_mcu.data_length;
        }

    } else {
        pkt_i2c_write->busid = bus_num;
        pkt_i2c_write->addr = i2c_add;
        pkt_i2c_write->reg = register_add;
        pkt_i2c_write->length= len;
        strncpy(pkt_i2c_write->data, buf, len);
        pkg_ap.tag = TAG_I2C;
        pkg_ap.cmd = CMD_I2C_WRITE_REQ;
        pkg_ap.wr_buf = &pkt_i2c_write->busid;
        pkg_ap.wr_len = sizeof(*pkt_i2c_write) - sizeof(pkt_i2c_write->hd) + len;
        ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
        if (ret) {
            hwlog_err("send i2c write cmd to mcu fail, addr=%d, reg=%d,rw=%d\n", i2c_add, register_add, rw);
            kfree(pkt_i2c_write);
            return -1;
        }

        if (pkg_mcu.errno != 0) {
            hwlog_err("mcu_i2c_rw write write fail, addr=%d, reg=%d,rw=%d\n", i2c_add, register_add, rw);
			dmd_log_report(DSM_SHB_ERR_I2C_DBG, __func__, "mcu_i2c_rw write fail\n");
			kfree(pkt_i2c_write);
            return -1;
        } else {
            kfree(pkt_i2c_write);
            return pkg_mcu.data_length;
        }
    }
}

static int invense_ICM_20628_set_bypass_for_detect(void)
{
	int ret = 0;
	uint8_t buf_for_bypass = 0;
	unsigned char reg = 0;

	//1-first select bank 0
	ret = mcu_i2c_rw(0, ICM20628_ADDR, REG_BANK_SEL, 1, 1, &reg);
	if (ret < 0) {
		hwlog_err("read bank reg failed!\n");
		return -1;
	}
	reg &= 0xce;
	reg |= (0 << 4);
	ret = mcu_i2c_rw(0, ICM20628_ADDR, REG_BANK_SEL, 0, 1, &reg);
	if (ret < 0) {
		hwlog_err("select bank reg failed!\n");
		return -1;
	}

	//2-then read bypass register
	ret = mcu_i2c_rw(0, ICM20628_ADDR, INT_PIN_CFG, 1, 1, &buf_for_bypass);
	if (ret < 0) {
		hwlog_err("read bypass reg failed!\n");
		return -1;
	}

	//3-then set bypass and write
	buf_for_bypass |= 2;
	ret = mcu_i2c_rw(0, ICM20628_ADDR, INT_PIN_CFG, 0, 1, &buf_for_bypass);
	if (ret < 0) {
		hwlog_err("set bypass reg failed!\n");
		return -1;
	}

	//4-after bypass then we need to awake the a + g(ICM 20628) chip
	ret = mcu_i2c_rw(0, ICM20628_ADDR, PWR_MGMT_1, 1, 1, &reg);
	if (ret < 0) {
		hwlog_err("read sleep reg failed!\n");
		return -1;
	}
	reg &= 0xbf;
	ret = mcu_i2c_rw(0, ICM20628_ADDR, PWR_MGMT_1, 0, 1, &reg);
	if (ret < 0) {
		hwlog_err("set sleep reg failed!\n");
		return -1;
	}

	return 0;
}

static int invense_ICM_20628_close_bypass_for_detect(void)
{
	int ret = 0;
	uint8_t buf_for_bypass = 0;
	unsigned char reg = 0;

	//1-first select bank 0
	ret = mcu_i2c_rw(0, ICM20628_ADDR, REG_BANK_SEL, 1, 1, &reg);
	if (ret < 0) {
		hwlog_err("read bank reg failed!\n");
		return -1;
	}
	reg &= 0xce;
	reg |= (0 << 4);
	ret = mcu_i2c_rw(0, ICM20628_ADDR, REG_BANK_SEL, 0, 1, &reg);
	if (ret < 0) {
		hwlog_err("set bank reg failed!\n");
		return -1;
	}

	//2-then read bypass register
	ret = mcu_i2c_rw(0, ICM20628_ADDR, INT_PIN_CFG, 1, 1, &buf_for_bypass);
	if (ret < 0) {
		hwlog_err("read bypass reg failed!\n");
		return -1;
	}

	//3-then close bypass and write reg
	buf_for_bypass &= 0xfd;
	ret = mcu_i2c_rw(0, ICM20628_ADDR, INT_PIN_CFG, 0, 1, &buf_for_bypass);
	if (ret < 0) {
		hwlog_err("close bypass reg failed!\n");
		return -1;
	}

	return 0;
}

static int get_adapt_file_id_for_dyn_load(void)
{
	u32 wia[10]={0};
	struct property *prop = NULL;
	unsigned int i = 0;
	unsigned int len = 0;
	struct device_node *sensorhub_node = NULL;
	const char *name = "adapt_file_id";

	sensorhub_node = of_find_compatible_node(NULL, NULL, "huawei,sensorhub");
	if (!sensorhub_node) {
		hwlog_err("%s, can't find node sensorhub\n", __func__);
		return -1;
	}

	prop = of_find_property(sensorhub_node, name, NULL);
	if (!prop) {
		hwlog_err("%s! prop is NULL!\n", __func__);
		/*some product has no adapt node*/
		return 0;
	}
	if (!prop->value) {
		hwlog_err("%s! prop->value is NULL!\n", __func__);
		/*some product has no adapt node*/
		return 0;
	}
	len = prop->length /4;

	if(of_property_read_u32_array(sensorhub_node, name, wia, len))
	{
		hwlog_err("%s:read adapt_file_id from dts fail!\n", name);
		return -1;
	}

	for (i = 0; i < len; i++) {
		dyn_req->file_list[dyn_req->file_count] = wia[i];
		dyn_req->file_count++;
	}

	return 0;
}

static int get_adapt_sensor_list_id(void)
{
	u32 wia[10]={0};
	struct property *prop = NULL;
	unsigned int i = 0, len = 0;
	struct device_node *sensorhub_node = NULL;
	const char *name = "adapt_sensor_list_id";

	sensorhub_node = of_find_compatible_node(NULL, NULL, "huawei,sensorhub");
	if (!sensorhub_node) {
		hwlog_err("%s, can't find node sensorhub\n", __func__);
		dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "can't find node sensorhub\n");
		return -1;
	}

	prop = of_find_property(sensorhub_node, name, NULL);
	if (!prop) {
		hwlog_err("%s! prop is NULL!\n", __func__);
		dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, " prop is NULL\n");
		return -EINVAL;
	}
	if (!prop->value) {
		hwlog_err("%s! prop->value is NULL!\n", __func__);
		dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "prop->value is NULL\n");
		return -ENODATA;
	}
	len = prop->length / 4;

	if(of_property_read_u32_array(sensorhub_node, name, wia, len))
	{
		hwlog_err("%s:read adapt_sensor_list_id from dts fail!\n", name);
		dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "read adapt_sensor_list_id from dts fail\n");
		return -1;
	}

	for (i = 0; i < len; i++) {
		sensorlist[sensorlist[0]+1] = (uint16_t)wia[i];
		sensorlist[0]++;
	}
	return 0;
}

int send_fileid_to_mcu_in_recovery(void)
{
	write_info_t	pkg_ap;
	read_info_t	pkg_mcu;
	int ret = 0, i = 0;

	if (true == is_invensense_dmp_exist) {
		msleep(500);
		hwlog_info("DMP poweron!\n");
		ret = gpio_direction_output(GPIO_INVENSENSE_DMP_POWER_SUPPLY,1);
		if (ret) {
			hwlog_err("gpio_direction_output(1) poweron err!\n");
			return -1;
		}
		msleep(100);
	}

	hwlog_info("file id number = %d\n", dyn_req->file_count);
	for (i = 0; i < dyn_req->file_count; i++) {
		hwlog_info("filedid = %d\n", dyn_req->file_list[i]);
	}
	memset(&pkg_ap, 0, sizeof(pkg_ap));
	memset(&pkg_mcu, 0, sizeof(pkg_mcu));
	dyn_req->end = 1;
	pkg_ap.tag = TAG_SYS;
	pkg_ap.cmd = CMD_SYS_DYNLOAD_REQ;
	pkg_ap.wr_buf = &(dyn_req->end);
	pkg_ap.wr_len = dyn_req->file_count * sizeof(dyn_req->file_list[0])
					+ sizeof(dyn_req->end) + sizeof(dyn_req->file_count);

//>>>ret = write_customize_cmd(&pkg_ap, &pkg_mcu);
	ret = write_customize_cmd_noresp(TAG_SYS, CMD_SYS_DYNLOAD_REQ, pkg_ap.wr_buf, pkg_ap.wr_len);
	if (ret)
	{
		hwlog_err("send file id to mcu fail,ret=%d\n", ret);
		return -1;
	}
	if (pkg_mcu.errno != 0)
	{
		hwlog_err("file id set fail\n");
		return -1;
	}
	hwlog_info("set file id to mcu  success, data len=%d\n", pkg_mcu.data_length);
	return 0;
}

static int fill_extend_data_in_dts(struct device_node *dn, const char *name, unsigned char *dest, size_t max_size, int flag)
{
	int ret = 0;
	int buf[SENSOR_PLATFORM_EXTEND_DATA_SIZE] = {0};
	struct property *prop = NULL;
	unsigned int len = 0;
	unsigned int i = 0;

	int *pbuf = buf;
	unsigned char *pdest = dest;

	if (!dn || !name || !dest) {
		return -1;
	}

	if (0 == max_size) {
		return -1;
	}

	prop = of_find_property(dn, name, NULL);
	if (!prop) {
		return -EINVAL;
	}
	if (!prop->value) {
		return -ENODATA;
	}

	len = prop->length / 4;//len: word
	hwlog_info("In %s: len = %d\n", __func__, len);
	if (0 == len || len > max_size) {
		hwlog_err("In %s: len err! len = %d\n", __func__, len);
		dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "len err\n");
		return -1;
	}

	ret = of_property_read_u32_array(dn, name, buf, len);
	if (ret) {
		hwlog_err("In %s: read %s failed!\n", __func__, name);
		dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "read failed\n");
		return -1;
	}

	if (EXTEND_DATA_TYPE_IN_DTS_BYTE == flag) {
		for (i = 0; i < len; i++) {
			*(dest + i) = (uint8_t)buf[i];
		}
	}

	if (EXTEND_DATA_TYPE_IN_DTS_HALF_WORD == flag) {
		for (i = 0; i < len; i++) {
			memcpy(pdest, pbuf, 2);
			pdest += 2;
			pbuf++;
		}
	}

	if (EXTEND_DATA_TYPE_IN_DTS_WORD == flag) {
		memcpy(dest, buf, len * sizeof(int));
	}

	return 0;
}

const char *get_sensor_info_by_tag(int tag)
{
	enum sensor_name sname = SENSOR_MAX;

	switch (tag) {
	case TAG_ACCEL:
		sname = ACC;
		break;
	case TAG_MAG:
		sname = MAG;
		break;
	case TAG_GYRO:
		sname = GYRO;
		break;
	case TAG_ALS:
		sname = ALS;
		break;
	case TAG_PS:
		sname = PS;
		break;

	default:
		hwlog_err("tag %d has no chip_info\n", tag);
		break;
	}

	return (sname != SENSOR_MAX) ? sensor_chip_info[sname] : "";
}

static int init_sensors_cfg_data_from_dts(void)
{
	int ret = 0, i=0;
	int poll_val=0, gpio_irq=0, ga=0, atime=0, again=0, temp=0;
	char *sensor_ty = NULL, *chip_info = NULL;
	struct device_node *dn = NULL;
	int acc_flag=0, mag_flag=0, gyro_flag=0, als_flag=0, ps_flag=0;

       /* < DTS2014072107524 ligang/00183889 20140721 begin */
       sensor_info_isensor_version = check_sensorhub_isensor_version();
       /*  DTS2014072107524 ligang/00183889 20140721 end > */

	is_invensense_dmp_exist = check_invensense_exist();
	if (true == is_invensense_dmp_exist) {
		gpio_request(GPIO_INVENSENSE_DMP_POWER_SUPPLY,"sensorhub");
		gpio_direction_output(GPIO_INVENSENSE_DMP_POWER_SUPPLY,1);
		msleep(100);
	}

	hwlog_info("is_invensense_dmp_exist=%d\n",is_invensense_dmp_exist);

	for_each_node_with_property(dn, "sensor_type")
	{
		ret=of_property_read_string(dn, "sensor_type", (const char **)&sensor_ty);
		if(ret)
		{
			hwlog_err("get sensor type fail ret=%d\n",ret);
			continue;
		}
		if(!strncmp(sensor_ty, "acc", sizeof("acc")))
		{
			hwlog_info("get acc dev from dts.\n");
			if(acc_flag || detect_i2c_device(dn, "acc")) continue;
			acc_flag = 1;

			ret=of_property_read_string(dn, "compatible", (const char **)&chip_info);
			if(ret) hwlog_err("%s:read acc poll_interval fail\n",__func__);
			else strncpy(sensor_chip_info[ACC], chip_info, strlen(chip_info));
			hwlog_info("detect acc dev ok.sensor name=%s\n", chip_info);

			ret=of_property_read_u32(dn, "poll_interval", &poll_val);
			if(ret) hwlog_err("%s:read acc poll_interval fail\n",__func__);
			else gsensor_data.poll_interval=(uint16_t)poll_val;

			ret=of_property_read_u32(dn, "axis_map_x", &temp);
			if(ret) hwlog_err("%s:read acc axis_map_x fail\n",__func__);
			else gsensor_data.axis_map_x=(uint8_t)temp;

			ret=of_property_read_u32(dn, "axis_map_y", &temp);
			if(ret) hwlog_err("%s:read acc axis_map_y fail\n",__func__);
			else gsensor_data.axis_map_y=(uint8_t)temp;

			ret=of_property_read_u32(dn, "axis_map_z", &temp);
			if(ret) hwlog_err("%s:read acc axis_map_z fail\n",__func__);
			else gsensor_data.axis_map_z=(uint8_t)temp;

			ret=of_property_read_u32(dn, "negate_x", &temp);
			if(ret) hwlog_err("%s:read acc negate_x fail\n",__func__);
			else gsensor_data.negate_x=(uint8_t)temp;

			ret=of_property_read_u32(dn, "negate_y", &temp);
			if(ret) hwlog_err("%s:read acc negate_y fail\n",__func__);
			else gsensor_data.negate_y=(uint8_t)temp;

			ret=of_property_read_u32(dn, "negate_z", &temp);
			if(ret) hwlog_err("%s:read acc negate_z fail\n",__func__);
			else gsensor_data.negate_z=(uint8_t)temp;

			ret = of_property_read_u32(dn, "file_id", &temp);
			if(ret) hwlog_err("%s:read acc file_id fail\n", __func__);
			else dyn_req->file_list[dyn_req->file_count] = (uint16_t)temp;
			dyn_req->file_count++;

			ret = of_property_read_u32(dn, "sensor_list_info_id", &temp);
			if(ret) hwlog_err("%s:read acc sensor_list_info_id fail\n", __func__);
			else sensorlist[++sensorlist[0]] = (uint16_t)temp;

			gpio_irq = of_get_named_gpio(dn, "gpio_int1", 0);
			if(gpio_irq) gsensor_data.gpio_int1=(uint8_t)gpio_irq;
			hwlog_info("acc:poll=%d, gpio=%d, file_id=%d\n", poll_val, gpio_irq,temp);
		}else if(!strncmp(sensor_ty, "mag", sizeof("mag")))
		{
			hwlog_info("get mag dev from dts.\n");

			if (true == is_invensense_dmp_exist && 0 == mag_flag) {//set INVENSENSE 20628 bypass mode to detect mag
			    ret = invense_ICM_20628_set_bypass_for_detect();
			    if (ret < 0) {
			        hwlog_err("set bypass failed\n");
			        continue;
			    }
			}

			if(mag_flag || detect_i2c_device(dn, "mag")) continue;

			ret=of_property_read_string(dn, "compatible", (const char **)&chip_info);
			if(ret) hwlog_err("%s:read mag poll_interval fail\n",__func__);
			else strncpy(sensor_chip_info[MAG], chip_info, strlen(chip_info));
			hwlog_info("get mag dev from dts.sensor name=%s\n", chip_info);

			ret=of_property_read_u32(dn, "poll_interval", &poll_val);
			if(ret) hwlog_err("%s:read mag poll_interval fail\n",__func__);
			else mag_data.poll_interval=(uint16_t)poll_val;

			ret=of_property_read_u32(dn, "axis_map_x", &temp);
			if(ret) hwlog_err("%s:read mag axis_map_x fail\n",__func__);
			else mag_data.axis_map_x=(uint8_t)temp;

			ret=of_property_read_u32(dn, "axis_map_y", &temp);
			if(ret) hwlog_err("%s:read mag axis_map_y fail\n",__func__);
			else mag_data.axis_map_y=(uint8_t)temp;

			ret=of_property_read_u32(dn, "axis_map_z", &temp);
			if(ret) hwlog_err("%s:read mag axis_map_z fail\n",__func__);
			else mag_data.axis_map_z=(uint8_t)temp;

			ret=of_property_read_u32(dn, "negate_x", &temp);
			if(ret) hwlog_err("%s:read mag negate_x fail\n",__func__);
			else mag_data.negate_x=(uint8_t)temp;

			ret=of_property_read_u32(dn, "negate_y", &temp);
			if(ret) hwlog_err("%s:read mag negate_y fail\n",__func__);
			else mag_data.negate_y=(uint8_t)temp;

			ret=of_property_read_u32(dn, "negate_z", &temp);
			if(ret) hwlog_err("%s:read mag negate_z fail\n",__func__);
			else mag_data.negate_z=(uint8_t)temp;

			ret=of_property_read_u32(dn, "outbit", &temp);
			if(ret) hwlog_err("%s:read mag outbit fail\n",__func__);
			else mag_data.outbit=(uint8_t)temp;

			ret = of_property_read_u32(dn, "file_id", &temp);
			if(ret) hwlog_err("%s:read mag file_id fail\n", __func__);
			if (temp > 0) {
				dyn_req->file_list[dyn_req->file_count] = (uint16_t)temp;
				dyn_req->file_count++;
			} else {
				hwlog_info("%s:mag file_id = 0\n", __func__);
			}

			ret = of_property_read_u32(dn, "sensor_list_info_id", &temp);
			if(ret) hwlog_err("%s:read mag sensor_list_info_id fail\n", __func__);
			else sensorlist[++sensorlist[0]] = (uint16_t)temp;

			gpio_irq=of_get_named_gpio(dn, "gpio_reset", 0);
			if(gpio_irq) mag_data.gpio_rst=(uint8_t)gpio_irq;

			gpio_irq=of_get_named_gpio(dn, "gpio_drdy", 0);
			if(gpio_irq) mag_data.gpio_drdy=(uint8_t)gpio_irq;

			ret = fill_extend_data_in_dts(dn, str_soft_para, mag_data.pdc_data, PDC_SIZE, EXTEND_DATA_TYPE_IN_DTS_BYTE);
			if (ret) {
				hwlog_err("%s:fill_extend_data_in_dts failed!\n", str_soft_para);
			}
			hwlog_info("mag:poll=%d, gpio=%d,pdc0=%d, pdc5=%d\n", poll_val, gpio_irq, mag_data.pdc_data[0], mag_data.pdc_data[5]);

			ret = fill_extend_data_in_dts(dn, str_comp, mag_data.compass_extend_data, SENSOR_PLATFORM_EXTEND_DATA_SIZE, EXTEND_DATA_TYPE_IN_DTS_WORD);
			if (ret) {
				hwlog_err("%s:fill_extend_data_in_dts failed!\n", str_comp);
			}

			if (true == is_invensense_dmp_exist && 0 == mag_flag) {//finished getting mag dev from dts, then recovery, not bypass
				ret = invense_ICM_20628_close_bypass_for_detect();
				if (ret < 0) {
				    hwlog_err("close bypass failed!\n");
				}
			}
			mag_flag = 1;
		}else if(!strncmp(sensor_ty, "gyro", sizeof("gyro")))
		{
			if(gyro_flag || detect_i2c_device(dn, "gyro")) continue;
			gyro_flag = 1;

			ret = of_property_read_string(dn, "compatible", (const char **)&chip_info);
			if(ret) hwlog_err("%s:read gyro poll_interval fail\n", __func__);
			else strncpy(sensor_chip_info[GYRO], chip_info, strlen(chip_info));
			hwlog_info("get gyro dev from dts.sensor name=%s\n", chip_info);

			ret=of_property_read_u32(dn, "poll_interval", &poll_val);
			if(ret) hwlog_err("%s:read mag poll_interval fail\n",__func__);
			else gyro_data.poll_interval=(uint16_t)poll_val;

			ret=of_property_read_u32(dn, "axis_map_x", &temp);
			if(ret) hwlog_err("%s:read gyro axis_map_x fail\n",__func__);
			else gyro_data.axis_map_x=(uint8_t)temp;

			ret=of_property_read_u32(dn, "axis_map_y", &temp);
			if(ret) hwlog_err("%s:read gyro axis_map_y fail\n",__func__);
			else gyro_data.axis_map_y=(uint8_t)temp;

			ret=of_property_read_u32(dn, "axis_map_z", &temp);
			if(ret) hwlog_err("%s:read gyro axis_map_z fail\n",__func__);
			else gyro_data.axis_map_z=(uint8_t)temp;

			ret=of_property_read_u32(dn, "negate_x", &temp);
			if(ret) hwlog_err("%s:read gyro negate_x fail\n",__func__);
			else gyro_data.negate_x=(uint8_t)temp;

			ret=of_property_read_u32(dn, "negate_y", &temp);
			if(ret) hwlog_err("%s:read gyro negate_y fail\n",__func__);
			else gyro_data.negate_y=(uint8_t)temp;

			ret=of_property_read_u32(dn, "negate_z", &temp);
			if(ret) hwlog_err("%s:read gyro negate_z fail\n",__func__);
			else gyro_data.negate_z=(uint8_t)temp;

			ret = of_property_read_u32(dn, "file_id", &temp);
			if(ret) hwlog_err("%s:read gyro file_id fail\n", __func__);
			else dyn_req->file_list[dyn_req->file_count] = (uint16_t)temp;
			dyn_req->file_count++;

			ret = of_property_read_u32(dn, "sensor_list_info_id", &temp);
			if(ret) hwlog_err("%s:read gyro sensor_list_info_id fail\n", __func__);
			else sensorlist[++sensorlist[0]] = (uint16_t)temp;

			gpio_irq = of_get_named_gpio(dn, "gpio_int1", 0);
			if(gpio_irq) gyro_data.gpio_int1 = (uint8_t)gpio_irq;
			hwlog_info("gyro:poll=%d, gpio=%d\n", poll_val, gpio_irq);
		}
		else if(!strncmp(sensor_ty, "als", sizeof("als")))
		{
			if(als_flag || detect_i2c_device(dn, "als")) continue;
			als_flag = 1;

			ret = of_property_read_string(dn, "compatible", (const char **)&chip_info);
			if(ret) hwlog_err("%s:read als poll_interval fail\n", __func__);
			else strncpy(sensor_chip_info[ALS], chip_info, strlen(chip_info));
			hwlog_info("get als dev from dts.sensor name=%s\n", chip_info);

			ret=of_property_read_u32(dn, "poll_interval", &poll_val);
			if(ret) hwlog_err("%s:read als poll_interval fail\n",__func__);
			else als_data.poll_interval=(uint16_t)poll_val;

			ret=of_property_read_u32(dn, "init_time", &temp);
			if(ret) hwlog_err("%s:read als init time fail\n",__func__);
			else als_data.init_time=(uint16_t)temp;
			hwlog_info("%s:als  init time =%d\n",__func__, als_data.init_time);

			gpio_irq=of_get_named_gpio(dn, "gpio_int1", 0);
			if(gpio_irq) als_data.gpio_int1=(uint8_t)gpio_irq;

			ret=of_property_read_u32(dn, "GA1", &ga);
			if(ret) hwlog_err("%s:read als ga1 fail\n",__func__);
			else als_data.GA1=ga;

			ret=of_property_read_u32(dn, "GA2", &ga);
			if(ret) hwlog_err("%s:read als ga2 fail\n",__func__);
			else als_data.GA2=ga;

			ret=of_property_read_u32(dn, "GA3", &ga);
			if(ret) hwlog_err("%s:read als ga3 fail\n",__func__);
			else als_data.GA3=ga;

			ret=of_property_read_u32(dn, "atime", &atime);
			if(ret) hwlog_err("%s:read als atime fail\n",__func__);
			else als_data.atime=(uint8_t)atime;

			ret=of_property_read_u32(dn, "again", &again);
			if(ret) hwlog_err("%s:read als again fail\n",__func__);
			else als_data.again=(uint8_t)again;

			ret = of_property_read_u32(dn, "file_id", &temp);
			if(ret) hwlog_err("%s:read als file_id fail\n", __func__);
			else dyn_req->file_list[dyn_req->file_count] = (uint16_t)temp;
			dyn_req->file_count++;

			ret = of_property_read_u32(dn, "sensor_list_info_id", &temp);
			if(ret) hwlog_err("%s:read als sensor_list_info_id fail\n", __func__);
			else sensorlist[++sensorlist[0]] = (uint16_t)temp;

			ret = fill_extend_data_in_dts(dn, "als_extend_data", als_data.als_extend_data, 12, EXTEND_DATA_TYPE_IN_DTS_HALF_WORD);
			if (ret) {
				hwlog_err("als_extend_data:fill_extend_data_in_dts failed!\n");
			}

			hwlog_info("als:poll=%d, gpio=%d,ga1=%d\n", poll_val, gpio_irq, als_data.GA1);
		}
		else if(!strncmp(sensor_ty, "ps", sizeof("ps")))
		{
			if(ps_flag || detect_i2c_device(dn, "ps")) continue;
			ps_flag = 1;

			ret = of_property_read_string(dn, "compatible", (const char **)&chip_info);
			if(ret) hwlog_err("%s:read ps poll_interval fail\n", __func__);
			else strncpy(sensor_chip_info[PS], chip_info, strlen(chip_info));
			hwlog_info("get ps dev from dts.sensor name=%s\n", chip_info);

			ret=of_property_read_u32(dn, "min_proximity_value", &temp);
			if(ret) hwlog_err("%s:read mag min_proximity_value fail\n",__func__);
			else ps_data.min_proximity_value=temp;

			gpio_irq=of_get_named_gpio(dn, "gpio_int1", 0);
			if(gpio_irq) ps_data.gpio_int1=(uint8_t)gpio_irq;

			ret=of_property_read_u32(dn, "pwindows_value", &temp);
			if(ret) hwlog_err("%s:read pwindows_value fail\n",__func__);
			else ps_data.pwindows_value=temp;

			ret=of_property_read_u32(dn, "pwave_value", &temp);
			if(ret) hwlog_err("%s:read pwave_value fail\n",__func__);
			else ps_data.pwave_value=temp;

			ret=of_property_read_u32(dn, "threshold_value", &temp);
			if(ret) hwlog_err("%s:read threshold_value fail\n",__func__);
			else ps_data.threshold_value=temp;

			ret=of_property_read_u32(dn, "rdata_under_sun", &temp);
			if(ret) hwlog_err("%s:read rdata_under_sun fail\n",__func__);
			else ps_data.rdata_under_sun=temp;

			ret=of_property_read_u32(dn, "ps_pulse_count", &temp);
			if(ret) hwlog_err("%s:read ps_pulse_count fail\n",__func__);
			else ps_data.ps_pulse_count=(uint8_t)temp;

			ret=of_property_read_u32(dn, "persistent", &temp);
			if(ret) hwlog_err("%s:read persistent fail\n",__func__);
			else ps_data.persistent=(uint8_t)temp;

			ret=of_property_read_u32(dn, "ptime", &temp);
			if(ret) hwlog_err("%s:read ptime fail\n",__func__);
			else ps_data.ptime=(uint8_t)temp;

			ret=of_property_read_u32(dn, "p_on", &temp);
			if(ret) hwlog_err("%s:read p_on fail\n",__func__);
			else ps_data.p_on=(uint8_t)temp;
			ret=of_property_read_u32(dn, "poll_interval", &temp);
			if(ret) hwlog_err("%s:read poll_interval fail\n",__func__);
			else ps_data.poll_interval=(uint16_t)temp;
			ret=of_property_read_u32(dn, "init_time", &temp);
			if(ret) hwlog_err("%s:read init_time fail\n",__func__);
			else ps_data.init_time=(uint16_t)temp;
			hwlog_err("%s:p_on =%d, init_time=%d, poll=%d\n", __func__, ps_data.p_on, ps_data.init_time, ps_data.poll_interval);

			ret = of_property_read_u32(dn, "file_id", &temp);
			if(ret) hwlog_err("%s:read ps file_id fail\n", __func__);
			else dyn_req->file_list[dyn_req->file_count] = (uint16_t)temp;
			dyn_req->file_count++;

			ret = of_property_read_u32(dn, "sensor_list_info_id", &temp);
			if(ret) hwlog_err("%s:read ps sensor_list_info_id fail\n", __func__);
			else sensorlist[++sensorlist[0]] = (uint16_t)temp;

			hwlog_info("ps:poll=%d, gpio=%d,pwindows_value=%d,pwave_value=%d.\n", poll_val, gpio_irq, ps_data.pwindows_value, ps_data.pwave_value);
		}
	}

	if (!acc_flag) {
		dmd_log_report(DSM_SHB_ERR_DYNLOAD, __func__, "acc not detected!\n");
	}

	if (!mag_flag) {
		dmd_log_report(DSM_SHB_ERR_DYNLOAD, __func__, "mag not detected!\n");
	}

	if (!gyro_flag) {
		dmd_log_report(DSM_SHB_ERR_DYNLOAD, __func__, "gyro not detected!\n");
	}

	if (!als_flag) {
		dmd_log_report(DSM_SHB_ERR_DYNLOAD, __func__, "als not detected!\n");
	}

	if (!ps_flag) {
		dmd_log_report(DSM_SHB_ERR_DYNLOAD, __func__, "ps not detected!\n");
	}

	ret = get_adapt_file_id_for_dyn_load();
	if (ret < 0) {
		hwlog_err("get_adapt_file_id_for_dyn_load() failed!\n");
	}

	hwlog_info("get file id number = %d\n", dyn_req->file_count);

	ret = get_adapt_sensor_list_id();
	if (ret < 0) {
		hwlog_err("get_adapt_sensor_list_id() failed!\n");
	}
	sensorlist[0] = check_file_list(sensorlist[0], &sensorlist[1]);
	if (sensorlist[0] > 0)
	{
		hwlog_info("after check, get sensor list id number = %d, list id: ", sensorlist[0]);
		for (i = 0; i < sensorlist[0]; i++) {
			printk("--%d ", sensorlist[i+1]);
		}
		printk("\n");
	}
	else
	{
		hwlog_err("%s list num = 0, not send file_id to muc\n", __func__);
		return -EINVAL;
	}

	dyn_req->file_count = check_file_list(dyn_req->file_count, dyn_req->file_list);
	if (dyn_req->file_count)
	{
		hwlog_info("after check, get file id number = %d\n", dyn_req->file_count);
		for (i = 0; i < dyn_req->file_count; i++) {
			hwlog_info("filedid = %d\n", dyn_req->file_list[i]);
		}

		return send_fileid_to_mcu();
	}
	else
	{
		hwlog_err("%s file_count = 0, not send file_id to muc\n", __func__);
		return -EINVAL;
	}
}

/*******************************************************************************************
Function:	sensor_set_cfg_data
Description: 其他配置信息，例如是否需要根据电池电流大小校准指南针
Data Accessed:  无
Data Updated:   无
Input:        无
Output:         无
Return:         成功或者失败信息: 0->成功, -1->失败
*******************************************************************************************/
static int sensor_set_current_info(void)
{
	int ret = 0;
	u8 need_current = 0;
	write_info_t	pkg_ap;

	memset(&pkg_ap, 0, sizeof(pkg_ap));

	need_current = check_if_need_current();

	pkg_ap.tag=TAG_CURRENT;
	pkg_ap.cmd=CMD_CURRENT_CFG_REQ;
	pkg_ap.wr_buf=&need_current;
	pkg_ap.wr_len=sizeof(need_current);
	ret = write_customize_cmd(&pkg_ap,  NULL);
	if (ret)
	{
		hwlog_err("send current cfg data to mcu fail,ret=%d\n", ret);
		return -1;
	}
	else
	{
		hwlog_info( "set current cfg data to mcu success\n");
	}

	return 0;
}

static int sensor_set_current_info_in_recovery(void)
{
	int ret = 0;
	u8 need_current = 0;
	write_info_t	pkg_ap;

	memset(&pkg_ap, 0, sizeof(pkg_ap));

	need_current = check_if_need_current();

	pkg_ap.tag=TAG_CURRENT;
	pkg_ap.cmd=CMD_CURRENT_CFG_REQ;
	pkg_ap.wr_buf=&need_current;
	pkg_ap.wr_len=sizeof(need_current);
//>>>ret = write_customize_cmd(&pkg_ap,  NULL);
	ret = write_customize_cmd_noresp(TAG_CURRENT, CMD_CURRENT_CFG_REQ, pkg_ap.wr_buf, pkg_ap.wr_len);
	if (ret)
	{
		hwlog_err("send current cfg data to mcu fail,ret=%d\n", ret);
		return -1;
	}
	else
	{
		hwlog_info( "set current cfg data to mcu success\n");
	}

	return 0;
}

int sensor_set_cfg_data_in_recovery(void)
{
	int ret = 0;
	write_info_t	pkg_ap;
	read_info_t	pkg_mcu;

	memset(&pkg_ap, 0, sizeof(pkg_ap));
	memset(&pkg_mcu, 0, sizeof(pkg_mcu));

	ret = sensor_set_current_info_in_recovery();
	if (ret)
	{
		hwlog_err("sensor_set_current_info fail, ret = %d\n", ret);
	}

	//g-sensor
	pkg_ap.tag=TAG_ACCEL;
	pkg_ap.cmd=CMD_ACCEL_PARAMET_REQ;
	pkg_ap.wr_buf=&gsensor_data;
	pkg_ap.wr_len=sizeof(gsensor_data);
	//>>>ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
	ret = write_customize_cmd_noresp(TAG_ACCEL, CMD_ACCEL_PARAMET_REQ, pkg_ap.wr_buf, pkg_ap.wr_len);
	if(ret)
	{
		hwlog_err("send gsensor cfg data to mcu fail,ret=%d\n", ret);
	}
	else
	{
		if(pkg_mcu.errno!=0)
		{
			hwlog_err("set gsensor cfg fail\n");
			dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "set gsensor cfg fail\n");
		}
		else
		{
			hwlog_info( "set gsensor cfg data to mcu success\n");
		}
	}
	//gyro
	pkg_ap.tag=TAG_GYRO;
	pkg_ap.cmd=CMD_GYRO_PARAMET_REQ;
	pkg_ap.wr_buf=&gyro_data;
	pkg_ap.wr_len=sizeof(gyro_data);
//>>>ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
	ret = write_customize_cmd_noresp(TAG_GYRO, CMD_GYRO_PARAMET_REQ, pkg_ap.wr_buf, pkg_ap.wr_len);
	if(ret)
	{
		hwlog_err("send gyro cfg data to mcu fail,ret=%d\n", ret);
	}
	else
	{
		if(pkg_mcu.errno!=0)
		{
			hwlog_err("set gyro cfg fail\n");
			dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "set gyro cfg fail\n");
		}
		else
		{
			hwlog_info( "set gyro cfg data to mcu success\n");
		}
	}
	//mag
	pkg_ap.tag=TAG_MAG;
	pkg_ap.cmd=CMD_MAG_PARAMET_REQ;
	pkg_ap.wr_buf=&mag_data;
	pkg_ap.wr_len=sizeof(mag_data);
//>>>ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
	ret = write_customize_cmd_noresp(TAG_MAG, CMD_MAG_PARAMET_REQ, pkg_ap.wr_buf, pkg_ap.wr_len);
	if(ret)
	{
		hwlog_err("send magg data to mcu fail,ret=%d\n", ret);
	}
	else
	{
		if(pkg_mcu.errno!=0)
		{
			hwlog_err("set mag cfg fail\n");
			dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "set mag cfg fail\n");
		}
		else
		{
			hwlog_info( "set mag cfg data to mcu success\n");
		}
	}
	//als
	pkg_ap.tag=TAG_ALS;
	pkg_ap.cmd=CMD_ALS_PARAMET_REQ;
	pkg_ap.wr_buf=&als_data;
	pkg_ap.wr_len=sizeof(als_data);
//>>>ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
	ret = write_customize_cmd_noresp(TAG_ALS, CMD_ALS_PARAMET_REQ, pkg_ap.wr_buf, pkg_ap.wr_len);
	if(ret)
	{
		hwlog_err("send als cfg data to mcu fail,ret=%d\n", ret);
	}
	else
	{
		if(pkg_mcu.errno!=0)
		{
			hwlog_err("set als cfg fail\n");
			dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "set als cfg fail\n");
		}
		else
		{
			hwlog_info( "set als cfg data to mcu success\n");
		}
	}
	//ps
	pkg_ap.tag=TAG_PS;
	pkg_ap.cmd=CMD_PS_PARAMET_REQ;
	pkg_ap.wr_buf=&ps_data;
	pkg_ap.wr_len=sizeof(ps_data);
//>>>ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
	ret = write_customize_cmd_noresp(TAG_PS, CMD_PS_PARAMET_REQ, pkg_ap.wr_buf, pkg_ap.wr_len);
	if(ret)
	{
		hwlog_err("send ps cfg data to mcu fail,ret=%d\n", ret);
	}
	else
	{
		if(pkg_mcu.errno!=0)
		{
			hwlog_err("set ps cfg fail\n");
			dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "set ps cfg fail\n");
		}
		else
		{
			hwlog_info( "set ps cfg data to mcu success\n");
		}
	}
	return ret;
}

/*******************************************************************************************
Function:	sensor_set_cfg_data
Description: 将配置参数发至mcu 侧
Data Accessed:  无
Data Updated:   无
Input:        无
Output:         无
Return:         成功或者失败信息: 0->成功, -1->失败
*******************************************************************************************/

static int sensor_set_cfg_data(void)
{
	int ret = 0;
	write_info_t	pkg_ap;
	read_info_t	pkg_mcu;

	memset(&pkg_ap, 0, sizeof(pkg_ap));
	memset(&pkg_mcu, 0, sizeof(pkg_mcu));

	ret = sensor_set_current_info();
	if (ret)
	{
		hwlog_err("sensor_set_current_info fail, ret = %d\n", ret);
	}

	//g-sensor
	pkg_ap.tag=TAG_ACCEL;
	pkg_ap.cmd=CMD_ACCEL_PARAMET_REQ;
	pkg_ap.wr_buf=&gsensor_data;
	pkg_ap.wr_len=sizeof(gsensor_data);
	ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
	if(ret)
	{
		hwlog_err("send gsensor cfg data to mcu fail,ret=%d\n", ret);
	}
	else
	{
		if(pkg_mcu.errno!=0)
		{
			hwlog_err("set gsensor cfg fail\n");
			dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "set gsensor cfg fail\n");
		}
		else
		{
			hwlog_info( "set gsensor cfg data to mcu success\n");
#ifdef CONFIG_HUAWEI_HW_DEV_DCT
			/* detect current device successful, set the flag as present */
			set_hw_dev_flag(DEV_I2C_G_SENSOR);
#endif
		}
	}
	//gyro
	pkg_ap.tag=TAG_GYRO;
	pkg_ap.cmd=CMD_GYRO_PARAMET_REQ;
	pkg_ap.wr_buf=&gyro_data;
	pkg_ap.wr_len=sizeof(gyro_data);
	ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
	if(ret)
	{
		hwlog_err("send gyro cfg data to mcu fail,ret=%d\n", ret);
	}
	else
	{
		if(pkg_mcu.errno!=0)
		{
			hwlog_err("set gyro cfg fail\n");
			dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "set gyro cfg fail\n");
		}
		else
		{
			hwlog_info( "set gyro cfg data to mcu success\n");
#ifdef CONFIG_HUAWEI_HW_DEV_DCT
			/* detect current device successful, set the flag as present */
			set_hw_dev_flag(DEV_I2C_GYROSCOPE);
#endif
		}
	}
	//mag
	pkg_ap.tag=TAG_MAG;
	pkg_ap.cmd=CMD_MAG_PARAMET_REQ;
	pkg_ap.wr_buf=&mag_data;
	pkg_ap.wr_len=sizeof(mag_data);
	ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
	if(ret)
	{
		hwlog_err("send magg data to mcu fail,ret=%d\n", ret);
	}
	else
	{
		if(pkg_mcu.errno!=0)
		{
			hwlog_err("set mag cfg fail\n");
			dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "set mag cfg fail\n");
		}
		else
		{
			hwlog_info( "set mag cfg data to mcu success\n");
#ifdef CONFIG_HUAWEI_HW_DEV_DCT
			/* detect current device successful, set the flag as present */
			set_hw_dev_flag(DEV_I2C_COMPASS);
#endif
		}
	}
	register_mcu_event_notifier(TAG_MAG, CMD_MAG_SEND_CALIBRATE_TO_AP_REQ, mag_calibrate_data_from_mcu);

	//als
	pkg_ap.tag=TAG_ALS;
	pkg_ap.cmd=CMD_ALS_PARAMET_REQ;
	pkg_ap.wr_buf=&als_data;
	pkg_ap.wr_len=sizeof(als_data);
	ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
	if(ret)
	{
		hwlog_err("send als cfg data to mcu fail,ret=%d\n", ret);
	}
	else
	{
		if(pkg_mcu.errno!=0)
		{
			hwlog_err("set als cfg fail\n");
			dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "set als cfg fail\n");
		}
		else
		{
			hwlog_info( "set als cfg data to mcu success\n");
		}
	}
	//ps
	pkg_ap.tag=TAG_PS;
	pkg_ap.cmd=CMD_PS_PARAMET_REQ;
	pkg_ap.wr_buf=&ps_data;
	pkg_ap.wr_len=sizeof(ps_data);
	ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
	if(ret)
	{
		hwlog_err("send ps cfg data to mcu fail,ret=%d\n", ret);
	}
	else
	{
		if(pkg_mcu.errno!=0)
		{
			hwlog_err("set ps cfg fail\n");
			dmd_log_report(DSM_SHB_ERR_CFG_DATA, __func__, "set ps cfg fail\n");
		}
		else
		{
			hwlog_info( "set ps cfg data to mcu success\n");
#ifdef CONFIG_HUAWEI_HW_DEV_DCT
			/* detect current device successful, set the flag as present */
			set_hw_dev_flag(DEV_I2C_L_SENSOR);
#endif
		}
	}

	return ret;
}

static ssize_t show_sensor_list_info(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	int i;
	hwlog_info( "sensor list: ");
	for(i = 0; i <= sensorlist[0]; i++)
		printk( " %d  ", sensorlist[i]);
	printk("\n");
	memcpy(buf, sensorlist, ((sensorlist[0]+1)*sizeof(uint16_t)));
	return (sensorlist[0] + 1) * sizeof(uint16_t);
}
static DEVICE_ATTR(sensor_list_info, S_IRUGO,
				   show_sensor_list_info, NULL);

static ssize_t sensor_show_acc_info(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	return snprintf(buf, MAX_STR_SIZE, "%s\n", sensor_chip_info[ACC]);
}
static DEVICE_ATTR(acc_info, S_IRUGO,
				   sensor_show_acc_info, NULL);
static ssize_t sensor_show_mag_info(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	return snprintf(buf, MAX_STR_SIZE, "%s\n", sensor_chip_info[MAG]);
}
static DEVICE_ATTR(mag_info, S_IRUGO,
				   sensor_show_mag_info, NULL);
static ssize_t sensor_show_gyro_info(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	return snprintf(buf, MAX_STR_SIZE, "%s\n", sensor_chip_info[GYRO]);
}
static DEVICE_ATTR(gyro_info, S_IRUGO,
				   sensor_show_gyro_info, NULL);
static ssize_t sensor_show_als_info(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	return snprintf(buf, MAX_STR_SIZE, "%s\n", sensor_chip_info[ALS]);
}
static DEVICE_ATTR(als_info, S_IRUGO,
				   sensor_show_als_info, NULL);

static ssize_t sensor_show_ps_info(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	return snprintf(buf, MAX_STR_SIZE, "%s\n", sensor_chip_info[PS]);
}
static DEVICE_ATTR(ps_info, S_IRUGO,
				   sensor_show_ps_info, NULL);

unsigned int sensor_read_number[TAG_END] = {0,0,0,0,0};
static ssize_t sensor_show_acc_read_data(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	printk("[sensorhub_test], %s return %d\n", __func__, sensor_read_number[TAG_ACCEL]);
	return snprintf(buf, MAX_STR_SIZE, "%d\n", sensor_read_number[TAG_ACCEL]);
}
static DEVICE_ATTR(acc_read_data, 0664,
				   sensor_show_acc_read_data, NULL);
static ssize_t sensor_show_mag_read_data(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	printk("[sensorhub_test], %s return %d\n", __func__, sensor_read_number[TAG_MAG]);
	return snprintf(buf, MAX_STR_SIZE, "%d\n", sensor_read_number[TAG_MAG]);
}
static DEVICE_ATTR(mag_read_data, 0664,
				   sensor_show_mag_read_data, NULL);
static ssize_t sensor_show_gyro_read_data(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	printk("[sensorhub_test], %s return %d\n", __func__, sensor_read_number[TAG_GYRO]);
	return snprintf(buf, MAX_STR_SIZE, "%d\n", sensor_read_number[TAG_GYRO]);
}
static DEVICE_ATTR(gyro_read_data, 0664,
				   sensor_show_gyro_read_data, NULL);
static ssize_t sensor_show_als_read_data(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	printk("[sensorhub_test], %s return %d\n", __func__, sensor_read_number[TAG_ALS]);
	return snprintf(buf, MAX_STR_SIZE, "%d\n", sensor_read_number[TAG_ALS]);
}
static DEVICE_ATTR(als_read_data, 0664,
				   sensor_show_als_read_data, NULL);

static ssize_t sensor_show_ps_read_data(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	printk("[sensorhub_test], %s return %d\n", __func__, sensor_read_number[TAG_PS]);
	return snprintf(buf, MAX_STR_SIZE, "%d\n", sensor_read_number[TAG_PS]);
}
static DEVICE_ATTR(ps_read_data, 0664,
				   sensor_show_ps_read_data, NULL);

static ssize_t show_gyro_selfTest_result(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	return snprintf(buf, MAX_STR_SIZE, "%s\n", sensor_status.gyro_selfTest_result);
}

static ssize_t attr_set_gyro_selftest(struct device *dev, struct device_attribute *attr,
				const char *buf, size_t size)
{
	unsigned long val = 0;
	int err = -1;
	write_info_t	pkg_ap;
	read_info_t	pkg_mcu;

	memset(&pkg_ap, 0, sizeof(pkg_ap));
	memset(&pkg_mcu, 0, sizeof(pkg_mcu));
	if (strict_strtoul(buf, 10, &val))
		return -EINVAL;
	if(1==val)
	{
		pkg_ap.tag=TAG_GYRO;
		pkg_ap.cmd=CMD_GYRO_SELFTEST_REQ;
		pkg_ap.wr_buf=NULL;
		pkg_ap.wr_len=0;
		err=write_customize_cmd(&pkg_ap,  &pkg_mcu);
		if(err)
		{
			hwlog_err("send gyro selftest cmd to mcu fail,ret=%d\n", err);
			memcpy(sensor_status.gyro_selfTest_result, "0", 2);
			return size;
		}
		if(pkg_mcu.errno!=0)
		{
			hwlog_err("gyro selftest fail\n");
			memcpy(sensor_status.gyro_selfTest_result, "0", 2);
		}else
		{
			hwlog_info("gyro selftest  success, data len=%d\n", pkg_mcu.data_length);
			memcpy(sensor_status.gyro_selfTest_result, "1", 2);
		}
	}
	return size;
}

static DEVICE_ATTR(gyro_selfTest, 0664, show_gyro_selfTest_result, attr_set_gyro_selftest);
static ssize_t show_mag_selfTest_result(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	return snprintf(buf, MAX_STR_SIZE, "%s\n", sensor_status.mag_selfTest_result);
}

static ssize_t write_mag_selfTest_result(struct device *dev,
				struct device_attribute *attr, const char *buf, size_t count)
{
	unsigned long val = 0;
	int ret=0;
	write_info_t	pkg_ap;
	read_info_t	pkg_mcu;

	memset(&pkg_ap, 0, sizeof(pkg_ap));
	memset(&pkg_mcu, 0, sizeof(pkg_mcu));
	if (strict_strtoul(buf, 10, &val))
		return -EINVAL;
	if(1==val)
	{
		pkg_ap.tag=TAG_MAG;
		pkg_ap.cmd=CMD_MAG_SELFTEST_REQ;
		pkg_ap.wr_buf=NULL;
		pkg_ap.wr_len=0;
		ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
		if(ret)
		{
			hwlog_err("send mag selftest cmd to mcu fail,ret=%d\n", ret);
			memcpy(sensor_status.mag_selfTest_result, "0", 2);
			return count;
		}
		if(pkg_mcu.errno!=0)
		{
			hwlog_err("mag selftest fail\n");
			memcpy(sensor_status.mag_selfTest_result, "0", 2);
		}else
		{
			hwlog_info("mag selftest  success, data len=%d\n", pkg_mcu.data_length);
			memcpy(sensor_status.mag_selfTest_result, "1", 2);
		}
		//hwlog_info("--mag_selfTest_result=%d---\n", mag_selfTest_result);
	}
	return count;
}
static DEVICE_ATTR(mag_selfTest, 0664,
				   show_mag_selfTest_result, write_mag_selfTest_result);

static ssize_t show_accel_selfTest_result(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	return snprintf(buf, MAX_STR_SIZE, "%s\n", sensor_status.accel_selfTest_result);
}

static ssize_t write_accel_selfTest_result(struct device *dev,
				struct device_attribute *attr, const char *buf, size_t count)
{
	unsigned long val = 0;
	int ret=0;
	write_info_t	pkg_ap;
	read_info_t	pkg_mcu;

	memset(&pkg_ap, 0, sizeof(pkg_ap));
	memset(&pkg_mcu, 0, sizeof(pkg_mcu));
	if (strict_strtoul(buf, 10, &val)) {
		hwlog_err("In %s! val = %lu\n", __func__, val);
		return -EINVAL;
	}

	if (1 == val) {
		pkg_ap.tag=TAG_ACCEL;
		pkg_ap.cmd=CMD_ACCEL_SELFTEST_REQ;
		pkg_ap.wr_buf=NULL;
		pkg_ap.wr_len=0;
		ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
		if (ret) {
			hwlog_err("send accel selftest cmd to mcu fail,ret=%d\n", ret);
			memcpy(sensor_status.accel_selfTest_result, "0", 2);
			return count;
		}

		if(pkg_mcu.errno!=0)
		{
			hwlog_err("accel selftest fail\n");
			memcpy(sensor_status.accel_selfTest_result, "0", 2);
		} else {
			hwlog_info("accel selftest success, data len=%d\n", pkg_mcu.data_length);
			memcpy(sensor_status.accel_selfTest_result, "1", 2);
		}
		//hwlog_info("sensor_status.accel_selfTest_result = %s\n", sensor_status.accel_selfTest_result);
	}

	return count;
}
static DEVICE_ATTR(acc_selfTest, 0664,
				   show_accel_selfTest_result, write_accel_selfTest_result);

static ssize_t i2c_rw_pi(struct device *dev,
				struct device_attribute *attr, const char *buf, size_t count)
{
	uint64_t val = 0;
	int ret=0;
	uint8_t bus_num = 0, i2c_address = 0, reg_add = 0, len = 0, rw = 0, buf_temp[DEBUG_DATA_LENGTH] = {0};
	if (strict_strtoull(buf, 16, &val))
		return -EINVAL;
	//##(bus_num)##(i2c_addr)##(reg_addr)##(len)##(rw)##(value)
	bus_num = (val>>40)&0xff;
	i2c_address = (val>>32)&0xff;
	reg_add = (val>>24)&0xff;
	len = (val>>16)&0xff;
	if (len > DEBUG_DATA_LENGTH) {
		hwlog_err("len exceed %d\n", len);
		len = DEBUG_DATA_LENGTH;
	}
	rw = (val>>8)&0xff;
	buf_temp[0] = (uint8_t)(val&0xff);

	hwlog_info("In %s! bus_num = %d, i2c_address = %d, reg_add = %d, len = %d, rw = %d, buf_temp[0] = %d\n", __func__, bus_num, i2c_address, reg_add, len, rw, buf_temp[0]);
//static int mcu_i2c_rw(uint8_t bus_num, uint8_t i2c_add, uint8_t register_add, uint8_t rw, int len, uint8_t *buf)
	ret = mcu_i2c_rw(bus_num, i2c_address, reg_add, rw, len, buf_temp);
	if(ret < 0)
		hwlog_err("oper %d(1:r 0:w) i2c reg fail!\n", rw);
	if(rw) {
		hwlog_err("i2c reg %x value %x %x %x %x\n", reg_add, buf_temp[0], buf_temp[1], buf_temp[2], buf_temp[3]);
		memcpy(debug_read_data_buf, buf_temp, DEBUG_DATA_LENGTH);
	}
	return count;
}

static ssize_t i2c_rw_pi_show(struct device *dev, struct device_attribute *attr, char *buf)
{
	unsigned int i = 0;
	unsigned int len = 0;
	char *p = buf;
	if (!buf) {
		return -1;
	}

	for(i = 0; i < DEBUG_DATA_LENGTH; i++) {
		sprintf(p, "0x%x,", debug_read_data_buf[i]);
		if (debug_read_data_buf[i] > 0xf) {
			p += 5;
			len += 5;
		} else {
			p += 4;
			len += 4;
		}
	}

	p = buf;
	*(p + len - 1) = 0;

	p = NULL;
	return len;
}
static DEVICE_ATTR(i2c_rw, 0664, i2c_rw_pi_show, i2c_rw_pi);

static ssize_t attr_acc_calibrate_show(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	int val = return_calibration;
	return snprintf(buf, PAGE_SIZE, "%d\n", val);
}

static int acc_calibrate_save(const void *buf, int length)
{
	char temp_buf[10] = {0};
	int ret=0;
	if(buf == NULL||length <= 0)
	{
		hwlog_err("%s invalid argument.", __func__);
		return_calibration=EXEC_FAIL;
		return -1;
	}
	memcpy(temp_buf, buf, length);
	hwlog_info( "%s:gsensor calibrate ok, %d  %d  %d \n", __func__, temp_buf[0],temp_buf[1],temp_buf[2]);
	ret = write_gsensor_offset_to_nv(temp_buf);
	if(ret)
	{
		hwlog_err("nv write fail.\n");
		return_calibration=NV_FAIL;
		return -1;
	}
	return_calibration=SUC;
	return 0;
}

static ssize_t attr_acc_calibrate_write(struct device *dev,
				struct device_attribute *attr, const char *buf, size_t count)
{
	unsigned long val = 0;
	int ret = 0;
	write_info_t	pkg_ap;
	read_info_t	pkg_mcu;

	memset(&pkg_ap, 0, sizeof(pkg_ap));
	memset(&pkg_mcu, 0, sizeof(pkg_mcu));
	if (strict_strtoul(buf, 10, &val))
		return -EINVAL;
	if(1==val)
	{
		pkg_ap.tag=TAG_ACCEL;
		pkg_ap.cmd=CMD_ACCEL_SELFCALI_REQ;
		pkg_ap.wr_buf=NULL;
		pkg_ap.wr_len=0;
		ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);
		if(ret)
		{
			return_calibration=COMMU_FAIL;
			hwlog_err("send acc calibrate cmd to mcu fail,ret=%d\n", ret);
			return count;
		}
		if(pkg_mcu.errno!=0)
		{
			hwlog_err("acc calibrate fail\n");
			return_calibration=EXEC_FAIL;
		}
		else
		{
			hwlog_info("acc calibrate  success, data len=%d\n", pkg_mcu.data_length);
			acc_calibrate_save(pkg_mcu.data, pkg_mcu.data_length);
		}
	}
	return count;
}

static DEVICE_ATTR(acc_calibrate, 0664, attr_acc_calibrate_show, attr_acc_calibrate_write);

/*if val is odd, then last status is sleep, if is even number, then last status is wakeup */
static ssize_t attr_iom3_sr_test_store(struct device *dev,
				struct device_attribute *attr, const char *buf, size_t count)
{
	unsigned long val = 0;
	unsigned long times = 0;

	if (strict_strtoul(buf, 10, &val))
		return -EINVAL;

	times = val;

	if(val > 0){
		for(; val > 0; val--){
			disable_sensors_when_suspend();
			tell_ap_status_to_mcu(ST_SLEEP);
			msleep(2);
			tell_ap_status_to_mcu(ST_WAKEUP);
			enable_sensors_when_resume();
		}

		if (times%2){
			tell_ap_status_to_mcu(ST_SLEEP);
			enable_sensors_when_resume();
		}
	}
	return count;
}

static DEVICE_ATTR(iom3_sr_test, 0664, NULL, attr_iom3_sr_test_store);

//acc enable node

#define SHOW_ENABLE_FUNC(NAME, TAG)\
static ssize_t show_##NAME##_enable_result(struct device *dev,\
				struct device_attribute *attr, char *buf)\
{\
	return snprintf(buf, MAX_STR_SIZE, "%d\n", sensor_status.status[TAG]);\
}

#define STORE_ENABLE_FUNC(NAME, TAG, CMD1, CMD2)\
static ssize_t attr_set_##NAME##_enable(struct device *dev, struct device_attribute *attr,\
				const char *buf, size_t size)\
{\
	unsigned long val = 0;\
	int ret = -1;\
	write_info_t	pkg_ap;\
	read_info_t pkg_mcu;\
	memset(&pkg_ap, 0, sizeof(pkg_ap));\
	memset(&pkg_mcu, 0, sizeof(pkg_mcu));\
	if (strict_strtoul(buf, 10, &val))\
		return -EINVAL;\
	if(1==val)\
	{\
		pkg_ap.tag=TAG;\
		pkg_ap.cmd=CMD1;\
		pkg_ap.wr_buf=NULL;\
		pkg_ap.wr_len=0;\
		ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);\
		if(ret)\
		{\
			hwlog_err("send %s enable cmd to mcu fail,ret=%d\n", #NAME, ret);\
			return size;\
		} \
		if(pkg_mcu.errno!=0) hwlog_err("set %s enable fail\n", #NAME);\
		else hwlog_info("%s enable success\n", #NAME);\
	}else\
	{\
		pkg_ap.tag=TAG;\
		pkg_ap.cmd=CMD2;\
		pkg_ap.wr_buf=NULL;\
		pkg_ap.wr_len=0;\
		ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);\
		if(ret)\
		{\
			hwlog_err("send %s disable cmd to mcu fail,ret=%d\n", #NAME, ret);\
			return size;\
		}\
		if(pkg_mcu.errno!=0) hwlog_err("set %s disable fail\n", #NAME);\
		else hwlog_info("%s disable success\n", #NAME);\
	}\
	return size;\
}

#define SHOW_DELAY_FUNC(NAME, TAG) \
static ssize_t show_##NAME##_delay_result(struct device *dev,\
				struct device_attribute *attr, char *buf)\
{\
	return snprintf(buf, MAX_STR_SIZE, "%d\n", sensor_status.delay[TAG]);\
}

#define STORE_DELAY_FUNC(NAME, TAG, CMD)  \
static ssize_t attr_set_##NAME##_delay(struct device *dev, struct device_attribute *attr,\
				const char *buf, size_t size)\
{\
	unsigned long val = 0;\
	int ret = -1;\
	write_info_t	pkg_ap;\
	read_info_t pkg_mcu;\
\
	memset(&pkg_ap, 0, sizeof(pkg_ap));\
	memset(&pkg_mcu, 0, sizeof(pkg_mcu));\
	if (strict_strtoul(buf, 10, &val))\
		return -EINVAL;\
	if(val>=10&& val<1000)\
	{\
		pkg_ap.tag=TAG;\
		pkg_ap.cmd=CMD;\
		pkg_ap.wr_buf=&val;\
		pkg_ap.wr_len=sizeof(val);\
		ret=write_customize_cmd(&pkg_ap,  &pkg_mcu);\
		if(ret)\
		{\
			hwlog_err("send %s delay cmd to mcu fail,ret=%d\n", #NAME, ret);\
			return size;\
		}\
		if(pkg_mcu.errno!=0) hwlog_err("set %s delay fail\n", #NAME);\
		else\
		{\
			hwlog_info("set %s delay (%ld)success\n", #NAME, val);\
		}\
	}\
	return size;\
}

SHOW_ENABLE_FUNC(acc, TAG_ACCEL)
STORE_ENABLE_FUNC(acc, TAG_ACCEL, CMD_CMN_OPEN_REQ, CMD_CMN_CLOSE_REQ)
static DEVICE_ATTR(acc_enable, 0664, show_acc_enable_result, attr_set_acc_enable);
SHOW_DELAY_FUNC(acc, TAG_ACCEL)
STORE_DELAY_FUNC(acc, TAG_ACCEL, CMD_CMN_INTERVAL_REQ) 
static DEVICE_ATTR(acc_setdelay, 0664, show_acc_delay_result, attr_set_acc_delay);

SHOW_ENABLE_FUNC(gyro, TAG_GYRO)
STORE_ENABLE_FUNC(gyro, TAG_GYRO, CMD_CMN_OPEN_REQ, CMD_CMN_CLOSE_REQ)
static DEVICE_ATTR(gyro_enable, 0664, show_gyro_enable_result, attr_set_gyro_enable);
SHOW_DELAY_FUNC(gyro, TAG_GYRO)
STORE_DELAY_FUNC(gyro, TAG_GYRO, CMD_CMN_INTERVAL_REQ) 
static DEVICE_ATTR(gyro_setdelay, 0664, show_gyro_delay_result, attr_set_gyro_delay);

SHOW_ENABLE_FUNC(mag, TAG_MAG)
STORE_ENABLE_FUNC(mag, TAG_MAG, CMD_CMN_OPEN_REQ, CMD_CMN_CLOSE_REQ)
static DEVICE_ATTR(mag_enable, 0664, show_mag_enable_result, attr_set_mag_enable);
SHOW_DELAY_FUNC(mag, TAG_MAG)
STORE_DELAY_FUNC(mag, TAG_MAG, CMD_CMN_INTERVAL_REQ) 
static DEVICE_ATTR(mag_setdelay, 0664, show_mag_delay_result, attr_set_mag_delay);

SHOW_ENABLE_FUNC(als, TAG_ALS)
STORE_ENABLE_FUNC(als, TAG_ALS, CMD_CMN_OPEN_REQ, CMD_CMN_CLOSE_REQ)
static DEVICE_ATTR(als_enable, 0664, show_als_enable_result, attr_set_als_enable);
SHOW_DELAY_FUNC(als, TAG_ALS)
STORE_DELAY_FUNC(als, TAG_ALS, CMD_CMN_INTERVAL_REQ) 
static DEVICE_ATTR(als_setdelay, 0664, show_als_delay_result, attr_set_als_delay);

SHOW_ENABLE_FUNC(ps, TAG_PS)
STORE_ENABLE_FUNC(ps, TAG_PS, CMD_CMN_OPEN_REQ, CMD_CMN_CLOSE_REQ)
static DEVICE_ATTR(ps_enable, 0664, show_ps_enable_result, attr_set_ps_enable);
SHOW_DELAY_FUNC(ps, TAG_PS)
STORE_DELAY_FUNC(ps, TAG_PS, CMD_CMN_INTERVAL_REQ) 
static DEVICE_ATTR(ps_setdelay, 0664, show_ps_delay_result, attr_set_ps_delay);

SHOW_ENABLE_FUNC(os, TAG_ORIENTATION)
STORE_ENABLE_FUNC(os, TAG_ORIENTATION, CMD_CMN_OPEN_REQ, CMD_CMN_CLOSE_REQ)
static DEVICE_ATTR(os_enable, 0664, show_os_enable_result, attr_set_os_enable);
SHOW_DELAY_FUNC(os, TAG_ORIENTATION)
STORE_DELAY_FUNC(os, TAG_ORIENTATION, CMD_CMN_INTERVAL_REQ) 
static DEVICE_ATTR(os_setdelay, 0664, show_os_delay_result, attr_set_os_delay);


SHOW_ENABLE_FUNC(lines, TAG_LINEAR_ACCEL)
STORE_ENABLE_FUNC(lines, TAG_LINEAR_ACCEL, CMD_CMN_OPEN_REQ, CMD_CMN_CLOSE_REQ)
static DEVICE_ATTR(lines_enable, 0664, show_lines_enable_result, attr_set_lines_enable);
SHOW_DELAY_FUNC(lines, TAG_LINEAR_ACCEL)
STORE_DELAY_FUNC(lines, TAG_LINEAR_ACCEL, CMD_CMN_INTERVAL_REQ) 
static DEVICE_ATTR(lines_setdelay, 0664, show_lines_delay_result, attr_set_lines_delay);


SHOW_ENABLE_FUNC(gras, TAG_GRAVITY)
STORE_ENABLE_FUNC(gras, TAG_GRAVITY, CMD_CMN_OPEN_REQ, CMD_CMN_CLOSE_REQ)
static DEVICE_ATTR(gras_enable, 0664, show_gras_enable_result, attr_set_gras_enable);
SHOW_DELAY_FUNC(gras, TAG_GRAVITY)
STORE_DELAY_FUNC(gras, TAG_GRAVITY, CMD_CMN_INTERVAL_REQ) 
static DEVICE_ATTR(gras_setdelay, 0664, show_gras_delay_result, attr_set_gras_delay);

SHOW_ENABLE_FUNC(rvs, TAG_ROTATION_VECTORS)
STORE_ENABLE_FUNC(rvs, TAG_ROTATION_VECTORS, CMD_CMN_OPEN_REQ, CMD_CMN_CLOSE_REQ)
static DEVICE_ATTR(rvs_enable, 0664, show_rvs_enable_result, attr_set_rvs_enable);
SHOW_DELAY_FUNC(rvs, TAG_ROTATION_VECTORS)
STORE_DELAY_FUNC(rvs, TAG_ROTATION_VECTORS, CMD_CMN_INTERVAL_REQ) 
static DEVICE_ATTR(rvs_setdelay, 0664, show_rvs_delay_result, attr_set_rvs_delay);
#ifdef CONFIG_IOM3_RECOVERY
static ssize_t start_iom3_recovery(struct device *dev, struct device_attribute *attr,
				const char *buf, size_t size)
{
	hwlog_info("%s +\n", __func__);
	iom3_need_recovery();
	hwlog_info("%s -\n", __func__);
	return size;
}
static DEVICE_ATTR(iom3_recovery, 0664, NULL, start_iom3_recovery);
int flag_for_sensor_test = 0;
static ssize_t attr_set_sensor_test_mode(struct device *dev, struct device_attribute *attr,
				const char *buf, size_t size)
{
	unsigned long val = 0;
	hwlog_info("%s +\n", __func__);
	if (strict_strtoul(buf, 10, &val)) {
		hwlog_err("In %s! val = %lu\n", __func__, val);
		return -EINVAL;
	}
	if(1 == val)
		flag_for_sensor_test = 1;
	else
		flag_for_sensor_test = 0;
	return size;
}
static DEVICE_ATTR(sensor_test, 0664, NULL, attr_set_sensor_test_mode);
#endif

static ssize_t attr_set_fingersense_enable(struct device *dev, struct device_attribute *attr,
				const char *buf, size_t size)
{
	unsigned long val = 0;

	if (strict_strtoul(buf, 10, &val))
		return -EINVAL;

	if(set_fingersense_enable_internal(val != 0, true) < 0) {
		return -1;
	}
	return size;
}

static ssize_t attr_get_fingersense_enable(struct device *dev, struct device_attribute *attr,
				const char *buf, size_t size)
{
	return snprintf(buf, MAX_STR_SIZE, "%d\n", fingersense_enabled);
}

static DEVICE_ATTR(set_fingersense_enable, 0660, attr_get_fingersense_enable, attr_set_fingersense_enable);

static ssize_t attr_fingersense_data_ready(struct device *dev, struct device_attribute *attr,
				const char *buf, size_t size)
{
	return snprintf(buf, MAX_STR_SIZE, "%d\n", fingersense_data_ready);
}

static DEVICE_ATTR(fingersense_data_ready, 0440, attr_fingersense_data_ready, NULL);

static ssize_t attr_fingersense_latch_data(struct device *dev, struct device_attribute *attr,
				const char *buf, size_t size)
{
    size = min(size, sizeof(fingersense_data));
    memcpy(buf, (char *) fingersense_data, size);
    return size;
}

static DEVICE_ATTR(fingersense_latch_data, 0440, attr_fingersense_latch_data, NULL);

static ssize_t attr_fingersense_req_data(struct device *dev, struct device_attribute *attr,
				const char *buf, size_t size)
{
	int ret = -1;
	write_info_t pkg_ap;

//	hwlog_err("[FINGERSENSE] Requesting z-axis data: %lums\n", (unsigned long) ktime_to_ms(ktime_get()));
	fingersense_data_ready = false;

    memset(&pkg_ap, 0, sizeof(pkg_ap));
    pkg_ap.tag=TAG_ACCEL;
    pkg_ap.cmd=CMD_ACCEL_FINGERSENSE_REQ_DATA_REQ;
    pkg_ap.wr_buf=NULL;
    pkg_ap.wr_len=0;
    ret=write_customize_cmd(&pkg_ap, NULL);
    if(ret) {
        hwlog_err("send fingersense req data cmd to mcu fail,ret=%d\n", ret);
    }

	return size;
}

static DEVICE_ATTR(fingersense_req_data, 0220, NULL, attr_fingersense_req_data);

ssize_t sensors_calibrate_show(int tag, struct device *dev,
				struct device_attribute *attr, char *buf)
{
	switch (tag) {
	case TAG_ACCEL:
		return snprintf(buf, PAGE_SIZE, "%d\n", return_calibration != SUC);//flyhorse k: SUC-->"0", OTHERS-->"1"

	default:
		hwlog_err("tag %d calibrate not implement in %s\n", tag, __func__);
		break;
	}

	return 0;
}

ssize_t sensors_calibrate_store(int tag, struct device *dev,
				struct device_attribute *attr, const char *buf, size_t count)
{
	switch (tag) {
	case TAG_ACCEL:
		return attr_acc_calibrate_write(dev, attr, buf, count);
	default:
		hwlog_err("tag %d calibrate not implement in %s\n", tag, __func__);
		break;
	}

	return count;
}

static struct attribute *sensor_attributes[] = {
	&dev_attr_acc_info.attr,
	&dev_attr_mag_info.attr,
	&dev_attr_gyro_info.attr,
	&dev_attr_ps_info.attr,
	&dev_attr_als_info.attr,
	&dev_attr_acc_read_data.attr,
	&dev_attr_mag_read_data.attr,
	&dev_attr_gyro_read_data.attr,
	&dev_attr_ps_read_data.attr,
	&dev_attr_als_read_data.attr,
	&dev_attr_gyro_selfTest.attr,
	&dev_attr_mag_selfTest.attr,
	&dev_attr_acc_selfTest.attr,
	&dev_attr_i2c_rw.attr,
	&dev_attr_acc_calibrate.attr,
	&dev_attr_acc_enable.attr,
	&dev_attr_acc_setdelay.attr,
	&dev_attr_set_fingersense_enable.attr,
	&dev_attr_fingersense_req_data.attr,
	&dev_attr_fingersense_data_ready.attr,
	&dev_attr_fingersense_latch_data.attr,
	&dev_attr_gyro_enable.attr,
	&dev_attr_gyro_setdelay.attr,
	&dev_attr_mag_enable.attr,
	&dev_attr_mag_setdelay.attr,
	&dev_attr_als_enable.attr,
	&dev_attr_als_setdelay.attr,
	&dev_attr_ps_enable.attr,
	&dev_attr_ps_setdelay.attr,
	&dev_attr_os_enable.attr,
	&dev_attr_os_setdelay.attr,
	&dev_attr_lines_enable.attr,
	&dev_attr_lines_setdelay.attr,
	&dev_attr_gras_enable.attr,
	&dev_attr_gras_setdelay.attr,
	&dev_attr_rvs_enable.attr,
	&dev_attr_rvs_setdelay.attr,
	&dev_attr_sensor_list_info.attr,
#ifdef CONFIG_IOM3_RECOVERY
	&dev_attr_iom3_recovery.attr,
#endif
	&dev_attr_sensor_test.attr,
	&dev_attr_iom3_sr_test.attr,
	NULL
};
static const struct attribute_group sensor_node = {
	.attrs = sensor_attributes,
};

static struct platform_device sensor_input_info = {
	.name = "huawei_sensor",
	.id = -1,
};

extern atomic_t iom3_rec_state;
int mcu_sys_ready_callback(const pkt_header_t *head)
{
	int ret = 0;
	if (ST_MINSYSREADY == ((pkt_sys_statuschange_req_t *)head)->status)
	{
		hwlog_info("sys ready mini!\n");
		ret = init_sensors_cfg_data_from_dts();
		if(ret) hwlog_err("get sensors cfg data from dts fail,ret=%d, use default config data!\n", ret);
		else hwlog_info( "get sensors cfg data from dts success!\n");
	}else if (ST_MCUREADY == ((pkt_sys_statuschange_req_t *)head)->status)
	{
		hwlog_info("mcu all ready!\n");
		ret = sensor_set_cfg_data();
		if(ret<0) hwlog_err("sensor_chip_detect ret=%d\n", ret);
		unregister_mcu_event_notifier(TAG_SYS, CMD_SYS_STATUSCHANGE_REQ, mcu_sys_ready_callback);
		atomic_set(&iom3_rec_state, IOM3_RECOVERY_IDLE);
	}
	return 0;
}
static int __init sensor_input_info_init(void)
{
	int ret = 0;
	hwlog_info("[%s] ++", __func__);

	ret = platform_device_register(&sensor_input_info);
	if (ret) {
		hwlog_err("%s: platform_device_register failed, ret:%d.\n",
				__func__, ret);
		goto REGISTER_ERR;
	}

	ret = sysfs_create_group(&sensor_input_info.dev.kobj, &sensor_node);
	if (ret) {
		hwlog_err("sensor_input_info_init sysfs_create_group error ret =%d", ret);
		goto SYSFS_CREATE_CGOUP_ERR;
	}
	hwlog_info("[%s] --", __func__);

	return 0;
SYSFS_CREATE_CGOUP_ERR:
	platform_device_unregister(&sensor_input_info);
REGISTER_ERR:
	return ret;

}

device_initcall(sensor_input_info_init);
MODULE_DESCRIPTION("sensor input info");
MODULE_AUTHOR("huawei driver group of K3V3");
MODULE_LICENSE("GPL");
