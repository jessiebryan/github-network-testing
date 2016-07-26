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
Tue Jul 19 12:34:37 PDT 2016
Fri Jul 22 15:39:33 PDT 2016
Sun, Jul 24, 2016  1:27:22 PM
Mon, Jul 25, 2016  6:37:01 PM
Mon, Jul 25, 2016  7:49:56 PM
Tue, Jul 26, 2016  2:25:13 PM
