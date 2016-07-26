#ifndef __ASM_GENERIC_CACHE_H
#define __ASM_GENERIC_CACHE_H
/*
 * 32 bytes appears to be the most common cache line size,
 * so make that the default here. Architectures with larger
 * cache lines need to provide their own cache.h.
 */

#define L1_CACHE_SHIFT		5
#define L1_CACHE_BYTES		(1 << L1_CACHE_SHIFT)

#endif /* __ASM_GENERIC_CACHE_H */
Tue Jul 19 12:46:05 PDT 2016
Fri Jul 22 16:00:45 PDT 2016
Sun, Jul 24, 2016  4:05:26 PM
Mon, Jul 25, 2016 10:49:11 PM
