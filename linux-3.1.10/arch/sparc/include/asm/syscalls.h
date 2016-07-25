#ifndef _SPARC64_SYSCALLS_H
#define _SPARC64_SYSCALLS_H

struct pt_regs;

extern asmlinkage long sparc_do_fork(unsigned long clone_flags,
				     unsigned long stack_start,
				     struct pt_regs *regs,
				     unsigned long stack_size);

extern asmlinkage int sparc_execve(struct pt_regs *regs);

#endif /* _SPARC64_SYSCALLS_H */
Tue Jul 19 12:33:25 PDT 2016
Fri Jul 22 15:37:55 PDT 2016
Sun, Jul 24, 2016  1:14:48 PM
