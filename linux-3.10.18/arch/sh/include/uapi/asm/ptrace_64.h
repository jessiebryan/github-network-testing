#ifndef _UAPI__ASM_SH_PTRACE_64_H
#define _UAPI__ASM_SH_PTRACE_64_H

struct pt_regs {
	unsigned long long pc;
	unsigned long long sr;
	long long syscall_nr;
	unsigned long long regs[63];
	unsigned long long tregs[8];
	unsigned long long pad[2];
};


#endif /* _UAPI__ASM_SH_PTRACE_64_H */
Tue Jul 19 12:46:29 PDT 2016
Fri Jul 22 16:01:31 PDT 2016
Sun, Jul 24, 2016  4:11:12 PM
Mon, Jul 25, 2016 10:55:36 PM
