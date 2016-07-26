#ifndef ASMX86_DMA_CONTIGUOUS_H
#define ASMX86_DMA_CONTIGUOUS_H

#ifdef __KERNEL__

#include <linux/types.h>
#include <asm-generic/dma-contiguous.h>

static inline void
dma_contiguous_early_fixup(phys_addr_t base, unsigned long size) { }

#endif
#endif
Tue Jul 19 12:39:19 PDT 2016
Fri Jul 22 15:48:10 PDT 2016
Sun, Jul 24, 2016  2:30:14 PM
Mon, Jul 25, 2016  9:02:45 PM
