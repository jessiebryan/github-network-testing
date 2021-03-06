#ifndef _ASM_SCORE_BITOPS_H
#define _ASM_SCORE_BITOPS_H

#include <asm/byteorder.h> /* swab32 */
#include <asm/system.h> /* save_flags */

/*
 * clear_bit() doesn't provide any barrier for the compiler.
 */
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()

#include <asm-generic/bitops.h>
#include <asm-generic/bitops/__fls.h>

#endif /* _ASM_SCORE_BITOPS_H */
Tue Jul 19 12:34:59 PDT 2016
Fri Jul 22 15:40:04 PDT 2016
Sun, Jul 24, 2016  1:30:57 PM
Mon, Jul 25, 2016  7:54:08 PM
Tue, Jul 26, 2016  2:29:12 PM
