#ifndef __ASM_LIBGCC_H
#define __ASM_LIBGCC_H

#include <asm/byteorder.h>

typedef int word_type __attribute__ ((mode (__word__)));

#ifdef __BIG_ENDIAN
struct DWstruct {
	int high, low;
};
#elif defined(__LITTLE_ENDIAN)
struct DWstruct {
	int low, high;
};
#else
#error I feel sick.
#endif

typedef union {
	struct DWstruct s;
	long long ll;
} DWunion;

extern long long __ashldi3(long long u, word_type b);
extern long long __ashrdi3(long long u, word_type b);
extern word_type __cmpdi2(long long a, long long b);
extern long long __lshrdi3(long long u, word_type b);
extern long long __muldi3(long long u, long long v);
extern word_type __ucmpdi2(unsigned long long a, unsigned long long b);

#endif /* __ASM_LIBGCC_H */
Tue Jul 19 12:52:12 PDT 2016
Fri Jul 22 16:12:22 PDT 2016
Sun, Jul 24, 2016  5:33:23 PM
Tue, Jul 26, 2016 12:26:39 AM
