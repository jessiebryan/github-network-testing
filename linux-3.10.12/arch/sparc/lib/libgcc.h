#ifndef __ASM_LIBGCC_H
#define __ASM_LIBGCC_H

#include <asm/byteorder.h>

typedef int word_type __attribute__ ((mode (__word__)));

struct DWstruct {
	int high, low;
};

typedef union
{
	struct DWstruct s;
	long long ll;
} DWunion;

#endif /* __ASM_LIBGCC_H */
Tue Jul 19 12:42:42 PDT 2016
Fri Jul 22 15:54:26 PDT 2016
Sun, Jul 24, 2016  3:16:03 PM
Mon, Jul 25, 2016  9:54:19 PM
