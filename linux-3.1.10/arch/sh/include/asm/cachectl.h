#ifndef _SH_CACHECTL_H
#define _SH_CACHECTL_H

/* Definitions for the cacheflush system call.  */

#define CACHEFLUSH_D_INVAL	0x1	/* invalidate (without write back) */
#define CACHEFLUSH_D_WB		0x2	/* write back (without invalidate) */
#define CACHEFLUSH_D_PURGE	0x3	/* writeback and invalidate */

#define CACHEFLUSH_I		0x4

/*
 * Options for cacheflush system call
 */
#define ICACHE	CACHEFLUSH_I		/* flush instruction cache */
#define DCACHE	CACHEFLUSH_D_PURGE	/* writeback and flush data cache */
#define BCACHE	(ICACHE|DCACHE)		/* flush both caches */

#endif /* _SH_CACHECTL_H */
Tue Jul 19 12:33:24 PDT 2016
Fri Jul 22 15:37:52 PDT 2016
Sun, Jul 24, 2016  1:14:30 PM
Mon, Jul 25, 2016  6:21:37 PM
Mon, Jul 25, 2016  7:34:51 PM
Tue, Jul 26, 2016  2:10:53 PM
