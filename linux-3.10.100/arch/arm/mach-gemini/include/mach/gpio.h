/*
 * Gemini gpiolib specific defines
 *
 * Copyright (C) 2008-2009 Paulius Zaleckas <paulius.zaleckas@teltonika.lt>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __MACH_GPIO_H__
#define __MACH_GPIO_H__

#include <mach/irqs.h>

#define gpio_to_irq(x)	((x) + GPIO_IRQ_BASE)
#define irq_to_gpio(x)	((x) - GPIO_IRQ_BASE)

#endif /* __MACH_GPIO_H__ */
Tue Jul 19 12:39:43 PDT 2016
Fri Jul 22 15:49:00 PDT 2016
Sun, Jul 24, 2016  2:36:09 PM
Mon, Jul 25, 2016  9:09:19 PM
