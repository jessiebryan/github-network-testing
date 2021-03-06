/*
 * arch/arm/mach-prima2/include/mach/memory.h
 *
 * Copyright (c) 2010 – 2011 Cambridge Silicon Radio Limited, a CSR plc group company.
 *
 * Licensed under GPLv2 or later.
 */

#ifndef __ASM_ARCH_MEMORY_H
#define __ASM_ARCH_MEMORY_H

#define PLAT_PHYS_OFFSET        UL(0x00000000)

/*
 * Restrict DMA-able region to workaround silicon limitation.
 * The limitation restricts buffers available for DMA to SD/MMC
 * hardware to be below 256MB
 */
#define ARM_DMA_ZONE_SIZE	(SZ_256M)

#endif
Tue Jul 19 12:35:31 PDT 2016
Fri Jul 22 15:40:52 PDT 2016
Sun, Jul 24, 2016  1:36:49 PM
Mon, Jul 25, 2016  8:01:05 PM
Tue, Jul 26, 2016  2:35:40 PM
