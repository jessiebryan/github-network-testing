#ifndef _ASM_GENERIC_BITOPS_LOCK_H_
#define _ASM_GENERIC_BITOPS_LOCK_H_

/**
 * test_and_set_bit_lock - Set a bit and return its old value, for lock
 * @nr: Bit to set
 * @addr: Address to count from
 *
 * This operation is atomic and provides acquire barrier semantics.
 * It can be used to implement bit locks.
 */
#define test_and_set_bit_lock(nr, addr)	test_and_set_bit(nr, addr)

/**
 * clear_bit_unlock - Clear a bit in memory, for unlock
 * @nr: the bit to set
 * @addr: the address to start counting from
 *
 * This operation is atomic and provides release barrier semantics.
 */
#define clear_bit_unlock(nr, addr)	\
do {					\
	smp_mb__before_clear_bit();	\
	clear_bit(nr, addr);		\
} while (0)

/**
 * __clear_bit_unlock - Clear a bit in memory, for unlock
 * @nr: the bit to set
 * @addr: the address to start counting from
 *
 * This operation is like clear_bit_unlock, however it is not atomic.
 * It does provide release barrier semantics so it can be used to unlock
 * a bit lock, however it would only be used if no other CPU can modify
 * any bits in the memory until the lock is released (a good example is
 * if the bit lock itself protects access to the other bits in the word).
 */
#define __clear_bit_unlock(nr, addr)	\
do {					\
	smp_mb();			\
	__clear_bit(nr, addr);		\
} while (0)

#endif /* _ASM_GENERIC_BITOPS_LOCK_H_ */

Tue Jul 19 12:46:44 PDT 2016
Fri Jul 22 16:01:58 PDT 2016
Sun, Jul 24, 2016  4:14:39 PM
Mon, Jul 25, 2016 10:59:26 PM
