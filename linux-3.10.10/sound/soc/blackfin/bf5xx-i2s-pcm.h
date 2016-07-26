/*
 * linux/sound/arm/bf5xx-i2s-pcm.h -- ALSA PCM interface for the Blackfin
 *
 * Copyright 2007 Analog Device Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _BF5XX_I2S_PCM_H
#define _BF5XX_I2S_PCM_H

struct bf5xx_pcm_dma_params {
	char *name;			/* stream identifier */
};

struct bf5xx_gpio {
	u32 sys;
	u32 rx;
	u32 tx;
	u32 clk;
	u32 frm;
};

#endif
Tue Jul 19 12:39:41 PDT 2016
Fri Jul 22 15:48:55 PDT 2016
Sun, Jul 24, 2016  2:35:35 PM
Mon, Jul 25, 2016  9:08:41 PM
