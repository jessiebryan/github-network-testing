/* 
 * Copyright (C) 2002 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __UM_KMAP_TYPES_H
#define __UM_KMAP_TYPES_H

/* No more #include "asm/arch/kmap_types.h" ! */

enum km_type {
	KM_BOUNCE_READ,
	KM_SKB_SUNRPC_DATA,
	KM_SKB_DATA_SOFTIRQ,
	KM_USER0,
	KM_USER1,
	KM_UML_USERCOPY,	/* UML specific, for copy_*_user - used in do_op_one_page */
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
Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:00 PDT 2016
Sun, Jul 24, 2016  1:23:11 PM
Mon, Jul 25, 2016  6:32:01 PM
Mon, Jul 25, 2016  7:45:03 PM
Tue, Jul 26, 2016  2:20:38 PM
