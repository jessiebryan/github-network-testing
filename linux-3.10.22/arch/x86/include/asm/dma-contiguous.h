#ifndef ASMX86_DMA_CONTIGUOUS_H
#define ASMX86_DMA_CONTIGUOUS_H

#ifdef __KERNEL__

#include <linux/types.h>
#include <asm-generic/dma-contiguous.h>

static inline void
dma_contiguous_early_fixup(phys_addr_t base, unsigned long size) { }

#endif
#endif
Tue Jul 19 12:49:04 PDT 2016
Fri Jul 22 16:06:22 PDT 2016
Sun, Jul 24, 2016  4:48:33 PM
Mon, Jul 25, 2016 11:37:08 PM
