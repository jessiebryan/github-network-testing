#ifndef _ASM_IA64_DMA_H
#define _ASM_IA64_DMA_H

/*
 * Copyright (C) 1998-2002 Hewlett-Packard Co
 *	David Mosberger-Tang <davidm@hpl.hp.com>
 */


#include <asm/io.h>		/* need byte IO */

extern unsigned long MAX_DMA_ADDRESS;

#ifdef CONFIG_PCI
  extern int isa_dma_bridge_buggy;
#else
# define isa_dma_bridge_buggy 	(0)
#endif

#define free_dma(x)

void dma_mark_clean(void *addr, size_t size);

#endif /* _ASM_IA64_DMA_H */
Tue Jul 19 12:48:18 PDT 2016
Fri Jul 22 16:04:53 PDT 2016
Sun, Jul 24, 2016  4:37:13 PM
Mon, Jul 25, 2016 11:24:29 PM
