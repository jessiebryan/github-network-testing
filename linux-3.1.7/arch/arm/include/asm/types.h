#ifndef __ASM_ARM_TYPES_H
#define __ASM_ARM_TYPES_H

#include <asm-generic/int-ll64.h>

#ifndef __ASSEMBLY__

typedef unsigned short umode_t;

#endif /* __ASSEMBLY__ */

/*
 * These aren't exported outside the kernel to avoid name space clashes
 */
#ifdef __KERNEL__

#define BITS_PER_LONG 32

#endif /* __KERNEL__ */

#endif

Tue Jul 19 12:36:37 PDT 2016
Fri Jul 22 15:43:03 PDT 2016
Sun, Jul 24, 2016  1:52:52 PM
Mon, Jul 25, 2016  8:20:01 PM
