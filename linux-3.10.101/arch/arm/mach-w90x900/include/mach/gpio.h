/*
 * linux/arch/arm/mach-w90p910/include/mach/gpio.h
 *
 * Generic w90p910 GPIO handling
 *
 *  Wan ZongShun <mcuos.com@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARCH_W90P910_GPIO_H
#define __ASM_ARCH_W90P910_GPIO_H

#include <mach/hardware.h>
#include <asm/irq.h>

static inline int gpio_to_irq(unsigned gpio)
{
	return gpio;
}
#define gpio_to_irq gpio_to_irq

static inline int irq_to_gpio(unsigned irq)
{
	return irq;
}

#endif
Tue Jul 19 12:40:24 PDT 2016
Fri Jul 22 15:50:20 PDT 2016
Sun, Jul 24, 2016  2:45:47 PM
Mon, Jul 25, 2016  9:20:06 PM
