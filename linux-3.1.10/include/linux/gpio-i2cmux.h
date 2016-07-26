/*
 * gpio-i2cmux interface to platform code
 *
 * Peter Korsgaard <peter.korsgaard@barco.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _LINUX_GPIO_I2CMUX_H
#define _LINUX_GPIO_I2CMUX_H

/* MUX has no specific idle mode */
#define GPIO_I2CMUX_NO_IDLE	((unsigned)-1)

/**
 * struct gpio_i2cmux_platform_data - Platform-dependent data for gpio-i2cmux
 * @parent: Parent I2C bus adapter number
 * @base_nr: Base I2C bus number to number adapters from or zero for dynamic
 * @values: Array of bitmasks of GPIO settings (low/high) for each
 *	position
 * @n_values: Number of multiplexer positions (busses to instantiate)
 * @gpios: Array of GPIO numbers used to control MUX
 * @n_gpios: Number of GPIOs used to control MUX
 * @idle: Bitmask to write to MUX when idle or GPIO_I2CMUX_NO_IDLE if not used
 */
struct gpio_i2cmux_platform_data {
	int parent;
	int base_nr;
	const unsigned *values;
	int n_values;
	const unsigned *gpios;
	int n_gpios;
	unsigned idle;
};

#endif /* _LINUX_GPIO_I2CMUX_H */
Tue Jul 19 12:33:39 PDT 2016
Fri Jul 22 15:38:21 PDT 2016
Sun, Jul 24, 2016  1:18:04 PM
Mon, Jul 25, 2016  6:25:53 PM
Mon, Jul 25, 2016  7:39:02 PM
Tue, Jul 26, 2016  2:14:54 PM
