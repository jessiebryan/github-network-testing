/*
 * wm8960.h  --  WM8960 Soc Audio driver platform data
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _WM8960_PDATA_H
#define _WM8960_PDATA_H

#define WM8960_DRES_400R 0
#define WM8960_DRES_200R 1
#define WM8960_DRES_600R 2
#define WM8960_DRES_150R 3
#define WM8960_DRES_MAX  3

struct wm8960_data {
	bool capless;  /* Headphone outputs configured in capless mode */

	bool shared_lrclk;  /* DAC and ADC LRCLKs are wired together */
};

#endif
Tue Jul 19 12:39:00 PDT 2016
Fri Jul 22 15:47:31 PDT 2016
Sun, Jul 24, 2016  2:25:36 PM
Mon, Jul 25, 2016  8:57:34 PM
