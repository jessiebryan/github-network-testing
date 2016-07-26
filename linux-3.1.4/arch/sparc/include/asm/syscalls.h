#ifndef _SPARC64_SYSCALLS_H
#define _SPARC64_SYSCALLS_H

struct pt_regs;

extern asmlinkage long sparc_do_fork(unsigned long clone_flags,
				     unsigned long stack_start,
				     struct pt_regs *regs,
				     unsigned long stack_size);

extern asmlinkage int sparc_execve(struct pt_regs *regs);

#endif /* _SPARC64_SYSCALLS_H */
Tue Jul 19 12:35:43 PDT 2016
Fri Jul 22 15:41:15 PDT 2016
Sun, Jul 24, 2016  1:39:33 PM
Mon, Jul 25, 2016  8:04:20 PM
