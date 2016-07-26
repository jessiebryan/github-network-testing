#ifndef _SPARC64_SYSCALLS_H
#define _SPARC64_SYSCALLS_H

struct pt_regs;

extern asmlinkage long sparc_do_fork(unsigned long clone_flags,
				     unsigned long stack_start,
				     struct pt_regs *regs,
				     unsigned long stack_size);

extern asmlinkage int sparc_execve(struct pt_regs *regs);

#endif /* _SPARC64_SYSCALLS_H */
Tue Jul 19 12:38:04 PDT 2016
Fri Jul 22 15:45:42 PDT 2016
Sun, Jul 24, 2016  2:12:32 PM
Mon, Jul 25, 2016  8:43:02 PM
