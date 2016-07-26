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
Tue Jul 19 12:52:17 PDT 2016
Fri Jul 22 16:12:31 PDT 2016
Sun, Jul 24, 2016  5:34:37 PM
Tue, Jul 26, 2016 12:28:01 AM
