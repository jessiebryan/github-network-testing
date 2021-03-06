/*
 * include/asm-alpha/cache.h
 */
#ifndef __ARCH_ALPHA_CACHE_H
#define __ARCH_ALPHA_CACHE_H


/* Bytes per L1 (data) cache line. */
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_EV6)
# define L1_CACHE_BYTES     64
# define L1_CACHE_SHIFT     6
#else
/* Both EV4 and EV5 are write-through, read-allocate,
   direct-mapped, physical.
*/
# define L1_CACHE_BYTES     32
# define L1_CACHE_SHIFT     5
#endif

#define SMP_CACHE_BYTES    L1_CACHE_BYTES

#endif
Tue Jul 19 12:38:25 PDT 2016
Fri Jul 22 15:46:22 PDT 2016
Sun, Jul 24, 2016  2:17:24 PM
Mon, Jul 25, 2016  8:48:25 PM
