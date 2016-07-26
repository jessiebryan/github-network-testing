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
Tue Jul 19 12:35:01 PDT 2016
Fri Jul 22 15:40:06 PDT 2016
Sun, Jul 24, 2016  1:31:10 PM
Mon, Jul 25, 2016  7:54:24 PM
Tue, Jul 26, 2016  2:29:27 PM
