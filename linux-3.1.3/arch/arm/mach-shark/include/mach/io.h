/*
 * arch/arm/mach-shark/include/mach/io.h
 *
 * by Alexander Schulz
 *
 * derived from:
 * arch/arm/mach-ebsa110/include/mach/io.h
 * Copyright (C) 1997,1998 Russell King
 */

#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

#define IO_SPACE_LIMIT 0xffffffff

#define __io(a)                 ((void __iomem *)(0xe0000000 + (a)))

#define __mem_pci(addr) (addr)

#endif
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:45 PDT 2016
Sun, Jul 24, 2016  1:28:45 PM
Mon, Jul 25, 2016  6:38:41 PM
Mon, Jul 25, 2016  7:51:34 PM
Tue, Jul 26, 2016  2:26:46 PM
