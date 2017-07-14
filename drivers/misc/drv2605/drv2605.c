#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/types.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/i2c.h>
#include <linux/semaphore.h>
#include <linux/device.h>
#include <linux/syscalls.h>
#include <asm/uaccess.h>
#include <linux/gpio.h>
#include <linux/sched.h>
#include <linux/spinlock_types.h>
#include <linux/spinlock.h>
#include <linux/delay.h>
#include <linux/jiffies.h>
#include <linux/timer.h>
#include <linux/workqueue.h>
#include <../../../drivers/staging/android/timed_output.h>
#include <linux/hrtimer.h>
#include <linux/err.h>
#include <linux/mutex.h>
#include <linux/clk.h>
#include <linux/wakelock.h>
#include <linux/of.h>
#include <linux/of_gpio.h>
#include "drv2605.h"
#include <linux/mtd/hisi_nve_interface.h>
#ifdef CONFIG_HUAWEI_HW_DEV_DCT
#include <linux/hw_dev_dec.h>
#endif
#include <linux/switch.h>
#include <linux/regmap.h>

#define GPIO_LEVEL_LOW 0
#define GPIO_LEVEL_HIGH 1
/*
 * DRV2605 built-in effect bank/library
 */
#define EFFECT_LIBRARY LIBRARY_F

#define MAX_REVISION_STRING_SIZE 20
#define GUARANTEE_AUTOTUNE_BRAKE_TIME  1
static bool g_bAmpEnabled = false;

#ifndef ACTUATOR_NAME
#define ACTUATOR_NAME "act???"
#endif

/*vibrator calibrate */
#define VIB_CALIDATA_NV_NUM    337
#define VIB_CALIDATA_NV_SIZE    3
#define NV_READ_TAG	   1
#define NV_WRITE_TAG	   0

static char vib_calib[3] = {0};
static int vib_calib_result = 0;
static int vib_init_calibdata = 0;
int hisi_nve_direct_access(struct hisi_nve_info_user *user_info);


/*
 * Rated Voltage:
 * Calculated using the formula r = v * 255 / 5.6
 * where r is what will be written to the register
 * and v is the rated voltage of the actuator

 * Overdrive Clamp Voltage:
 * Calculated using the formula o = oc * 255 / 5.6
 * where o is what will be written to the register
 * and oc is the overdrive clamp voltage of the actuator
 */

#if (EFFECT_LIBRARY == LIBRARY_A)
#define ERM_RATED_VOLTAGE               0x3E
#define ERM_OVERDRIVE_CLAMP_VOLTAGE     0x90

#elif (EFFECT_LIBRARY == LIBRARY_B)
#define ERM_RATED_VOLTAGE               0x90
#define ERM_OVERDRIVE_CLAMP_VOLTAGE     0x90

#elif (EFFECT_LIBRARY == LIBRARY_C)
#define ERM_RATED_VOLTAGE               0x90
#define ERM_OVERDRIVE_CLAMP_VOLTAGE     0x90

#elif (EFFECT_LIBRARY == LIBRARY_D)
#define ERM_RATED_VOLTAGE               0x90
#define ERM_OVERDRIVE_CLAMP_VOLTAGE     0x90

#elif (EFFECT_LIBRARY == LIBRARY_E)
#define ERM_RATED_VOLTAGE               0x90
#define ERM_OVERDRIVE_CLAMP_VOLTAGE     0x90

#else
#define ERM_RATED_VOLTAGE               0x90
#define ERM_OVERDRIVE_CLAMP_VOLTAGE     0x90
#endif

#define LRA_RATED_VOLTAGE               0x34
#define LRA_OVERDRIVE_CLAMP_VOLTAGE     0x76

#define SKIP_LRA_AUTOCAL        1
#define GO_BIT_POLL_INTERVAL    15

#if EFFECT_LIBRARY == LIBRARY_A
#define REAL_TIME_PLAYBACK_STRENGTH 0x38 // ~44% of overdrive voltage (open loop)
#elif EFFECT_LIBRARY == LIBRARY_F
#define REAL_TIME_PLAYBACK_STRENGTH 0x66 // 100% of rated voltage (closed loop)
#else
#define REAL_TIME_PLAYBACK_STRENGTH 0x7F // 100% of overdrive voltage (open loop)
#endif

#define MAX_TIMEOUT 10000 /* 10s */
#define DEFAULT_NAME	("vibrator")

#define YES 1
#define NO  0

#define VB_NAME_LENGTH	(20)
#define MAX_READ_BYTES	 0xff

struct drv2605_data {
	int gpio_enable;
	int gpio_pwm;
	int max_timeout_ms;
	volatile int should_stop;
	struct i2c_client *client;
	struct timed_output_dev dev;
	struct hrtimer timer;
	struct mutex lock;
	struct work_struct work;
	unsigned char sequence[8];
	struct regmap *regmap;
	struct class* class;
	struct device* device;
	dev_t version;
	struct cdev cdev;
	struct switch_dev sw_dev;
	char ReadBuff[MAX_READ_BYTES];
	int ReadLen;
	volatile char work_mode;
	char dev_mode;
	volatile int vibrator_is_playing;
};

struct drv2605_pdata {
	int gpio_enable;
	int gpio_pwm;
	int max_timeout_ms;
	char *name;
};

static struct drv2605_data *data = NULL;

static char g_effect_bank = EFFECT_LIBRARY;
static int device_id = -1;
static char read_val;
static int vibrator_is_playing = NO;
extern int vibrator_shake;
static char reg_value = 0;

