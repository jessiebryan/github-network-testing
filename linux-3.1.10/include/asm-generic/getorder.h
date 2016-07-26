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
Tue Jul 19 12:33:37 PDT 2016
Fri Jul 22 15:38:18 PDT 2016
Sun, Jul 24, 2016  1:17:44 PM
Mon, Jul 25, 2016  6:25:29 PM
Mon, Jul 25, 2016  7:38:38 PM
Tue, Jul 26, 2016  2:14:31 PM
