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
Tue Jul 19 12:34:42 PDT 2016
Fri Jul 22 15:39:42 PDT 2016
Sun, Jul 24, 2016  1:28:27 PM
Mon, Jul 25, 2016  6:38:19 PM
