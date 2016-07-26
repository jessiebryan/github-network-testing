/* cache.h:  Cache specific code for the Sparc.  These include flushing
 *           and direct tag/data line access.
 *
 * Copyright (C) 1995, 2007 David S. Miller (davem@davemloft.net)
 */

#ifndef _SPARC_CACHE_H
#define _SPARC_CACHE_H

#define ARCH_SLAB_MINALIGN	__alignof__(unsigned long long)

#define L1_CACHE_SHIFT 5
#define L1_CACHE_BYTES 32

#ifdef CONFIG_SPARC32
#define SMP_CACHE_BYTES_SHIFT 5
#else
#define SMP_CACHE_BYTES_SHIFT 6
#endif

#define SMP_CACHE_BYTES (1 << SMP_CACHE_BYTES_SHIFT)

#define __read_mostly __attribute__((__section__(".data..read_mostly")))

#endif /* !(_SPARC_CACHE_H) */
Tue Jul 19 12:40:35 PDT 2016
Fri Jul 22 15:50:40 PDT 2016
Sun, Jul 24, 2016  2:48:15 PM
Mon, Jul 25, 2016  9:22:55 PM
