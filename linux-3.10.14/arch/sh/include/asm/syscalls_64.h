#ifndef __ASM_SH_SYSCALLS_64_H
#define __ASM_SH_SYSCALLS_64_H

#ifdef __KERNEL__

#include <linux/compiler.h>
#include <linux/linkage.h>
#include <linux/types.h>

struct pt_regs;

/* Misc syscall related bits */
asmlinkage long long do_syscall_trace_enter(struct pt_regs *regs);
asmlinkage void do_syscall_trace_leave(struct pt_regs *regs);

#endif /* __KERNEL__ */
#endif /* __ASM_SH_SYSCALLS_64_H */
Tue Jul 19 12:43:59 PDT 2016
Fri Jul 22 15:56:47 PDT 2016
Sun, Jul 24, 2016  3:34:14 PM
Mon, Jul 25, 2016 10:14:29 PM
