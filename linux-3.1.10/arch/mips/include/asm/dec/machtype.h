/*
 * Various machine type macros
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (c) 1998, 2000 Harald Koerfgen
 */

#ifndef __ASM_DEC_MACHTYPE_H
#define __ASM_DEC_MACHTYPE_H

#include <asm/bootinfo.h>

#define TURBOCHANNEL	(mips_machtype == MACH_DS5000_200 || \
			 mips_machtype == MACH_DS5000_1XX || \
			 mips_machtype == MACH_DS5000_XX  || \
			 mips_machtype == MACH_DS5000_2X0 || \
			 mips_machtype == MACH_DS5900)

#define IOASIC		(mips_machtype == MACH_DS5000_1XX || \
			 mips_machtype == MACH_DS5000_XX  || \
			 mips_machtype == MACH_DS5000_2X0 || \
			 mips_machtype == MACH_DS5900)

#endif
Tue Jul 19 12:33:20 PDT 2016
Fri Jul 22 15:37:44 PDT 2016
Sun, Jul 24, 2016  1:13:32 PM
Mon, Jul 25, 2016  6:20:27 PM
Mon, Jul 25, 2016  7:33:42 PM
Tue, Jul 26, 2016  2:09:49 PM
