/*
 * Copyright 2004-2007 Freescale Semiconductor, Inc. All Rights Reserved.
 * Copyright 2008 Juergen Beisert, kernel@pengutronix.de
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA  02110-1301, USA.
 */

#ifndef __MACH_MXS_HARDWARE_H__
#define __MACH_MXS_HARDWARE_H__

#ifdef __ASSEMBLER__
#define IOMEM(addr)	(addr)
#else
#define IOMEM(addr)	((void __force __iomem *)(addr))
#endif

#endif /* __MACH_MXS_HARDWARE_H__ */
Tue Jul 19 12:37:52 PDT 2016
Fri Jul 22 15:45:20 PDT 2016
Sun, Jul 24, 2016  2:09:40 PM
Mon, Jul 25, 2016  8:39:53 PM
