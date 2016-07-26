#ifndef AGP_H
#define AGP_H 1

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
Tue Jul 19 12:47:46 PDT 2016
Fri Jul 22 16:03:54 PDT 2016
Sun, Jul 24, 2016  4:29:40 PM
Mon, Jul 25, 2016 11:16:07 PM
