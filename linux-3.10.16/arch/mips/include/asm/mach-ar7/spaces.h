/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1994 - 1999, 2000, 03, 04 Ralf Baechle
 * Copyright (C) 2000, 2002  Maciej W. Rozycki
 * Copyright (C) 1990, 1999, 2000 Silicon Graphics, Inc.
 */
#ifndef _ASM_AR7_SPACES_H
#define _ASM_AR7_SPACES_H

/*
 * This handles the memory map.
 * We handle pages at KSEG0 for kernels with 32 bit address space.
 */
#define PAGE_OFFSET		0x94000000UL
#define PHYS_OFFSET		0x14000000UL

#include <asm/mach-generic/spaces.h>

#endif /* __ASM_AR7_SPACES_H */
Tue Jul 19 12:45:11 PDT 2016
Fri Jul 22 15:59:00 PDT 2016
Sun, Jul 24, 2016  3:51:37 PM
Mon, Jul 25, 2016 10:33:50 PM
