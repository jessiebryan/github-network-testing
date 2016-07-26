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

Tue Jul 19 12:33:48 PDT 2016
Fri Jul 22 15:38:34 PDT 2016
Sun, Jul 24, 2016  1:19:52 PM
Mon, Jul 25, 2016  6:28:02 PM
Mon, Jul 25, 2016  7:41:08 PM
Tue, Jul 26, 2016  2:16:53 PM
