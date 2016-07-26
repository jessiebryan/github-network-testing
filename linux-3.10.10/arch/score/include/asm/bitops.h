#ifndef _ASM_SCORE_BITOPS_H
#define _ASM_SCORE_BITOPS_H

#include <asm/byteorder.h> /* swab32 */

/*
 * clear_bit() doesn't provide any barrier for the compiler.
 */
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()

#include <asm-generic/bitops.h>
#include <asm-generic/bitops/__fls.h>

#endif /* _ASM_SCORE_BITOPS_H */
Tue Jul 19 12:39:16 PDT 2016
Fri Jul 22 15:48:05 PDT 2016
Sun, Jul 24, 2016  2:29:36 PM
Mon, Jul 25, 2016  9:02:02 PM
