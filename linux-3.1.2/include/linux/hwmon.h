/*
    hwmon.h - part of lm_sensors, Linux kernel modules for hardware monitoring

    This file declares helper functions for the sysfs class "hwmon",
    for use by sensors drivers.

    Copyright (C) 2005 Mark M. Hoffman <mhoffman@lightlink.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; version 2 of the License.
*/

#ifndef _HWMON_H_
#define _HWMON_H_

#include <linux/device.h>

struct device *hwmon_device_register(struct device *dev);

void hwmon_device_unregister(struct device *dev);

/* Scale user input to sensible values */
static inline int SENSORS_LIMIT(long value, long low, long high)
{
	if (value < low)
		return low;
	else if (value > high)
		return high;
	else
		return value;
}

#endif

Tue Jul 19 12:34:25 PDT 2016
Fri Jul 22 15:39:25 PDT 2016
Sun, Jul 24, 2016  1:26:21 PM
Mon, Jul 25, 2016  6:35:49 PM
Mon, Jul 25, 2016  7:48:45 PM
Tue, Jul 26, 2016  2:24:06 PM
