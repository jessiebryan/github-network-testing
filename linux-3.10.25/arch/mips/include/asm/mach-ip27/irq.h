/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1999, 2000, 01, 02, 03 by Ralf Baechle
 * Copyright (C) 1999, 2000 Silicon Graphics, Inc.
 * Copyright (C) 2001 Kanoj Sarcar
 */
#ifndef __ASM_MACH_IP27_IRQ_H
#define __ASM_MACH_IP27_IRQ_H

/*
 * A hardwired interrupt number is completly stupid for this system - a
 * large configuration might have thousands if not tenthousands of
 * interrupts.
 */
#define NR_IRQS 256

#include_next <irq.h>

#endif /* __ASM_MACH_IP27_IRQ_H */
Tue Jul 19 12:50:55 PDT 2016
Fri Jul 22 16:09:49 PDT 2016
Sun, Jul 24, 2016  5:14:54 PM
Tue, Jul 26, 2016 12:06:16 AM
