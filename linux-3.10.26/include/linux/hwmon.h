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
Tue Jul 19 12:51:55 PDT 2016
Fri Jul 22 16:11:47 PDT 2016
Sun, Jul 24, 2016  5:29:09 PM
