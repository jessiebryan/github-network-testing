#ifndef ASMX86_DMA_CONTIGUOUS_H
#define ASMX86_DMA_CONTIGUOUS_H

#ifdef __KERNEL__

#include <linux/types.h>
#include <asm-generic/dma-contiguous.h>

static inline void
dma_contiguous_early_fixup(phys_addr_t base, unsigned long size) { }

#endif
#endif
Tue Jul 19 12:53:36 PDT 2016
