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
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:46 PDT 2016
Sun, Jul 24, 2016  1:36:11 PM
Mon, Jul 25, 2016  8:00:20 PM
Tue, Jul 26, 2016  2:34:58 PM
