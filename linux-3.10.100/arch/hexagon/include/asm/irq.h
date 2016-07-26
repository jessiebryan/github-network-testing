/*
 * Copyright (c) 2010-2011, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef _ASM_IRQ_H_
#define _ASM_IRQ_H_

/* Number of first-level interrupts associated with the CPU core. */
#define HEXAGON_CPUINTS 32

/*
 * Must define NR_IRQS before including <asm-generic/irq.h>
 * 64 == the two SIRC's, 176 == the two gpio's
 *
 * IRQ configuration is still in flux; defining this to a comfortably
 * large number.
 */
#define NR_IRQS 512

#include <asm-generic/irq.h>

#endif
Tue Jul 19 12:39:48 PDT 2016
Fri Jul 22 15:49:10 PDT 2016
Sun, Jul 24, 2016  2:37:18 PM
Mon, Jul 25, 2016  9:10:36 PM
