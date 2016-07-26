#ifndef _SPARC64_SYSCALLS_H
#define _SPARC64_SYSCALLS_H

struct pt_regs;

extern asmlinkage long sparc_do_fork(unsigned long clone_flags,
				     unsigned long stack_start,
				     struct pt_regs *regs,
				     unsigned long stack_size);

#endif /* _SPARC64_SYSCALLS_H */
Tue Jul 19 12:53:35 PDT 2016
Fri Jul 22 16:15:04 PDT 2016
Sun, Jul 24, 2016  5:53:23 PM
Tue, Jul 26, 2016 12:48:44 AM
