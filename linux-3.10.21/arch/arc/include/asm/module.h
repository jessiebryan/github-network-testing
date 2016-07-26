/*
 * Copyright (C) 2004, 2007-2010, 2011-2012 Synopsys, Inc. (www.synopsys.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Amit Bhor, Sameer Dhavale: Codito Technologies 2004

 */

#ifndef _ASM_ARC_MODULE_H
#define _ASM_ARC_MODULE_H

#include <asm-generic/module.h>

#ifdef CONFIG_ARC_DW2_UNWIND
struct mod_arch_specific {
	void *unw_info;
	int unw_sec_idx;
};
#endif

#define MODULE_PROC_FAMILY "ARC700"

#define MODULE_ARCH_VERMAGIC MODULE_PROC_FAMILY

#endif /* _ASM_ARC_MODULE_H */
Tue Jul 19 12:48:11 PDT 2016
Fri Jul 22 16:04:41 PDT 2016
Sun, Jul 24, 2016  4:35:47 PM
Mon, Jul 25, 2016 11:22:53 PM
