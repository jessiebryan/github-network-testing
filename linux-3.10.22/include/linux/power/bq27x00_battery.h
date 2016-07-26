#ifndef __LINUX_BQ27X00_BATTERY_H__
#define __LINUX_BQ27X00_BATTERY_H__

/**
 * struct bq27000_plaform_data - Platform data for bq27000 devices
 * @name: Name of the battery. If NULL the driver will fallback to "bq27000".
 * @read: HDQ read callback.
 *	This function should provide access to the HDQ bus the battery is
 *	connected to.
 *	The first parameter is a pointer to the battery device, the second the
 *	register to be read. The return value should either be the content of
 *	the passed register or an error value.
 */
struct bq27000_platform_data {
	const char *name;
	int (*read)(struct device *dev, unsigned int);
};

#endif
Tue Jul 19 12:49:21 PDT 2016
Fri Jul 22 16:06:52 PDT 2016
Sun, Jul 24, 2016  4:52:28 PM
Mon, Jul 25, 2016 11:41:31 PM
