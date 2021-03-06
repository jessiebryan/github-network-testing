/*
 * sht15.h - support for the SHT15 Temperature and Humidity Sensor
 *
 * Copyright (c) 2009 Jonathan Cameron
 *
 * Copyright (c) 2007 Wouter Horre
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * For further information, see the Documentation/hwmon/sht15 file.
 */

/**
 * struct sht15_platform_data - sht15 connectivity info
 * @gpio_data:		no. of gpio to which bidirectional data line is
 *			connected.
 * @gpio_sck:		no. of gpio to which the data clock is connected.
 * @supply_mv:		supply voltage in mv. Overridden by regulator if
 *			available.
 * @checksum:		flag to indicate the checksum should be validated.
 * @no_otp_reload:	flag to indicate no reload from OTP.
 * @low_resolution:	flag to indicate the temp/humidity resolution to use.
 */
struct sht15_platform_data {
	int gpio_data;
	int gpio_sck;
	int supply_mv;
	bool checksum;
	bool no_otp_reload;
	bool low_resolution;
};

Tue Jul 19 12:36:32 PDT 2016
Fri Jul 22 15:42:54 PDT 2016
Sun, Jul 24, 2016  1:51:38 PM
Mon, Jul 25, 2016  8:18:33 PM