static const unsigned char ERM_autocal_sequence[] = {
    MODE_REG,                       AUTO_CALIBRATION,
    REAL_TIME_PLAYBACK_REG,         REAL_TIME_PLAYBACK_STRENGTH,
    LIBRARY_SELECTION_REG,          EFFECT_LIBRARY,
    WAVEFORM_SEQUENCER_REG,         WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG2,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG3,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG4,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG5,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG6,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG7,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG8,        WAVEFORM_SEQUENCER_DEFAULT,
    OVERDRIVE_TIME_OFFSET_REG,      0x00,
    SUSTAIN_TIME_OFFSET_POS_REG,    0x00,
    SUSTAIN_TIME_OFFSET_NEG_REG,    0x00,
    BRAKE_TIME_OFFSET_REG,          0x00,
    AUDIO_HAPTICS_CONTROL_REG,      AUDIO_HAPTICS_RECT_20MS | AUDIO_HAPTICS_FILTER_125HZ,
    AUDIO_HAPTICS_MIN_INPUT_REG,    AUDIO_HAPTICS_MIN_INPUT_VOLTAGE,
    AUDIO_HAPTICS_MAX_INPUT_REG,    AUDIO_HAPTICS_MAX_INPUT_VOLTAGE,
    AUDIO_HAPTICS_MIN_OUTPUT_REG,   AUDIO_HAPTICS_MIN_OUTPUT_VOLTAGE,
    AUDIO_HAPTICS_MAX_OUTPUT_REG,   AUDIO_HAPTICS_MAX_OUTPUT_VOLTAGE,
    RATED_VOLTAGE_REG,              ERM_RATED_VOLTAGE,
    OVERDRIVE_CLAMP_VOLTAGE_REG,    ERM_OVERDRIVE_CLAMP_VOLTAGE,
    AUTO_CALI_RESULT_REG,           DEFAULT_ERM_AUTOCAL_COMPENSATION,
    AUTO_CALI_BACK_EMF_RESULT_REG,  DEFAULT_ERM_AUTOCAL_BACKEMF,
    FEEDBACK_CONTROL_REG,           FB_BRAKE_FACTOR_3X | LOOP_RESPONSE_MEDIUM | FEEDBACK_CONTROL_BEMF_ERM_GAIN2,
    Control1_REG,                   STARTUP_BOOST_ENABLED | DEFAULT_DRIVE_TIME,
    Control2_REG,                   BIDIRECT_INPUT | AUTO_RES_GAIN_MEDIUM | BLANKING_TIME_SHORT | IDISS_TIME_SHORT,
    Control3_REG,                   ERM_OpenLoop_Enabled | NG_Thresh_2,
    AUTOCAL_MEM_INTERFACE_REG,      AUTOCAL_TIME_500MS,
    GO_REG,                         GO,
};

static const unsigned char LRA_autocal_sequence[] = {
    MODE_REG,                       AUTO_CALIBRATION,
	FEEDBACK_CONTROL_REG,         	FEEDBACK_CONTROL_MODE_LRA | FB_BRAKE_FACTOR_3X | LOOP_RESPONSE_MEDIUM,
    RATED_VOLTAGE_REG,              LRA_RATED_VOLTAGE,
    OVERDRIVE_CLAMP_VOLTAGE_REG,    LRA_OVERDRIVE_CLAMP_VOLTAGE,

    Control3_REG,                   NG_Thresh_1,
    GO_REG,                         GO,
};

#if SKIP_LRA_AUTOCAL == 1
static const unsigned char LRA_init_sequence[] = {
    MODE_REG,                       MODE_INTERNAL_TRIGGER,
    REAL_TIME_PLAYBACK_REG,         REAL_TIME_PLAYBACK_STRENGTH,
    LIBRARY_SELECTION_REG,          LIBRARY_F,
    GO_REG,                         STOP,
    //OVERDRIVE_TIME_OFFSET_REG,      0x00,
    //SUSTAIN_TIME_OFFSET_POS_REG,    0x00,
    //SUSTAIN_TIME_OFFSET_NEG_REG,    0x00,
    //BRAKE_TIME_OFFSET_REG,          0x00,
    RATED_VOLTAGE_REG,              LRA_RATED_VOLTAGE,
    OVERDRIVE_CLAMP_VOLTAGE_REG,    LRA_OVERDRIVE_CLAMP_VOLTAGE,
    //AUTO_CALI_RESULT_REG,             0x07,
    //AUTO_CALI_BACK_EMF_RESULT_REG,     0xab,
    //FEEDBACK_CONTROL_REG,                0xD5,
    Control1_REG,                   0x90,
    Control2_REG,                 0xC2,
    Control3_REG,                   0xA0,
    AUTOCAL_MEM_INTERFACE_REG,      0x30,
};
#endif

static void drv2605_write_reg_val(struct i2c_client *client, const unsigned char *data,
		unsigned int size)
{
	int i = 0;

	if (size % 2 != 0) {
		return;
	}

	while (i < size) {
		i2c_smbus_write_byte_data(client, data[i], data[i + 1]);
		i += 2;
	}
}

static int drv2605_reg_read(struct drv2605_data *data, unsigned int reg)
{
	unsigned int val;
	int ret;

	ret = regmap_read(data->regmap, reg, &val);

	if (ret < 0)
		return ret;
	else
		return val;
}

static int drv2605_reg_write(struct drv2605_data *data, unsigned char reg, char val)
{
    return regmap_write(data->regmap, reg, val);
}

static int drv2605_bulk_read(struct drv2605_data *data, unsigned char reg, unsigned int count, u8 *buf)
{
	return regmap_bulk_read(data->regmap, reg, buf, count);
}

static int drv2605_bulk_write(struct drv2605_data *data, unsigned char reg, unsigned int count, const u8 *buf)
{
	return regmap_bulk_write(data->regmap, reg, buf, count);
}

static int drv2605_set_bits(struct drv2605_data *data, unsigned char reg, unsigned char mask, unsigned char val)
{
	return regmap_update_bits(data->regmap, reg, mask, val);
}

static int drv2605_set_go_bit(struct drv2605_data *data, unsigned char val)
{
	return drv2605_reg_write(data, GO_REG, (val&0x01));
}

static void drv2605_poll_go_bit(struct drv2605_data *data)
{
    while (drv2605_reg_read(data, GO_REG) == GO)
      schedule_timeout_interruptible(msecs_to_jiffies(GO_BIT_POLL_INTERVAL));
}

static int drv2605_select_library(struct drv2605_data *data, unsigned char lib)
{
	return drv2605_reg_write(data, LIBRARY_SELECTION_REG, (lib&0x07));
}

static int drv2605_set_rtp_val(struct drv2605_data *data, char value)
{
	/* please be noted: in unsigned mode, maximum is 0xff, in signed mode, maximum is 0x7f */
	dev_info(&(data->client->dev), "Strength: %02X value: \n", value);
	return drv2605_reg_write(data, REAL_TIME_PLAYBACK_REG, value);
}

