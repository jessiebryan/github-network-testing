/*
 * Copyright (C) 2004 Fujitsu Siemens Computers GmbH
 * Licensed under the GPL
 *
 * Author: Bodo Stroesser <bstroesser@fujitsu-siemens.com>
 */

#ifndef __ASM_LDT_H
#define __ASM_LDT_H

#include <linux/mutex.h>
#include <sysdep/host_ldt.h>

extern void ldt_host_info(void);

#define LDT_PAGES_MAX \
	((LDT_ENTRIES * LDT_ENTRY_SIZE)/PAGE_SIZE)
#define LDT_ENTRIES_PER_PAGE \
	(PAGE_SIZE/LDT_ENTRY_SIZE)
#define LDT_DIRECT_ENTRIES \
	((LDT_PAGES_MAX*sizeof(void *))/LDT_ENTRY_SIZE)

struct ldt_entry {
	__u32 a;
	__u32 b;
};

typedef struct uml_ldt {
	int entry_count;
	struct mutex lock;
	union {
		struct ldt_entry * pages[LDT_PAGES_MAX];
		struct ldt_entry entries[LDT_DIRECT_ENTRIES];
	} u;
} uml_ldt_t;

#endif
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:56 PDT 2016
Sun, Jul 24, 2016  1:14:58 PM
Mon, Jul 25, 2016  6:22:09 PM
Mon, Jul 25, 2016  7:35:23 PM
Tue, Jul 26, 2016  2:11:23 PM
