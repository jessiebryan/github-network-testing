#ifndef AGP_H
#define AGP_H 1

#include <asm/io.h>

/* dummy for now */

#define map_page_into_agp(page) 
#define unmap_page_from_agp(page) 
#define flush_agp_cache() mb()

/* GATT allocation. Returns/accepts GATT kernel virtual address. */
#define alloc_gatt_pages(order)		\
	((char *)__get_free_pages(GFP_KERNEL, (order)))
#define free_gatt_pages(table, order)	\
	free_pages((unsigned long)(table), (order))

#endif
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:46 PDT 2016
Sun, Jul 24, 2016  1:36:11 PM
Mon, Jul 25, 2016  8:00:20 PM
Tue, Jul 26, 2016  2:34:57 PM
