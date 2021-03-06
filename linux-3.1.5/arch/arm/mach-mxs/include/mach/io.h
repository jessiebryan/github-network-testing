/*
 *  Copyright 2004-2007 Freescale Semiconductor, Inc. All Rights Reserved.
 */

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __MACH_MXS_IO_H__
#define __MACH_MXS_IO_H__

/* Allow IO space to be anywhere in the memory */
#define IO_SPACE_LIMIT 0xffffffff

/* io address mapping macro */
#define __io(a)		__typesafe_io(a)

#define __mem_pci(a)	(a)

#endif /* __MACH_MXS_IO_H__ */
Tue Jul 19 12:36:05 PDT 2016
Fri Jul 22 15:41:58 PDT 2016
Sun, Jul 24, 2016  1:44:57 PM
Mon, Jul 25, 2016  8:10:41 PM
Tue, Jul 26, 2016  2:44:40 PM
