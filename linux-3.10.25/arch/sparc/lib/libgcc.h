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
Tue Jul 19 12:51:00 PDT 2016
Fri Jul 22 16:10:00 PDT 2016
Sun, Jul 24, 2016  5:16:11 PM
Tue, Jul 26, 2016 12:07:43 AM
