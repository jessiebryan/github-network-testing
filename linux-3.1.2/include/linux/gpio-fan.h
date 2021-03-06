/*
 * include/linux/gpio-fan.h
 *
 * Platform data structure for GPIO fan driver
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __LINUX_GPIO_FAN_H
#define __LINUX_GPIO_FAN_H

struct gpio_fan_alarm {
	unsigned	gpio;
	unsigned	active_low;
};

struct gpio_fan_speed {
	int rpm;
	int ctrl_val;
};

struct gpio_fan_platform_data {
	int			num_ctrl;
	unsigned		*ctrl;	/* fan control GPIOs. */
	struct gpio_fan_alarm	*alarm;	/* fan alarm GPIO. */
	/*
	 * Speed conversion array: rpm from/to GPIO bit field.
	 * This array _must_ be sorted in ascending rpm order.
	 */
	int			num_speed;
	struct gpio_fan_speed	*speed;
};

#endif /* __LINUX_GPIO_FAN_H */
Tue Jul 19 12:34:25 PDT 2016
Fri Jul 22 15:39:25 PDT 2016
Sun, Jul 24, 2016  1:26:20 PM
Mon, Jul 25, 2016  6:35:47 PM
Mon, Jul 25, 2016  7:48:43 PM
Tue, Jul 26, 2016  2:24:05 PM
