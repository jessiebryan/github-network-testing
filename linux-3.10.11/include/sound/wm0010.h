/*
 * wm0010.h -- Platform data for WM0010 DSP Driver
 *
 * Copyright 2012 Wolfson Microelectronics PLC.
 *
 * Author: Dimitris Papastamos <dp@opensource.wolfsonmicro.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef WM0010_PDATA_H
#define WM0010_PDATA_H

struct wm0010_pdata {
	int gpio_reset;

	/* Set if there is an inverter between the GPIO controlling
	 * the reset signal and the device.
	 */
	int reset_active_high;
	int irq_flags;
};

#endif
Tue Jul 19 12:42:24 PDT 2016
Fri Jul 22 15:53:52 PDT 2016
Sun, Jul 24, 2016  3:11:38 PM
Mon, Jul 25, 2016  9:49:18 PM
