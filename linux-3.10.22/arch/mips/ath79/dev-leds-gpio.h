/*
 *  Atheros AR71XX/AR724X/AR913X common GPIO LEDs support
 *
 *  Copyright (C) 2008-2010 Gabor Juhos <juhosg@openwrt.org>
 *  Copyright (C) 2008 Imre Kaloz <kaloz@openwrt.org>
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 */

#ifndef _ATH79_DEV_LEDS_GPIO_H
#define _ATH79_DEV_LEDS_GPIO_H

#include <linux/leds.h>

void ath79_register_leds_gpio(int id,
			      unsigned num_leds,
			      struct gpio_led *leds);

#endif /* _ATH79_DEV_LEDS_GPIO_H */
Tue Jul 19 12:48:57 PDT 2016
Fri Jul 22 16:06:08 PDT 2016
Sun, Jul 24, 2016  4:46:55 PM
Mon, Jul 25, 2016 11:35:18 PM
