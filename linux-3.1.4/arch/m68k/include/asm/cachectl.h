#ifndef _M68K_CACHECTL_H
#define _M68K_CACHECTL_H

/* Definitions for the cacheflush system call.  */

#define FLUSH_SCOPE_LINE    1	/* Flush a cache line */
#define FLUSH_SCOPE_PAGE    2	/* Flush a page */
#define FLUSH_SCOPE_ALL     3	/* Flush the whole cache -- superuser only */

#define FLUSH_CACHE_DATA    1	/* Writeback and flush data cache */
#define FLUSH_CACHE_INSN    2	/* Flush instruction cache */
#define FLUSH_CACHE_BOTH    3	/* Flush both caches */

#endif /* _M68K_CACHECTL_H */
Tue Jul 19 12:35:36 PDT 2016
Fri Jul 22 15:41:03 PDT 2016
Sun, Jul 24, 2016  1:38:04 PM
Mon, Jul 25, 2016  8:02:34 PM
Tue, Jul 26, 2016  2:37:04 PM
