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
Tue Jul 19 12:34:01 PDT 2016
Fri Jul 22 15:38:57 PDT 2016
Sun, Jul 24, 2016  1:22:45 PM
Mon, Jul 25, 2016  6:31:29 PM
Mon, Jul 25, 2016  7:44:32 PM
Tue, Jul 26, 2016  2:20:09 PM
