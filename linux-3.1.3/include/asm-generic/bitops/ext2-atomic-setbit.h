#ifndef _ASM_GENERIC_BITOPS_EXT2_ATOMIC_SETBIT_H_
#define _ASM_GENERIC_BITOPS_EXT2_ATOMIC_SETBIT_H_

/*
 * Atomic bitops based version of ext2 atomic bitops
 */

#define ext2_set_bit_atomic(l, nr, addr)	test_and_set_bit_le(nr, addr)
#define ext2_clear_bit_atomic(l, nr, addr)	test_and_clear_bit_le(nr, addr)

#endif /* _ASM_GENERIC_BITOPS_EXT2_ATOMIC_SETBIT_H_ */
Tue Jul 19 12:35:20 PDT 2016
Fri Jul 22 15:40:31 PDT 2016
Sun, Jul 24, 2016  1:34:14 PM
Mon, Jul 25, 2016  7:58:01 PM
Tue, Jul 26, 2016  2:32:49 PM
