/*
 * PCA9633 LED chip driver.
 *
 * Copyright 2012 bct electronic GmbH
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

#ifndef __LINUX_PCA9633_H
#define __LINUX_PCA9633_H
#include <linux/leds.h>

enum pca9633_outdrv {
	PCA9633_OPEN_DRAIN,
	PCA9633_TOTEM_POLE, /* aka push-pull */
};

struct pca9633_platform_data {
	struct led_platform_data leds;
	enum pca9633_outdrv outdrv;
};

#endif /* __LINUX_PCA9633_H*/
Tue Jul 19 12:45:32 PDT 2016
Fri Jul 22 15:59:42 PDT 2016
Sun, Jul 24, 2016  3:57:03 PM
Mon, Jul 25, 2016 10:39:50 PM
