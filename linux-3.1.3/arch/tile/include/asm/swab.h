/*
 * Copyright 2010 Tilera Corporation. All Rights Reserved.
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

#ifndef _ASM_TILE_SWAB_H
#define _ASM_TILE_SWAB_H

/* Tile gcc is always >= 4.3.0, so we use __builtin_bswap. */
#define __arch_swab32(x) __builtin_bswap32(x)
#define __arch_swab64(x) __builtin_bswap64(x)
#define __arch_swab16(x) (__builtin_bswap32(x) >> 16)

#endif /* _ASM_TILE_SWAB_H */
Tue Jul 19 12:35:08 PDT 2016
Fri Jul 22 15:40:08 PDT 2016
Sun, Jul 24, 2016  1:31:24 PM
Mon, Jul 25, 2016  7:54:40 PM
Tue, Jul 26, 2016  2:29:43 PM
