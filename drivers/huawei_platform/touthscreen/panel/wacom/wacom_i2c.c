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

//dts
#define WACOM_IRQ_GPIO "attn_gpio"
#define WACOM_RST_GPIO "reset_gpio"
#define WACOM_VDDIO_GPIO_CTRL "vddio_ctrl_gpio"
#define WACOM_VCI_GPIO_CTRL "vci_ctrl_gpio"
#define WACOM_IRQ_CFG "irq_config"
#define WACOM_ALGO_ID "algo_id"
#define WACOM_VDD	 "wacom-vdd"
#define WACOM_VBUS	 "wacom-io"
#define WACOM_VCI_GPIO_TYPE	 "vci_gpio_type"
#define WACOM_VCI_REGULATOR_TYPE	 "vci_regulator_type"
#define WACOM_VDDIO_GPIO_TYPE	 "vddio_gpio_type"
#define WACOM_VDDIO_REGULATOR_TYPE	 "vddio_regulator_type"

#define WACOM_VCI_LDO_VALUE (3300000)
static struct wacom_i2c *wac_data;
static DEFINE_MUTEX(ts_power_gpio_sem);
static int ts_power_gpio_ref = 0;
extern struct ts_data g_ts_data;
static unsigned int wacom_power_hold = 0;
static unsigned int wacom_pen_battery_debug = 0;

static void wacom_gpio_free(void);
static void wacom_regulator_put(void);
static int wacom_chip_detect(struct device_node *device,
		struct ts_device_data *chip_data, struct platform_device *ts_dev);
static int wacom_init_chip(void);
static int wacom_parse_dts(struct device_node * device, struct ts_device_data * chip_data);
static int wacom_input_config(struct input_dev *input);
static int wacom_irq_top_half(struct ts_cmd_node *cmd);
static int wacom_irq_bottom_half(struct ts_cmd_node *in_cmd, struct ts_cmd_node *out_cmd);
static int wacom_gpio_reset(void);
static void wacom_power_on(void);
static void wacom_power_off(void);
static int wacom_suspend(void);
static int wacom_resume(void);
static void wacom_shutdown(void);

static int wacom_get_rawdata(struct ts_rawdata_info *info, struct ts_cmd_node *out_cmd);
static int wacom_fw_update_boot(char *file_name);
static int wacom_fw_update_sd(void);
static int wacom_set_info_flag(struct ts_data *info);
static int wacom_chip_get_info(struct ts_chip_info_param *info);


struct ts_device_ops ts_wacom_ops = {
	.chip_detect = wacom_chip_detect,
	.chip_init = wacom_init_chip,
	.chip_parse_config = wacom_parse_dts,
	.chip_input_config = wacom_input_config,
	.chip_irq_top_half = wacom_irq_top_half,
	.chip_irq_bottom_half = wacom_irq_bottom_half,
	.chip_reset = wacom_gpio_reset,
	.chip_shutdown = wacom_shutdown,
	.chip_suspend = wacom_suspend,
	.chip_resume = wacom_resume,

	.chip_fw_update_boot = wacom_fw_update_boot,
	.chip_fw_update_sd = wacom_fw_update_sd,
	.chip_get_info = wacom_chip_get_info,
	.chip_set_info_flag = wacom_set_info_flag,	
	.chip_get_rawdata = wacom_get_rawdata,	
};

static int wacom_get_rawdata(struct ts_rawdata_info *info, struct ts_cmd_node *out_cmd)
{
	return 0;
}
static int wacom_fw_update_boot(char *file_name)
{
	return 0;
}
static int wacom_fw_update_sd(void)
{
	return 0;
}

static int wacom_chip_get_info(struct ts_chip_info_param *info)
{
	int pid;
	u8 buf_fwv[CHIP_INFO_LENGTH];
	u8 buf_pid[CHIP_INFO_LENGTH];
	u8 buf_vid[CHIP_INFO_LENGTH];
	unsigned char string_id_buf[CHIP_INFO_LENGTH*2] = {0};

	memset(buf_fwv, 0, sizeof(buf_fwv));
	memset(buf_pid, 0, sizeof(buf_pid));
	memset(buf_vid, 0, sizeof(buf_vid));
	
	TS_LOG_INFO("wacom_chip_get_info called\n");
	TS_LOG_INFO("g_ts_data.get_info_flag=%d\n",g_ts_data.get_info_flag);

	snprintf(buf_fwv,CHIP_INFO_LENGTH,"%x",wac_data->features->fw_version);
	snprintf(buf_pid,CHIP_INFO_LENGTH,"%x",wac_data->features->productId);
	snprintf(buf_vid,CHIP_INFO_LENGTH,"%x",wac_data->features->vendorId);
		
	memcpy(&string_id_buf, "wacom-",strlen("wacom-"));
	strcat(string_id_buf,buf_vid);
	strcat(string_id_buf,"-");
	strcat(string_id_buf,buf_pid);

	pid = wac_data->features->productId;
	if(pid == 0x4816 || pid == 0x4818 || pid == 0x4827 || pid == 0x4829){
		memcpy(&info->mod_vendor, "truly", strlen("truly"));
	}else if(pid == 0x4817 || pid == 0x4819 || pid == 0x4828 || pid == 0x482A){
		memcpy(&info->mod_vendor, "mutto", strlen("mutto"));
	}else{
		memcpy(&info->mod_vendor, "unknown_mod", strlen("unknown_mod"));
	}
	
	memcpy(&info->ic_vendor,string_id_buf, strlen(string_id_buf));
	memcpy(&info->fw_vendor, buf_fwv, strlen(buf_fwv));
	return NO_ERR;
}

