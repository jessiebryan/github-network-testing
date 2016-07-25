/* include/linux/timed_gpio.h
 *
 * Copyright (C) 2008 Google, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
*/

#ifndef _LINUX_TIMED_GPIO_H
#define _LINUX_TIMED_GPIO_H

#define TIMED_GPIO_NAME "timed-gpio"

struct timed_gpio {
	const char *name;
	unsigned	gpio;
	int		max_timeout;
	u8		active_low;
};

struct timed_gpio_platform_data {
	int		num_gpios;
	struct timed_gpio *gpios;
};

#endif
Tue Jul 19 12:41:23 PDT 2016
Fri Jul 22 15:52:20 PDT 2016
Sun, Jul 24, 2016  2:59:54 PM
