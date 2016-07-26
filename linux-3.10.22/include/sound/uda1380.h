/*
 * UDA1380 ALSA SoC Codec driver
 *
 * Copyright 2009 Philipp Zabel
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __UDA1380_H
#define __UDA1380_H

struct uda1380_platform_data {
	int gpio_power;
	int gpio_reset;
	int dac_clk;
#define UDA1380_DAC_CLK_SYSCLK 0
#define UDA1380_DAC_CLK_WSPLL  1
};

#endif /* __UDA1380_H */
Tue Jul 19 12:49:24 PDT 2016
Fri Jul 22 16:06:57 PDT 2016
Sun, Jul 24, 2016  4:53:06 PM
Mon, Jul 25, 2016 11:42:13 PM
