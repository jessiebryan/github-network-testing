/*
 * Driver header for NOON010PC30L camera sensor chip.
 *
 * Copyright (c) 2010 Samsung Electronics, Co. Ltd
 * Contact: Sylwester Nawrocki <s.nawrocki@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef NOON010PC30_H
#define NOON010PC30_H

/**
 * @clk_rate: the clock frequency in Hz
 * @gpio_nreset: GPIO driving nRESET pin
 * @gpio_nstby: GPIO driving nSTBY pin
 */

struct noon010pc30_platform_data {
	unsigned long clk_rate;
	int gpio_nreset;
	int gpio_nstby;
};

#endif /* NOON010PC30_H */
Tue Jul 19 12:53:16 PDT 2016
Fri Jul 22 16:14:25 PDT 2016
Sun, Jul 24, 2016  5:48:40 PM
Tue, Jul 26, 2016 12:43:28 AM
