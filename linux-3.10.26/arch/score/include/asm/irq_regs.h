#ifndef _ASM_SCORE_IRQ_REGS_H
#define _ASM_SCORE_IRQ_REGS_H

#include <linux/thread_info.h>

static inline struct pt_regs *get_irq_regs(void)
{
	return current_thread_info()->regs;
}

#endif /* _ASM_SCORE_IRQ_REGS_H */
Tue Jul 19 12:51:38 PDT 2016
Fri Jul 22 16:11:12 PDT 2016
Sun, Jul 24, 2016  5:25:06 PM
Tue, Jul 26, 2016 12:17:31 AM
