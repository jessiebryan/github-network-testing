#ifndef ASMARM_DMA_CONTIGUOUS_H
#define ASMARM_DMA_CONTIGUOUS_H

#ifdef __KERNEL__
#ifdef CONFIG_CMA

#include <linux/types.h>
#include <asm-generic/dma-contiguous.h>

void dma_contiguous_early_fixup(phys_addr_t base, unsigned long size);

#endif
#endif

#endif
Tue Jul 19 12:43:07 PDT 2016
Fri Jul 22 15:55:11 PDT 2016
Sun, Jul 24, 2016  3:22:01 PM
Mon, Jul 25, 2016 10:00:54 PM
