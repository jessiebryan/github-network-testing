#ifndef _ASM_SCORE_IRQ_REGS_H
#define _ASM_SCORE_IRQ_REGS_H

#include <linux/thread_info.h>

static inline struct pt_regs *get_irq_regs(void)
{
	return current_thread_info()->regs;
}

#endif /* _ASM_SCORE_IRQ_REGS_H */
Tue Jul 19 12:39:55 PDT 2016
Fri Jul 22 15:49:22 PDT 2016
Sun, Jul 24, 2016  2:38:49 PM
Mon, Jul 25, 2016  9:12:18 PM
