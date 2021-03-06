/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2008 by Ralf Baechle (ralf@linux-mips.org)
 */
#ifndef __ASM_R4K_TYPES_H
#define __ASM_R4K_TYPES_H

#include <linux/compiler.h>

#ifdef CONFIG_SYNC_R4K

extern void synchronise_count_master(void);
extern void synchronise_count_slave(void);

#else

static inline void synchronise_count_master(void)
{
}

static inline void synchronise_count_slave(void)
{
}

#endif

#endif /* __ASM_R4K_TYPES_H */
Tue Jul 19 12:33:21 PDT 2016
Fri Jul 22 15:37:46 PDT 2016
Sun, Jul 24, 2016  1:13:46 PM
Mon, Jul 25, 2016  6:20:44 PM
Mon, Jul 25, 2016  7:33:59 PM
Tue, Jul 26, 2016  2:10:05 PM
