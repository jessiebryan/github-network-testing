/*
 * Load firmware files from Analog Devices SigmaStudio
 *
 * Copyright 2009-2011 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef __SIGMA_FIRMWARE_H__
#define __SIGMA_FIRMWARE_H__

#include <linux/device.h>
#include <linux/regmap.h>

struct i2c_client;

extern int process_sigma_firmware(struct i2c_client *client, const char *name);
extern int process_sigma_firmware_regmap(struct device *dev,
		struct regmap *regmap, const char *name);

#endif
Tue Jul 19 12:46:54 PDT 2016
Fri Jul 22 16:02:16 PDT 2016
Sun, Jul 24, 2016  4:17:00 PM
Mon, Jul 25, 2016 11:02:03 PM
