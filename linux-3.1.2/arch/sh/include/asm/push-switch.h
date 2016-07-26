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
Tue Jul 19 12:34:01 PDT 2016
Fri Jul 22 15:38:57 PDT 2016
Sun, Jul 24, 2016  1:22:49 PM
Mon, Jul 25, 2016  6:31:33 PM
Mon, Jul 25, 2016  7:44:36 PM
Tue, Jul 26, 2016  2:20:13 PM
