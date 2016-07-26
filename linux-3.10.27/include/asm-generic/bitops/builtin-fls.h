#ifndef _ASM_GENERIC_BITOPS_BUILTIN_FLS_H_
#define _ASM_GENERIC_BITOPS_BUILTIN_FLS_H_

/**
 * fls - find last (most-significant) bit set
 * @x: the word to search
 *
 * This is defined the same way as ffs.
 * Note fls(0) = 0, fls(1) = 1, fls(0x80000000) = 32.
 */
static __always_inline int fls(int x)
{
	return x ? sizeof(x) * 8 - __builtin_clz(x) : 0;
}

#endif
Tue Jul 19 12:52:32 PDT 2016
Fri Jul 22 16:12:59 PDT 2016
Sun, Jul 24, 2016  5:38:05 PM
Tue, Jul 26, 2016 12:31:50 AM
