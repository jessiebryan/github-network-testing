#ifndef __ARM_KMAP_TYPES_H
#define __ARM_KMAP_TYPES_H

/*
 * This is the "bare minimum".  AIO seems to require this.
 */
enum km_type {
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
	KM_L1_CACHE,
	KM_L2_CACHE,
	KM_KDB,
	KM_TYPE_NR
};

#ifdef CONFIG_DEBUG_HIGHMEM
#define KM_NMI		(-1)
#define KM_NMI_PTE	(-1)
#define KM_IRQ_PTE	(-1)
#endif

#endif
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:29 PDT 2016
Sun, Jul 24, 2016  1:11:34 PM
Mon, Jul 25, 2016  6:18:06 PM
Mon, Jul 25, 2016  7:31:25 PM
Tue, Jul 26, 2016  2:07:39 PM
