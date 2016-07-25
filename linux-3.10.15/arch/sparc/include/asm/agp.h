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
Tue Jul 19 12:44:37 PDT 2016
Fri Jul 22 15:57:58 PDT 2016
Sun, Jul 24, 2016  3:43:33 PM
