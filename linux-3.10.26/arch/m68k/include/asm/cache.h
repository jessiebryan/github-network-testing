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
Tue Jul 19 12:51:32 PDT 2016
Fri Jul 22 16:11:02 PDT 2016
Sun, Jul 24, 2016  5:23:51 PM
Tue, Jul 26, 2016 12:16:08 AM
