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

#if __tile_chip__ == 0
#include <arch/chip_tile64.h>
#elif __tile_chip__ == 1
#include <arch/chip_tilepro.h>
#elif defined(__tilegx__)
#include <arch/chip_tilegx.h>
#else
#error Unexpected Tilera chip type
#endif
Tue Jul 19 12:41:58 PDT 2016
Fri Jul 22 15:53:15 PDT 2016
Sun, Jul 24, 2016  3:06:56 PM
Mon, Jul 25, 2016  9:43:59 PM
