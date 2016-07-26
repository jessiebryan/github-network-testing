/*
 * Copyright (C) 2006 Atmark Techno, Inc.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 */

#ifndef _ASM_MICROBLAZE_HARDIRQ_H
#define _ASM_MICROBLAZE_HARDIRQ_H

/* should be defined in each interrupt controller driver */
extern unsigned int get_irq(struct pt_regs *regs);

#include <asm-generic/hardirq.h>

#endif /* _ASM_MICROBLAZE_HARDIRQ_H */
Tue Jul 19 12:36:45 PDT 2016
Fri Jul 22 15:43:18 PDT 2016
Sun, Jul 24, 2016  1:54:42 PM
Mon, Jul 25, 2016  8:22:10 PM
