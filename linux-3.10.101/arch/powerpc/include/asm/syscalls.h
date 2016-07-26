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
Tue Jul 19 12:40:33 PDT 2016
Fri Jul 22 15:50:37 PDT 2016
Sun, Jul 24, 2016  2:47:48 PM
Mon, Jul 25, 2016  9:22:24 PM
