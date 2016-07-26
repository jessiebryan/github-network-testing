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
Tue Jul 19 12:36:00 PDT 2016
Fri Jul 22 15:41:49 PDT 2016
Sun, Jul 24, 2016  1:43:54 PM
Mon, Jul 25, 2016  8:09:26 PM
Tue, Jul 26, 2016  2:43:30 PM
