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
Tue Jul 19 12:48:00 PDT 2016
Fri Jul 22 16:04:21 PDT 2016
Sun, Jul 24, 2016  4:33:06 PM
Mon, Jul 25, 2016 11:19:55 PM
