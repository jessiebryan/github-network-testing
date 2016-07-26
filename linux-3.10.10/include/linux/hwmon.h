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

struct device;

struct device *hwmon_device_register(struct device *dev);

void hwmon_device_unregister(struct device *dev);

#endif
Tue Jul 19 12:39:33 PDT 2016
Fri Jul 22 15:48:39 PDT 2016
Sun, Jul 24, 2016  2:33:36 PM
Mon, Jul 25, 2016  9:06:30 PM
