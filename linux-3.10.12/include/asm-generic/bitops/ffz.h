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
Tue Jul 19 12:42:56 PDT 2016
Fri Jul 22 15:54:51 PDT 2016
Sun, Jul 24, 2016  3:19:18 PM
Mon, Jul 25, 2016  9:57:53 PM
