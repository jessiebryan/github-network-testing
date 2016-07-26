/*
 * MTD primitives for XIP support. Architecture specific functions
 *
 * Do not include this file directly. It's included from linux/mtd/xip.h
 * 
 * Author:	Nicolas Pitre
 * Created:	Nov 2, 2004
 * Copyright:	(C) 2004 MontaVista Software, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ARM_MTD_XIP_H__
#define __ARM_MTD_XIP_H__

#include <mach/mtd-xip.h>

/* fill instruction prefetch */
#define xip_iprefetch() 	do { asm volatile (".rep 8; nop; .endr"); } while (0)

#endif /* __ARM_MTD_XIP_H__ */
Tue Jul 19 12:35:29 PDT 2016
Fri Jul 22 15:40:48 PDT 2016
Sun, Jul 24, 2016  1:36:20 PM
Mon, Jul 25, 2016  8:00:31 PM
Tue, Jul 26, 2016  2:35:08 PM
