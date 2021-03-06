/* MN103E010 Cache specification
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#ifndef _ASM_PROC_CACHE_H
#define _ASM_PROC_CACHE_H

/* L1 cache */

#define L1_CACHE_NWAYS		4	/* number of ways in caches */
#define L1_CACHE_NENTRIES	256	/* number of entries in each way */
#define L1_CACHE_BYTES		16	/* bytes per entry */
#define L1_CACHE_SHIFT		4	/* shift for bytes per entry */
#define L1_CACHE_WAYDISP	0x1000	/* displacement of one way from the next */

#define L1_CACHE_TAG_VALID	0x00000001	/* cache tag valid bit */
#define L1_CACHE_TAG_DIRTY	0x00000008	/* data cache tag dirty bit */
#define L1_CACHE_TAG_ENTRY	0x00000ff0	/* cache tag entry address mask */
#define L1_CACHE_TAG_ADDRESS	0xfffff000	/* cache tag line address mask */
#define L1_CACHE_TAG_MASK	+(L1_CACHE_TAG_ADDRESS|L1_CACHE_TAG_ENTRY)

/*
 * specification of the interval between interrupt checking intervals whilst
 * managing the cache with the interrupts disabled
 */
#define MN10300_DCACHE_INV_RANGE_INTR_LOG2_INTERVAL	4

/*
 * The size of range at which it becomes more economical to just flush the
 * whole cache rather than trying to flush the specified range.
 */
#define MN10300_DCACHE_FLUSH_BORDER	\
	+(L1_CACHE_NWAYS * L1_CACHE_NENTRIES * L1_CACHE_BYTES)
#define MN10300_DCACHE_FLUSH_INV_BORDER	\
	+(L1_CACHE_NWAYS * L1_CACHE_NENTRIES * L1_CACHE_BYTES)

#endif /* _ASM_PROC_CACHE_H */
Tue Jul 19 12:53:32 PDT 2016
Fri Jul 22 16:14:57 PDT 2016
Sun, Jul 24, 2016  5:52:32 PM
Tue, Jul 26, 2016 12:47:48 AM