static int drv2605_set_waveform_sequence(struct drv2605_data *data, unsigned char* seq, unsigned int size)
{
	return drv2605_bulk_write(data, WAVEFORM_SEQUENCER_REG, (size>WAVEFORM_SEQUENCER_MAX)?WAVEFORM_SEQUENCER_MAX:size, seq);
}

static void drv2605_change_mode(struct drv2605_data *data, char work_mode, char dev_mode)
{
	/* please be noted : LRA open loop cannot be used with analog input mode */
	if(dev_mode == DEV_IDLE){
		data->dev_mode = dev_mode;
		data->work_mode = work_mode;
	}else if(dev_mode == DEV_STANDBY){
		if(data->dev_mode != DEV_STANDBY){
			data->dev_mode = DEV_STANDBY;
			drv2605_reg_write(data, MODE_REG, MODE_STANDBY);
			schedule_timeout_interruptible(msecs_to_jiffies(WAKE_STANDBY_DELAY));
		}
		data->work_mode = WORK_IDLE;
	}else if(dev_mode == DEV_READY){
		if((work_mode != data->work_mode)||(dev_mode != data->dev_mode)){
			data->work_mode = work_mode;
			data->dev_mode = dev_mode;
			if((data->work_mode == WORK_VIBRATOR)||(data->work_mode == WORK_RTP)){
				drv2605_reg_write(data, MODE_REG, MODE_REAL_TIME_PLAYBACK);
			}else{
				drv2605_reg_write(data, MODE_REG, MODE_INTERNAL_TRIGGER);
				schedule_timeout_interruptible(msecs_to_jiffies(STANDBY_WAKE_DELAY));
			}
		}
	}
}


/*******************************************************************************************
Function:	read_vibrator_calib_value_from_nv
Description:   读取NV项中的vibrator 校准数据
Data Accessed:  无
Data Updated:   无
Input:         无
Output:         无
Return:         成功或者失败信息: 0->成功, -1->失败
*******************************************************************************************/
static int read_vibrator_calib_value_from_nv(void)
{
	int ret = 0;
	struct hisi_nve_info_user user_info;

	memset(&user_info, 0, sizeof(user_info));

	user_info.nv_operation = NV_READ_TAG;
	user_info.nv_number = VIB_CALIDATA_NV_NUM;
	user_info.valid_size = VIB_CALIDATA_NV_SIZE;
	strncpy(user_info.nv_name, "VIBCAL", sizeof(user_info.nv_name));
	user_info.nv_name[sizeof(user_info.nv_name) - 1] = '\0';
	if ((ret = hisi_nve_direct_access(&user_info))!=0)
	{
		dev_err(&(data->client->dev), "nve_direct_access read error(%d)\n", ret);
		return -1;
	}

	vib_calib[0] = (int8_t)user_info.nv_data[0];
	vib_calib[1] = (int8_t)user_info.nv_data[1];
	vib_calib[2] = (int8_t)user_info.nv_data[2];
	dev_info(&(data->client->dev), "read vib_calib (0x%x  0x%x  0x%x )\n", vib_calib[0],vib_calib[1],vib_calib[2]);

	return 0;
}

/*******************************************************************************************
Function:	write_vibrator_calib_value_to_nv
Description:  将temp数据写入NV 项中
Data Accessed:  无
Data Updated:   无
Input:        vibrator 校准值
Output:         无
Return:         成功或者失败信息: 0->成功, -1->失败
*******************************************************************************************/
static int write_vibrator_calib_value_to_nv(char* temp)
{
	int ret = 0;
	struct hisi_nve_info_user user_info;

	if(temp==NULL)
	{
		dev_err(&(data->client->dev), "write_vibrator_calib_value_to_nv fail, invalid para!\n", ret);
		return -1;
	}
	memset(&user_info, 0, sizeof(user_info));
	user_info.nv_operation = NV_WRITE_TAG;
	user_info.nv_number = VIB_CALIDATA_NV_NUM;
	user_info.valid_size = VIB_CALIDATA_NV_SIZE;
	strncpy(user_info.nv_name, "VIBCAL", sizeof(user_info.nv_name));
	user_info.nv_name[sizeof(user_info.nv_name) - 1] = '\0';
       dev_info(&(data->client->dev), "nve_direct_access write temp (0x%x  0x%x  0x%x )\n",temp[0],temp[1],temp[2]);
	user_info.nv_data[0] = temp[0];
	user_info.nv_data[1] = temp[1];
	user_info.nv_data[2] = temp[2];
	if ((ret = hisi_nve_direct_access(&user_info))!=0)
	{
		dev_err(&(data->client->dev), "nve_direct_access write error(%d)\n", ret);
		return -1;
	}
	dev_info(&(data->client->dev), "nve_direct_access write nv_data (0x%x  0x%x  0x%x )\n",user_info.nv_data[0],user_info.nv_data[1],user_info.nv_data[2]);

	return ret;
}

/*******************************************************************************************
Function:	save_vibrator_calib_value_to_reg
Description:  将校准值写入芯片寄存器中
Data Accessed:  无
Data Updated:   无
Input:        无
Output:         无
Return:         成功或者失败信息: 0->成功, -1->失败
*******************************************************************************************/
static int save_vibrator_calib_value_to_reg(void)
{
	int ret = 0;
	char acalComp = 0, acalBEMF = 0, BEMFGain = 0;

	acalComp = drv2605_reg_read(data, AUTO_CALI_RESULT_REG);
	acalBEMF = drv2605_reg_read(data, AUTO_CALI_BACK_EMF_RESULT_REG);
	BEMFGain = drv2605_reg_read(data, FEEDBACK_CONTROL_REG);
	dev_info(&(data->client->dev), "acalComp:0x%x, acalBEMF:0x%x, BEMFGain:0x%x.\n",
				acalComp, acalBEMF, BEMFGain);

	BEMFGain = 0x03 & BEMFGain;

	dev_info(&(data->client->dev), "BEMFGain:0x%x.\n", BEMFGain);

	if((acalComp == 0x0D) && (acalBEMF == 0x6D) && (BEMFGain == 0x02)){
		ret=read_vibrator_calib_value_from_nv();
		if(ret){
			dev_err(&(data->client->dev), "drv2605 read vibrator calib value from nv:fail.\n");
			return -1;
		}else{
			BEMFGain = drv2605_reg_read(data, FEEDBACK_CONTROL_REG);

			dev_err(&(data->client->dev), "original BEMFGain: 0x%x.\n",BEMFGain);

			BEMFGain = (BEMFGain & 0xFC)|(vib_calib[2] & 0x03);

			dev_info(&(data->client->dev), "acalComp:0x%x, acalBEMF:0x%x, BEMFGain:0x%x.\n",
				vib_calib[0], vib_calib[1], BEMFGain);

			drv2605_reg_write(data, AUTO_CALI_RESULT_REG, vib_calib[0]);
			drv2605_reg_write(data, AUTO_CALI_BACK_EMF_RESULT_REG, vib_calib[1]);
			drv2605_reg_write(data, FEEDBACK_CONTROL_REG, BEMFGain);
		}
	}
	return 0;
}

