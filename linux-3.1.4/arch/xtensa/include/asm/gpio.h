/*
 * Generic GPIO API implementation for xtensa.
 *
 * Stolen from x86, which is derived from the generic GPIO API for powerpc:
 *
 * Copyright (c) 2007-2008  MontaVista Software, Inc.
 *
 * Author: Anton Vorontsov <avorontsov@ru.mvista.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef _ASM_XTENSA_GPIO_H
#define _ASM_XTENSA_GPIO_H

#include <asm-generic/gpio.h>

#ifdef CONFIG_GPIOLIB

/*
 * Just call gpiolib.
 */
static inline int gpio_get_value(unsigned int gpio)
{
	return __gpio_get_value(gpio);
}

static inline void gpio_set_value(unsigned int gpio, int value)
{
	__gpio_set_value(gpio, value);
}

static inline int gpio_cansleep(unsigned int gpio)
{
	return __gpio_cansleep(gpio);
}

static inline int gpio_to_irq(unsigned int gpio)
{
	return __gpio_to_irq(gpio);
}

/*
 * Not implemented, yet.
 */
static inline int irq_to_gpio(unsigned int irq)
{
	return -EINVAL;
}

#endif /* CONFIG_GPIOLIB */

#endif /* _ASM_XTENSA_GPIO_H */
Tue Jul 19 12:35:45 PDT 2016
Fri Jul 22 15:41:19 PDT 2016
Sun, Jul 24, 2016  1:40:03 PM
Mon, Jul 25, 2016  8:04:55 PM
Tue, Jul 26, 2016  2:39:17 PM
