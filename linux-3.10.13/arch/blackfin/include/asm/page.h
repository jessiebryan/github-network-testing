/*
 * Copyright 2004-2009 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _BLACKFIN_PAGE_H
#define _BLACKFIN_PAGE_H

#define ARCH_PFN_OFFSET (CONFIG_PHY_RAM_BASE_ADDRESS >> PAGE_SHIFT)
#define MAP_NR(addr) ((unsigned long)(addr) >> PAGE_SHIFT)

#define VM_DATA_DEFAULT_FLAGS \
	(VM_READ | VM_WRITE | \
	((current->personality & READ_IMPLIES_EXEC) ? VM_EXEC : 0 ) | \
		 VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)

#include <asm-generic/page.h>
#include <asm-generic/memory_model.h>
#include <asm-generic/getorder.h>

#endif
Tue Jul 19 12:43:11 PDT 2016
Fri Jul 22 15:55:18 PDT 2016
Sun, Jul 24, 2016  3:22:54 PM
Mon, Jul 25, 2016 10:01:52 PM