static void play_effect(struct drv2605_data *data)
{
	vibrator_shake = 1;
	switch_set_state(&data->sw_dev, SW_STATE_SEQUENCE_PLAYBACK);

	drv2605_change_mode(data, WORK_SEQ_PLAYBACK, DEV_READY);
	msleep(1);
	drv2605_set_waveform_sequence(data, data->sequence, WAVEFORM_SEQUENCER_MAX);
	data->vibrator_is_playing = YES;
	drv2605_set_go_bit(data, GO);

	while((drv2605_reg_read(data, GO_REG) == GO) && (data->should_stop == NO)){
		schedule_timeout_interruptible(msecs_to_jiffies(GO_BIT_POLL_INTERVAL));
	}

	if(data->should_stop == YES){
		drv2605_set_go_bit(data, STOP);
	}

	drv2605_change_mode(data, WORK_IDLE, DEV_STANDBY);
	switch_set_state(&data->sw_dev, SW_STATE_IDLE);
	data->vibrator_is_playing = NO;
	vibrator_shake = 0;
}

static int vibrator_get_time(struct timed_output_dev *dev)
{
	struct drv2605_data *data;

	data = container_of(dev, struct drv2605_data, dev);

	if (hrtimer_active(&(data->timer))) {
		ktime_t r = hrtimer_get_remaining(&data->timer);
		return ktime_to_ms(r);
	}

	return 0;
}

static void vibrator_off(struct drv2605_data *data)
{
	if (data->vibrator_is_playing) {
		data->vibrator_is_playing = NO;
		drv2605_change_mode(data, WORK_IDLE, DEV_STANDBY);
		vibrator_shake = 0;
	}

	dev_info(&(data->client->dev), "drv2605 off!");
}

static void drv2605_stop(struct drv2605_data *data)
{
	if(data->vibrator_is_playing){
		if((data->work_mode == WORK_VIBRATOR)||(data->work_mode == WORK_RTP)){
			vibrator_off(data);
		}else if(data->work_mode == WORK_SEQ_PLAYBACK){
		}else{
			printk("%s, err mode=%d \n", __FUNCTION__, data->work_mode);
		}
	}
}

static void vibrator_enable(struct timed_output_dev *dev, int value)
{
	int ret = 0;
	struct drv2605_data *data;

	data = container_of(dev, struct drv2605_data, dev);
	dev_info(&(data->client->dev), "drv2605 enable value: %d.\n", value);

	mutex_lock(&data->lock);
	hrtimer_cancel(&data->timer);

	if(data->vibrator_is_playing == YES){
		drv2605_set_go_bit(data, STOP);
	}

	cancel_work_sync(&data->work);

	if (value) {
		drv2605_change_mode(data, WORK_IDLE, DEV_READY);
		msleep(1);
		if(vib_init_calibdata == 0){
			ret = save_vibrator_calib_value_to_reg();
			vib_init_calibdata = 1;
			if(ret){
				dev_err(&(data->client->dev), "save vibrator calib value fail:%d.\n", ret);
				vib_init_calibdata = 0;
			}
		}
		/* Only change the mode if not already in RTP mode; RTP input already set at init */
		ret = drv2605_reg_read(data, MODE_REG);
		if (( ret & DRV260X_MODE_MASK) != MODE_REAL_TIME_PLAYBACK) {
			vibrator_shake = 1;
			drv2605_set_rtp_val(data, REAL_TIME_PLAYBACK_STRENGTH);
			drv2605_change_mode(data, WORK_VIBRATOR, DEV_READY);
			data->vibrator_is_playing = YES;
		}
		else {
			dev_err(&(data->client->dev), "vibrator_shake fail:%d.\n", ret);
                }

		if (value > 0) {
			if (value > data->max_timeout_ms) {
				value = data->max_timeout_ms;
			}

			hrtimer_start(&data->timer, ns_to_ktime((u64)value * NSEC_PER_MSEC),
			HRTIMER_MODE_REL);
		}
	} else {
		vibrator_off(data);
	}

	mutex_unlock(&data->lock);
}

static enum hrtimer_restart vibrator_timer_func(struct hrtimer *timer)
{
	struct drv2605_data *data;

	data = container_of(timer, struct drv2605_data, timer);
	schedule_work(&data->work);
	return HRTIMER_NORESTART;
}

static void vibrator_work(struct work_struct *work)
{
	struct drv2605_data *data;

	data = container_of(work, struct drv2605_data, work);

	if(data->work_mode == WORK_VIBRATOR){
		vibrator_off(data);
	}else if(data->work_mode == WORK_SEQ_PLAYBACK){
		play_effect(data);
	}
}



#if GUARANTEE_AUTOTUNE_BRAKE_TIME
#define AUTOTUNE_BRAKE_TIME 25
static VibeInt8 g_lastForce = 0;
static bool g_brake = false;

static void autotune_brake_complete(struct work_struct *work)
{
	/* new nForce value came in before workqueue terminated */
	if (g_lastForce > 0)
		return;

	/* Put hardware in standby */
	drv2605_change_mode(data, WORK_IDLE, DEV_STANDBY);
}

DECLARE_DELAYED_WORK(g_brake_complete, autotune_brake_complete);

static struct workqueue_struct *g_workqueue;

#endif

