/*
 *  Copyright (C) 2009, Jiejing Zhang <kzjeef@gmail.com>
 *
 *  This program is free software; you can redistribute	 it and/or modify it
 *  under  the terms of	 the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the	License, or (at your
 *  option) any later version.
 *
 *  You should have received a copy of the  GNU General Public License along
 *  with this program; if not, write  to the Free Software Foundation, Inc.,
 *  675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef __JZ4740_BATTERY_H
#define __JZ4740_BATTERY_H

struct jz_battery_platform_data {
	struct power_supply_info info;
	int gpio_charge;	/* GPIO port of Charger state */
	int gpio_charge_active_low;
};

#endif
Tue Jul 19 12:52:35 PDT 2016
Fri Jul 22 16:13:06 PDT 2016
Sun, Jul 24, 2016  5:39:01 PM
Tue, Jul 26, 2016 12:32:51 AM
