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
Tue Jul 19 12:46:29 PDT 2016
Fri Jul 22 16:01:31 PDT 2016
Sun, Jul 24, 2016  4:11:12 PM
Mon, Jul 25, 2016 10:55:36 PM
