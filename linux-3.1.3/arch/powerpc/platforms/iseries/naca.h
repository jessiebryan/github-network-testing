#ifndef _PLATFORMS_ISERIES_NACA_H
#define _PLATFORMS_ISERIES_NACA_H

/*
 * c 2001 PPC 64 Team, IBM Corp
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#include <asm/types.h>

struct naca_struct {
	/* Kernel only data - undefined for user space */
	const void *xItVpdAreas;	/* VPD Data                  0x00 */
	void *xRamDisk;                 /* iSeries ramdisk           0x08 */
	u64   xRamDiskSize;		/* In pages                  0x10 */
};

extern struct naca_struct naca;

#endif /* _PLATFORMS_ISERIES_NACA_H */
Tue Jul 19 12:34:58 PDT 2016
Fri Jul 22 15:40:03 PDT 2016
Sun, Jul 24, 2016  1:30:50 PM
Mon, Jul 25, 2016  7:53:59 PM
Tue, Jul 26, 2016  2:29:04 PM
