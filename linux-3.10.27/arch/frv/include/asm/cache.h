/* cache.h: FRV cache definitions
 *
 * Copyright (C) 2004 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef __ASM_CACHE_H
#define __ASM_CACHE_H


/* bytes per L1 cache line */
#define L1_CACHE_SHIFT		(CONFIG_FRV_L1_CACHE_SHIFT)
#define L1_CACHE_BYTES		(1 << L1_CACHE_SHIFT)

#define __cacheline_aligned	__attribute__((aligned(L1_CACHE_BYTES)))
#define ____cacheline_aligned	__attribute__((aligned(L1_CACHE_BYTES)))

#endif
Tue Jul 19 12:52:09 PDT 2016
Fri Jul 22 16:12:16 PDT 2016
Sun, Jul 24, 2016  5:32:44 PM
Tue, Jul 26, 2016 12:25:56 AM
