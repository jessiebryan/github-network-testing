#ifndef _H8300_CACHECTL_H
#define _H8300_CACHECTL_H

/* Definitions for the cacheflush system call.  */

#define FLUSH_SCOPE_LINE    0	/* Flush a cache line */
#define FLUSH_SCOPE_PAGE    0	/* Flush a page */
#define FLUSH_SCOPE_ALL     0	/* Flush the whole cache -- superuser only */

#define FLUSH_CACHE_DATA    0	/* Writeback and flush data cache */
#define FLUSH_CACHE_INSN    0	/* Flush instruction cache */
#define FLUSH_CACHE_BOTH    0	/* Flush both caches */

#endif /* _H8300_CACHECTL_H */
Tue Jul 19 12:47:01 PDT 2016
Fri Jul 22 16:02:29 PDT 2016
Sun, Jul 24, 2016  4:18:37 PM
Mon, Jul 25, 2016 11:03:51 PM
