#ifndef ASM_DMA_CONTIGUOUS_H
#define ASM_DMA_CONTIGUOUS_H

#ifdef __KERNEL__
#ifdef CONFIG_CMA

#include <linux/device.h>
#include <linux/dma-contiguous.h>

static inline struct cma *dev_get_cma_area(struct device *dev)
{
	if (dev && dev->cma_area)
		return dev->cma_area;
	return dma_contiguous_default_area;
}

static inline void dev_set_cma_area(struct device *dev, struct cma *cma)
{
	if (dev)
		dev->cma_area = cma;
	if (!dev && !dma_contiguous_default_area)
		dma_contiguous_default_area = cma;
}

#endif
#endif

#endif
Tue Jul 19 12:38:54 PDT 2016
Fri Jul 22 15:47:19 PDT 2016
Sun, Jul 24, 2016  2:24:04 PM
Mon, Jul 25, 2016  8:55:51 PM
