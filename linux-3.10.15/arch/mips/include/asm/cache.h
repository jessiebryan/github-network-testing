/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1997, 98, 99, 2000, 2003 Ralf Baechle
 * Copyright (C) 1999 Silicon Graphics, Inc.
 */
#ifndef _ASM_CACHE_H
#define _ASM_CACHE_H

#include <kmalloc.h>

#define L1_CACHE_SHIFT		CONFIG_MIPS_L1_CACHE_SHIFT
#define L1_CACHE_BYTES		(1 << L1_CACHE_SHIFT)

#define SMP_CACHE_SHIFT		L1_CACHE_SHIFT
#define SMP_CACHE_BYTES		L1_CACHE_BYTES

#define __read_mostly __attribute__((__section__(".data..read_mostly")))

#endif /* _ASM_CACHE_H */
Tue Jul 19 12:44:32 PDT 2016
Fri Jul 22 15:57:49 PDT 2016
Sun, Jul 24, 2016  3:42:21 PM
Mon, Jul 25, 2016 10:23:29 PM
