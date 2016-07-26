/*
 * based on the mips/cachectl.h
 *
 * Copyright 2010 Analog Devices Inc.
 * Copyright (C) 1994, 1995, 1996 by Ralf Baechle
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef	_ASM_CACHECTL
#define	_ASM_CACHECTL

/*
 * Options for cacheflush system call
 */
#define	ICACHE	(1<<0)		/* flush instruction cache        */
#define	DCACHE	(1<<1)		/* writeback and flush data cache */
#define	BCACHE	(ICACHE|DCACHE)	/* flush both caches              */

#endif	/* _ASM_CACHECTL */
Tue Jul 19 12:33:17 PDT 2016
Fri Jul 22 15:37:37 PDT 2016
Sun, Jul 24, 2016  1:12:39 PM
Mon, Jul 25, 2016  6:19:23 PM
Mon, Jul 25, 2016  7:32:39 PM
Tue, Jul 26, 2016  2:08:51 PM
