/* arch/arm/mach-s5pc100/include/mach/io.h
 *
 * Copyright 2008 Simtec Electronics
 *	Ben Dooks <ben-linux@fluff.org>
 *
 * Default IO routines for S5PC100 systems
 */

#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

/* No current ISA/PCI bus support. */
#define __io(a)		__typesafe_io(a)
#define __mem_pci(a)	(a)

#define IO_SPACE_LIMIT (0xFFFFFFFF)

#endif
Tue Jul 19 12:37:14 PDT 2016
Fri Jul 22 15:44:14 PDT 2016
Sun, Jul 24, 2016  2:01:42 PM
Mon, Jul 25, 2016  8:30:29 PM
