/*
 * Driver for Texas Instruments INA219, INA226 power monitor chips
 *
 * Copyright (C) 2012 Lothar Felten <l-felten@ti.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * For further information, see the Documentation/hwmon/ina2xx file.
 */

/**
 * struct ina2xx_platform_data - ina2xx info
 * @shunt_uohms		shunt resistance in microohms
 */
struct ina2xx_platform_data {
	long shunt_uohms;
};
Tue Jul 19 12:48:42 PDT 2016
Fri Jul 22 16:05:39 PDT 2016
Sun, Jul 24, 2016  4:43:10 PM
Mon, Jul 25, 2016 11:31:06 PM
