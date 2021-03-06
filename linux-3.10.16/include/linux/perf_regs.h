#ifndef _LINUX_PERF_REGS_H
#define _LINUX_PERF_REGS_H

#ifdef CONFIG_HAVE_PERF_REGS
#include <asm/perf_regs.h>
u64 perf_reg_value(struct pt_regs *regs, int idx);
int perf_reg_validate(u64 mask);
u64 perf_reg_abi(struct task_struct *task);
#else
static inline u64 perf_reg_value(struct pt_regs *regs, int idx)
{
	return 0;
}

static inline int perf_reg_validate(u64 mask)
{
	return mask ? -ENOSYS : 0;
}

static inline u64 perf_reg_abi(struct task_struct *task)
{
	return PERF_SAMPLE_REGS_ABI_NONE;
}
#endif /* CONFIG_HAVE_PERF_REGS */
#endif /* _LINUX_PERF_REGS_H */
Tue Jul 19 12:45:32 PDT 2016
Fri Jul 22 15:59:41 PDT 2016
Sun, Jul 24, 2016  3:56:59 PM
Mon, Jul 25, 2016 10:39:46 PM
