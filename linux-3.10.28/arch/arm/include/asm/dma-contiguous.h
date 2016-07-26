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
Tue Jul 19 12:52:43 PDT 2016
Fri Jul 22 16:13:22 PDT 2016
Sun, Jul 24, 2016  5:40:49 PM
Tue, Jul 26, 2016 12:34:51 AM
