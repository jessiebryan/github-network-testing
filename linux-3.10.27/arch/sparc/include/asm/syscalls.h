#ifndef _SPARC64_SYSCALLS_H
#define _SPARC64_SYSCALLS_H

struct pt_regs;

extern asmlinkage long sparc_do_fork(unsigned long clone_flags,
				     unsigned long stack_start,
				     struct pt_regs *regs,
				     unsigned long stack_size);

#endif /* _SPARC64_SYSCALLS_H */
Tue Jul 19 12:52:17 PDT 2016
Fri Jul 22 16:12:32 PDT 2016
Sun, Jul 24, 2016  5:34:45 PM
Tue, Jul 26, 2016 12:28:10 AM
