#ifndef __ASM_SH_PUSH_SWITCH_H
#define __ASM_SH_PUSH_SWITCH_H

#include <linux/timer.h>
#include <linux/interrupt.h>
#include <linux/workqueue.h>
#include <linux/platform_device.h>

struct push_switch {
	/* switch state */
	unsigned int		state:1;
	/* debounce timer */
	struct timer_list	debounce;
	/* workqueue */
	struct work_struct	work;
	/* platform device, for workqueue handler */
	struct platform_device	*pdev;
};

struct push_switch_platform_info {
	/* IRQ handler */
	irqreturn_t		(*irq_handler)(int irq, void *data);
	/* Special IRQ flags */
	unsigned int		irq_flags;
	/* Bit location of switch */
	unsigned int		bit;
	/* Symbolic switch name */
	const char		*name;
};

#endif /* __ASM_SH_PUSH_SWITCH_H */
Tue Jul 19 12:47:46 PDT 2016
Fri Jul 22 16:03:53 PDT 2016
Sun, Jul 24, 2016  4:29:34 PM
Mon, Jul 25, 2016 11:15:59 PM