static int wacom_set_info_flag(struct ts_data *info)
{
	g_ts_data.get_info_flag = info->get_info_flag;
	return NO_ERR;
}

int get_tp_color(u8 *color)
{
	int pid;
	pid = wac_data->features->productId;

	if(pid == 0x4816 || pid == 0x4817 || pid == 0x4818 || pid == 0x4819){
		memcpy(color, "white", strlen("white"));
	}else if(pid == 0x4827 || pid == 0x4828 || pid == 0x4829 || pid == 0x482A){
		memcpy(color, "black", strlen("black"));
	}else{
		memcpy(color, "unknown_color", strlen("unknown_color"));
		return pid;
	}
	return NO_ERR;
}
EXPORT_SYMBOL(get_tp_color);

static int wacom_suspend(void)
{
	struct input_dev *input = wac_data->input;
	bool *mt_rdy = &wac_data->rdy;
	if ( !(*mt_rdy) ) {
		input_mt_sync(input);
		input_sync(input);
	}

	if(wacom_power_hold == 1){
		TS_LOG_INFO("wacom keep power on\n");
		return NO_ERR;
	}
	wacom_power_off();
	return NO_ERR;
}

static int wacom_resume(void)
{
	wacom_power_on();
	wacom_gpio_reset();
	msleep(300);
	return NO_ERR;
}

static void wacom_shutdown(void)
{
	TS_LOG_INFO("wacom_shutdown\n");
	if ((1 == wac_data->wacom_chip_data->vci_gpio_type) && (1 == wac_data->wacom_chip_data->vddio_gpio_type)) {
		TS_LOG_INFO("Both  vci and vddio were need to output 0\n");
		if (wac_data->wacom_chip_data->vci_gpio_ctrl == wac_data->wacom_chip_data->vddio_gpio_ctrl) {
			gpio_direction_output(wac_data->wacom_chip_data->vci_gpio_ctrl, 0);
		} else {
			gpio_direction_output(wac_data->wacom_chip_data->vddio_gpio_ctrl, 0);
			msleep(2);
			gpio_direction_output(wac_data->wacom_chip_data->vci_gpio_ctrl, 0);
		}
	} else if (1 == wac_data->wacom_chip_data->vci_gpio_type){
		TS_LOG_INFO("Only vci was need to output 0\n");
		gpio_direction_output(wac_data->wacom_chip_data->vci_gpio_ctrl, 0);
	} else if (1 == wac_data->wacom_chip_data->vddio_gpio_type) {
	TS_LOG_INFO("Only vddio was need to output 0\n");
		gpio_direction_output(wac_data->wacom_chip_data->vddio_gpio_ctrl, 0);
	}
	wacom_gpio_free();
	wacom_regulator_put();
	return;
}

static int wacom_regulator_get(void)
{
	if (1 == wac_data->wacom_chip_data->vci_regulator_type) {
		wac_data->tp_vci = regulator_get(&wac_data->wacom_dev->dev, WACOM_VDD);
		if (IS_ERR(wac_data->tp_vci)) {
			TS_LOG_ERR("regulator tp vci not used\n");
			return  -EINVAL;
		}
	}

	if (1 == wac_data->wacom_chip_data->vddio_regulator_type) {
		wac_data->tp_vddio = regulator_get(&wac_data->wacom_dev->dev, WACOM_VBUS);
		if (IS_ERR(wac_data->tp_vddio)) {
			TS_LOG_ERR("regulator tp vddio not used\n");
			regulator_put(wac_data->tp_vci);
			return -EINVAL;
		}
	}

	return 0;
}

