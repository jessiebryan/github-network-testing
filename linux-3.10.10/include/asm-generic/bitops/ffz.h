#ifndef _ASM_GENERIC_BITOPS_FFZ_H_
#define _ASM_GENERIC_BITOPS_FFZ_H_

/*
 * ffz - find first zero in word.
 * @word: The word to search
 *
 * Undefined if no zero exists, so code should check against ~0UL first.
 */
#define ffz(x)  __ffs(~(x))

#endif /* _ASM_GENERIC_BITOPS_FFZ_H_ */
Tue Jul 19 12:39:31 PDT 2016
Fri Jul 22 15:48:37 PDT 2016
Sun, Jul 24, 2016  2:33:15 PM
Mon, Jul 25, 2016  9:06:05 PM
