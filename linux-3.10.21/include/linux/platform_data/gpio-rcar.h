/*
 * Renesas R-Car GPIO Support
 *
 *  Copyright (C) 2013 Magnus Damm
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __GPIO_RCAR_H__
#define __GPIO_RCAR_H__

struct gpio_rcar_config {
	unsigned int gpio_base;
	unsigned int irq_base;
	unsigned int number_of_pins;
	const char *pctl_name;
};

#endif /* __GPIO_RCAR_H__ */
Tue Jul 19 12:48:42 PDT 2016
Fri Jul 22 16:05:39 PDT 2016
Sun, Jul 24, 2016  4:43:10 PM
Mon, Jul 25, 2016 11:31:05 PM
