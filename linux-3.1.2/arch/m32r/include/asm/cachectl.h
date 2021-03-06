/*
 * cachectl.h -- defines for M32R cache control system calls
 *
 * Copyright (C) 2003 by Kazuhiro Inaoka
 */
#ifndef	__ASM_M32R_CACHECTL
#define	__ASM_M32R_CACHECTL

/*
 * Options for cacheflush system call
 *
 * cacheflush() is currently fluch_cache_all().
 */
#define	ICACHE	(1<<0)		/* flush instruction cache        */
#define	DCACHE	(1<<1)		/* writeback and flush data cache */
#define	BCACHE	(ICACHE|DCACHE)	/* flush both caches              */

/*
 * Caching modes for the cachectl(2) call
 *
 * cachectl(2) is currently not supported and returns ENOSYS.
 */
#define CACHEABLE	0	/* make pages cacheable */
#define UNCACHEABLE	1	/* make pages uncacheable */

#endif	/* __ASM_M32R_CACHECTL */
Tue Jul 19 12:33:56 PDT 2016
Fri Jul 22 15:38:47 PDT 2016
Sun, Jul 24, 2016  1:21:29 PM
Mon, Jul 25, 2016  6:29:58 PM
Mon, Jul 25, 2016  7:43:02 PM
Tue, Jul 26, 2016  2:18:44 PM
