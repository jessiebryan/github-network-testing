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

	int dres;  /* Discharge resistance for headphone outputs */
};

#endif
Tue Jul 19 12:37:47 PDT 2016
Fri Jul 22 15:45:11 PDT 2016
Sun, Jul 24, 2016  2:08:38 PM
Mon, Jul 25, 2016  8:38:43 PM
