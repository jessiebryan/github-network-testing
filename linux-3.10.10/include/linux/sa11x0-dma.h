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
Tue Jul 19 12:39:35 PDT 2016
Fri Jul 22 15:48:44 PDT 2016
Sun, Jul 24, 2016  2:34:13 PM
Mon, Jul 25, 2016  9:07:11 PM
