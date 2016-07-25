#ifndef __IRQ_CONTROLLER__
#define __IRQ_CONTROLLER__

struct irq_domain {
	int (*xlate)(struct irq_domain *h, const u32 *intspec, u32 intsize,
			u32 *out_hwirq, u32 *out_type);
	void *priv;
	struct device_node *controller;
	struct list_head l;
};

#endif
Tue Jul 19 12:36:18 PDT 2016
Fri Jul 22 15:42:24 PDT 2016
Sun, Jul 24, 2016  1:48:07 PM
