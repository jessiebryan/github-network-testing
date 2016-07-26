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
Tue Jul 19 12:46:44 PDT 2016
Fri Jul 22 16:01:58 PDT 2016
Sun, Jul 24, 2016  4:14:38 PM
Mon, Jul 25, 2016 10:59:25 PM
