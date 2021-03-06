/*
 * include/asm-xtensa/irq.h
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001 - 2005 Tensilica Inc.
 */

#ifndef _XTENSA_IRQ_H
#define _XTENSA_IRQ_H

#include <linux/init.h>
#include <platform/hardware.h>
#include <variant/core.h>

#ifdef CONFIG_VARIANT_IRQ_SWITCH
#include <variant/irq.h>
#else
static inline void variant_irq_enable(unsigned int irq) { }
static inline void variant_irq_disable(unsigned int irq) { }
#endif

#ifndef VARIANT_NR_IRQS
# define VARIANT_NR_IRQS 0
#endif
#ifndef PLATFORM_NR_IRQS
# define PLATFORM_NR_IRQS 0
#endif
#define XTENSA_NR_IRQS XCHAL_NUM_INTERRUPTS
#define NR_IRQS (XTENSA_NR_IRQS + VARIANT_NR_IRQS + PLATFORM_NR_IRQS)

#if VARIANT_NR_IRQS == 0
static inline void variant_init_irq(void) { }
#else
void variant_init_irq(void) __init;
#endif

static __inline__ int irq_canonicalize(int irq)
{
	return (irq);
}

struct irqaction;

#endif	/* _XTENSA_IRQ_H */
Tue Jul 19 12:52:59 PDT 2016
Fri Jul 22 16:13:53 PDT 2016
Sun, Jul 24, 2016  5:44:38 PM
Tue, Jul 26, 2016 12:39:03 AM
