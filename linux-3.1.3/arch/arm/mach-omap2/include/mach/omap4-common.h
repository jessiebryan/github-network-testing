/*
 * omap4-common.h: OMAP4 specific common header file
 *
 * Copyright (C) 2010 Texas Instruments, Inc.
 *
 * Author:
 *	Santosh Shilimkar <santosh.shilimkar@ti.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef OMAP_ARCH_OMAP4_COMMON_H
#define OMAP_ARCH_OMAP4_COMMON_H

/*
 * wfi used in low power code. Directly opcode is used instead
 * of instruction to avoid mulit-omap build break
 */
#ifdef CONFIG_THUMB2_KERNEL
#define do_wfi() __asm__ __volatile__ ("wfi" : : : "memory")
#else
#define do_wfi()			\
		__asm__ __volatile__ (".word	0xe320f003" : : : "memory")
#endif

#ifdef CONFIG_CACHE_L2X0
extern void __iomem *l2cache_base;
#endif

extern void __iomem *gic_dist_base_addr;

extern void __init gic_init_irq(void);
extern void omap_smc1(u32 fn, u32 arg);

#ifdef CONFIG_SMP
/* Needed for secondary core boot */
extern void omap_secondary_startup(void);
extern u32 omap_modify_auxcoreboot0(u32 set_mask, u32 clear_mask);
extern void omap_auxcoreboot_addr(u32 cpu_addr);
extern u32 omap_read_auxcoreboot0(void);
#endif
#endif
Tue Jul 19 12:34:42 PDT 2016
Fri Jul 22 15:39:43 PDT 2016
Sun, Jul 24, 2016  1:28:31 PM
Mon, Jul 25, 2016  6:38:24 PM
Mon, Jul 25, 2016  7:51:17 PM
Tue, Jul 26, 2016  2:26:30 PM
