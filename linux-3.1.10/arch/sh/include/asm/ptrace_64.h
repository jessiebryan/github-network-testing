#ifndef __ASM_SH_PTRACE_64_H
#define __ASM_SH_PTRACE_64_H

struct pt_regs {
	unsigned long long pc;
	unsigned long long sr;
	long long syscall_nr;
	unsigned long long regs[63];
	unsigned long long tregs[8];
	unsigned long long pad[2];
};

#ifdef __KERNEL__

#define MAX_REG_OFFSET		offsetof(struct pt_regs, tregs[7])
#define regs_return_value(_regs)	((_regs)->regs[3])

#endif /* __KERNEL__ */

#endif /* __ASM_SH_PTRACE_64_H */
Tue Jul 19 12:33:24 PDT 2016
Fri Jul 22 15:37:53 PDT 2016
Sun, Jul 24, 2016  1:14:34 PM
Mon, Jul 25, 2016  6:21:41 PM
Mon, Jul 25, 2016  7:34:54 PM
Tue, Jul 26, 2016  2:10:57 PM
