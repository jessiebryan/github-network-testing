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
Tue Jul 19 12:50:24 PDT 2016
