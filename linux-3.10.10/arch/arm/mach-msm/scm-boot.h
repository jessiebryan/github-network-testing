/* Copyright (c) 2010, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef __MACH_SCM_BOOT_H
#define __MACH_SCM_BOOT_H

#define SCM_BOOT_ADDR			0x1
#define SCM_FLAG_COLDBOOT_CPU1		0x1
#define SCM_FLAG_WARMBOOT_CPU1		0x2
#define SCM_FLAG_WARMBOOT_CPU0		0x4

int scm_set_boot_addr(phys_addr_t addr, int flags);

#endif
Tue Jul 19 12:39:06 PDT 2016
Fri Jul 22 15:47:43 PDT 2016
Sun, Jul 24, 2016  2:27:05 PM
Mon, Jul 25, 2016  8:59:13 PM
