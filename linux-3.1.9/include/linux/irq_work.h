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
Tue Jul 19 12:38:19 PDT 2016
Fri Jul 22 15:46:10 PDT 2016
Sun, Jul 24, 2016  2:15:55 PM
Mon, Jul 25, 2016  8:46:47 PM
