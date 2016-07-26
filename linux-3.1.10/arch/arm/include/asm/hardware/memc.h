/*
 *  arch/arm/include/asm/hardware/memc.h
 *
 *  Copyright (C) Russell King.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#define VDMA_ALIGNMENT	PAGE_SIZE
#define VDMA_XFERSIZE	16
#define VDMA_INIT	0
#define VDMA_START	1
#define VDMA_END	2

#ifndef __ASSEMBLY__
extern void memc_write(unsigned int reg, unsigned long val);

#define video_set_dma(start,end,offset)				\
do {								\
	memc_write (VDMA_START, (start >> 2));			\
	memc_write (VDMA_END, (end - VDMA_XFERSIZE) >> 2);	\
	memc_write (VDMA_INIT, (offset >> 2));			\
} while (0)

#endif
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:28 PDT 2016
Sun, Jul 24, 2016  1:11:33 PM
Mon, Jul 25, 2016  6:18:05 PM
Mon, Jul 25, 2016  7:31:24 PM
