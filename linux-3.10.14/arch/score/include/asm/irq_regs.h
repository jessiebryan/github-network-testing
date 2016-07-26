#ifndef _ASM_SCORE_IRQ_REGS_H
#define _ASM_SCORE_IRQ_REGS_H

#include <linux/thread_info.h>

static inline struct pt_regs *get_irq_regs(void)
{
	return current_thread_info()->regs;
}

#endif /* _ASM_SCORE_IRQ_REGS_H */
Tue Jul 19 12:43:58 PDT 2016
Fri Jul 22 15:56:46 PDT 2016
Sun, Jul 24, 2016  3:34:06 PM
Mon, Jul 25, 2016 10:14:21 PM
