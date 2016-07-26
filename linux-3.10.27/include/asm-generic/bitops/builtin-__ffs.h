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
Tue Jul 19 12:52:32 PDT 2016
Fri Jul 22 16:12:59 PDT 2016
Sun, Jul 24, 2016  5:38:05 PM
Tue, Jul 26, 2016 12:31:50 AM
