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
Tue Jul 19 12:45:29 PDT 2016
Fri Jul 22 15:59:35 PDT 2016
Sun, Jul 24, 2016  3:56:12 PM
Mon, Jul 25, 2016 10:38:55 PM
