#ifndef __ASM_SH_PTRACE_64_H
#define __ASM_SH_PTRACE_64_H

#include <uapi/asm/ptrace_64.h>


#define MAX_REG_OFFSET		offsetof(struct pt_regs, tregs[7])
static inline long regs_return_value(struct pt_regs *regs)
{
	return regs->regs[3];
}

#endif /* __ASM_SH_PTRACE_64_H */
Tue Jul 19 12:47:46 PDT 2016
Fri Jul 22 16:03:53 PDT 2016
Sun, Jul 24, 2016  4:29:34 PM
Mon, Jul 25, 2016 11:15:59 PM