static int wacom_gpio_request(void)
{
	int retval = NO_ERR;
	TS_LOG_INFO("wacom_gpio_request\n");

	retval = gpio_request(wac_data->wacom_chip_data->reset_gpio, "ts_reset_gpio");
	if (retval < 0) {
		TS_LOG_ERR("Fail request gpio:%d\n", wac_data->wacom_chip_data->reset_gpio);
		goto ts_reset_out;
	}
	retval = gpio_request(wac_data->wacom_chip_data->irq_gpio, "ts_irq_gpio");
	if (retval) {
		TS_LOG_ERR("unable to request gpio:%d\n", wac_data->wacom_chip_data->irq_gpio);
		goto ts_irq_out;
	}
	if ((1 == wac_data->wacom_chip_data->vci_gpio_type) && (1 == wac_data->wacom_chip_data->vddio_gpio_type)) {
		if (wac_data->wacom_chip_data->vci_gpio_ctrl == wac_data->wacom_chip_data->vddio_gpio_ctrl) {
			retval = gpio_request(wac_data->wacom_chip_data->vci_gpio_ctrl, "ts_vci_gpio");
			if (retval) {
				TS_LOG_ERR("SFT:Ok;  ASIC: Real ERR----unable to request vci_gpio_ctrl firset:%d\n", wac_data->wacom_chip_data->vci_gpio_ctrl);
				goto ts_vci_out;
			}
		} else {
			retval = gpio_request(wac_data->wacom_chip_data->vci_gpio_ctrl, "ts_vci_gpio");
			if (retval) {
				TS_LOG_ERR("SFT:Ok;  ASIC: Real ERR----unable to request vci_gpio_ctrl2:%d\n", wac_data->wacom_chip_data->vci_gpio_ctrl);
				goto ts_vci_out;
			}
			retval = gpio_request(wac_data->wacom_chip_data->vddio_gpio_ctrl, "ts_vddio_gpio");
			if (retval) {
				TS_LOG_ERR("SFT:Ok;  ASIC: Real ERR----unable to request vddio_gpio_ctrl:%d\n", wac_data->wacom_chip_data->vddio_gpio_ctrl);
				goto ts_vddio_out;
			}
		}
	} else {
		if (1 == wac_data->wacom_chip_data->vci_gpio_type) {
			retval = gpio_request(wac_data->wacom_chip_data->vci_gpio_ctrl, "ts_vci_gpio");
			if (retval) {
				TS_LOG_ERR("SFT:Ok;  ASIC: Real ERR----unable to request vci_gpio_ctrl2:%d\n", wac_data->wacom_chip_data->vci_gpio_ctrl);
				goto ts_vci_out;
			}
		}
		if (1 == wac_data->wacom_chip_data->vddio_gpio_type) {
			retval = gpio_request(wac_data->wacom_chip_data->vddio_gpio_ctrl, "ts_vddio_gpio");
			if (retval) {
				TS_LOG_ERR("SFT:Ok;  ASIC: Real ERR----unable to request vddio_gpio_ctrl:%d\n", wac_data->wacom_chip_data->vddio_gpio_ctrl);
				goto ts_vddio_out;
			}
		}
	}

	TS_LOG_INFO("reset:%d, irq:%d,\n", wac_data->wacom_chip_data->reset_gpio, wac_data->wacom_chip_data->irq_gpio);

	goto ts_reset_out;

ts_vddio_out:
	gpio_free(wac_data->wacom_chip_data->vci_gpio_ctrl);
ts_vci_out:
	gpio_free(wac_data->wacom_chip_data->irq_gpio);
ts_irq_out:
	gpio_free(wac_data->wacom_chip_data->reset_gpio);
ts_reset_out:
	return retval;
}

static int wacom_pinctrl_get_init(void)
{
	int ret = 0;

	wac_data->pctrl = devm_pinctrl_get(&wac_data->wacom_dev->dev);
	if (IS_ERR(wac_data->pctrl)) {
		TS_LOG_ERR("failed to devm pinctrl get\n");
		ret = -EINVAL;
		return ret;
	}

	wac_data->pins_default = pinctrl_lookup_state(wac_data->pctrl, "default");
	if (IS_ERR(wac_data->pins_default)) {
		TS_LOG_ERR("failed to pinctrl lookup state default\n");
		ret = -EINVAL;
		goto err_pinctrl_put;
	}

	wac_data->pins_idle = pinctrl_lookup_state(wac_data->pctrl, "idle");
	if (IS_ERR(wac_data->pins_idle)) {
		TS_LOG_ERR("failed to pinctrl lookup state idle\n");
		ret = -EINVAL;
		goto err_pinctrl_put;
	}
	return 0;

err_pinctrl_put:
	devm_pinctrl_put(wac_data->pctrl);
	return ret;
}

static int wacom_pinctrl_select_normal(void)
{
	int retval = NO_ERR;
	retval = pinctrl_select_state(wac_data->pctrl, wac_data->pins_default);
	if (retval < 0) {
		TS_LOG_ERR("set iomux normal error, %d\n", retval);
	}
	return retval;
}

static int wacom_pinctrl_select_lowpower(void)
{
	int retval = NO_ERR;
	retval = pinctrl_select_state(wac_data->pctrl, wac_data->pins_idle);
	if (retval < 0) {
		TS_LOG_ERR("set iomux lowpower error, %d\n", retval);
	}
	return retval;
}

static void wacom_gpio_free(void)
{
	TS_LOG_INFO("wacom_gpio_free\n");

	gpio_free(wac_data->wacom_chip_data->irq_gpio);
	gpio_free(wac_data->wacom_chip_data->reset_gpio);
	/*1 is power supplied by gpio, 0 is power supplied by ldo*/
	if (1 == wac_data->wacom_chip_data->vci_gpio_type) {
		if (wac_data->wacom_chip_data->vci_gpio_ctrl)
			gpio_free(wac_data->wacom_chip_data->vci_gpio_ctrl);
	}
	if (1 == wac_data->wacom_chip_data->vddio_gpio_type) {
		if (wac_data->wacom_chip_data->vddio_gpio_ctrl)
			gpio_free(wac_data->wacom_chip_data->vddio_gpio_ctrl);
	}
}

static void wacom_power_on_gpio_set(void)
{
	wacom_pinctrl_select_normal();
	gpio_direction_input(wac_data->wacom_chip_data->irq_gpio);
	gpio_direction_output(wac_data->wacom_chip_data->reset_gpio, 1);
}

static void wacom_ts_power_gpio_enable(void)
{
	mutex_lock(&ts_power_gpio_sem);
	if (ts_power_gpio_ref == 0) {
		gpio_direction_output(wac_data->wacom_chip_data->vddio_gpio_ctrl, 1);
	}
	ts_power_gpio_ref++;
	mutex_unlock(&ts_power_gpio_sem);
}

static void wacom_ts_power_gpio_disable(void)
{
	mutex_lock(&ts_power_gpio_sem);
	if (ts_power_gpio_ref == 1) {
		gpio_direction_output(wac_data->wacom_chip_data->vddio_gpio_ctrl, 0);
	}
	if(ts_power_gpio_ref > 0) {
		ts_power_gpio_ref--;
	}
	mutex_unlock(&ts_power_gpio_sem);
}

