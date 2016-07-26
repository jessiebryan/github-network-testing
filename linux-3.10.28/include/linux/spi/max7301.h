#ifndef LINUX_SPI_MAX7301_H
#define LINUX_SPI_MAX7301_H

#include <linux/gpio.h>

/*
 * Some registers must be read back to modify.
 * To save time we cache them here in memory
 */
struct max7301 {
	struct mutex	lock;
	u8		port_config[8];	/* field 0 is unused */
	u32		out_level;	/* cached output levels */
	u32		input_pullup_active;
	struct gpio_chip chip;
	struct device *dev;
	int (*write)(struct device *dev, unsigned int reg, unsigned int val);
	int (*read)(struct device *dev, unsigned int reg);
};

struct max7301_platform_data {
	/* number assigned to the first GPIO */
	unsigned	base;
	/*
	 * bitmask controlling the pullup configuration,
	 *
	 * _note_ the 4 lowest bits are unused, because the first 4
	 * ports of the controller are not used, too.
	 */
	u32		input_pullup_active;
};

extern int __max730x_remove(struct device *dev);
extern int __max730x_probe(struct max7301 *ts);
#endif
Tue Jul 19 12:53:15 PDT 2016
Fri Jul 22 16:14:24 PDT 2016
Sun, Jul 24, 2016  5:48:27 PM
Tue, Jul 26, 2016 12:43:14 AM
