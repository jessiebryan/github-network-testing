/*
 * Copyright (C) 2008-2009 Michal Simek <monstr@monstr.eu>
 * Copyright (C) 2008-2009 PetaLogix
 * Copyright (C) 2006 Atmark Techno, Inc.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 */

#ifndef _ASM_MICROBLAZE_SECTIONS_H
#define _ASM_MICROBLAZE_SECTIONS_H

#include <asm-generic/sections.h>

# ifndef __ASSEMBLY__
extern char _ssbss[], _esbss[];
extern unsigned long __ivt_start[], __ivt_end[];
extern char _etext[], _stext[];

extern u32 _fdt_start[], _fdt_end[];

# endif /* !__ASSEMBLY__ */
#endif /* _ASM_MICROBLAZE_SECTIONS_H */
Tue Jul 19 12:41:50 PDT 2016
Fri Jul 22 15:53:04 PDT 2016
Sun, Jul 24, 2016  3:05:24 PM
Mon, Jul 25, 2016  9:42:16 PM
