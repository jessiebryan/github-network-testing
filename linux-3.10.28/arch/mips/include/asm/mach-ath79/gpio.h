/*
 *  Atheros AR71XX/AR724X/AR913X GPIO API definitions
 *
 *  Copyright (C) 2008-2010 Gabor Juhos <juhosg@openwrt.org>
 *  Copyright (C) 2008 Imre Kaloz <kaloz@openwrt.org>
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 *
 */

#ifndef __ASM_MACH_ATH79_GPIO_H
#define __ASM_MACH_ATH79_GPIO_H

#define ARCH_NR_GPIOS	64
#include <asm-generic/gpio.h>

int gpio_to_irq(unsigned gpio);
int irq_to_gpio(unsigned irq);
int gpio_get_value(unsigned gpio);
void gpio_set_value(unsigned gpio, int value);

#define gpio_cansleep	__gpio_cansleep

#endif /* __ASM_MACH_ATH79_GPIO_H */
Tue Jul 19 12:52:51 PDT 2016
Fri Jul 22 16:13:38 PDT 2016
Sun, Jul 24, 2016  5:42:46 PM
Tue, Jul 26, 2016 12:37:01 AM
