/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1997, 98, 99, 2000, 01, 05 Ralf Baechle (ralf@linux-mips.org)
 * Copyright (C) 1999, 2000 Silicon Graphics, Inc.
 * Copyright (C) 2001 MIPS Technologies, Inc.
 */
#ifndef _ASM_HARDIRQ_H
#define _ASM_HARDIRQ_H

extern void ack_bad_irq(unsigned int irq);
#define ack_bad_irq ack_bad_irq

#include <asm-generic/hardirq.h>

#endif /* _ASM_HARDIRQ_H */
Tue Jul 19 12:42:36 PDT 2016
Fri Jul 22 15:54:16 PDT 2016
Sun, Jul 24, 2016  3:14:42 PM
Mon, Jul 25, 2016  9:52:46 PM