static void wacom_regulator_put(void)
{
	if (1 == wac_data->wacom_chip_data->vci_regulator_type) {
		if (!IS_ERR(wac_data->tp_vci)) {
			regulator_put(wac_data->tp_vci);
		}
	}
	if (1 == wac_data->wacom_chip_data->vddio_regulator_type) {
		if (!IS_ERR(wac_data->tp_vddio)) {
			regulator_put(wac_data->tp_vddio);
		}
	}
}

static int wacom_vddio_enable(void)
{
	int retval;

	if (IS_ERR(wac_data->tp_vddio)) {
		TS_LOG_ERR("tp_vddio is err\n");
		return -EINVAL;
	}
	retval = regulator_enable(wac_data->tp_vddio);
	if (retval < 0) {
		TS_LOG_ERR("failed to enable regulator tp_vddio\n");
		return -EINVAL;
	}

	return 0;
}

static int wacom_vddio_disable(void)
{
	int retval;

	if (IS_ERR(wac_data->tp_vddio)) {
		TS_LOG_ERR("tp_vddio is err\n");
		return -EINVAL;
	}

	retval = regulator_disable(wac_data->tp_vddio);
	if (retval < 0) {
		TS_LOG_ERR("failed to disable regulator tp_vddio\n");
		return -EINVAL;
	}

	return 0;
}

static int wacom_vci_enable(void)
{
	int retval;
	int vol_vlaue;

	if (IS_ERR(wac_data->tp_vci)) {
		TS_LOG_ERR("tp_vci is err\n");
		return  -EINVAL;
	}
	vol_vlaue = WACOM_VCI_LDO_VALUE;
       if (!IS_ERR(wac_data->tp_vci)) {
		TS_LOG_INFO("set voltage is called\n");
		retval = regulator_set_voltage(wac_data->tp_vci, vol_vlaue, vol_vlaue);
		if (retval < 0) {
			TS_LOG_ERR("failed to set voltage regulator tp_vci error: %d\n", retval);
			return -EINVAL;
		}

		retval = regulator_enable(wac_data->tp_vci);
		if (retval < 0) {
			TS_LOG_ERR("failed to enable regulator tp_vci\n");
			return -EINVAL;
		}
       }
	return 0;
}

static int wacom_vci_disable(void)
{
	int retval;

	if (IS_ERR(wac_data->tp_vci)) {
		TS_LOG_ERR("tp_vci is err\n");
		return  -EINVAL;
	}
	retval = regulator_disable(wac_data->tp_vci);
	if (retval < 0) {
		TS_LOG_ERR("failed to disable regulator tp_vci\n");
		return -EINVAL;
	}

	return 0;
}
static void wacom_regulator_enable(void)
{
	TS_LOG_INFO("wacom_regulator_enable is called\n");
	if (1 == wac_data->wacom_chip_data->vci_regulator_type) {
		if (!IS_ERR(wac_data->tp_vci)) {
			TS_LOG_INFO("vci enable is called\n");
			wacom_vci_enable();
			if (wac_data->wacom_chip_data->vci_gpio_type) {
				gpio_direction_output(wac_data->wacom_chip_data->vci_gpio_ctrl, 1);
			}
		}
	}
	mdelay(5);
	if(1 == wac_data->wacom_chip_data->vddio_regulator_type) {
		if (!IS_ERR(wac_data->tp_vddio)) {
			wacom_vddio_enable();
			if (wac_data->wacom_chip_data->vddio_gpio_type) {
			if (wac_data->wacom_chip_data->vci_gpio_ctrl != wac_data->wacom_chip_data->vddio_gpio_ctrl)
				gpio_direction_output(wac_data->wacom_chip_data->vddio_gpio_ctrl, 1);
			}
		}
	}
}

static void wacom_regulator_disable(void)
{
	if (1 == wac_data->wacom_chip_data->vddio_regulator_type) {
		if (!IS_ERR(wac_data->tp_vddio) ) {
			wacom_vddio_disable();
		}
	}
	
	mdelay(2);

	if(1 == wac_data->wacom_chip_data->vci_regulator_type) {
		if (!IS_ERR(wac_data->tp_vci) ) {
			wacom_vci_disable();
		}
	}

	mdelay(30);
}

static void wacom_power_on(void)
{
	TS_LOG_INFO("wacom_power_on called\n");
	/*1 is power supplied by gpio, 0 is power supplied by ldo*/
	wacom_regulator_enable();
	if ((1 == wac_data->wacom_chip_data->vci_gpio_type) && (1 == wac_data->wacom_chip_data->vddio_gpio_type)) {
		TS_LOG_INFO("Both  vci and vddio were controlled by gpio\n");
		if (wac_data->wacom_chip_data->vci_gpio_ctrl == wac_data->wacom_chip_data->vddio_gpio_ctrl) {
			gpio_direction_output(wac_data->wacom_chip_data->vci_gpio_ctrl, 1);
			msleep(1);
		} else {
			gpio_direction_output(wac_data->wacom_chip_data->vci_gpio_ctrl, 1);
			msleep(5);
			gpio_direction_output(wac_data->wacom_chip_data->vddio_gpio_ctrl, 1);
		}
	} else if (1 == wac_data->wacom_chip_data->vci_gpio_type){
		TS_LOG_INFO("Only vci was controlled by gpio\n");
		gpio_direction_output(wac_data->wacom_chip_data->vci_gpio_ctrl, 1);
	} else if (1 == wac_data->wacom_chip_data->vddio_gpio_type) {
		TS_LOG_INFO("Only vddio was controlled by gpio\n");
		wacom_ts_power_gpio_enable();
	}
	msleep(2);
	wacom_power_on_gpio_set();
}

