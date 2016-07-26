#ifndef __ASM_MICROBLAZE_SYSCALLS_H

asmlinkage long microblaze_vfork(struct pt_regs *regs);
asmlinkage long microblaze_clone(int flags, unsigned long stack,
							struct pt_regs *regs);
asmlinkage long microblaze_execve(const char __user *filenamei,
				  const char __user *const __user *argv,
				  const char __user *const __user *envp,
				  struct pt_regs *regs);

asmlinkage long sys_clone(int flags, unsigned long stack, struct pt_regs *regs);
#define sys_clone sys_clone

#include <asm-generic/syscalls.h>

#endif /* __ASM_MICROBLAZE_SYSCALLS_H */
Tue Jul 19 12:36:45 PDT 2016
Fri Jul 22 15:43:18 PDT 2016
Sun, Jul 24, 2016  1:54:44 PM
Mon, Jul 25, 2016  8:22:13 PM
