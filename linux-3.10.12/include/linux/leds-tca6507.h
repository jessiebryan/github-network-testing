/*
 * TCA6507 LED chip driver.
 *
 * Copyright (C) 2011 Neil Brown <neil@brown.name>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */

#ifndef __LINUX_TCA6507_H
#define __LINUX_TCA6507_H
#include <linux/leds.h>

struct tca6507_platform_data {
	struct led_platform_data leds;
#ifdef CONFIG_GPIOLIB
	int gpio_base;
	void (*setup)(unsigned gpio_base, unsigned ngpio);
#endif
};

#define	TCA6507_MAKE_GPIO 1
#endif /* __LINUX_TCA6507_H*/
Tue Jul 19 12:42:59 PDT 2016
Fri Jul 22 15:54:55 PDT 2016
Sun, Jul 24, 2016  3:19:49 PM
Mon, Jul 25, 2016  9:58:28 PM
