/* arch/arm/mach-zynq/include/mach/io.h
 *
 *  Copyright (C) 2011 Xilinx
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MACH_IO_H__
#define __MACH_IO_H__

/* Allow IO space to be anywhere in the memory */

#define IO_SPACE_LIMIT 0xffff

/* IO address mapping macros, nothing special at this time but required */

#ifdef __ASSEMBLER__
#define IOMEM(x)		(x)
#else
#define IOMEM(x)		((void __force __iomem *)(x))
#endif

#define __io(a)			__typesafe_io(a)
#define __mem_pci(a)		(a)

#endif
Tue Jul 19 12:36:06 PDT 2016
Fri Jul 22 15:42:01 PDT 2016
Sun, Jul 24, 2016  1:45:22 PM
Mon, Jul 25, 2016  8:11:11 PM
Tue, Jul 26, 2016  2:45:08 PM
