/*
 * arch/arm/mach-h720x/include/mach/io.h
 *
 * Copyright (C) 2000 Steve Hill (sjhill@cotw.com)
 *
 * Changelog:
 *
 *  09-19-2001	JJKIM
 *  		Created from arch/arm/mach-l7200/include/mach/io.h
 *
 *  03-27-2003  Robert Schwebel <r.schwebel@pengutronix.de>:
 *  		re-unified header files for h720x
 */
#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

#define IO_SPACE_LIMIT 0xffffffff

#define __io(a)		__typesafe_io(a)
#define __mem_pci(a)	(a)

#endif
Tue Jul 19 12:36:38 PDT 2016
Fri Jul 22 15:43:04 PDT 2016
Sun, Jul 24, 2016  1:53:02 PM
Mon, Jul 25, 2016  8:20:12 PM