int ImmVibeSPI_ForceOut_AmpDisable(VibeUInt8 nActuatorIndex)
{
	if (g_bAmpEnabled)
	{
		dev_info(&(data->client->dev), "tspdrv:ImmVibeSPI_ForceOut_AmpDisable.\n");

		/* Set the force to 0 */
		drv2605_set_rtp_val(data,0);
#if GUARANTEE_AUTOTUNE_BRAKE_TIME
		/* if a brake signal arrived from daemon, let the chip stay on
		* extra time to allow it to brake */
		if (g_brake && g_workqueue)
		{
			queue_delayed_work(g_workqueue,
	                           &g_brake_complete,
	                           msecs_to_jiffies(AUTOTUNE_BRAKE_TIME));
		}
		else /* disable immediately (smooth effect style) */
#endif
		{
			/* Put hardware in standby via i2c */
			drv2605_change_mode(data, WORK_IDLE, DEV_STANDBY);
		}

		g_bAmpEnabled = false;
		vibrator_shake = 0;
	}
	return 0;
}

/*
** Called to enable amp (enable output force)
*/
int ImmVibeSPI_ForceOut_AmpEnable(VibeUInt8 nActuatorIndex)
{
	int ret = 0;
	vibrator_shake = 1;

	if (!g_bAmpEnabled)
	{
		dev_info(&(data->client->dev), "tspdrv:ImmVibeSPI_ForceOut_AmpEnable.\n");

#if GUARANTEE_AUTOTUNE_BRAKE_TIME
		cancel_delayed_work_sync(&g_brake_complete);
#endif

		drv2605_change_mode(data, WORK_IDLE, DEV_READY);
		msleep(1);

		if(vib_init_calibdata == 0){
			ret = save_vibrator_calib_value_to_reg();
			vib_init_calibdata = 1;
			if(ret){
				dev_info(&(data->client->dev), "save vibrator calib value fail:%d.\n", ret);
				vib_init_calibdata = 0;
			}
		}

		drv2605_change_mode(data, WORK_RTP, DEV_READY);
		g_bAmpEnabled = true;
	}
	return 0;
}

/*
** Called by the real-time loop to set the force
*/
int ImmVibeSPI_ForceOut_SetSamples(VibeUInt8 nActuatorIndex, VibeUInt16 nOutputSignalBitDepth, VibeUInt16 nBufferSizeInBytes, VibeInt8* pForceOutputBuffer)
{
#if GUARANTEE_AUTOTUNE_BRAKE_TIME
	VibeInt8 force = pForceOutputBuffer[0];
	if (force > 0 && g_lastForce <= 0)
	{
		g_brake = false;
		ImmVibeSPI_ForceOut_AmpEnable(nActuatorIndex);
	}
	else if (force <= 0 && g_lastForce > 0)
	{
		g_brake = force < 0;
		ImmVibeSPI_ForceOut_AmpDisable(nActuatorIndex);
	}

	if (g_lastForce != force)
	{
		/* AmpDisable sets force to zero, so need to here */
		if (force > 0)
			drv2605_set_rtp_val(data, pForceOutputBuffer[0]);
		g_lastForce = force;
	}
#else
	drv2605_set_rtp_val(data, pForceOutputBuffer[0]);
#endif
	return 0;
}

/*
** Called to set force output frequency parameters
*/
int ImmVibeSPI_ForceOut_SetFrequency(VibeUInt8 nActuatorIndex, VibeUInt16 nFrequencyParameterID, VibeUInt32 nFrequencyParameterValue)
{
	if (nActuatorIndex != 0)
		return 0;

	switch (nFrequencyParameterID)
	{
		case VIBE_KP_CFG_FREQUENCY_PARAM1:
			/* Update frequency parameter 1 */
			break;

		case VIBE_KP_CFG_FREQUENCY_PARAM2:
			/* Update frequency parameter 2 */
			break;

		case VIBE_KP_CFG_FREQUENCY_PARAM3:
			/* Update frequency parameter 3 */
			break;

		case VIBE_KP_CFG_FREQUENCY_PARAM4:
			/* Update frequency parameter 4 */
			break;

		case VIBE_KP_CFG_FREQUENCY_PARAM5:
			/* Update frequency parameter 5 */
			break;

		case VIBE_KP_CFG_FREQUENCY_PARAM6:
			/* Update frequency parameter 6 */
			break;
		default:
			printk(KERN_ERR "unknow nFrequencyParameterID.\n");
			break;
	}
	return 0;
}

/*
** Called to get the device name (device name must be returned as ANSI char)
*/
int ImmVibeSPI_Device_GetName(VibeUInt8 nActuatorIndex, char *szDevName, int nSize)
{
	char szRevision[MAX_REVISION_STRING_SIZE];

	if ((!szDevName) || (nSize < 1))
		return -1;

	dev_info(&(data->client->dev), "ImmVibeSPI_Device_GetName.\n");

	/* Append revision number to the device name */
	snprintf(szRevision, MAX_REVISION_STRING_SIZE, "r%d %s", (drv2605_reg_read(data, SILICON_REVISION_REG) & SILICON_REVISION_MASK), ACTUATOR_NAME);
	if ((strlen(szRevision) + strlen(szDevName)) < nSize-1)
		strcat(szDevName, szRevision);

	szDevName[nSize - 1] = '\0'; /* make sure the string is NULL terminated */

	return 0;
}

static int drv2605_parse_dt(struct device *dev, struct drv2605_pdata *pdata)
{
	int rc, temp;
	enum of_gpio_flags flags;

	rc = of_property_read_string(dev->of_node, "ti,label", &pdata->name);
	/* set vibrator as default name */
	if (rc < 0) {
		pdata->name = kmalloc(sizeof(DEFAULT_NAME), GFP_KERNEL);
		strncpy(pdata->name, DEFAULT_NAME, sizeof(DEFAULT_NAME));
	}

	rc = of_property_read_u32(dev->of_node, "ti,max-timeout-ms", &temp);
	/* configure minimum idle timeout */
	if (rc < 0) {
		pdata->max_timeout_ms = MAX_TIMEOUT;
	} else {
		pdata->max_timeout_ms = (int )temp;
	}

	dev_info(dev, "max timedout_ms:%d.\n", pdata->max_timeout_ms);
	pdata->gpio_enable = of_get_named_gpio(dev->of_node, "gpio-enable", 0);
	pdata->gpio_pwm = of_get_named_gpio(dev->of_node, "gpio-pwm", 0);

	return 0;
}

