#ifndef _SPARC64_SYSCALLS_H
#define _SPARC64_SYSCALLS_H

struct pt_regs;

extern asmlinkage long sparc_do_fork(unsigned long clone_flags,
				     unsigned long stack_start,
				     struct pt_regs *regs,
				     unsigned long stack_size);

#endif /* _SPARC64_SYSCALLS_H */
Tue Jul 19 12:41:58 PDT 2016
Fri Jul 22 15:53:14 PDT 2016
Sun, Jul 24, 2016  3:06:48 PM
Mon, Jul 25, 2016  9:43:50 PM
