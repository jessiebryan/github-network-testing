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
Tue Jul 19 12:45:31 PDT 2016
Fri Jul 22 15:59:40 PDT 2016
Sun, Jul 24, 2016  3:56:45 PM
Mon, Jul 25, 2016 10:39:31 PM
