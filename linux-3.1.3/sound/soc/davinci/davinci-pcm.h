/*
 * ALSA PCM interface for the TI DAVINCI processor
 *
 * Author:      Vladimir Barinov, <vbarinov@embeddedalley.com>
 * Copyright:   (C) 2007 MontaVista Software, Inc., <source@mvista.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _DAVINCI_PCM_H
#define _DAVINCI_PCM_H

#include <mach/edma.h>
#include <mach/asp.h>


struct davinci_pcm_dma_params {
	int channel;			/* sync dma channel ID */
	unsigned short acnt;
	dma_addr_t dma_addr;		/* device physical address for DMA */
	unsigned sram_size;
	enum dma_event_q asp_chan_q;	/* event queue number for ASP channel */
	enum dma_event_q ram_chan_q;	/* event queue number for RAM channel */
	unsigned char data_type;	/* xfer data type */
	unsigned char convert_mono_stereo;
	unsigned int fifo_level;
};

#endif
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:46 PDT 2016
Sun, Jul 24, 2016  1:36:04 PM
Mon, Jul 25, 2016  8:00:12 PM
