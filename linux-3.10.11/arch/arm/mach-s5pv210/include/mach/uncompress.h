/* linux/arch/arm/mach-s5pv210/include/mach/uncompress.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * S5PV210 - uncompress code
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_UNCOMPRESS_H
#define __ASM_ARCH_UNCOMPRESS_H

#include <mach/map.h>
#include <plat/uncompress.h>

static void arch_detect_cpu(void)
{
	/* we do not need to do any cpu detection here at the moment. */
	fifo_mask = S5PV210_UFSTAT_TXMASK;
	fifo_max = 63 << S5PV210_UFSTAT_TXSHIFT;
}

#endif /* __ASM_ARCH_UNCOMPRESS_H */
Tue Jul 19 12:41:43 PDT 2016
Fri Jul 22 15:52:53 PDT 2016
Sun, Jul 24, 2016  3:04:09 PM
Mon, Jul 25, 2016  9:40:50 PM
