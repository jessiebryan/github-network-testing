/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2003 by Ralf Baechle
 */
#ifndef __ASM_MACH_GENERIC_IRQ_H
#define __ASM_MACH_GENERIC_IRQ_H


#ifdef NR_IRQS
#undef NR_IRQS
#endif

#ifndef MIPS_CPU_IRQ_BASE
#define MIPS_CPU_IRQ_BASE 0
#endif

/* 8 (MIPS) + 128 (au1300) + 16 (cpld) */
#define NR_IRQS 152

#endif /* __ASM_MACH_GENERIC_IRQ_H */
Tue Jul 19 12:47:42 PDT 2016
Fri Jul 22 16:03:46 PDT 2016
Sun, Jul 24, 2016  4:28:34 PM
Mon, Jul 25, 2016 11:14:52 PM
