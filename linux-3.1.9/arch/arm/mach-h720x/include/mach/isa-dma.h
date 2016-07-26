/*
 * arch/arm/mach-h720x/include/mach/isa-dma.h
 *
 * Architecture DMA routes
 *
 * Copyright (C) 1997.1998 Russell King
 */
#ifndef __ASM_ARCH_DMA_H
#define __ASM_ARCH_DMA_H

#if defined (CONFIG_CPU_H7201)
#define MAX_DMA_CHANNELS	3
#elif defined (CONFIG_CPU_H7202)
#define MAX_DMA_CHANNELS	4
#else
#error processor definition missmatch
#endif

#endif /* __ASM_ARCH_DMA_H */
Tue Jul 19 12:37:51 PDT 2016
Fri Jul 22 15:45:18 PDT 2016
Sun, Jul 24, 2016  2:09:31 PM
Mon, Jul 25, 2016  8:39:42 PM
