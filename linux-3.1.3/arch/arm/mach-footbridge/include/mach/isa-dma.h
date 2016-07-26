/*
 *  arch/arm/mach-footbridge/include/mach/isa-dma.h
 *
 *  Architecture DMA routines
 *
 *  Copyright (C) 1998,1999 Russell King
 *  Copyright (C) 1998,1999 Philip Blundell
 */
#ifndef __ASM_ARCH_DMA_H
#define __ASM_ARCH_DMA_H

/*
 * The 21285 has two internal DMA channels; we call these 8 and 9.
 * On CATS hardware we have an additional eight ISA dma channels
 * numbered 0..7.
 */
#define _ISA_DMA(x)		(0+(x))
#define _DC21285_DMA(x)		(8+(x))

#define MAX_DMA_CHANNELS	10

#define DMA_FLOPPY		_ISA_DMA(2)
#define DMA_ISA_CASCADE		_ISA_DMA(4)

#endif /* _ASM_ARCH_DMA_H */
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:41 PDT 2016
Sun, Jul 24, 2016  1:28:16 PM
Mon, Jul 25, 2016  6:38:06 PM
Mon, Jul 25, 2016  7:51:00 PM