static void wacom_power_off_gpio_set(void)
{
	TS_LOG_INFO("suspend RST out L\n");

	gpio_direction_output(wac_data->wacom_chip_data->reset_gpio, 0);
	wacom_pinctrl_select_lowpower();
}

static void wacom_power_off(void)
{	
	wacom_power_off_gpio_set();
	msleep(2);
	/*1 is power supplied by gpio, 0 is power supplied by ldo*/
	if ((1 == wac_data->wacom_chip_data->vci_gpio_type) && (1 == wac_data->wacom_chip_data->vddio_gpio_type)) {
		TS_LOG_INFO("Both  vci and vddio were need to output 0\n");
		if (wac_data->wacom_chip_data->vci_gpio_ctrl == wac_data->wacom_chip_data->vddio_gpio_ctrl) {
			gpio_direction_output(wac_data->wacom_chip_data->vci_gpio_ctrl, 0);
		} else {
			gpio_direction_output(wac_data->wacom_chip_data->vddio_gpio_ctrl, 0);
			msleep(2);
			gpio_direction_output(wac_data->wacom_chip_data->vci_gpio_ctrl, 0);
		}
	} else if (1 == wac_data->wacom_chip_data->vci_gpio_type){
		TS_LOG_INFO("Only vci was need to output 0\n");
		gpio_direction_output(wac_data->wacom_chip_data->vci_gpio_ctrl, 0);
	} else if (1 == wac_data->wacom_chip_data->vddio_gpio_type) {
		TS_LOG_INFO("Only vddio was need to output 0\n");
		wacom_ts_power_gpio_disable();
	}
	wacom_regulator_disable();
}


static int wacom_chip_detect(struct device_node *device,
		struct ts_device_data *chip_data, struct platform_device *ts_dev)
{
	int retval = NO_ERR;
	
	TS_LOG_INFO("wacom chip detect called\n");

	if (!device || !chip_data || !ts_dev) {
		TS_LOG_ERR("device, chip_data or ts_dev is NULL \n");
		return -ENOMEM;
	}

	wac_data = kzalloc(sizeof(*wac_data)* 2, GFP_KERNEL);
	if (!wac_data) {
		TS_LOG_ERR("Failed to alloc mem for struct wac_data\n");
		return -ENOMEM;
	}

	wac_data->wacom_chip_data= chip_data;
	wac_data->wacom_dev = ts_dev;
	wac_data->wacom_chip_data->is_in_cell = false;
	wac_data->wacom_dev->dev.of_node = device;
	wac_data->client = g_ts_data.client;

	wac_data->wacom_chip_data->easy_wakeup_info.sleep_mode = TS_POWER_OFF_MODE;
	wac_data->wacom_chip_data->easy_wakeup_info.easy_wakeup_gesture = false;
	wac_data->wacom_chip_data->easy_wakeup_info.easy_wakeup_flag = false;
	wac_data->wacom_chip_data->easy_wakeup_info.palm_cover_flag = false;
	wac_data->wacom_chip_data->easy_wakeup_info.palm_cover_control = false;
	wac_data->wacom_chip_data->easy_wakeup_info.off_motion_on = false;

	wac_data->features = kzalloc(sizeof(struct wacom_features), GFP_KERNEL);
	if (!(wac_data->features)) {
		TS_LOG_ERR("%s:features malloc fail!\n",__func__);
		retval = -ENOMEM;
		goto err_malloc_features;
	}

	retval = wacom_regulator_get();
	if (retval < 0) {
		goto err_get_regulator;
	}

	retval = wacom_gpio_request();
	if (retval < 0) {
		goto err_request_gpio;
	}

	retval = wacom_pinctrl_get_init();
	if (retval < 0) {
		goto err_pinctrl_get;
	}
	
	/*power up the chip*/
	wacom_power_on();

	/*reset the chip*/
	wacom_gpio_reset();
	msleep(300);

	//Check, first, whether or not there's a device corresponding to the address
	retval= wacom_query_device(g_ts_data.client, wac_data->features);
	if (retval < 0) {
		TS_LOG_ERR( "%s:wacom_query_device failed.\n", __func__);
		goto err_i2c_check;
	}else {
		TS_LOG_INFO("find wacom device\n");
		goto out;
	}

out:
	TS_LOG_INFO("wacom chip detect done\n");
	return NO_ERR;

err_i2c_check:
	wacom_power_off();
err_pinctrl_get:
	wacom_gpio_free();
err_request_gpio:
	wacom_regulator_put();	
err_get_regulator:
	if(wac_data->features)
		kfree(wac_data->features);
	wac_data->features = NULL;
err_malloc_features:
	if(wac_data)
		kfree(wac_data);
	wac_data = NULL;
	return retval;
}

