/*
 * Copyright (C) 2004, 2007-2010, 2011-2012 Synopsys, Inc. (www.synopsys.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARC_IRQ_H
#define __ASM_ARC_IRQ_H

#define NR_CPU_IRQS	32  /* number of interrupt lines of ARC770 CPU */
#define NR_IRQS		128 /* allow some CPU external IRQ handling */

/* Platform Independent IRQs */
#define TIMER0_IRQ      3
#define TIMER1_IRQ      4

#include <asm-generic/irq.h>

extern void __init arc_init_IRQ(void);
extern int __init get_hw_config_num_irq(void);

void __cpuinit arc_local_timer_setup(unsigned int cpu);

#endif
Tue Jul 19 12:44:24 PDT 2016
Fri Jul 22 15:57:34 PDT 2016
Sun, Jul 24, 2016  3:40:26 PM
Mon, Jul 25, 2016 10:21:21 PM
