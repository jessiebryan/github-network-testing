#ifndef _ASM_S390_DMA_H
#define _ASM_S390_DMA_H

#include <asm/io.h>

/*
 * MAX_DMA_ADDRESS is ambiguous because on s390 its completely unrelated
 * to DMA. It _is_ used for the s390 memory zone split at 2GB caused
 * by the 31 bit heritage.
 */
#define MAX_DMA_ADDRESS         0x80000000

#ifdef CONFIG_PCI
extern int isa_dma_bridge_buggy;
#else
#define isa_dma_bridge_buggy	(0)
#endif

#endif /* _ASM_S390_DMA_H */
Tue Jul 19 12:45:50 PDT 2016
Fri Jul 22 16:00:17 PDT 2016
Sun, Jul 24, 2016  4:01:41 PM