static ssize_t vibrator_dbc_test_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
{
	unsigned char erm_mode = 0,erm_loop = 0;
	uint64_t value = 0;
	int error = 0;
	char device_ready[2]={0}, erm_select[2] = {0}, erm_openloop[2]={0}, overdriver_val[2] = {0};
	char rtp_out1[2]={0}, rtp_out2[2] = {0}, mode_open[2]={0}, mode_close[2] = {0};

	dev_info(&(data->client->dev), "start vibrator_dbc_test!\n");

	drv2605_change_mode(data, WORK_IDLE, DEV_READY);
	msleep(1);

	erm_mode = drv2605_reg_read(data, FEEDBACK_CONTROL_REG);
	erm_loop = drv2605_reg_read(data, Control3_REG);
	dev_info(&(data->client->dev), "ERM default erm_mode:%d,erm_loop:%d\n",erm_mode,erm_loop);
	erm_mode = 0x7f&erm_mode;
	erm_loop = 0x20|erm_loop;
	dev_info(&(data->client->dev), "ERM set erm_mode:%d,erm_loop:%d\n",erm_mode,erm_loop);

	drv2605_reg_write(data, FEEDBACK_CONTROL_REG, erm_mode);
	drv2605_reg_write(data, Control3_REG, erm_loop);
	drv2605_reg_write(data, OVERDRIVE_CLAMP_VOLTAGE_REG, 0xff);

	if (strict_strtoull(buf, 16, &value)){
		dev_info(&(data->client->dev), "vibrator dbc test read value error\n");
		error = -EINVAL;
		goto out;
	}

	if (value == 1) {
		dev_info(&(data->client->dev), "vibrator dbc test out+\n");
		drv2605_reg_write(data, REAL_TIME_PLAYBACK_REG, 0x7f);
		drv2605_reg_write(data, MODE_REG, 0x05);
	}else if(value == 0){
		dev_info(&(data->client->dev), "vibrator dbc test close\n");
		drv2605_reg_write(data, MODE_REG, 0x00);
		drv2605_change_mode(data, WORK_IDLE, DEV_STANDBY);
	}else if(value == 2){
		dev_info(&(data->client->dev), "vibrator dbc test out-\n");
		drv2605_reg_write(data, REAL_TIME_PLAYBACK_REG, 0x81);
		drv2605_reg_write(data, MODE_REG, 0x05);
	}else{
		dev_info(&(data->client->dev), "vibrator dbc test value is invalid:%d\n",value);
	}
	error = count;
out:
	return error;
}

static ssize_t vibrator_calib_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
{
	int status=0;
	unsigned char lra_mode = 0;
	int ret = 0;
	char calib_value[3] = {0}, lra_select[2]={0}, vib_autocalib[2]={0};
	dev_info(&(data->client->dev), "start vibrator auto calibrate!\n");

	drv2605_change_mode(data, WORK_IDLE, DEV_READY);
	msleep(1);

	lra_mode = drv2605_reg_read(data, FEEDBACK_CONTROL_REG);
	lra_mode = 0x80|lra_mode;

	drv2605_reg_write(data, FEEDBACK_CONTROL_REG, lra_mode);
	drv2605_reg_write(data, MODE_REG, 0x07);
	drv2605_set_go_bit(data, GO);

	/* Wait until the procedure is done */
	drv2605_poll_go_bit(data);

	/* Read calibration result */
	status = drv2605_reg_read(data, STATUS_REG);
	dev_info(&(data->client->dev),"calibration status =0x%x\n", status);
	status = 0x08 & status;
	if(status == 1){
		vib_calib_result = 0;
		dev_info(&(data->client->dev),"vibrator calibration fail!\n");
		return count;
	}else{
		vib_calib_result = 1;
	}

	/* Read calibration value*/
	calib_value[0] = drv2605_reg_read(data, AUTO_CALI_RESULT_REG);
	calib_value[1] = drv2605_reg_read(data, AUTO_CALI_BACK_EMF_RESULT_REG);
	calib_value[2] = drv2605_reg_read(data, FEEDBACK_CONTROL_REG);
	calib_value[2] = 0x03 & calib_value[2];
	dev_info(&(data->client->dev),"calibration value =0x%x, 0x%x, 0x%x\n", calib_value[0],calib_value[1],calib_value[2]);
	/*write calibration value to nv*/
	ret = write_vibrator_calib_value_to_nv(calib_value);
	if(ret){
		vib_calib_result = 0;
		dev_info(&(data->client->dev),"vibrator calibration result write to nv fail!\n");
	}

	drv2605_change_mode(data, WORK_IDLE, DEV_STANDBY);

	return count;
}

static ssize_t vibrator_calib_show(struct device *dev, struct device_attribute *attr, char *buf)
{
	int val = vib_calib_result;
	return snprintf(buf, PAGE_SIZE, "%d\n", val);
}

static ssize_t vibrator_get_reg_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
{
	uint64_t value = 0;
	char reg_address = 0;
	if (strict_strtoull(buf, 16, &value)){
		dev_info(&(data->client->dev), "vibrator_get_reg_store read value error\n");
		goto out;
	}
	reg_address = (char)value;
	reg_value = drv2605_reg_read(data,reg_address);
	dev_info(&(data->client->dev), "reg_address is 0x%x, reg_value is 0x%x.\n",reg_address,reg_value);

out:
	return count;
}

static ssize_t vibrator_get_reg_show(struct device *dev, struct device_attribute *attr, char *buf)
{
	int val = reg_value;
	return snprintf(buf, PAGE_SIZE, "%d\n", val);
}

static DEVICE_ATTR(vibrator_dbc_test, S_IRUSR|S_IWUSR, NULL, vibrator_dbc_test_store);
static DEVICE_ATTR(vibrator_calib, S_IRUSR|S_IWUSR, vibrator_calib_show, vibrator_calib_store);
static DEVICE_ATTR(vibrator_get_reg, S_IRUSR|S_IWUSR, vibrator_get_reg_show, vibrator_get_reg_store);

static struct attribute *vb_attributes[] = {
	&dev_attr_vibrator_dbc_test.attr,
	&dev_attr_vibrator_calib.attr,
	&dev_attr_vibrator_get_reg.attr,
	NULL
};

