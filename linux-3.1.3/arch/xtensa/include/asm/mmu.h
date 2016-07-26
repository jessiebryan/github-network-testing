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
Tue Jul 19 12:35:10 PDT 2016
Fri Jul 22 15:40:11 PDT 2016
Sun, Jul 24, 2016  1:31:49 PM
Mon, Jul 25, 2016  7:55:10 PM
Tue, Jul 26, 2016  2:30:10 PM
