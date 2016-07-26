/*
 * Copyright 2007-2008 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _MACH_BF561_SMP
#define _MACH_BF561_SMP

/* This header has to stand alone to avoid circular deps */

struct task_struct;

void platform_init_cpus(void);

void platform_prepare_cpus(unsigned int max_cpus);

int platform_boot_secondary(unsigned int cpu, struct task_struct *idle);

void platform_secondary_init(unsigned int cpu);

void platform_request_ipi(int irq, /*irq_handler_t*/ void *handler);

void platform_send_ipi(cpumask_t callmap, int irq);

void platform_send_ipi_cpu(unsigned int cpu, int irq);

void platform_clear_ipi(unsigned int cpu, int irq);

void bfin_local_timer_setup(void);

#endif /* !_MACH_BF561_SMP */
Tue Jul 19 12:52:47 PDT 2016
Fri Jul 22 16:13:30 PDT 2016
Sun, Jul 24, 2016  5:41:48 PM
Tue, Jul 26, 2016 12:35:57 AM
