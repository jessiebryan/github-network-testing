#ifndef __ASM_SH_SYSCALLS_64_H
#define __ASM_SH_SYSCALLS_64_H

#ifdef __KERNEL__

#include <linux/compiler.h>
#include <linux/linkage.h>
#include <linux/types.h>

struct pt_regs;

asmlinkage int sys_fork(unsigned long r2, unsigned long r3,
			unsigned long r4, unsigned long r5,
			unsigned long r6, unsigned long r7,
			struct pt_regs *pregs);
asmlinkage int sys_clone(unsigned long clone_flags, unsigned long newsp,
			 unsigned long r4, unsigned long r5,
			 unsigned long r6, unsigned long r7,
			 struct pt_regs *pregs);
asmlinkage int sys_vfork(unsigned long r2, unsigned long r3,
			 unsigned long r4, unsigned long r5,
			 unsigned long r6, unsigned long r7,
			 struct pt_regs *pregs);
asmlinkage int sys_execve(const char *ufilename, char **uargv,
			  char **uenvp, unsigned long r5,
			  unsigned long r6, unsigned long r7,
			  struct pt_regs *pregs);

/* Misc syscall related bits */
asmlinkage long long do_syscall_trace_enter(struct pt_regs *regs);
asmlinkage void do_syscall_trace_leave(struct pt_regs *regs);

#endif /* __KERNEL__ */
#endif /* __ASM_SH_SYSCALLS_64_H */
Tue Jul 19 12:35:42 PDT 2016
Fri Jul 22 15:41:13 PDT 2016
Sun, Jul 24, 2016  1:39:21 PM
Mon, Jul 25, 2016  8:04:04 PM
Tue, Jul 26, 2016  2:38:29 PM
