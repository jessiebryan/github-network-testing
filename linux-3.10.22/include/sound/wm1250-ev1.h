/*
 * linux/sound/wm1250-ev1.h - Platform data for WM1250-EV1
 *
 * Copyright 2011 Wolfson Microelectronics. PLC.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __LINUX_SND_WM1250_EV1_H
#define __LINUX_SND_WM1250_EV1_H

#define WM1250_EV1_NUM_GPIOS 5

#define WM1250_EV1_GPIO_CLK_ENA  0
#define WM1250_EV1_GPIO_CLK_SEL0 1
#define WM1250_EV1_GPIO_CLK_SEL1 2
#define WM1250_EV1_GPIO_OSR      3
#define WM1250_EV1_GPIO_MASTER   4


struct wm1250_ev1_pdata {
	int gpios[WM1250_EV1_NUM_GPIOS];
};

#endif
Tue Jul 19 12:49:24 PDT 2016
Fri Jul 22 16:06:57 PDT 2016
Sun, Jul 24, 2016  4:53:06 PM
Mon, Jul 25, 2016 11:42:13 PM
