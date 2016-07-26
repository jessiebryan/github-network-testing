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
Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:02 PDT 2016
Sun, Jul 24, 2016  1:23:23 PM
Mon, Jul 25, 2016  6:32:15 PM
Mon, Jul 25, 2016  7:45:16 PM
Tue, Jul 26, 2016  2:20:50 PM
