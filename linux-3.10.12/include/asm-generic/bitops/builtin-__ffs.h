#ifndef _ASM_GENERIC_BITOPS_BUILTIN___FFS_H_
#define _ASM_GENERIC_BITOPS_BUILTIN___FFS_H_

/**
 * __ffs - find first bit in word.
 * @word: The word to search
 *
 * Undefined if no bit exists, so code should check against 0 first.
 */
static __always_inline unsigned long __ffs(unsigned long word)
{
	return __builtin_ctzl(word);
}

#endif
Tue Jul 19 12:42:56 PDT 2016
Fri Jul 22 15:54:51 PDT 2016
Sun, Jul 24, 2016  3:19:18 PM
Mon, Jul 25, 2016  9:57:53 PM
