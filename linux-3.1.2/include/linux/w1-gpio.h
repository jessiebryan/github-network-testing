/*
 * w1-gpio interface to platform code
 *
 * Copyright (C) 2007 Ville Syrjala <syrjala@sci.fi>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 */
#ifndef _LINUX_W1_GPIO_H
#define _LINUX_W1_GPIO_H

/**
 * struct w1_gpio_platform_data - Platform-dependent data for w1-gpio
 * @pin: GPIO pin to use
 * @is_open_drain: GPIO pin is configured as open drain
 */
struct w1_gpio_platform_data {
	unsigned int pin;
	unsigned int is_open_drain:1;
	void (*enable_external_pullup)(int enable);
};

#endif /* _LINUX_W1_GPIO_H */
Tue Jul 19 12:34:29 PDT 2016
Fri Jul 22 15:39:31 PDT 2016
Sun, Jul 24, 2016  1:27:04 PM
Mon, Jul 25, 2016  6:36:41 PM
Mon, Jul 25, 2016  7:49:36 PM
Tue, Jul 26, 2016  2:24:54 PM