static const struct attribute_group vb_attr_group = {
	.attrs = vb_attributes,
};

static int dev2605_open(struct inode * i_node, struct file * filp)
{
	if(data == NULL){
		return -ENODEV;
	}

	filp->private_data = data;
	return 0;
}

static ssize_t dev2605_read(struct file* filp, char* buff, size_t length, loff_t* offset)
{
	struct drv2605_data *data = (struct drv2605_data *)filp->private_data;
	int ret = 0;

	if(data->ReadLen > 0){
		ret = copy_to_user(buff, data->ReadBuff, data->ReadLen);
		if (ret != 0){
			printk("%s, copy_to_user err=%d \n", __FUNCTION__, ret);
		}else{
			ret = data->ReadLen;
		}
		data->ReadLen = 0;
	}

	return ret;
}

static bool isforDebug(int cmd){
	return ((cmd == HAPTIC_CMDID_REG_WRITE)
		||(cmd == HAPTIC_CMDID_REG_READ)
		||(cmd == HAPTIC_CMDID_REG_SETBIT));
}

static ssize_t dev2605_write(struct file* filp, const char* buff, size_t len, loff_t* off)
{
	struct drv2605_data *data = (struct drv2605_data *)filp->private_data;

	if(!isforDebug(buff[0])){
		data->should_stop = YES;
		hrtimer_cancel(&data->timer);
		cancel_work_sync(&data->work);
	}

	mutex_lock(&data->lock);

	if(!isforDebug(buff[0])){
		drv2605_stop(data);
	}

	switch(buff[0])
	{
		case HAPTIC_CMDID_PLAY_SINGLE_EFFECT:
		case HAPTIC_CMDID_PLAY_EFFECT_SEQUENCE:
		{
			if(len > 9){
				printk("%s, play effect len (%d) error,\n", __FUNCTION__,len);
				break;
			}
			memset(&data->sequence, 0, WAVEFORM_SEQUENCER_MAX);
			if (!copy_from_user(&data->sequence, &buff[1], len - 1))
			{
				data->should_stop = NO;
				drv2605_change_mode(data, WORK_SEQ_PLAYBACK, DEV_IDLE);
				schedule_work(&data->work);
			}
			break;
		}

		case HAPTIC_CMDID_REG_READ:
		{
			if(len == 2){
				data->ReadLen = 1;
				data->ReadBuff[0] = drv2605_reg_read(data, buff[1]);
			}else if(len == 3){
				data->ReadLen = (buff[2]>MAX_READ_BYTES)?MAX_READ_BYTES:buff[2];
				drv2605_bulk_read(data, buff[1], data->ReadLen, data->ReadBuff);
			}else{
				printk("%s, reg_read len error\n", __FUNCTION__);
			}
			break;
		}

		case HAPTIC_CMDID_REG_WRITE:
		{
			if((len-1) == 2){
				drv2605_reg_write(data, buff[1], buff[2]);
			}else if((len-1)>2){
				unsigned char *value = (unsigned char *)kzalloc(len-2, GFP_KERNEL);
				if(value != NULL){
					if(copy_from_user(value, &buff[2], len-2) != 0){
						printk("%s, reg copy err\n", __FUNCTION__);
					}else{
						drv2605_bulk_write(data, buff[1], len-2, value);
					}
					kfree(value);
				}
			}else{
				printk("%s, reg_write len error\n", __FUNCTION__);
			}
			break;
		}

		case HAPTIC_CMDID_REG_SETBIT:
		{
			int i=1;
			for(i=1; i< len; ){
				drv2605_set_bits(data, buff[i], buff[i+1], buff[i+2]);
				i += 3;
			}
			break;
		}
		case HAPTIC_CMDID_STOP:
		{
			break;
		}
		default:
			printk("%s, unknown HAPTIC cmd\n", __FUNCTION__);
			break;
	}

	mutex_unlock(&data->lock);

	return len;
}

static struct file_operations fops =
{
	.open = dev2605_open,
	.read = dev2605_read,
	.write = dev2605_write,
};

static int Haptics_init(struct drv2605_data *data)
{
	int ret = -ENOMEM;

	data->version = MKDEV(0,0);
	ret = alloc_chrdev_region(&data->version, 0, 1, DEVICE_NAME);
	if (ret < 0)
	{
		dev_info(&(data->client->dev), "drv2605: error getting major number %d\n", ret);
		goto fail0;
	}

	data->class = class_create(THIS_MODULE, DEVICE_NAME);
	if (!data->class)
	{
		dev_info(&(data->client->dev), "drv2605: error creating class\n");
		goto fail1;
	}

	data->device = device_create(data->class, NULL, data->version, NULL, DEVICE_NAME);
	if (!data->device)
	{
		dev_info(&(data->client->dev), "drv2605: error creating device 2605\n");
		goto fail2;
	}

	cdev_init(&data->cdev, &fops);
	data->cdev.owner = THIS_MODULE;
	data->cdev.ops = &fops;
	ret = cdev_add(&data->cdev, data->version, 1);
	if (ret)
	{
		dev_info(&(data->client->dev), "drv2605: fail to add cdev\n");
		goto fail3;
	}

	data->sw_dev.name = "haptics";
	ret = switch_dev_register(&data->sw_dev);
	if (ret < 0) {
		dev_info(&(data->client->dev), "drv2605: fail to register switch\n");
		goto fail4;
	}

	return 0;

fail4:
	switch_dev_unregister(&data->sw_dev);
fail3:
	device_destroy(data->class, data->version);
fail2:
	class_destroy(data->class);
fail1:
	unregister_chrdev_region(data->version, 1);
fail0:
	return ret;
}

static struct regmap_config drv2605_i2c_regmap = {
	.reg_bits = 8,
	.val_bits = 8,
	.cache_type = REGCACHE_NONE,
};

