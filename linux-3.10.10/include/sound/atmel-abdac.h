/*
 * Driver for the Atmel Audio Bitstream DAC (ABDAC)
 *
 * Copyright (C) 2009 Atmel Corporation
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 */
#ifndef __INCLUDE_SOUND_ATMEL_ABDAC_H
#define __INCLUDE_SOUND_ATMEL_ABDAC_H

#include <linux/dw_dmac.h>

/**
 * struct atmel_abdac_pdata - board specific ABDAC configuration
 * @dws: DMA slave interface to use for sound playback.
 */
struct atmel_abdac_pdata {
	struct dw_dma_slave	dws;
};

#endif /* __INCLUDE_SOUND_ATMEL_ABDAC_H */
Tue Jul 19 12:39:37 PDT 2016
Fri Jul 22 15:48:49 PDT 2016
Sun, Jul 24, 2016  2:34:44 PM
Mon, Jul 25, 2016  9:07:45 PM
