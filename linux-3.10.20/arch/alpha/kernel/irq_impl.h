/*
 *	linux/arch/alpha/kernel/irq_impl.h
 *
 *	Copyright (C) 1995 Linus Torvalds
 *	Copyright (C) 1998, 2000 Richard Henderson
 *
 * This file contains declarations and inline functions for interfacing
 * with the IRQ handling routines in irq.c.
 */

#include <linux/interrupt.h>
#include <linux/irq.h>
#include <linux/profile.h>


#define RTC_IRQ    8

extern void isa_device_interrupt(unsigned long);
extern void isa_no_iack_sc_device_interrupt(unsigned long);
extern void srm_device_interrupt(unsigned long);
extern void pyxis_device_interrupt(unsigned long);

extern struct irqaction timer_irqaction;
extern struct irqaction isa_cascade_irqaction;
extern struct irqaction timer_cascade_irqaction;
extern struct irqaction halt_switch_irqaction;

extern void init_srm_irqs(long, unsigned long);
extern void init_pyxis_irqs(unsigned long);
extern void init_rtc_irq(void);

extern void common_init_isa_dma(void);

extern void i8259a_enable_irq(struct irq_data *d);
extern void i8259a_disable_irq(struct irq_data *d);
extern void i8259a_mask_and_ack_irq(struct irq_data *d);
extern struct irq_chip i8259a_irq_type;
extern void init_i8259a_irqs(void);

extern void handle_irq(int irq);
Tue Jul 19 12:47:33 PDT 2016
Fri Jul 22 16:03:29 PDT 2016
Sun, Jul 24, 2016  4:26:31 PM
Mon, Jul 25, 2016 11:12:36 PM