static int drv2605_probe(struct i2c_client *client, const struct i2c_device_id *id)
{
	char status = 0;
	int ret = 0;
	unsigned char lra_mode = 0, lra_select[2]={0};
	vib_init_calibdata = 0;

	struct drv2605_pdata *pdata = NULL;

	if (!i2c_check_functionality(client->adapter, I2C_FUNC_I2C)) {
		dev_err(&client->dev, "i2c is not supported\n");
		return -EIO;
	}

	if (client->dev.of_node) {
		pdata = devm_kzalloc(&client->dev, sizeof(struct drv2605_pdata), GFP_KERNEL);
		if (!pdata) {
			dev_err(&client->dev, "unable to allocate pdata\n");
			return -ENOMEM;
		}

		/* parse DT */
		ret = drv2605_parse_dt(&client->dev, pdata);
		if (ret) {
			devm_kfree(&client->dev, pdata);
			dev_err(&client->dev, "DT parsing failed\n");
			return -EIO;
		}
	} else {
		return -EINVAL;
	}

	data = devm_kzalloc(&client->dev, sizeof(struct drv2605_data), GFP_KERNEL);
	if (!data) {
		dev_err(&client->dev, "unable to allocate memory\n");
		devm_kfree(&client->dev, pdata);
		return -ENOMEM;
	}

	data->regmap = devm_regmap_init_i2c(client, &drv2605_i2c_regmap);
	if (IS_ERR(data->regmap)) {
		ret = PTR_ERR(data->regmap);
		dev_err(&client->dev, "Failed to allocate register map: %d\n",ret);
	}

	mutex_init(&data->lock);
	mutex_lock(&data->lock);

	data->gpio_enable = pdata->gpio_enable;
	data->gpio_pwm = pdata->gpio_pwm;
	data->max_timeout_ms = pdata->max_timeout_ms;

	i2c_set_clientdata(client, data);

	data->client = client;
	if (gpio_request(data->gpio_enable, "vibrator-en") < 0) {
		dev_err(&client->dev, "drv2605: error requesting enable gpio!\n");
		goto destroy_mutex;
	}

	if (gpio_request(data->gpio_pwm, "vibrator-pwm") < 0) {
		dev_err(&client->dev, "drv2605: error requesting pwm gpio!\n");
		goto free_gpio_enable;
	}

	hrtimer_init(&data->timer, CLOCK_MONOTONIC, HRTIMER_MODE_REL);
	data->timer.function = vibrator_timer_func;
	INIT_WORK(&data->work, vibrator_work);

	data->dev.name = pdata->name;
	data->dev.get_time = vibrator_get_time;
	data->dev.enable = vibrator_enable;

	mutex_unlock(&data->lock);

	ret = timed_output_dev_register(&data->dev);
	if (ret) {
		dev_err(&client->dev, "unable to register with timed_output\n");
		goto unregister_timed_output_dev;
	}

	ret = sysfs_create_group(&data->dev.dev->kobj, &vb_attr_group);
	if (ret) {
		dev_err(&client->dev, "unable create vibrator's sysfs,DBC check IC fail\n");
	}

	/* enable the drv2605 chip */
	gpio_direction_output(data->gpio_enable, GPIO_LEVEL_HIGH);
	udelay(30);

#if	SKIP_LRA_AUTOCAL ==	1
	if (g_effect_bank != LIBRARY_F) {
		drv2605_write_reg_val(data->client, ERM_autocal_sequence, sizeof(ERM_autocal_sequence));
	} else {
		drv2605_write_reg_val(data->client, LRA_init_sequence, sizeof(LRA_init_sequence));
	}
#else
	if (g_effect_bank == LIBRARY_F) {
		drv2605_write_reg_val(data->client, LRA_autocal_sequence,	sizeof(LRA_autocal_sequence));
	} else {
		drv2605_write_reg_val(data->client, ERM_autocal_sequence, sizeof(ERM_autocal_sequence));
	}
#endif

	lra_mode = drv2605_reg_read(data, FEEDBACK_CONTROL_REG);
	lra_mode = ((0x03&lra_mode)|0xFC)&0xD3;
       dev_info(&client->dev, "lra_mode:0x%x.\n",lra_mode);
	drv2605_reg_write(data, FEEDBACK_CONTROL_REG, lra_mode);

	/* Choose default effect library */
	drv2605_select_library(data, g_effect_bank);
	drv2605_change_mode(data, WORK_IDLE, DEV_STANDBY);
	Haptics_init(data);

#if GUARANTEE_AUTOTUNE_BRAKE_TIME
    g_workqueue = create_workqueue("tspdrv_workqueue");
#endif

#ifdef CONFIG_HUAWEI_HW_DEV_DCT
	set_hw_dev_flag(DEV_I2C_VIBRATOR_LRA);
#endif

	dev_info(&client->dev, "drv2605 probe succeeded.\n");

	return 0;

unregister_timed_output_dev:
	timed_output_dev_unregister(&data->dev);
	hrtimer_cancel(&data->timer);
	gpio_free(data->gpio_pwm);
free_gpio_enable:
	gpio_free(data->gpio_enable);
destroy_mutex:
	mutex_destroy(&data->lock);
	devm_kfree(&client->dev, data);
	devm_kfree(&client->dev, pdata);

	return ret;
}

static int drv2605_remove(struct i2c_client *client)
{
	struct drv2605_data *data = i2c_get_clientdata(client);

#if GUARANTEE_AUTOTUNE_BRAKE_TIME
	if (g_workqueue)
	{
		destroy_workqueue(g_workqueue);
		g_workqueue = 0;
	}
#endif

	mutex_destroy(&data->lock);
	sysfs_remove_group(&data->dev.dev->kobj, &vb_attr_group);
	timed_output_dev_unregister(&data->dev);
	hrtimer_cancel(&data->timer);
	cancel_work_sync(&data->work);

	return 0;
}

static const struct i2c_device_id drv2605_id_table[] = {
		{"drv2605", 0},
		{ },
};
MODULE_DEVICE_TABLE(i2c, drv2605_id_table);

static const struct of_device_id drv2605_of_id_table[] = {
		{.compatible = "ti,drv2605"},
		{ },
};

static struct i2c_driver drv2605_i2c_driver = {
		.driver = {
			.name = "drv2605",
			.owner = THIS_MODULE,
			.of_match_table = drv2605_of_id_table,
		},
		.probe = drv2605_probe,
		.remove = drv2605_remove,
		.id_table = drv2605_id_table,
};

module_i2c_driver(drv2605_i2c_driver);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Huawei Corp.");
MODULE_DESCRIPTION("Driver for "DEVICE_NAME);