/*  query the configure from dts and store in prv_data */
static int wacom_parse_dts(struct device_node * device, struct ts_device_data * chip_data)
{
	int retval  = NO_ERR;

	chip_data->irq_gpio = of_get_named_gpio(device, WACOM_IRQ_GPIO, 0);
	if (!gpio_is_valid(chip_data->irq_gpio)) {
		TS_LOG_ERR("irq gpio is not valid, value is %d\n", chip_data->irq_gpio);
		retval = -EINVAL;
		goto err;
	}
	chip_data->reset_gpio = of_get_named_gpio(device, WACOM_RST_GPIO, 0);
	if (!gpio_is_valid(chip_data->reset_gpio)) {
		TS_LOG_ERR("reset gpio is not valid\n");
		retval = -EINVAL;
		goto err;
	}
	retval = of_property_read_u32(device, WACOM_IRQ_CFG, &chip_data->irq_config);
	if (retval) {
		TS_LOG_ERR("get irq config failed\n");
		retval = -EINVAL;
		goto err;
	}
	retval = of_property_read_u32(device, WACOM_ALGO_ID, &chip_data->algo_id);
	if (retval) {
		TS_LOG_ERR("get algo id failed\n");
		retval = -EINVAL;
		goto err;
	}
	retval = of_property_read_u32(device, WACOM_VCI_GPIO_TYPE, &chip_data->vci_gpio_type);
	if (retval) {
		TS_LOG_ERR("get device WACOM_VCI_GPIO_TYPE failed\n");
		retval = -EINVAL;
		goto err;
	}
	retval = of_property_read_u32(device, WACOM_VCI_REGULATOR_TYPE, &chip_data->vci_regulator_type);
	if (retval) {
		TS_LOG_ERR("get device WACOM_VCI_REGULATOR_TYPE failed\n");
		retval = -EINVAL;
		goto err;
	}
	retval = of_property_read_u32(device, WACOM_VDDIO_GPIO_TYPE, &chip_data->vddio_gpio_type);
	if (retval) {
		TS_LOG_ERR("get device WACOM_VDDIO_GPIO_TYPE failed\n");
		retval = -EINVAL;
		goto err;
	}
	retval = of_property_read_u32(device, WACOM_VDDIO_REGULATOR_TYPE, &chip_data->vddio_regulator_type);
	if (retval) {
		TS_LOG_ERR("get device WACOM_VDDIO_REGULATOR_TYPE failed\n");
		retval = -EINVAL;
		goto err;
	}
	/*1 is power supplied by gpio, 0 is power supplied by ldo*/
	if (1 == chip_data->vci_gpio_type) {
		chip_data->vci_gpio_ctrl = of_get_named_gpio(device, WACOM_VCI_GPIO_CTRL, 0);
		if (!gpio_is_valid(chip_data->vci_gpio_ctrl)) {
			TS_LOG_ERR("SFT: ok; ASIC: Real err----power gpio is not valid\n");
		}
	}
	if (1 == chip_data->vddio_gpio_type) {
		chip_data->vddio_gpio_ctrl = of_get_named_gpio(device, WACOM_VDDIO_GPIO_CTRL, 0);
		if (!gpio_is_valid(chip_data->vddio_gpio_ctrl)) {
			TS_LOG_ERR("SFT: ok; ASIC: Real err----power gpio is not valid\n");
		}
	}

	TS_LOG_INFO("reset_gpio = %d, irq_gpio = %d, irq_config = %d, algo_id = %d\n", \
		chip_data->reset_gpio, chip_data->irq_gpio, chip_data->irq_config, chip_data->algo_id);
err:
	return retval;
}

static ssize_t wacom_pen_battery_show(struct device *dev, struct device_attribute *attr, char *buf)
{
	int battery_cap;
	if(wacom_pen_battery_debug == 0){
		battery_cap = wac_data->battery_cap * 100 / BATTERY_MAX;
	}else{
		battery_cap = wacom_pen_battery_debug;
	}
	return snprintf(buf, CHIP_INFO_LENGTH*2, "pen_battery_capacity = %d%%\n", battery_cap);
}

static ssize_t wacom_hw_reset_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
{
	unsigned int value;
	int error;

	if (dev == NULL) {
		TS_LOG_ERR("dev is null\n");
		error = -EINVAL;
		goto out;
	}

	error = sscanf(buf, "%u", &value);
	if (!error) {
		TS_LOG_ERR("sscanf return invaild :%d\n", error);
		error = -EINVAL;
		goto out;
	}
	if(value == 1){
		wacom_gpio_reset();
	}else{
		TS_LOG_INFO("gpio rest input error.\n");
	}
out:
	TS_LOG_INFO("gpio reset done\n");
	return error;
}

static ssize_t wacom_power_hold_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
{
	unsigned int value;
	int error;

	if (dev == NULL) {
		TS_LOG_ERR("dev is null\n");
		error = -EINVAL;
		return error;
	}

	error = sscanf(buf, "%u", &value);
	if (!error) {
		TS_LOG_ERR("sscanf return invaild :%d\n", error);
		error = -EINVAL;
		return error;
	}

	wacom_power_hold = value;
	TS_LOG_INFO("wacom power hold = %u\n",value);
	return error;
}

static ssize_t wacom_jni_enable_show(struct device *dev, struct device_attribute *attr, char *buf)
{
	int jni_enable = 1;
	return snprintf(buf, CHIP_INFO_LENGTH, "%d\n", jni_enable);
}

static ssize_t wacom_pen_battery_debug_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
{
	unsigned int value;
	int error;

	if (dev == NULL) {
		TS_LOG_ERR("dev is null\n");
		error = -EINVAL;
		return error;
	}

	error = sscanf(buf, "%u", &value);
	if (!error) {
		TS_LOG_ERR("sscanf return invaild :%d\n", error);
		error = -EINVAL;
		return error;
	}

	wacom_pen_battery_debug = value;
	TS_LOG_INFO("wacom_pen_battery_debug = %u\n",value);
	return error;
}

