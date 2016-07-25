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
Tue Jul 19 12:39:10 PDT 2016
Fri Jul 22 15:47:52 PDT 2016
Sun, Jul 24, 2016  2:28:01 PM
