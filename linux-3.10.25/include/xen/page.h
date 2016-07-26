#ifndef _XEN_PAGE_H
#define _XEN_PAGE_H

#include <asm/xen/page.h>

struct xen_memory_region {
	phys_addr_t start;
	phys_addr_t size;
};

#define XEN_EXTRA_MEM_MAX_REGIONS 128 /* == E820MAX */

extern __initdata
struct xen_memory_region xen_extra_mem[XEN_EXTRA_MEM_MAX_REGIONS];

extern unsigned long xen_released_pages;

#endif	/* _XEN_PAGE_H */
Tue Jul 19 12:51:23 PDT 2016
Fri Jul 22 16:10:43 PDT 2016
Sun, Jul 24, 2016  5:21:31 PM
Tue, Jul 26, 2016 12:13:33 AM
