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

#ifndef _ASM_TILE_OPCODE_TILE_H
#define _ASM_TILE_OPCODE_TILE_H

#include <arch/chip.h>

#if CHIP_WORD_SIZE() == 64
#include <asm/opcode-tile_64.h>
#else
#include <asm/opcode-tile_32.h>
#endif

/* These definitions are not correct for TILE64, so just avoid them. */
#undef TILE_ELF_MACHINE_CODE
#undef TILE_ELF_NAME

#endif /* _ASM_TILE_OPCODE_TILE_H */
Tue Jul 19 12:35:43 PDT 2016
Fri Jul 22 15:41:16 PDT 2016
Sun, Jul 24, 2016  1:39:38 PM
Mon, Jul 25, 2016  8:04:25 PM
Tue, Jul 26, 2016  2:38:49 PM
