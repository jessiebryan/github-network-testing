/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 *
 * Copyright (C) 2006 Ralf Baechle (ralf@linux-mips.org)
 */
#ifndef __ASM_IRQ_REGS_H
#define __ASM_IRQ_REGS_H

#define ARCH_HAS_OWN_IRQ_REGS

#include <linux/thread_info.h>

static inline struct pt_regs *get_irq_regs(void)
{
	return current_thread_info()->regs;
}

#endif /* __ASM_IRQ_REGS_H */
Tue Jul 19 12:34:55 PDT 2016
Fri Jul 22 15:39:56 PDT 2016
Sun, Jul 24, 2016  1:30:05 PM
Mon, Jul 25, 2016  6:40:15 PM
Mon, Jul 25, 2016  7:53:07 PM
Tue, Jul 26, 2016  2:28:14 PM
