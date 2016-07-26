#ifndef __ASM_SH_PTRACE_64_H
#define __ASM_SH_PTRACE_64_H

#include <uapi/asm/ptrace_64.h>


#define MAX_REG_OFFSET		offsetof(struct pt_regs, tregs[7])
static inline long regs_return_value(struct pt_regs *regs)
{
	return regs->regs[3];
}

#endif /* __ASM_SH_PTRACE_64_H */
Tue Jul 19 12:43:20 PDT 2016
Fri Jul 22 15:55:35 PDT 2016
Sun, Jul 24, 2016  3:24:59 PM
Mon, Jul 25, 2016 10:04:12 PM
