/* arch/arm/mach-s5pc100/include/mach/uncompress.h
 *
 * Copyright 2009 Samsung Electronics Co.
 *	Byungho Min <bhmin@samsung.com>
 *
 * S5PC100 - uncompress code
 *
 * Based on mach-s3c6400/include/mach/uncompress.h
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
	fifo_mask = S3C2440_UFSTAT_TXMASK;
	fifo_max = 63 << S3C2440_UFSTAT_TXSHIFT;
}

#endif /* __ASM_ARCH_UNCOMPRESS_H */
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:45 PDT 2016
Sun, Jul 24, 2016  1:28:43 PM
Mon, Jul 25, 2016  6:38:38 PM
