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
Tue Jul 19 12:35:56 PDT 2016
Fri Jul 22 15:41:41 PDT 2016
Sun, Jul 24, 2016  1:42:52 PM
Mon, Jul 25, 2016  8:08:12 PM
