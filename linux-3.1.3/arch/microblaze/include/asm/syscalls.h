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
Tue Jul 19 12:34:55 PDT 2016
Fri Jul 22 15:39:56 PDT 2016
Sun, Jul 24, 2016  1:30:00 PM
Mon, Jul 25, 2016  6:40:10 PM
Mon, Jul 25, 2016  7:53:01 PM
Tue, Jul 26, 2016  2:28:09 PM
