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
Tue Jul 19 12:53:11 PDT 2016
Fri Jul 22 16:14:16 PDT 2016
Sun, Jul 24, 2016  5:47:25 PM
Tue, Jul 26, 2016 12:42:06 AM
