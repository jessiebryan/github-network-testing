#ifndef _ASM_PARISC_AGP_H
#define _ASM_PARISC_AGP_H

/*
 * PARISC specific AGP definitions.
 * Copyright (c) 2006 Kyle McMartin <kyle@parisc-linux.org>
 *
 */

#define map_page_into_agp(page)		/* nothing */
#define unmap_page_from_agp(page)	/* nothing */
#define flush_agp_cache()		mb()

/* GATT allocation. Returns/accepts GATT kernel virtual address. */
#define alloc_gatt_pages(order)		\
	((char *)__get_free_pages(GFP_KERNEL, (order)))
#define free_gatt_pages(table, order)	\
	free_pages((unsigned long)(table), (order))

#endif /* _ASM_PARISC_AGP_H */
Tue Jul 19 12:45:13 PDT 2016
Fri Jul 22 15:59:04 PDT 2016
Sun, Jul 24, 2016  3:52:06 PM
Mon, Jul 25, 2016 10:34:22 PM
