#ifndef _LINUX_DS620_H
#define _LINUX_DS620_H

#include <linux/types.h>
#include <linux/i2c.h>

/* platform data for the DS620 temperature sensor and thermostat */

struct ds620_platform_data {
	/*
	 *  Thermostat output pin PO mode:
	 *  0 = always low (default)
	 *  1 = PO_LOW
	 *  2 = PO_HIGH
	 *
	 * (see Documentation/hwmon/ds620)
	 */
	int pomode;
};

#endif /* _LINUX_DS620_H */
Tue Jul 19 12:49:57 PDT 2016
Fri Jul 22 16:08:01 PDT 2016
Sun, Jul 24, 2016  5:01:12 PM
Mon, Jul 25, 2016 11:51:10 PM
