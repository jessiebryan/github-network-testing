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

static inline int mxs_dma_is_apbh(struct dma_chan *chan)
{
	return !strcmp(dev_name(chan->device->dev), "mxs-dma-apbh");
}

static inline int mxs_dma_is_apbx(struct dma_chan *chan)
{
	return !strcmp(dev_name(chan->device->dev), "mxs-dma-apbx");
}

#endif /* __MACH_MXS_DMA_H__ */
Tue Jul 19 12:33:14 PDT 2016
Fri Jul 22 15:37:31 PDT 2016
Sun, Jul 24, 2016  1:11:56 PM
Mon, Jul 25, 2016  6:18:33 PM
Mon, Jul 25, 2016  7:31:50 PM
Tue, Jul 26, 2016  2:08:04 PM
