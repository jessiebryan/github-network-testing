/*
 * linux/sound/arm/pxa2xx-pcm.h -- ALSA PCM interface for the Intel PXA2xx chip
 *
 * Author:	Nicolas Pitre
 * Created:	Nov 30, 2004
 * Copyright:	MontaVista Software, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <mach/dma.h>

struct pxa2xx_runtime_data {
	int dma_ch;
	struct pxa2xx_pcm_dma_params *params;
	pxa_dma_desc *dma_desc_array;
	dma_addr_t dma_desc_array_phys;
};

struct pxa2xx_pcm_client {
	struct pxa2xx_pcm_dma_params *playback_params;
	struct pxa2xx_pcm_dma_params *capture_params;
	int (*startup)(struct snd_pcm_substream *);
	void (*shutdown)(struct snd_pcm_substream *);
	int (*prepare)(struct snd_pcm_substream *);
};

extern int pxa2xx_pcm_new(struct snd_card *, struct pxa2xx_pcm_client *, struct snd_pcm **);

Tue Jul 19 12:34:39 PDT 2016
Fri Jul 22 15:39:36 PDT 2016
Sun, Jul 24, 2016  1:27:39 PM
Mon, Jul 25, 2016  6:37:23 PM
Mon, Jul 25, 2016  7:50:17 PM
Tue, Jul 26, 2016  2:25:33 PM
