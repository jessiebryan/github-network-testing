/*
 * Copyright 2004-2009 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _BLACKFIN_PAGE_H
#define _BLACKFIN_PAGE_H

#include <asm-generic/page.h>
#define MAP_NR(addr) (((unsigned long)(addr)-PAGE_OFFSET) >> PAGE_SHIFT)

#define VM_DATA_DEFAULT_FLAGS \
	(VM_READ | VM_WRITE | \
	((current->personality & READ_IMPLIES_EXEC) ? VM_EXEC : 0 ) | \
		 VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)

#include <asm-generic/memory_model.h>
#include <asm-generic/getorder.h>

#endif
Tue Jul 19 12:37:55 PDT 2016
Fri Jul 22 15:45:25 PDT 2016
Sun, Jul 24, 2016  2:10:24 PM
Mon, Jul 25, 2016  8:40:41 PM
