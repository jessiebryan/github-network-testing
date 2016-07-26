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
Tue Jul 19 12:52:21 PDT 2016
Fri Jul 22 16:12:39 PDT 2016
Sun, Jul 24, 2016  5:35:33 PM
Tue, Jul 26, 2016 12:29:03 AM
