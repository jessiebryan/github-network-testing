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
Tue Jul 19 12:36:10 PDT 2016
Fri Jul 22 15:42:09 PDT 2016
Sun, Jul 24, 2016  1:46:17 PM
Mon, Jul 25, 2016  8:12:17 PM
Tue, Jul 26, 2016  2:46:10 PM
