#ifndef __ASM_POWERPC_SYSCALLS_H
#define __ASM_POWERPC_SYSCALLS_H
#ifdef __KERNEL__

#include <linux/compiler.h>
#include <linux/linkage.h>
#include <linux/types.h>

struct rtas_args;

asmlinkage unsigned long sys_mmap(unsigned long addr, size_t len,
		unsigned long prot, unsigned long flags,
		unsigned long fd, off_t offset);
asmlinkage unsigned long sys_mmap2(unsigned long addr, size_t len,
		unsigned long prot, unsigned long flags,
		unsigned long fd, unsigned long pgoff);
asmlinkage long ppc64_personality(unsigned long personality);
asmlinkage int ppc_rtas(struct rtas_args __user *uargs);

#endif /* __KERNEL__ */
#endif /* __ASM_POWERPC_SYSCALLS_H */
Tue Jul 19 12:44:35 PDT 2016
Fri Jul 22 15:57:55 PDT 2016
Sun, Jul 24, 2016  3:43:08 PM
Mon, Jul 25, 2016 10:24:22 PM
