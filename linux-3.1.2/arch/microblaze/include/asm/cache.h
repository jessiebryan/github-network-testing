/*
 * Cache operations
 *
 * Copyright (C) 2007-2009 Michal Simek <monstr@monstr.eu>
 * Copyright (C) 2007-2009 PetaLogix
 * Copyright (C) 2003 John Williams <jwilliams@itee.uq.edu.au>
 *
 * This file is subject to the terms and conditions of the GNU General
 * Public License. See the file COPYING in the main directory of this
 * archive for more details.
 */

#ifndef _ASM_MICROBLAZE_CACHE_H
#define _ASM_MICROBLAZE_CACHE_H

#include <asm/registers.h>

#define L1_CACHE_SHIFT 5
/* word-granular cache in microblaze */
#define L1_CACHE_BYTES	(1 << L1_CACHE_SHIFT)

#define SMP_CACHE_BYTES	L1_CACHE_BYTES

#endif /* _ASM_MICROBLAZE_CACHE_H */
Tue Jul 19 12:33:56 PDT 2016
Fri Jul 22 15:38:49 PDT 2016
Sun, Jul 24, 2016  1:21:41 PM
Mon, Jul 25, 2016  6:30:12 PM
Mon, Jul 25, 2016  7:43:17 PM
