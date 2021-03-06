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
Tue Jul 19 12:52:42 PDT 2016
Fri Jul 22 16:13:20 PDT 2016
Sun, Jul 24, 2016  5:40:40 PM
Tue, Jul 26, 2016 12:34:41 AM
