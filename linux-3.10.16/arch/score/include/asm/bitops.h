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
Tue Jul 19 12:45:15 PDT 2016
Fri Jul 22 15:59:07 PDT 2016
Sun, Jul 24, 2016  3:52:33 PM
Mon, Jul 25, 2016 10:34:52 PM
