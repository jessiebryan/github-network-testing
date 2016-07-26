/*
 * include/asm-xtensa/mmu.h
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001 - 2005 Tensilica Inc.
 */

#ifndef _XTENSA_MMU_H
#define _XTENSA_MMU_H

#ifndef CONFIG_MMU
#include <asm/nommu.h>
#else

/* Default "unsigned long" context */
typedef unsigned long mm_context_t;

#endif /* CONFIG_MMU */
#endif	/* _XTENSA_MMU_H */
Tue Jul 19 12:36:52 PDT 2016
Fri Jul 22 15:43:33 PDT 2016
Sun, Jul 24, 2016  1:56:33 PM
Mon, Jul 25, 2016  8:24:22 PM
