/*
 * arch/arm/mach-ixp4xx/include/mach/hardware.h 
 *
 * Copyright (C) 2002 Intel Corporation.
 * Copyright (C) 2003-2004 MontaVista Software, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

/*
 * Hardware definitions for IXP4xx based systems
 */

#ifndef __ASM_ARCH_HARDWARE_H__
#define __ASM_ARCH_HARDWARE_H__

#ifdef CONFIG_IXP4XX_INDIRECT_PCI
#define PCIBIOS_MAX_MEM		0x4FFFFFFF
#else
#define PCIBIOS_MAX_MEM		0x4BFFFFFF
#endif

#define ARCH_HAS_DMA_SET_COHERENT_MASK

/* Register locations and bits */
#include "ixp4xx-regs.h"

#ifndef __ASSEMBLER__
#include <mach/cpu.h>
#endif

/* Platform helper functions and definitions */
#include "platform.h"

#endif  /* _ASM_ARCH_HARDWARE_H */
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:36 PDT 2016
Sun, Jul 24, 2016  1:20:05 PM
Mon, Jul 25, 2016  6:28:18 PM
Mon, Jul 25, 2016  7:41:24 PM
Tue, Jul 26, 2016  2:17:08 PM
