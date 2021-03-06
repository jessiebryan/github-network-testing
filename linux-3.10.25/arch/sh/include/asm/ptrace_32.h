#ifndef __ASM_SH_PTRACE_32_H
#define __ASM_SH_PTRACE_32_H

#include <uapi/asm/ptrace_32.h>


#define MAX_REG_OFFSET		offsetof(struct pt_regs, tra)
static inline long regs_return_value(struct pt_regs *regs)
{
	return regs->regs[0];
}

#endif /* __ASM_SH_PTRACE_32_H */
Tue Jul 19 12:50:59 PDT 2016
Fri Jul 22 16:09:57 PDT 2016
Sun, Jul 24, 2016  5:15:54 PM
Tue, Jul 26, 2016 12:07:23 AM
