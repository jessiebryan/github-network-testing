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
Tue Jul 19 12:53:14 PDT 2016
Fri Jul 22 16:14:22 PDT 2016
Sun, Jul 24, 2016  5:48:12 PM
Tue, Jul 26, 2016 12:42:57 AM
