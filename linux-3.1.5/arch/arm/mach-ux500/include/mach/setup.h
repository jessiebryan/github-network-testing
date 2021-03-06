/*
 * Copyright (C) 2009 ST-Ericsson.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * These symbols are needed for board-specific files to call their
 * own cpu-specific files
 */
#ifndef __ASM_ARCH_SETUP_H
#define __ASM_ARCH_SETUP_H

#include <asm/mach/time.h>
#include <linux/init.h>

void __init ux500_map_io(void);
extern void __init u5500_map_io(void);
extern void __init u8500_map_io(void);

extern void __init u5500_init_devices(void);
extern void __init u8500_init_devices(void);

extern void __init ux500_init_irq(void);

extern void __init u5500_sdi_init(void);

extern void __init db5500_dma_init(void);

/* We re-use nomadik_timer for this platform */
extern void nmdk_timer_init(void);

struct amba_device;
extern void __init amba_add_devices(struct amba_device *devs[], int num);

struct sys_timer;
extern struct sys_timer ux500_timer;

#define __IO_DEV_DESC(x, sz)	{		\
	.virtual	= IO_ADDRESS(x),	\
	.pfn		= __phys_to_pfn(x),	\
	.length		= sz,			\
	.type		= MT_DEVICE,		\
}

#define __MEM_DEV_DESC(x, sz)	{		\
	.virtual	= IO_ADDRESS(x),	\
	.pfn		= __phys_to_pfn(x),	\
	.length		= sz,			\
	.type		= MT_MEMORY,		\
}

#endif /*  __ASM_ARCH_SETUP_H */
Tue Jul 19 12:36:06 PDT 2016
Fri Jul 22 15:42:01 PDT 2016
Sun, Jul 24, 2016  1:45:20 PM
Mon, Jul 25, 2016  8:11:08 PM
Tue, Jul 26, 2016  2:45:05 PM
