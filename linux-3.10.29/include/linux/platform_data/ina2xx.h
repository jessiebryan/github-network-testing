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
Tue Jul 19 12:53:53 PDT 2016
Fri Jul 22 16:15:37 PDT 2016
Sun, Jul 24, 2016  5:57:33 PM
Tue, Jul 26, 2016 12:53:19 AM
