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
Tue Jul 19 12:49:17 PDT 2016
Fri Jul 22 16:06:45 PDT 2016
Sun, Jul 24, 2016  4:51:33 PM
Mon, Jul 25, 2016 11:40:30 PM
