/*
 * AMD Geode definitions
 * Copyright (C) 2006, Advanced Micro Devices, Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public License
 * as published by the Free Software Foundation.
 */

#ifndef _ASM_X86_GEODE_H
#define _ASM_X86_GEODE_H

#include <asm/processor.h>
#include <linux/io.h>
#include <linux/cs5535.h>

static inline int is_geode_gx(void)
{
	return ((boot_cpu_data.x86_vendor == X86_VENDOR_NSC) &&
		(boot_cpu_data.x86 == 5) &&
		(boot_cpu_data.x86_model == 5));
}

static inline int is_geode_lx(void)
{
	return ((boot_cpu_data.x86_vendor == X86_VENDOR_AMD) &&
		(boot_cpu_data.x86 == 5) &&
		(boot_cpu_data.x86_model == 10));
}

static inline int is_geode(void)
{
	return (is_geode_gx() || is_geode_lx());
}

#endif /* _ASM_X86_GEODE_H */
Tue Jul 19 12:38:40 PDT 2016
Fri Jul 22 15:46:54 PDT 2016
Sun, Jul 24, 2016  2:21:03 PM
Mon, Jul 25, 2016  8:52:31 PM
