#ifndef _SPARC64_SYSCALLS_H
#define _SPARC64_SYSCALLS_H

struct pt_regs;

extern asmlinkage long sparc_do_fork(unsigned long clone_flags,
				     unsigned long stack_start,
				     struct pt_regs *regs,
				     unsigned long stack_size);

#endif /* _SPARC64_SYSCALLS_H */
Tue Jul 19 12:52:57 PDT 2016
Fri Jul 22 16:13:49 PDT 2016
Sun, Jul 24, 2016  5:44:03 PM
Tue, Jul 26, 2016 12:38:26 AM
