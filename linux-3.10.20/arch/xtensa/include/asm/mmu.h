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
#include <asm-generic/mmu.h>
#else

/* Default "unsigned long" context */
typedef unsigned long mm_context_t;

#endif /* CONFIG_MMU */
#endif	/* _XTENSA_MMU_H */
Tue Jul 19 12:47:49 PDT 2016
Fri Jul 22 16:03:59 PDT 2016
Sun, Jul 24, 2016  4:30:21 PM
Mon, Jul 25, 2016 11:16:52 PM
