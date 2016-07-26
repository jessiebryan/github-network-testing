#ifndef __ASM_SH_SYSCALLS_H
#define __ASM_SH_SYSCALLS_H

#ifdef __KERNEL__

asmlinkage int old_mmap(unsigned long addr, unsigned long len,
			unsigned long prot, unsigned long flags,
			int fd, unsigned long off);
asmlinkage long sys_mmap2(unsigned long addr, unsigned long len,
			  unsigned long prot, unsigned long flags,
			  unsigned long fd, unsigned long pgoff);

#ifdef CONFIG_SUPERH32
# include <asm/syscalls_32.h>
#else
# include <asm/syscalls_64.h>
#endif

#endif /* __KERNEL__ */
#endif /* __ASM_SH_SYSCALLS_H */
Tue Jul 19 12:43:20 PDT 2016
Fri Jul 22 15:55:35 PDT 2016
Sun, Jul 24, 2016  3:25:01 PM
Mon, Jul 25, 2016 10:04:13 PM
