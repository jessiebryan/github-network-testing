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
Tue Jul 19 12:48:00 PDT 2016
Fri Jul 22 16:04:21 PDT 2016
Sun, Jul 24, 2016  4:33:06 PM
Mon, Jul 25, 2016 11:19:55 PM
