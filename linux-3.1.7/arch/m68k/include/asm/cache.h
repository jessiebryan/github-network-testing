/*
 * include/asm-m68k/cache.h
 */
#ifndef __ARCH_M68K_CACHE_H
#define __ARCH_M68K_CACHE_H

/* bytes per L1 cache line */
#define        L1_CACHE_SHIFT  4
#define        L1_CACHE_BYTES  (1<< L1_CACHE_SHIFT)

#define ARCH_DMA_MINALIGN	L1_CACHE_BYTES

#endif
Tue Jul 19 12:36:44 PDT 2016
Fri Jul 22 15:43:17 PDT 2016
Sun, Jul 24, 2016  1:54:34 PM
Mon, Jul 25, 2016  8:22:01 PM
