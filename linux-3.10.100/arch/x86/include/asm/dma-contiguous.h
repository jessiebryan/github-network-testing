#ifndef ASMX86_DMA_CONTIGUOUS_H
#define ASMX86_DMA_CONTIGUOUS_H

#ifdef __KERNEL__

#include <linux/types.h>
#include <asm-generic/dma-contiguous.h>

static inline void
dma_contiguous_early_fixup(phys_addr_t base, unsigned long size) { }

#endif
#endif
Tue Jul 19 12:39:57 PDT 2016
Fri Jul 22 15:49:28 PDT 2016
Sun, Jul 24, 2016  2:39:26 PM
Mon, Jul 25, 2016  9:12:59 PM
