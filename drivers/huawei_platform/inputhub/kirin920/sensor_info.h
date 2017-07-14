/*
 *  drivers/misc/inputhub/inputhub_route.h
 *  Sensor Hub Channel driver
 *
 *  Copyright (C) 2012 Huawei, Inc.
 *  Author: qindiwen <inputhub@huawei.com>
 *
 */
#ifndef	__SENSORS_H__
#define	__SENSORS_H__

#define PDC_SIZE		27
// Number of z-axis samples required by FingerSense at 1.6KHz ODR
#define FINGERSENSE_DATA_NSAMPLES 128

#define SENSOR_PLATFORM_EXTEND_DATA_SIZE    48
#define EXTEND_DATA_TYPE_IN_DTS_BYTE        0
#define EXTEND_DATA_TYPE_IN_DTS_HALF_WORD   1
#define EXTEND_DATA_TYPE_IN_DTS_WORD        2

enum sensor_name {
	ACC,
	MAG,
	GYRO,
	ALS,
	PS,
	SENSOR_MAX
};

typedef enum
{
	SUC=1,
	EXEC_FAIL,
	NV_FAIL,
	COMMU_FAIL
}RET_TYPE;

struct i2c_data{
	uint8_t bus_num;
	uint8_t i2c_address;
	uint16_t reg_address;
	uint8_t reg_type;
	uint8_t reg_len;
	uint8_t data[MAX_I2C_DATA_LENGTH];
};

struct t_sensor_get_data
{
	atomic_t reading;
	struct completion complete;
	struct sensor_data data;
};

struct sensor_status
{
	int status[TAG_SENSOR_END];//record whether sensor is in activate status, already opened and setdelay
	int delay[TAG_SENSOR_END];//record sensor delay time
	int opened[TAG_SENSOR_END];//record whether sensor was opened
	char gyro_selfTest_result[5];
	char mag_selfTest_result[5];
	char accel_selfTest_result[5];
	char selftest_result[TAG_SENSOR_END][5];
	struct t_sensor_get_data get_data[TAG_SENSOR_END];
};
struct g_sensor_platform_data{
    uint8_t i2c_address;
    uint8_t axis_map_x;
    uint8_t axis_map_y;
    uint8_t axis_map_z;
    uint8_t negate_x;
    uint8_t negate_y;
    uint8_t negate_z;
    uint8_t gpio_int1;
    uint8_t gpio_int2;
    uint16_t poll_interval;
    int offset_x;
    int offset_y;
    int offset_z;
    uint8_t g_sensor_extend_data[SENSOR_PLATFORM_EXTEND_DATA_SIZE];
};
struct gyro_platform_data{
    uint8_t exist;
    uint8_t i2c_address;
    uint8_t axis_map_x;
    uint8_t axis_map_y;
    uint8_t axis_map_z;
    uint8_t negate_x;
    uint8_t negate_y;
    uint8_t negate_z;
    uint8_t gpio_int1;
    uint8_t gpio_int2;
    uint16_t poll_interval;
    uint8_t gyro_extend_data[SENSOR_PLATFORM_EXTEND_DATA_SIZE];
};
struct compass_platform_data {
	uint8_t i2c_address;
	uint8_t axis_map_x;
	uint8_t axis_map_y;
	uint8_t axis_map_z;
	uint8_t negate_x;
	uint8_t negate_y;
	uint8_t negate_z;
	uint8_t outbit;
	uint8_t gpio_drdy;
	uint8_t gpio_rst;
	uint8_t pdc_data[PDC_SIZE];
	uint16_t poll_interval;
    uint8_t compass_extend_data[SENSOR_PLATFORM_EXTEND_DATA_SIZE];
};
struct als_platform_data{
	uint8_t i2c_address;
	uint8_t gpio_int1;
	uint8_t atime;
	uint8_t again;
	uint16_t poll_interval;
	uint16_t init_time;
	int threshold_value;
	int GA1;
	int GA2;
	int GA3;
    uint8_t als_extend_data[SENSOR_PLATFORM_EXTEND_DATA_SIZE];
};

struct ps_platform_data{
	uint8_t i2c_address;
	uint8_t ps_pulse_count;
	uint8_t gpio_int1;
	uint8_t persistent;
	uint8_t ptime;
	uint8_t p_on;  //need to close oscillator
	uint16_t poll_interval;
	uint16_t init_time;
	int min_proximity_value;
	int pwindows_value;
	int pwave_value;
	int threshold_value;
	int rdata_under_sun;
    uint8_t ps_extend_data[SENSOR_PLATFORM_EXTEND_DATA_SIZE];
};

/* < DTS2014072107524 ligang/00183889 20140721 begin */
extern struct sensor_status sensor_status;
extern  bool sensor_info_isensor_version;
/*  DTS2014072107524 ligang/00183889 20140721 end > */

extern void update_sensor_info(const pkt_header_t *pkt);
extern void update_fingersense_zaxis_data(s16 *buffer, int nsamples);
extern void disable_sensors_when_suspend(void);
extern void enable_sensors_when_resume(void);
extern void disable_sensors_when_reboot(void);
extern void enable_sensors_when_recovery_iom3(void);
extern void reset_calibrate_when_recovery_iom3(void);
extern const char *get_sensor_info_by_tag(int tag);
extern ssize_t sensors_calibrate_show(int tag, struct device *dev, struct device_attribute *attr, char *buf);
extern ssize_t sensors_calibrate_store(int tag, struct device *dev, struct device_attribute *attr, const char *buf, size_t count);
#endif	/* __SENSORS_H__ */
