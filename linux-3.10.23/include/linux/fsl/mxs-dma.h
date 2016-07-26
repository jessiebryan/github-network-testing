/*
 * Copyright 2011 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __MACH_MXS_DMA_H__
#define __MACH_MXS_DMA_H__

#include <linux/dmaengine.h>

struct mxs_dma_data {
	int chan_irq;
};

extern int mxs_dma_is_apbh(struct dma_chan *chan);
extern int mxs_dma_is_apbx(struct dma_chan *chan);
#endif /* __MACH_MXS_DMA_H__ */
Tue Jul 19 12:49:57 PDT 2016
Fri Jul 22 16:08:01 PDT 2016
Sun, Jul 24, 2016  5:01:09 PM
Mon, Jul 25, 2016 11:51:08 PM
