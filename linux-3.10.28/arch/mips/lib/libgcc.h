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

#endif /* __ASM_LIBGCC_H */
Tue Jul 19 12:52:53 PDT 2016
Fri Jul 22 16:13:41 PDT 2016
Sun, Jul 24, 2016  5:43:07 PM
Tue, Jul 26, 2016 12:37:24 AM
