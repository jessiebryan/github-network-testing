#ifndef _ASM_GENERIC_BITOPS_FFS_H_
#define _ASM_GENERIC_BITOPS_FFS_H_

/**
 * ffs - find first bit set
 * @x: the word to search
 *
 * This is defined the same way as
 * the libc and compiler builtin ffs routines, therefore
 * differs in spirit from the above ffz (man ffs).
 */
static inline int ffs(int x)
{
	int r = 1;

	if (!x)
		return 0;
	if (!(x & 0xffff)) {
		x >>= 16;
		r += 16;
	}
	if (!(x & 0xff)) {
		x >>= 8;
		r += 8;
	}
	if (!(x & 0xf)) {
		x >>= 4;
		r += 4;
	}
	if (!(x & 3)) {
		x >>= 2;
		r += 2;
	}
	if (!(x & 1)) {
		x >>= 1;
		r += 1;
	}
	return r;
}

#endif /* _ASM_GENERIC_BITOPS_FFS_H_ */
Tue Jul 19 12:49:17 PDT 2016
Fri Jul 22 16:06:46 PDT 2016
Sun, Jul 24, 2016  4:51:33 PM
Mon, Jul 25, 2016 11:40:30 PM
