#ifndef __ASM_PARISC_BITSPERLONG_H
#define __ASM_PARISC_BITSPERLONG_H

/*
 * using CONFIG_* outside of __KERNEL__ is wrong,
 * __LP64__ was also removed from headers, so what
 * is the right approach on parisc?
 *	-arnd
 */
#if (defined(__KERNEL__) && defined(CONFIG_64BIT)) || defined (__LP64__)
#define __BITS_PER_LONG 64
#define SHIFT_PER_LONG 6
#else
#define __BITS_PER_LONG 32
#define SHIFT_PER_LONG 5
#endif

#include <asm-generic/bitsperlong.h>

#endif /* __ASM_PARISC_BITSPERLONG_H */
Tue Jul 19 12:43:56 PDT 2016
Fri Jul 22 15:56:41 PDT 2016
Sun, Jul 24, 2016  3:33:42 PM
Mon, Jul 25, 2016 10:13:54 PM
