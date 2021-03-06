
#ifndef _ASM_KMAP_TYPES_H
#define _ASM_KMAP_TYPES_H

enum km_type {
	/* arch specific kmaps - change the numbers attached to these at your peril */
	__KM_CACHE,		/* cache flush page attachment point */
	__KM_PGD,		/* current page directory */
	__KM_ITLB_PTD,		/* current instruction TLB miss page table lookup */
	__KM_DTLB_PTD,		/* current data TLB miss page table lookup */

	/* general kmaps */
        KM_BOUNCE_READ,
        KM_SKB_SUNRPC_DATA,
        KM_SKB_DATA_SOFTIRQ,
        KM_USER0,
        KM_USER1,
	KM_BIO_SRC_IRQ,
	KM_BIO_DST_IRQ,
	KM_PTE0,
	KM_PTE1,
	KM_IRQ0,
	KM_IRQ1,
	KM_SOFTIRQ0,
	KM_SOFTIRQ1,
	KM_TYPE_NR
};

#endif
Tue Jul 19 12:35:35 PDT 2016
Fri Jul 22 15:41:01 PDT 2016
Sun, Jul 24, 2016  1:37:44 PM
Mon, Jul 25, 2016  8:02:10 PM
Tue, Jul 26, 2016  2:36:41 PM
