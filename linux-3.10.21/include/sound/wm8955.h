/*
 * Platform data for WM8955
 *
 * Copyright 2009 Wolfson Microelectronics PLC.
 *
 * Author: Mark Brown <broonie@opensource.wolfsonmicro.com>
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 */

#ifndef __WM8955_PDATA_H__
#define __WM8955_PDATA_H__

struct wm8955_pdata {
	/* Configure LOUT2/ROUT2 to drive a speaker */
	unsigned int out2_speaker:1;

	/* Configure MONOIN+/- in differential mode */
	unsigned int monoin_diff:1;
};

#endif
Tue Jul 19 12:48:45 PDT 2016
Fri Jul 22 16:05:45 PDT 2016
Sun, Jul 24, 2016  4:43:54 PM
Mon, Jul 25, 2016 11:31:54 PM
