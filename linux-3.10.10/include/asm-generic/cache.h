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
Tue Jul 19 12:39:31 PDT 2016
Fri Jul 22 15:48:37 PDT 2016
Sun, Jul 24, 2016  2:33:15 PM
Mon, Jul 25, 2016  9:06:06 PM
