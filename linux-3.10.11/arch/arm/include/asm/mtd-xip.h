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
Tue Jul 19 12:41:41 PDT 2016
Fri Jul 22 15:52:49 PDT 2016
Sun, Jul 24, 2016  3:03:39 PM
Mon, Jul 25, 2016  9:40:16 PM
