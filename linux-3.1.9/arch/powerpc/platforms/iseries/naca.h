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
Tue Jul 19 12:38:02 PDT 2016
Fri Jul 22 15:45:38 PDT 2016
Sun, Jul 24, 2016  2:12:03 PM
Mon, Jul 25, 2016  8:42:30 PM
