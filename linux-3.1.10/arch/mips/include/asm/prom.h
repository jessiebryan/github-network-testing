/*
 *  arch/mips/include/asm/prom.h
 *
 *  Copyright (C) 2010 Cisco Systems Inc. <dediao@cisco.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */
#ifndef __ASM_MIPS_PROM_H
#define __ASM_MIPS_PROM_H

#ifdef CONFIG_OF
#include <asm/bootinfo.h>

extern int early_init_dt_scan_memory_arch(unsigned long node,
	const char *uname, int depth, void *data);

extern int reserve_mem_mach(unsigned long addr, unsigned long size);
extern void free_mem_mach(unsigned long addr, unsigned long size);

extern void device_tree_init(void);
#else /* CONFIG_OF */
static inline void device_tree_init(void) { }
#endif /* CONFIG_OF */

#endif /* _ASM_MIPS_PROM_H */
Tue Jul 19 12:33:21 PDT 2016
Fri Jul 22 15:37:46 PDT 2016
Sun, Jul 24, 2016  1:13:46 PM
Mon, Jul 25, 2016  6:20:44 PM
Mon, Jul 25, 2016  7:33:59 PM
Tue, Jul 26, 2016  2:10:05 PM