static DEVICE_ATTR(pen_battery_capacity, S_IRUSR | S_IRGRP | S_IROTH, wacom_pen_battery_show, NULL);
static DEVICE_ATTR(gpio_reset,  (S_IWUSR | S_IWGRP), NULL, wacom_hw_reset_store);
static DEVICE_ATTR(power_switch,  (S_IWUSR | S_IWGRP), NULL, wacom_power_hold_store);
static DEVICE_ATTR(tp_jni_enable, S_IRUSR | S_IRGRP | S_IROTH, wacom_jni_enable_show, NULL);
static DEVICE_ATTR(pen_battery_debug,  (S_IWUSR | S_IWGRP), NULL, wacom_pen_battery_debug_store);

static struct attribute *wacom_attributes[] = {
	&dev_attr_pen_battery_capacity.attr,
	&dev_attr_gpio_reset.attr,
      &dev_attr_power_switch.attr,
      &dev_attr_tp_jni_enable.attr,
      &dev_attr_pen_battery_debug.attr,
	NULL
};

static const struct attribute_group wacom_attr_group = {
	.attrs = wacom_attributes,
};

static int wacom_sysfs_create(void)
{
	int ret = 0;
	ret = sysfs_create_group(&g_ts_data.ts_dev->dev.kobj, &wacom_attr_group);
	if (ret) {
		TS_LOG_ERR("%s: Error, could not create wacom_attr_group\n", __func__);
	}
	return ret;
}

static int wacom_init_chip(void)
{
	int retval= NO_ERR;

	wacom_sysfs_create();
	
	TS_LOG_INFO("init chip done.\n");
	return retval;
}

static int wacom_input_config(struct input_dev *input)
{
	TS_LOG_INFO("wacom_input_config called\n");
	wac_data->input =  input;
	input->evbit[0] |= BIT_MASK(EV_KEY) | BIT_MASK(EV_ABS);
	__set_bit(BTN_TOOL_RUBBER, input->keybit);
	__set_bit(BTN_STYLUS, input->keybit);
	__set_bit(BTN_STYLUS2, input->keybit);
	//__set_bit(BTN_TOUCH, input->keybit);
	__set_bit(BTN_TOOL_PEN, input->keybit);
	__set_bit(MT_TOOL_FINGER, input->keybit);
	__set_bit(ABS_MISC, input->absbit);
      __set_bit(INPUT_PROP_DIRECT, input->propbit);

	input_set_capability(input, EV_MSC, MSC_SERIAL);
	input_set_abs_params(input, ABS_MT_POSITION_Y, 0, REPORT_ABS_Y_MAX, 0, 0);
	input_set_abs_params(input, ABS_MT_POSITION_X, 0, REPORT_ABS_X_MAX, 0, 0);
	input_set_abs_params(input, ABS_MT_TRACKING_ID, 0, 15, 0, 0);
	input_set_abs_params(input, ABS_MT_PRESSURE, 0, WACOM_ABS_PRESSURE, 0, 0);
	return NO_ERR;
}

static void set_touch_coord(struct wacom_i2c *wac_i2c, u8 *data, struct ts_cmd_node *out_cmd)
{

	struct input_dev *input = wac_i2c->input;
	int *finger_num = &wac_i2c->finger_num;
	int i, tsw;
	int x, y, tmp;
	bool *mt_rdy = &wac_i2c->rdy;

	/*When data[4] has a value, then it is the first finger packet.*/
	if (data[4] != 0x00) {
		*finger_num = data[4];	// Martin Chen, fixed Jul 07, 2015
		if (*finger_num > 10) {
			TS_LOG_INFO("don't support more than 10 fingers\n");
			return;
		}
		*mt_rdy = false;
	}

	/*One packet holds the status for two fingers.*/
	for (i = 0; i < FINGERNUM_IN_PACKET; i++) {
		if (*finger_num > 0) {
			tsw = data[5 + (i * TOUCH_DATA_OFFSET)] & 0x01;
			x =le16_to_cpup((__le16 *)&data[8 + (i * TOUCH_DATA_OFFSET)]);
			y = le16_to_cpup((__le16 *)&data[10 + (i * TOUCH_DATA_OFFSET)]);

			// x <=====> y
			tmp = x;
			x = y;
			y = tmp;

			x = (int)(x * REPORT_ABS_X_MAX) / WACOM_ABS_X_MAX;
			y = (int)(y * REPORT_ABS_Y_MAX) / WACOM_ABS_Y_MAX;
			x = REPORT_ABS_X_MAX - x;

			TS_LOG_DEBUG("report finger coord: x= %d, y= %d, tsw=%d\n", x, y, tsw);
			input_report_key(input, MT_TOOL_FINGER, tsw);
			if (tsw){
				input_report_abs(input, ABS_MT_PRESSURE, tsw * WACOM_ABS_PRESSURE);
				input_report_abs(input, ABS_MT_POSITION_X, x);
				input_report_abs(input, ABS_MT_POSITION_Y, y);
			}
			input_mt_sync(input);
			(*finger_num)--;
		} 
		if (*finger_num <= 0) {
			*finger_num = 0;
			*mt_rdy = true;
			break;
		}
	}
	
	if (*mt_rdy) {	
		input_sync(input);
	}
	
	out_cmd->command = TS_INVAILD_CMD;
	return;
}

