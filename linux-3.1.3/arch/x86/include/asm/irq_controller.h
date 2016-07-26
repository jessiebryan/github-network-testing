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
Tue Jul 19 12:35:10 PDT 2016
Fri Jul 22 15:40:10 PDT 2016
Sun, Jul 24, 2016  1:31:38 PM
Mon, Jul 25, 2016  7:54:56 PM
