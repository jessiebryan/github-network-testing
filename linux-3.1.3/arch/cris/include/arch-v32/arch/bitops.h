#ifndef _ASM_CRIS_ARCH_BITOPS_H
#define _ASM_CRIS_ARCH_BITOPS_H

/*
 * Helper functions for the core of the ff[sz] functions. They compute the
 * number of leading zeroes of a bits-in-byte, byte-in-word and
 * word-in-dword-swapped number. They differ in that the first function also
 * inverts all bits in the input.
 */

static inline unsigned long
cris_swapnwbrlz(unsigned long w)
{
	unsigned long res;

	__asm__ __volatile__ ("swapnwbr %0\n\t"
			      "lz %0,%0"
			      : "=r" (res) : "0" (w));

	return res;
}

static inline unsigned long
cris_swapwbrlz(unsigned long w)
{
	unsigned long res;

	__asm__ __volatile__ ("swapwbr %0\n\t"
			      "lz %0,%0"
			      : "=r" (res) : "0" (w));

	return res;
}

/*
 * Find First Zero in word. Undefined if no zero exist, so the caller should
 * check against ~0 first.
 */
static inline unsigned long
ffz(unsigned long w)
{
	return cris_swapnwbrlz(w);
}

/*
 * Find First Set bit in word. Undefined if no 1 exist, so the caller
 * should check against 0 first.
 */
static inline unsigned long
__ffs(unsigned long w)
{
	return cris_swapnwbrlz(~w);
}

/*
 * Find First Bit that is set.
 */
static inline unsigned long
kernel_ffs(unsigned long w)
{
	return w ? cris_swapwbrlz (w) + 1 : 0;
}

#endif /* _ASM_CRIS_ARCH_BITOPS_H */
Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:50 PDT 2016
Sun, Jul 24, 2016  1:29:17 PM
Mon, Jul 25, 2016  6:39:19 PM
Mon, Jul 25, 2016  7:52:11 PM
Tue, Jul 26, 2016  2:27:22 PM
