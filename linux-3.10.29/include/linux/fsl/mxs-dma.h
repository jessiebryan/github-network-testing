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
Tue Jul 19 12:53:51 PDT 2016
Fri Jul 22 16:15:33 PDT 2016
Sun, Jul 24, 2016  5:57:03 PM
Tue, Jul 26, 2016 12:52:46 AM
