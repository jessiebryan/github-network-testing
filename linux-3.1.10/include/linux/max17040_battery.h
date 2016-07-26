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
Tue Jul 19 12:33:40 PDT 2016
Fri Jul 22 15:38:22 PDT 2016
Sun, Jul 24, 2016  1:18:16 PM
Mon, Jul 25, 2016  6:26:06 PM
Mon, Jul 25, 2016  7:39:15 PM
Tue, Jul 26, 2016  2:15:07 PM
