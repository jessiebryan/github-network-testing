/*
 * Driver header for SR030PC30 camera sensor
 *
 * Copyright (c) 2010 Samsung Electronics, Co. Ltd
 * Contact: Sylwester Nawrocki <s.nawrocki@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef SR030PC30_H
#define SR030PC30_H

struct sr030pc30_platform_data {
	unsigned long clk_rate;	/* master clock frequency in Hz */
	int (*set_power)(struct device *dev, int on);
};

#endif /* SR030PC30_H */
Tue Jul 19 12:34:31 PDT 2016
Fri Jul 22 15:39:31 PDT 2016
Sun, Jul 24, 2016  1:27:08 PM
Mon, Jul 25, 2016  6:36:45 PM
Mon, Jul 25, 2016  7:49:40 PM
Tue, Jul 26, 2016  2:24:58 PM
