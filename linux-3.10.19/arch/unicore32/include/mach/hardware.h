/*
 * linux/arch/unicore32/include/mach/hardware.h
 *
 * Code specific to PKUnity SoC and UniCore ISA
 *
 * Copyright (C) 2001-2010 GUAN Xue-tao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This file contains the hardware definitions for PKUnity architecture
 */

#ifndef __MACH_PUV3_HARDWARE_H__
#define __MACH_PUV3_HARDWARE_H__

#include <mach/PKUnity.h>

#ifndef __ASSEMBLY__
#define io_p2v(x)	(void __iomem *)((x) - PKUNITY_MMIO_BASE)
#define io_v2p(x)	(phys_addr_t)((x) + PKUNITY_MMIO_BASE)
#else
#define io_p2v(x)	((x) - PKUNITY_MMIO_BASE)
#define io_v2p(x)	((x) + PKUNITY_MMIO_BASE)
#endif

#define PCIBIOS_MIN_IO			0x4000 /* should lower than 64KB */
#define PCIBIOS_MIN_MEM			io_v2p(PKUNITY_PCIMEM_BASE)

/*
 * We override the standard dma-mask routines for bouncing.
 */
#define	HAVE_ARCH_PCI_SET_DMA_MASK

#define pcibios_assign_all_busses()	1

#endif  /* __MACH_PUV3_HARDWARE_H__ */
Tue Jul 19 12:47:09 PDT 2016
Fri Jul 22 16:02:45 PDT 2016
Sun, Jul 24, 2016  4:20:46 PM
Mon, Jul 25, 2016 11:06:16 PM
