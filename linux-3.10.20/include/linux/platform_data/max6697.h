/*
 * max6697.h
 *     Copyright (c) 2012 Guenter Roeck <linux@roeck-us.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef MAX6697_H
#define MAX6697_H

#include <linux/types.h>

/*
 * For all bit masks:
 * bit 0:    local temperature
 * bit 1..7: remote temperatures
 */
struct max6697_platform_data {
	bool smbus_timeout_disable;	/* set to disable SMBus timeouts */
	bool extended_range_enable;	/* set to enable extended temp range */
	bool beta_compensation;		/* set to enable beta compensation */
	u8 alert_mask;			/* set bit to 1 to disable alert */
	u8 over_temperature_mask;	/* set bit to 1 to disable */
	u8 resistance_cancellation;	/* set bit to 0 to disable
					 * bit mask for MAX6581,
					 * boolean for other chips
					 */
	u8 ideality_mask;		/* set bit to 0 to disable */
	u8 ideality_value;		/* transistor ideality as per
					 * MAX6581 datasheet
					 */
};

#endif /* MAX6697_H */
Tue Jul 19 12:48:04 PDT 2016
Fri Jul 22 16:04:27 PDT 2016
Sun, Jul 24, 2016  4:33:57 PM
Mon, Jul 25, 2016 11:20:52 PM
