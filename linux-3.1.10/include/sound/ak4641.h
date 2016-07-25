/*
 * AK4641 ALSA SoC Codec driver
 *
 * Copyright 2009 Philipp Zabel
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __AK4641_H
#define __AK4641_H

/**
 * struct ak4641_platform_data - platform specific AK4641 configuration
 * @gpio_power:	GPIO to control external power to AK4641
 * @gpio_npdn:	GPIO connected to AK4641 nPDN pin
 *
 * Both GPIO parameters are optional.
 */
struct ak4641_platform_data {
	int gpio_power;
	int gpio_npdn;
};

#endif /* __AK4641_H */
Tue Jul 19 12:33:43 PDT 2016
Fri Jul 22 15:38:28 PDT 2016
Sun, Jul 24, 2016  1:19:06 PM
