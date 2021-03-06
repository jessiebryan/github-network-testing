/*
 * IRQ helper macros for spear machine family
 *
 * Copyright (C) 2009-2012 ST Microelectronics
 * Rajeev Kumar <rajeev-dlh.kumar@st.com>
 * Viresh Kumar <viresh.linux@gmail.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __MACH_IRQS_H
#define __MACH_IRQS_H

#ifdef CONFIG_ARCH_SPEAR3XX
#define NR_IRQS			256
#endif

#ifdef CONFIG_ARCH_SPEAR6XX
/* IRQ definitions */
/* VIC 1 */
#define IRQ_VIC_END				64

/* GPIO pins virtual irqs */
#define VIRTUAL_IRQS				24
#define NR_IRQS					(IRQ_VIC_END + VIRTUAL_IRQS)
#endif

#ifdef CONFIG_ARCH_SPEAR13XX
#define IRQ_GIC_END			160
#define NR_IRQS				IRQ_GIC_END
#endif

#endif /* __MACH_IRQS_H */
Tue Jul 19 12:42:31 PDT 2016
Fri Jul 22 15:54:05 PDT 2016
Sun, Jul 24, 2016  3:13:24 PM
Mon, Jul 25, 2016  9:51:17 PM
