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
Tue Jul 19 12:34:25 PDT 2016
Fri Jul 22 15:39:25 PDT 2016
Sun, Jul 24, 2016  1:26:22 PM
Mon, Jul 25, 2016  6:35:49 PM
Mon, Jul 25, 2016  7:48:45 PM
Tue, Jul 26, 2016  2:24:07 PM
