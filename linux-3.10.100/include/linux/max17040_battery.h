/*
 *  Copyright (C) 2009 Samsung Electronics
 *  Minkyu Kang <mk7.kang@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __MAX17040_BATTERY_H_
#define __MAX17040_BATTERY_H_

struct max17040_platform_data {
	int (*battery_online)(void);
	int (*charger_online)(void);
	int (*charger_enable)(void);
};

#endif
Tue Jul 19 12:40:12 PDT 2016
Fri Jul 22 15:49:57 PDT 2016
Sun, Jul 24, 2016  2:43:00 PM
Mon, Jul 25, 2016  9:16:56 PM
