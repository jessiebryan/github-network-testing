#ifndef _ASM_SCORE_SYSCALLS_H
#define _ASM_SCORE_SYSCALLS_H

asmlinkage long score_clone(struct pt_regs *regs);
asmlinkage long score_execve(struct pt_regs *regs);
asmlinkage long score_sigaltstack(struct pt_regs *regs);
asmlinkage long score_rt_sigreturn(struct pt_regs *regs);

#include <asm-generic/syscalls.h>

#endif /* _ASM_SCORE_SYSCALLS_H */
Tue Jul 19 12:37:24 PDT 2016
Fri Jul 22 15:44:33 PDT 2016
Sun, Jul 24, 2016  2:03:59 PM
Mon, Jul 25, 2016  8:33:11 PM
