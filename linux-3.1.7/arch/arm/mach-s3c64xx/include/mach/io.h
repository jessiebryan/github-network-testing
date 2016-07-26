/* arch/arm/mach-s3c64xxinclude/mach/io.h
 *
 * Copyright 2008 Simtec Electronics
 *	Ben Dooks <ben-linux@fluff.org>
 *
 * Default IO routines for S3C64XX based
 */

#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

/* No current ISA/PCI bus support. */
#define __io(a)		__typesafe_io(a)
#define __mem_pci(a)	(a)

#define IO_SPACE_LIMIT (0xFFFFFFFF)

#endif
Tue Jul 19 12:36:40 PDT 2016
Fri Jul 22 15:43:08 PDT 2016
Sun, Jul 24, 2016  1:53:26 PM
Mon, Jul 25, 2016  8:20:40 PM
