/*
 * Copyright 2011 Tilera Corporation. All Rights Reserved.
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 *   NON INFRINGEMENT.  See the GNU General Public License for
 *   more details.
 */

#ifndef _ASM_TILE_EDAC_H
#define _ASM_TILE_EDAC_H

/* ECC atomic, DMA, SMP and interrupt safe scrub function */

static inline void atomic_scrub(void *va, u32 size)
{
	/*
	 * These is nothing to be done here because CE is
	 * corrected by the mshim.
	 */
	return;
}

#endif /* _ASM_TILE_EDAC_H */
Tue Jul 19 12:36:17 PDT 2016
Fri Jul 22 15:42:22 PDT 2016
Sun, Jul 24, 2016  1:47:52 PM
Mon, Jul 25, 2016  8:14:09 PM
