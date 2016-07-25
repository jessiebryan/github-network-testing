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

#ifndef _ASM_TILE_CHECKSUM_H
#define _ASM_TILE_CHECKSUM_H

#include <asm-generic/checksum.h>

/* Allow us to provide a more optimized do_csum(). */
__wsum do_csum(const unsigned char *buff, int len);
#define do_csum do_csum

#endif /* _ASM_TILE_CHECKSUM_H */
Tue Jul 19 12:34:02 PDT 2016
Fri Jul 22 15:39:00 PDT 2016
Sun, Jul 24, 2016  1:23:07 PM
