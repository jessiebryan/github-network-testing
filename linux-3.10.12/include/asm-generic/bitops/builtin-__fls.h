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
Tue Jul 19 12:42:56 PDT 2016
Fri Jul 22 15:54:51 PDT 2016
Sun, Jul 24, 2016  3:19:18 PM
Mon, Jul 25, 2016  9:57:53 PM
