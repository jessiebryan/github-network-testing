/*
 * linux/sound/wm9081.h -- Platform data for WM9081
 *
 * Copyright 2009 Wolfson Microelectronics. PLC.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __LINUX_SND_WM_9081_H
#define __LINUX_SND_WM_9081_H

struct wm9081_retune_mobile_setting {
	const char *name;
	unsigned int rate;
	u16 config[20];
};

struct wm9081_pdata {
	bool irq_high;   /* IRQ is active high */
	bool irq_cmos;   /* IRQ is in CMOS mode */

	struct wm9081_retune_mobile_setting *retune_configs;
	int num_retune_configs;
};

#endif
Tue Jul 19 12:48:45 PDT 2016
Fri Jul 22 16:05:45 PDT 2016
Sun, Jul 24, 2016  4:43:54 PM
Mon, Jul 25, 2016 11:31:54 PM
