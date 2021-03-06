/*
 * pps-gpio.h -- PPS client for GPIOs
 *
 *
 * Copyright (C) 2011 James Nuss <jamesnuss@nanometrics.ca>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef _PPS_GPIO_H
#define _PPS_GPIO_H

struct pps_gpio_platform_data {
	bool assert_falling_edge;
	bool capture_clear;
	unsigned int gpio_pin;
	const char *gpio_label;
};

#endif
Tue Jul 19 12:52:36 PDT 2016
Fri Jul 22 16:13:06 PDT 2016
Sun, Jul 24, 2016  5:39:01 PM
Tue, Jul 26, 2016 12:32:52 AM
