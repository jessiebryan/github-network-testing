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
Tue Jul 19 12:35:42 PDT 2016
Fri Jul 22 15:41:13 PDT 2016
Sun, Jul 24, 2016  1:39:19 PM
Mon, Jul 25, 2016  8:04:02 PM
Tue, Jul 26, 2016  2:38:28 PM
