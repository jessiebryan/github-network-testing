/* hardirq.h: FRV hardware IRQ management
 *
 * Copyright (C) 2004 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef __ASM_HARDIRQ_H
#define __ASM_HARDIRQ_H

#include <linux/atomic.h>

extern atomic_t irq_err_count;
static inline void ack_bad_irq(int irq)
{
	atomic_inc(&irq_err_count);
}
#define ack_bad_irq ack_bad_irq

#include <asm-generic/hardirq.h>

#endif
Tue Jul 19 12:35:35 PDT 2016
Fri Jul 22 15:41:01 PDT 2016
Sun, Jul 24, 2016  1:37:43 PM
Mon, Jul 25, 2016  8:02:09 PM
Tue, Jul 26, 2016  2:36:41 PM
