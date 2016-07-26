/*
 * Copyright (C) 2012 Imagination Technologies
 */

#ifndef _LINUX_IRQCHIP_METAG_EXT_H_
#define _LINUX_IRQCHIP_METAG_EXT_H_

struct irq_data;
struct platform_device;

/* called from core irq code at init */
int init_external_IRQ(void);

/*
 * called from SoC init_irq() callback to dynamically indicate the lack of
 * HWMASKEXT registers.
 */
void meta_intc_no_mask(void);

/*
 * These allow SoCs to specialise the interrupt controller from their init_irq
 * callbacks.
 */

extern struct irq_chip meta_intc_edge_chip;
extern struct irq_chip meta_intc_level_chip;

/* this should be called in the mask callback */
void meta_intc_mask_irq_simple(struct irq_data *data);
/* this should be called in the unmask callback */
void meta_intc_unmask_irq_simple(struct irq_data *data);

#endif /* _LINUX_IRQCHIP_METAG_EXT_H_ */
Tue Jul 19 12:51:16 PDT 2016
Fri Jul 22 16:10:30 PDT 2016
Sun, Jul 24, 2016  5:19:57 PM
Tue, Jul 26, 2016 12:11:50 AM
