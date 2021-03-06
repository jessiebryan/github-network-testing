#ifndef __ASM_GENERIC_SYSCALLS_H
#define __ASM_GENERIC_SYSCALLS_H

#include <linux/compiler.h>
#include <linux/linkage.h>

/*
 * Calling conventions for these system calls can differ, so
 * it's possible to override them.
 */

#ifndef sys_mmap2
asmlinkage long sys_mmap2(unsigned long addr, unsigned long len,
			unsigned long prot, unsigned long flags,
			unsigned long fd, unsigned long pgoff);
#endif

#ifndef sys_mmap
asmlinkage long sys_mmap(unsigned long addr, unsigned long len,
			unsigned long prot, unsigned long flags,
			unsigned long fd, off_t pgoff);
#endif

#ifndef sys_rt_sigreturn
asmlinkage long sys_rt_sigreturn(struct pt_regs *regs);
#endif

#endif /* __ASM_GENERIC_SYSCALLS_H */
Tue Jul 19 12:51:14 PDT 2016
Fri Jul 22 16:10:27 PDT 2016
Sun, Jul 24, 2016  5:19:32 PM
Tue, Jul 26, 2016 12:11:23 AM
