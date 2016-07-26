/*
 * OMAP memory barrier header.
 *
 * Copyright (C) 2011 Texas Instruments, Inc.
 *  Santosh Shilimkar <santosh.shilimkar@ti.com>
 *  Richard Woodruff <r-woodruff2@ti.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef __MACH_BARRIERS_H
#define __MACH_BARRIERS_H

#include <asm/outercache.h>

extern void omap_bus_sync(void);

#define rmb()		dsb()
#define wmb()		do { dsb(); outer_sync(); omap_bus_sync(); } while (0)
#define mb()		wmb()

#endif	/* __MACH_BARRIERS_H */
Tue Jul 19 12:50:09 PDT 2016
Fri Jul 22 16:08:23 PDT 2016
Sun, Jul 24, 2016  5:04:01 PM
Mon, Jul 25, 2016 11:54:12 PM
