/*
 * SA11x0 DMA Engine support
 *
 * Copyright (C) 2012 Russell King
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __LINUX_SA11X0_DMA_H
#define __LINUX_SA11X0_DMA_H

struct dma_chan;

#if defined(CONFIG_DMA_SA11X0) || defined(CONFIG_DMA_SA11X0_MODULE)
bool sa11x0_dma_filter_fn(struct dma_chan *, void *);
#else
static inline bool sa11x0_dma_filter_fn(struct dma_chan *c, void *d)
{
	return false;
}
#endif

#endif
Tue Jul 19 12:50:39 PDT 2016
Fri Jul 22 16:09:19 PDT 2016
Sun, Jul 24, 2016  5:11:09 PM
Tue, Jul 26, 2016 12:02:06 AM
