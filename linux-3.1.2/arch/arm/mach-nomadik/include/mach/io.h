/*
 * arch/arm/mach-nomadik/include/mach/io.h   (copied from mach-sa1100)
 *
 * Copyright (C) 1997-1999 Russell King
 *
 * Modifications:
 *  06-12-1997  RMK     Created.
 *  07-04-1999  RMK     Major cleanup
 */
#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

#define IO_SPACE_LIMIT 0xffffffff

/*
 * We don't actually have real ISA nor PCI buses, but there is so many
 * drivers out there that might just work if we fake them...
 */
#define __io(a)         __typesafe_io(a)
#define __mem_pci(a)    (a)

#endif
Tue Jul 19 12:33:50 PDT 2016
Fri Jul 22 15:38:37 PDT 2016
Sun, Jul 24, 2016  1:20:12 PM
Mon, Jul 25, 2016  6:28:26 PM
Mon, Jul 25, 2016  7:41:33 PM
Tue, Jul 26, 2016  2:17:17 PM
