#ifndef __ASM_GENERIC_GETORDER_H
#define __ASM_GENERIC_GETORDER_H

#ifndef __ASSEMBLY__

#include <linux/compiler.h>

/* Pure 2^n version of get_order */
static inline __attribute_const__ int get_order(unsigned long size)
{
	int order;

	size = (size - 1) >> (PAGE_SHIFT - 1);
	order = -1;
	do {
		size >>= 1;
		order++;
	} while (size);
	return order;
}

#endif	/* __ASSEMBLY__ */

#endif	/* __ASM_GENERIC_GETORDER_H */
Tue Jul 19 12:35:55 PDT 2016
Fri Jul 22 15:41:38 PDT 2016
Sun, Jul 24, 2016  1:42:30 PM
Mon, Jul 25, 2016  8:07:47 PM
Tue, Jul 26, 2016  2:41:58 PM
