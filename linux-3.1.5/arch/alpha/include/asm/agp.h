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
Tue Jul 19 12:36:02 PDT 2016
Fri Jul 22 15:41:53 PDT 2016
Sun, Jul 24, 2016  1:44:26 PM
Mon, Jul 25, 2016  8:10:04 PM
Tue, Jul 26, 2016  2:44:05 PM
