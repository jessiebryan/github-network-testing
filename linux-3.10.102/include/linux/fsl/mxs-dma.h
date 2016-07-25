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
Tue Jul 19 12:41:29 PDT 2016
Fri Jul 22 15:52:30 PDT 2016
Sun, Jul 24, 2016  3:01:12 PM
