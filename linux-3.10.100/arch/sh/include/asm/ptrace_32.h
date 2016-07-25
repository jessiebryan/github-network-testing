#ifndef __ASM_SH_PTRACE_32_H
#define __ASM_SH_PTRACE_32_H

#include <uapi/asm/ptrace_32.h>


#define MAX_REG_OFFSET		offsetof(struct pt_regs, tra)
static inline long regs_return_value(struct pt_regs *regs)
{
	return regs->regs[0];
}

#endif /* __ASM_SH_PTRACE_32_H */
Tue Jul 19 12:39:55 PDT 2016
Fri Jul 22 15:49:23 PDT 2016
Sun, Jul 24, 2016  2:38:55 PM
