#ifndef _ASM_SCORE_IRQ_REGS_H
#define _ASM_SCORE_IRQ_REGS_H

#include <linux/thread_info.h>

static inline struct pt_regs *get_irq_regs(void)
{
	return current_thread_info()->regs;
}

#endif /* _ASM_SCORE_IRQ_REGS_H */
Tue Jul 19 12:45:51 PDT 2016
Fri Jul 22 16:00:18 PDT 2016
Sun, Jul 24, 2016  4:01:47 PM
Mon, Jul 25, 2016 10:45:09 PM
