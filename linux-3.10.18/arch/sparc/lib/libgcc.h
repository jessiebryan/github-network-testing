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
Tue Jul 19 12:46:29 PDT 2016
Fri Jul 22 16:01:33 PDT 2016
Sun, Jul 24, 2016  4:11:23 PM
Mon, Jul 25, 2016 10:55:49 PM
