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
Tue Jul 19 12:35:55 PDT 2016
Fri Jul 22 15:41:38 PDT 2016
Sun, Jul 24, 2016  1:42:29 PM
Mon, Jul 25, 2016  8:07:45 PM
Tue, Jul 26, 2016  2:41:56 PM
