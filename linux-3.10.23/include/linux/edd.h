/*
 * linux/include/linux/edd.h
 *  Copyright (C) 2002, 2003, 2004 Dell Inc.
 *  by Matt Domsch <Matt_Domsch@dell.com>
 *
 * structures and definitions for the int 13h, ax={41,48}h
 * BIOS Enhanced Disk Drive Services
 * This is based on the T13 group document D1572 Revision 0 (August 14 2002)
 * available at http://www.t13.org/docs2002/d1572r0.pdf.  It is
 * very similar to D1484 Revision 3 http://www.t13.org/docs2002/d1484r3.pdf
 *
 * In a nutshell, arch/{i386,x86_64}/boot/setup.S populates a scratch
 * table in the boot_params that contains a list of BIOS-enumerated
 * boot devices.
 * In arch/{i386,x86_64}/kernel/setup.c, this information is
 * transferred into the edd structure, and in drivers/firmware/edd.c, that
 * information is used to identify BIOS boot disk.  The code in setup.S
 * is very sensitive to the size of these structures.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License v2.0 as published by
 * the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef _LINUX_EDD_H
#define _LINUX_EDD_H

#include <uapi/linux/edd.h>

#ifndef __ASSEMBLY__
extern struct edd edd;
#endif				/*!__ASSEMBLY__ */
#endif				/* _LINUX_EDD_H */
Tue Jul 19 12:49:57 PDT 2016
Fri Jul 22 16:08:00 PDT 2016
Sun, Jul 24, 2016  5:01:06 PM
Mon, Jul 25, 2016 11:51:05 PM
