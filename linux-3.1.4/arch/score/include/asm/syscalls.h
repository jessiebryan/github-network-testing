#ifndef _ASM_SCORE_SYSCALLS_H
#define _ASM_SCORE_SYSCALLS_H

asmlinkage long score_clone(struct pt_regs *regs);
asmlinkage long score_execve(struct pt_regs *regs);
asmlinkage long score_sigaltstack(struct pt_regs *regs);
asmlinkage long score_rt_sigreturn(struct pt_regs *regs);

#include <asm-generic/syscalls.h>

#endif /* _ASM_SCORE_SYSCALLS_H */
Tue Jul 19 12:35:41 PDT 2016
Fri Jul 22 15:41:13 PDT 2016
Sun, Jul 24, 2016  1:39:14 PM
Mon, Jul 25, 2016  8:03:57 PM
