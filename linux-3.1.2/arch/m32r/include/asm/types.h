#ifndef _ASM_M32R_TYPES_H
#define _ASM_M32R_TYPES_H

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

#endif /* _ASM_M32R_TYPES_H */
Tue Jul 19 12:33:56 PDT 2016
Fri Jul 22 15:38:48 PDT 2016
Sun, Jul 24, 2016  1:21:32 PM
Mon, Jul 25, 2016  6:30:02 PM
Mon, Jul 25, 2016  7:43:06 PM
Tue, Jul 26, 2016  2:18:48 PM
