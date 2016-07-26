#ifndef __NOUVEAU_MATH_H__
#define __NOUVEAU_MATH_H__

static inline int
log2i(u64 base)
{
	u64 temp = base >> 1;
	int log2;

	for (log2 = 0; temp; log2++, temp >>= 1) {
	}

	return (base & (base - 1)) ? log2 + 1: log2;
}

#endif
Tue Jul 19 12:39:59 PDT 2016
Fri Jul 22 15:49:32 PDT 2016
Sun, Jul 24, 2016  2:39:56 PM
Mon, Jul 25, 2016  9:13:32 PM
