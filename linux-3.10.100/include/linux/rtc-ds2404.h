/*
 * ds2404.h - platform data structure for the DS2404 RTC.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2012 Sven Schnelle <svens@stackframe.org>
 */

#ifndef __LINUX_DS2404_H
#define __LINUX_DS2404_H

struct ds2404_platform_data {

	unsigned int gpio_rst;
	unsigned int gpio_clk;
	unsigned int gpio_dq;
};
#endif
Tue Jul 19 12:40:14 PDT 2016
Fri Jul 22 15:50:00 PDT 2016
Sun, Jul 24, 2016  2:43:26 PM
Mon, Jul 25, 2016  9:17:25 PM
