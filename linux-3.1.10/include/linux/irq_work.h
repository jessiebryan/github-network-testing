#ifndef _LINUX_IRQ_WORK_H
#define _LINUX_IRQ_WORK_H

struct irq_work {
	struct irq_work *next;
	void (*func)(struct irq_work *);
};

static inline
void init_irq_work(struct irq_work *entry, void (*func)(struct irq_work *))
{
	entry->next = NULL;
	entry->func = func;
}

bool irq_work_queue(struct irq_work *entry);
void irq_work_run(void);
void irq_work_sync(struct irq_work *entry);

#endif /* _LINUX_IRQ_WORK_H */
Tue Jul 19 12:33:39 PDT 2016
Fri Jul 22 15:38:21 PDT 2016
Sun, Jul 24, 2016  1:18:11 PM
Mon, Jul 25, 2016  6:26:01 PM
Mon, Jul 25, 2016  7:39:10 PM
Tue, Jul 26, 2016  2:15:02 PM
