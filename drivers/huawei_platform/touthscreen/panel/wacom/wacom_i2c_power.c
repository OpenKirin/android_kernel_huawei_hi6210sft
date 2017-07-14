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

static enum power_supply_property wacom_i2c_battery_props[] = {
	POWER_SUPPLY_PROP_PRESENT,
	POWER_SUPPLY_PROP_ONLINE,
	POWER_SUPPLY_PROP_CAPACITY,
	POWER_SUPPLY_PROP_STATUS,
};

static int wacom_i2c_get_battery_property(struct power_supply *psy, enum power_supply_property prop,
					  union power_supply_propval *val)
{
	struct wacom_i2c *wac_i2c = container_of(psy, struct wacom_i2c, battery);

	switch (prop) {
	case POWER_SUPPLY_PROP_PRESENT:
	case POWER_SUPPLY_PROP_ONLINE:
		if (wac_i2c->battery_cap > 0)
			val->intval = 1;
		else
			val->intval = 0;
		break;
		
	case POWER_SUPPLY_PROP_CAPACITY:
		val->intval = wac_i2c->battery_cap * 100 / BATTERY_MAX;
		break;
		
	case POWER_SUPPLY_PROP_STATUS:
		val->intval = POWER_SUPPLY_STATUS_DISCHARGING;
		break;
		
	default:
		return -EINVAL;
	}

	return 0;
}

void wacom_i2c_setup_battery(struct i2c_client *client)
{
	struct wacom_i2c *wac_i2c = i2c_get_clientdata(client);
	struct power_supply *battery = &wac_i2c->battery;
	int ret = -1;

	battery->name = kasprintf(GFP_KERNEL, "wacom_i2c_aes");
	if (!battery->name) {
		dev_err(&client->dev, "%s: Battery name cannnot be set \n", __func__);
		return;
	}

	wac_i2c->battery_cap = 0;

	battery->type = POWER_SUPPLY_TYPE_BATTERY;
	battery->properties = wacom_i2c_battery_props;
	battery->num_properties = ARRAY_SIZE(wacom_i2c_battery_props);
	battery->use_for_apm = 0;
	battery->get_property = wacom_i2c_get_battery_property;

	ret = power_supply_register(&client->dev, battery);
	if (ret != 0) {
		kfree(battery->name);
		battery->name = NULL;
	} 

	return;
}

void wacom_i2c_cleanup_battery(struct i2c_client *client)
{
	struct wacom_i2c *wac_i2c = i2c_get_clientdata(client);

	if (!wac_i2c->battery.name) {
		dev_err(&client->dev, "No wacom_i2c_battery is installed \n");
		return;
	}

	power_supply_unregister(&wac_i2c->battery);
	kfree(wac_i2c->battery.name);
	wac_i2c->battery.name = NULL;

	return;
}
