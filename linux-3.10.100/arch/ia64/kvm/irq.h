/*
 * irq.h: In-kernel interrupt controller related definitions
 * Copyright (c) 2008, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place - Suite 330, Boston, MA 02111-1307 USA.
 *
 * Authors:
 *   Xiantao Zhang <xiantao.zhang@intel.com>
 *
 */

#ifndef __IRQ_H
#define __IRQ_H

#include "lapic.h"

static inline int irqchip_in_kernel(struct kvm *kvm)
{
	return 1;
}

#endif
Tue Jul 19 12:39:49 PDT 2016
Fri Jul 22 15:49:11 PDT 2016
Sun, Jul 24, 2016  2:37:28 PM
Mon, Jul 25, 2016  9:10:48 PM
