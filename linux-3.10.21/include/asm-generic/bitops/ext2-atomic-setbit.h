#ifndef _ASM_GENERIC_BITOPS_EXT2_ATOMIC_SETBIT_H_
#define _ASM_GENERIC_BITOPS_EXT2_ATOMIC_SETBIT_H_

/*
 * Atomic bitops based version of ext2 atomic bitops
 */

#define ext2_set_bit_atomic(l, nr, addr)	test_and_set_bit_le(nr, addr)
#define ext2_clear_bit_atomic(l, nr, addr)	test_and_clear_bit_le(nr, addr)

#endif /* _ASM_GENERIC_BITOPS_EXT2_ATOMIC_SETBIT_H_ */
Tue Jul 19 12:48:38 PDT 2016
Fri Jul 22 16:05:33 PDT 2016
Sun, Jul 24, 2016  4:42:21 PM
Mon, Jul 25, 2016 11:30:11 PM
