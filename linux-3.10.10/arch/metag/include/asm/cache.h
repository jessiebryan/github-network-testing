#ifndef __ASM_METAG_CACHE_H
#define __ASM_METAG_CACHE_H

/* L1 cache line size (64 bytes) */
#define L1_CACHE_SHIFT		6
#define L1_CACHE_BYTES		(1 << L1_CACHE_SHIFT)

/* Meta requires large data items to be 8 byte aligned. */
#define ARCH_SLAB_MINALIGN	8

/*
 * With an L2 cache, we may invalidate dirty lines, so we need to ensure DMA
 * buffers have cache line alignment.
 */
#ifdef CONFIG_METAG_L2C
#define ARCH_DMA_MINALIGN	L1_CACHE_BYTES
#else
#define ARCH_DMA_MINALIGN	8
#endif

#define __read_mostly __attribute__((__section__(".data..read_mostly")))

#endif
Tue Jul 19 12:39:12 PDT 2016
Fri Jul 22 15:47:55 PDT 2016
Sun, Jul 24, 2016  2:28:28 PM
Mon, Jul 25, 2016  9:00:47 PM
