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
Tue Jul 19 12:45:39 PDT 2016
Fri Jul 22 15:59:56 PDT 2016
Sun, Jul 24, 2016  3:58:55 PM
Mon, Jul 25, 2016 10:41:55 PM
