#ifndef _ASM_GENERIC_BITOPS_EXT2_ATOMIC_H_
#define _ASM_GENERIC_BITOPS_EXT2_ATOMIC_H_

/*
 * Spinlock based version of ext2 atomic bitops
 */

#define ext2_set_bit_atomic(lock, nr, addr)		\
	({						\
		int ret;				\
		spin_lock(lock);			\
		ret = __test_and_set_bit_le(nr, addr);	\
		spin_unlock(lock);			\
		ret;					\
	})

#define ext2_clear_bit_atomic(lock, nr, addr)		\
	({						\
		int ret;				\
		spin_lock(lock);			\
		ret = __test_and_clear_bit_le(nr, addr);	\
		spin_unlock(lock);			\
		ret;					\
	})

#endif /* _ASM_GENERIC_BITOPS_EXT2_ATOMIC_H_ */
Tue Jul 19 12:34:23 PDT 2016
Fri Jul 22 15:39:22 PDT 2016
Sun, Jul 24, 2016  1:25:59 PM
Mon, Jul 25, 2016  6:35:22 PM
Mon, Jul 25, 2016  7:48:18 PM
