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
Tue Jul 19 12:52:03 PDT 2016
Fri Jul 22 16:12:03 PDT 2016
Sun, Jul 24, 2016  5:31:10 PM
Tue, Jul 26, 2016 12:24:12 AM
