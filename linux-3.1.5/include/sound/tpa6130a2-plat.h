/*
 * TPA6130A2 driver platform header
 *
 * Copyright (C) Nokia Corporation
 *
 * Author: Peter Ujfalusi <peter.ujfalusi@ti.com>
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

#ifndef TPA6130A2_PLAT_H
#define TPA6130A2_PLAT_H

enum tpa_model {
	TPA6130A2,
	TPA6140A2,
};

struct tpa6130a2_platform_data {
	enum tpa_model id;
	int power_gpio;
};

#endif
Tue Jul 19 12:36:34 PDT 2016
Fri Jul 22 15:42:58 PDT 2016
Sun, Jul 24, 2016  1:52:09 PM
Mon, Jul 25, 2016  8:19:09 PM
