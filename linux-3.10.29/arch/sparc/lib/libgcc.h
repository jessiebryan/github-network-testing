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
Tue Jul 19 12:53:36 PDT 2016
Fri Jul 22 16:15:04 PDT 2016
Sun, Jul 24, 2016  5:53:27 PM
Tue, Jul 26, 2016 12:48:48 AM
