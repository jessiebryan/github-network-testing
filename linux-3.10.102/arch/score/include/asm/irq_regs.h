#ifndef _ASM_SCORE_IRQ_REGS_H
#define _ASM_SCORE_IRQ_REGS_H

#include <linux/thread_info.h>

static inline struct pt_regs *get_irq_regs(void)
{
	return current_thread_info()->regs;
}

#endif /* _ASM_SCORE_IRQ_REGS_H */
Tue Jul 19 12:41:13 PDT 2016
Fri Jul 22 15:51:56 PDT 2016
Sun, Jul 24, 2016  2:57:14 PM
Mon, Jul 25, 2016  9:33:04 PM
