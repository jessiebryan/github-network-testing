/*
 * linux/sound/wm8996.h -- Platform data for WM8996
 *
 * Copyright 2011 Wolfson Microelectronics. PLC.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __LINUX_SND_WM8996_H
#define __LINUX_SND_WM8996_H

enum wm8996_inmode {
	WM8996_DIFFERRENTIAL_1 = 0,   /* IN1xP - IN1xN */
	WM8996_INVERTING = 1,         /* IN1xN */
	WM8996_NON_INVERTING = 2,     /* IN1xP */
	WM8996_DIFFERENTIAL_2 = 3,    /* IN2xP - IN2xP */
};

/**
 * ReTune Mobile configurations are specified with a label, sample
 * rate and set of values to write (the enable bits will be ignored).
 *
 * Configurations are expected to be generated using the ReTune Mobile
 * control panel in WISCE - see http://www.wolfsonmicro.com/wisce/
 */
struct wm8996_retune_mobile_config {
	const char *name;
	int rate;
	u16 regs[20];
};

#define WM8996_SET_DEFAULT 0x10000

struct wm8996_pdata {
	int irq_flags;  /** Set IRQ trigger flags; default active low */

	int ldo_ena;  /** GPIO for LDO1; -1 for none */

	int micdet_def;  /** Default MICDET_SRC/HP1FB_SRC/MICD_BIAS */

	enum wm8996_inmode inl_mode;
	enum wm8996_inmode inr_mode;

	u32 spkmute_seq;  /** Value for register 0x802 */

	int gpio_base;
	u32 gpio_default[5];

	int num_retune_mobile_cfgs;
	struct wm8996_retune_mobile_config *retune_mobile_cfgs;
};

#endif
Tue Jul 19 12:33:44 PDT 2016
Fri Jul 22 15:38:29 PDT 2016
Sun, Jul 24, 2016  1:19:09 PM
Mon, Jul 25, 2016  6:27:11 PM
Mon, Jul 25, 2016  7:40:18 PM
Tue, Jul 26, 2016  2:16:06 PM