static void set_aes_coord(struct wacom_i2c *wac_i2c, u8 *data, struct ts_cmd_node *out_cmd)
{
	struct input_dev *input = wac_i2c->input;
	struct wacom_id *ids = &wac_i2c->ids;
	unsigned int x, y, pressure;
	unsigned char tsw, f1, f2, ers;
	unsigned char  *battery_cap = &wac_i2c->battery_cap;
	
	tsw = data[3] & 0x01;
	ers = data[3] & 0x04;
	f1 = data[3] & 0x02;
	f2 = data[3] & 0x10;
	y = le16_to_cpup((__le16 *)&data[4]);
	x = WACOM_PEN_ABS_X_MAX -le16_to_cpup((__le16 *)&data[6]);

	x = (int)(x * REPORT_ABS_X_MAX) / WACOM_PEN_ABS_X_MAX;
	y = (int)(y * REPORT_ABS_Y_MAX) / WACOM_PEN_ABS_Y_MAX;

	pressure = le16_to_cpup((__le16 *)&data[8]);
	*battery_cap = data[17];	

	ids->deviceId = (u16)((data[11] & 0x0f) << 8) | data[10];
	ids->designId = (data[11] & 0xf0) >> 4;
	ids->customerId = (data[12] & 0x1f);
	ids->uniqueId =  (u32)((data[15] << 24 | data[14] << 16 | data[13] << 8 | data[12]) >> 5);

	if (!wac_i2c->rdy)
		wac_i2c->tool = (data[3] & 0x0c) ? BTN_TOOL_RUBBER : BTN_TOOL_PEN;
	
	wac_i2c->rdy = data[3] & 0x20;
	
	TS_LOG_DEBUG("report pen coord: x= %d, y= %d, stylus=%d, stylus2=%d\n", x, y, f1, f2);
	//input_report_key(input, BTN_TOUCH, tsw || ers);
	input_report_key(input, BTN_STYLUS, f1);
	input_report_key(input, BTN_STYLUS2, f2);
	input_report_abs(input, ABS_MT_POSITION_X, x);
	input_report_abs(input, ABS_MT_POSITION_Y, y);
	input_report_abs(input, ABS_MT_PRESSURE, pressure);
	input_report_key(input, wac_i2c->tool, wac_i2c->rdy);
	input_mt_sync(input);
	input_sync(input);
	
	out_cmd->command = TS_INVAILD_CMD;
	return;
}

static int wacom_irq_top_half(struct ts_cmd_node *cmd)
{
	cmd->command = TS_INT_PROCESS;
	TS_LOG_DEBUG("wacom irq top half called\n");
	return NO_ERR;
}

static int wacom_irq_bottom_half(struct ts_cmd_node *in_cmd, struct ts_cmd_node *out_cmd)
{
	u8 *data = wac_data->data;
     
	int retval = NO_ERR;

	out_cmd->command = TS_INPUT_ALGO;
	out_cmd->cmd_param.pub_params.algo_param.algo_order = wac_data->wacom_chip_data->algo_id;
	TS_LOG_DEBUG("order: %d\n", out_cmd->cmd_param.pub_params.algo_param.algo_order);

	retval = i2c_master_recv(wac_data->client,
				wac_data->data, WACOM_TOUCH_INPUTSIZE);
	if (retval < 0) {
		TS_LOG_ERR("wacom report data error: %d\n", retval);
		return retval;
	}

	if (data[2] ==  0x06)
		set_aes_coord(wac_data, data, out_cmd);
	else if (data[2] ==  0x0c) 
		set_touch_coord(wac_data, data, out_cmd);
	else
		out_cmd->command = TS_INVAILD_CMD;
	
	return NO_ERR;
}

#if 1
static int wacom_gpio_reset(void)
{
	TS_LOG_DEBUG("wacom_gpio_reset\n");
	gpio_direction_output(wac_data->wacom_chip_data->reset_gpio, 1);
	msleep(20);
	gpio_direction_output(wac_data->wacom_chip_data->reset_gpio, 0);
	msleep(20);
	gpio_direction_output(wac_data->wacom_chip_data->reset_gpio, 1);
	msleep(2);
	return NO_ERR;
}
#endif

//This command is not implement in this firmware.
#if 0
static int wacom_gpio_reset(void)
{
	int ret = -1;
	const char CMD_SIZE = 4;
	char cmd[4] = {0x04, 0x00, 0x00, 0x01};
	char *buf = NULL;
	int size = 4;

	TS_LOG_INFO("%s \n", __func__);
	buf = (char *)kzalloc(sizeof(char) * size, GFP_KERNEL);
	if (!buf) {
	        TS_LOG_INFO("No memory resource is left: (%d)\n", ret);
		return -ENOMEM;
	}

	ret = i2c_master_send(wac_data->client, cmd, CMD_SIZE);
	if (ret < 0 || ret != CMD_SIZE) {
		TS_LOG_INFO("%s: Sending reset command failed \n", __func__);
		goto err;
	}

	msleep(100);

	ret = i2c_master_recv(wac_data->client, buf, size);
	if (ret < 0 || ret != size) {
		TS_LOG_INFO("%s: Receving data failed \n", __func__);
		goto err;
	}

	ret = 0;
 err:
	kfree(buf);
	buf = NULL;
	return ret;
}
#endif


