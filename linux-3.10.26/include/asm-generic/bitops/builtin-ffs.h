#ifndef _ASM_GENERIC_BITOPS_BUILTIN_FFS_H_
#define _ASM_GENERIC_BITOPS_BUILTIN_FFS_H_

/**
 * ffs - find first bit set
 * @x: the word to search
 *
 * This is defined the same way as
 * the libc and compiler builtin ffs routines, therefore
 * differs in spirit from the above ffz (man ffs).
 */
static __always_inline int ffs(int x)
{
	return __builtin_ffs(x);
}

#endif
Tue Jul 19 12:51:53 PDT 2016
Fri Jul 22 16:11:44 PDT 2016
Sun, Jul 24, 2016  5:28:46 PM
Tue, Jul 26, 2016 12:21:33 AM
