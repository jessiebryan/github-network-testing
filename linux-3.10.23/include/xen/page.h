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
Tue Jul 19 12:50:04 PDT 2016
Fri Jul 22 16:08:14 PDT 2016
Sun, Jul 24, 2016  5:02:57 PM
Mon, Jul 25, 2016 11:53:00 PM
