/*
 *  arch/arm/mach-realview/include/mach/irqs.h
 *
 *  Copyright (C) 2003 ARM Limited
 *  Copyright (C) 2000 Deep Blue Solutions Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __ASM_ARCH_IRQS_H
#define __ASM_ARCH_IRQS_H

#include <mach/irqs-eb.h>
#include <mach/irqs-pb11mp.h>
#include <mach/irqs-pb1176.h>
#include <mach/irqs-pba8.h>
#include <mach/irqs-pbx.h>

#define IRQ_LOCALTIMER		29
#define IRQ_LOCALWDOG		30

#define IRQ_GIC_START		32

#ifndef NR_IRQS
#error "NR_IRQS not defined by the board-specific files"
#endif

#endif
Tue Jul 19 12:33:14 PDT 2016
Fri Jul 22 15:37:33 PDT 2016
Sun, Jul 24, 2016  1:12:08 PM
Mon, Jul 25, 2016  6:18:46 PM
Mon, Jul 25, 2016  7:32:04 PM
Tue, Jul 26, 2016  2:08:17 PM
