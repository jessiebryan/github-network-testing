/* $Id: dma.h,v 1.2 2001/05/09 12:17:42 johana Exp $ */

#ifndef _ASM_DMA_H
#define _ASM_DMA_H

#include <arch/dma.h>

/* it's useless on the Etrax, but unfortunately needed by the new
   bootmem allocator (but this should do it for this) */

#define MAX_DMA_ADDRESS PAGE_OFFSET

/* From PCI */

#ifdef CONFIG_PCI
extern int isa_dma_bridge_buggy;
#else
#define isa_dma_bridge_buggy 	(0)
#endif

#endif /* _ASM_DMA_H */
Tue Jul 19 12:45:08 PDT 2016
Fri Jul 22 15:58:54 PDT 2016
Sun, Jul 24, 2016  3:50:50 PM
Mon, Jul 25, 2016 10:32:57 PM
