/*
 * Copyright (C) 2007-2012 ST-Ericsson AB
 * License terms: GNU General Public License (GPL) version 2
 * GPIO block resgister definitions and inline macros for
 * U300 GPIO COH 901 335 or COH 901 571/3
 * Author: Linus Walleij <linus.walleij@stericsson.com>
 */

#ifndef __MACH_U300_GPIO_U300_H
#define __MACH_U300_GPIO_U300_H

/**
 * struct u300_gpio_platform - U300 GPIO platform data
 * @ports: number of GPIO block ports
 * @gpio_base: first GPIO number for this block (use a free range)
 */
struct u300_gpio_platform {
	u8 ports;
	int gpio_base;
};

#endif /* __MACH_U300_GPIO_U300_H */
Tue Jul 19 12:43:00 PDT 2016
Fri Jul 22 15:54:57 PDT 2016
Sun, Jul 24, 2016  3:20:10 PM
Mon, Jul 25, 2016  9:58:51 PM
