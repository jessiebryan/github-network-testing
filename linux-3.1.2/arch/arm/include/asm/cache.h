/*
 *  arch/arm/include/asm/cache.h
 */
#ifndef __ASMARM_CACHE_H
#define __ASMARM_CACHE_H

#define L1_CACHE_SHIFT		CONFIG_ARM_L1_CACHE_SHIFT
#define L1_CACHE_BYTES		(1 << L1_CACHE_SHIFT)

/*
 * Memory returned by kmalloc() may be used for DMA, so we must make
 * sure that all such allocations are cache aligned. Otherwise,
 * unrelated code may cause parts of the buffer to be read into the
 * cache before the transfer is done, causing old data to be seen by
 * the CPU.
 */
#define ARCH_DMA_MINALIGN	L1_CACHE_BYTES

/*
 * With EABI on ARMv5 and above we must have 64-bit aligned slab pointers.
 */
#if defined(CONFIG_AEABI) && (__LINUX_ARM_ARCH__ >= 5)
#define ARCH_SLAB_MINALIGN 8
#endif

#define __read_mostly __attribute__((__section__(".data..read_mostly")))

#endif
Tue Jul 19 12:33:48 PDT 2016
Fri Jul 22 15:38:34 PDT 2016
Sun, Jul 24, 2016  1:19:45 PM
Mon, Jul 25, 2016  6:27:54 PM
Mon, Jul 25, 2016  7:41:01 PM
Tue, Jul 26, 2016  2:16:46 PM
