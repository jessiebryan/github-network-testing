/*
 * linux/arch/arm/mach-mmp/include/mach/regs-apbc.h
 *
 *   Application Peripheral Bus Clock Unit
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_MACH_REGS_APBC_H
#define __ASM_MACH_REGS_APBC_H

#include <mach/addr-map.h>

/* Common APB clock register bit definitions */
#define APBC_APBCLK	(1 << 0)  /* APB Bus Clock Enable */
#define APBC_FNCLK	(1 << 1)  /* Functional Clock Enable */
#define APBC_RST	(1 << 2)  /* Reset Generation */

/* Functional Clock Selection Mask */
#define APBC_FNCLKSEL(x)	(((x) & 0xf) << 4)

#endif /* __ASM_MACH_REGS_APBC_H */
Tue Jul 19 12:44:26 PDT 2016
Fri Jul 22 15:57:37 PDT 2016
Sun, Jul 24, 2016  3:40:47 PM
