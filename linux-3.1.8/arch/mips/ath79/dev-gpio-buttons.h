/*
 *  Atheros AR71XX/AR724X/AR913X GPIO button support
 *
 *  Copyright (C) 2008-2010 Gabor Juhos <juhosg@openwrt.org>
 *  Copyright (C) 2008 Imre Kaloz <kaloz@openwrt.org>
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 */

#ifndef _ATH79_DEV_GPIO_BUTTONS_H
#define _ATH79_DEV_GPIO_BUTTONS_H

#include <linux/input.h>
#include <linux/gpio_keys.h>

void ath79_register_gpio_keys_polled(int id,
				     unsigned poll_interval,
				     unsigned nbuttons,
				     struct gpio_keys_button *buttons);

#endif /* _ATH79_DEV_GPIO_BUTTONS_H */
Tue Jul 19 12:37:20 PDT 2016
Fri Jul 22 15:44:25 PDT 2016
Sun, Jul 24, 2016  2:03:00 PM
Mon, Jul 25, 2016  8:32:01 PM
