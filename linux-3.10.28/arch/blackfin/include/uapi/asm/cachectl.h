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
Tue Jul 19 12:52:47 PDT 2016
Fri Jul 22 16:13:29 PDT 2016
Sun, Jul 24, 2016  5:41:44 PM
Tue, Jul 26, 2016 12:35:51 AM
