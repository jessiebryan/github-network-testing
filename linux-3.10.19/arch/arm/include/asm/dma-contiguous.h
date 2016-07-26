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
Tue Jul 19 12:46:55 PDT 2016
Fri Jul 22 16:02:18 PDT 2016
Sun, Jul 24, 2016  4:17:20 PM
Mon, Jul 25, 2016 11:02:26 PM
