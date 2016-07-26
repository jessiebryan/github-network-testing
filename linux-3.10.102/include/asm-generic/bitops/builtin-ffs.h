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
Tue Jul 19 12:41:27 PDT 2016
Fri Jul 22 15:52:28 PDT 2016
Sun, Jul 24, 2016  3:00:52 PM
Mon, Jul 25, 2016  9:37:09 PM
