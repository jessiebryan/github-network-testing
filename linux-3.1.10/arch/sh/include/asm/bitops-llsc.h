#ifndef __ASM_SH_BITOPS_LLSC_H
#define __ASM_SH_BITOPS_LLSC_H

static inline void set_bit(int nr, volatile void *addr)
{
	int	mask;
	volatile unsigned int *a = addr;
	unsigned long tmp;

	a += nr >> 5;
	mask = 1 << (nr & 0x1f);

	__asm__ __volatile__ (
		"1:						\n\t"
		"movli.l	@%1, %0	! set_bit		\n\t"
		"or		%2, %0				\n\t"
		"movco.l	%0, @%1				\n\t"
		"bf		1b				\n\t"
		: "=&z" (tmp)
		: "r" (a), "r" (mask)
		: "t", "memory"
	);
}

static inline void clear_bit(int nr, volatile void *addr)
{
	int	mask;
	volatile unsigned int *a = addr;
	unsigned long tmp;

	a += nr >> 5;
	mask = 1 << (nr & 0x1f);

	__asm__ __volatile__ (
		"1:						\n\t"
		"movli.l	@%1, %0	! clear_bit		\n\t"
		"and		%2, %0				\n\t"
		"movco.l	%0, @%1				\n\t"
		"bf		1b				\n\t"
		: "=&z" (tmp)
		: "r" (a), "r" (~mask)
		: "t", "memory"
	);
}

static inline void change_bit(int nr, volatile void *addr)
{
	int	mask;
	volatile unsigned int *a = addr;
	unsigned long tmp;

	a += nr >> 5;
	mask = 1 << (nr & 0x1f);

	__asm__ __volatile__ (
		"1:						\n\t"
		"movli.l	@%1, %0	! change_bit		\n\t"
		"xor		%2, %0				\n\t"
		"movco.l	%0, @%1				\n\t"
		"bf		1b				\n\t"
		: "=&z" (tmp)
		: "r" (a), "r" (mask)
		: "t", "memory"
	);
}

static inline int test_and_set_bit(int nr, volatile void *addr)
{
	int	mask, retval;
	volatile unsigned int *a = addr;
	unsigned long tmp;

	a += nr >> 5;
	mask = 1 << (nr & 0x1f);

	__asm__ __volatile__ (
		"1:						\n\t"
		"movli.l	@%2, %0	! test_and_set_bit	\n\t"
		"mov		%0, %1				\n\t"
		"or		%3, %0				\n\t"
		"movco.l	%0, @%2				\n\t"
		"bf		1b				\n\t"
		"and		%3, %1				\n\t"
		: "=&z" (tmp), "=&r" (retval)
		: "r" (a), "r" (mask)
		: "t", "memory"
	);

	return retval != 0;
}

static inline int test_and_clear_bit(int nr, volatile void *addr)
{
	int	mask, retval;
	volatile unsigned int *a = addr;
	unsigned long tmp;

	a += nr >> 5;
	mask = 1 << (nr & 0x1f);

	__asm__ __volatile__ (
		"1:						\n\t"
		"movli.l	@%2, %0	! test_and_clear_bit	\n\t"
		"mov		%0, %1				\n\t"
		"and		%4, %0				\n\t"
		"movco.l	%0, @%2				\n\t"
		"bf		1b				\n\t"
		"and		%3, %1				\n\t"
		"synco						\n\t"
		: "=&z" (tmp), "=&r" (retval)
		: "r" (a), "r" (mask), "r" (~mask)
		: "t", "memory"
	);

	return retval != 0;
}

static inline int test_and_change_bit(int nr, volatile void *addr)
{
	int	mask, retval;
	volatile unsigned int *a = addr;
	unsigned long tmp;

	a += nr >> 5;
	mask = 1 << (nr & 0x1f);

	__asm__ __volatile__ (
		"1:						\n\t"
		"movli.l	@%2, %0	! test_and_change_bit	\n\t"
		"mov		%0, %1				\n\t"
		"xor		%3, %0				\n\t"
		"movco.l	%0, @%2				\n\t"
		"bf		1b				\n\t"
		"and		%3, %1				\n\t"
		"synco						\n\t"
		: "=&z" (tmp), "=&r" (retval)
		: "r" (a), "r" (mask)
		: "t", "memory"
	);

	return retval != 0;
}

#include <asm-generic/bitops/non-atomic.h>

#endif /* __ASM_SH_BITOPS_LLSC_H */
Tue Jul 19 12:33:24 PDT 2016
Fri Jul 22 15:37:52 PDT 2016
Sun, Jul 24, 2016  1:14:30 PM
Mon, Jul 25, 2016  6:21:36 PM
Mon, Jul 25, 2016  7:34:50 PM
Tue, Jul 26, 2016  2:10:53 PM
