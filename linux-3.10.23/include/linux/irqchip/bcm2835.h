/*
 * Copyright (C) 2010 Broadcom
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

#ifndef __LINUX_IRQCHIP_BCM2835_H_
#define __LINUX_IRQCHIP_BCM2835_H_

#include <asm/exception.h>

extern void bcm2835_init_irq(void);

extern asmlinkage void __exception_irq_entry bcm2835_handle_irq(
	struct pt_regs *regs);

#endif
Tue Jul 19 12:49:58 PDT 2016
Fri Jul 22 16:08:02 PDT 2016
Sun, Jul 24, 2016  5:01:17 PM
Mon, Jul 25, 2016 11:51:17 PM
