#ifndef _ASM_GENERIC_BITOPS_BUILTIN___FLS_H_
#define _ASM_GENERIC_BITOPS_BUILTIN___FLS_H_

/**
 * __fls - find last (most-significant) set bit in a long word
 * @word: the word to search
 *
 * Undefined if no set bit exists, so code should check against 0 first.
 */
static __always_inline unsigned long __fls(unsigned long word)
{
	return (sizeof(word) * 8) - 1 - __builtin_clzl(word);
}

#endif
Tue Jul 19 12:45:29 PDT 2016
Fri Jul 22 15:59:35 PDT 2016
Sun, Jul 24, 2016  3:56:12 PM
Mon, Jul 25, 2016 10:38:54 PM
