/*
 *  Copyright (C) 2006 Samsung Electronics
 *  Kyungmin Park <kyungmin.park@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef ASMARM_ARCH_LED_H
#define ASMARM_ARCH_LED_H

struct omap_led_config {
	struct led_classdev	cdev;
	s16			gpio;
};

struct omap_led_platform_data {
	s16			nr_leds;
	struct omap_led_config	*leds;
};

#endif
Tue Jul 19 12:53:53 PDT 2016
Fri Jul 22 16:15:37 PDT 2016
Sun, Jul 24, 2016  5:57:34 PM
Tue, Jul 26, 2016 12:53:20 AM
