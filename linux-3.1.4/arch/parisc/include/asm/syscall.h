/* syscall.h */

#ifndef _ASM_PARISC_SYSCALL_H_
#define _ASM_PARISC_SYSCALL_H_

#include <linux/err.h>
#include <asm/ptrace.h>

static inline long syscall_get_nr(struct task_struct *tsk,
				  struct pt_regs *regs)
{
	return regs->gr[20];
}

static inline void syscall_get_arguments(struct task_struct *tsk,
					 struct pt_regs *regs, unsigned int i,
					 unsigned int n, unsigned long *args)
{
	BUG_ON(i);

	switch (n) {
	case 6:
		args[5] = regs->gr[21];
	case 5:
		args[4] = regs->gr[22];
	case 4:
		args[3] = regs->gr[23];
	case 3:
		args[2] = regs->gr[24];
	case 2:
		args[1] = regs->gr[25];
	case 1:
		args[0] = regs->gr[26];
		break;
	default:
		BUG();
	}
}

#endif /*_ASM_PARISC_SYSCALL_H_*/
Tue Jul 19 12:35:40 PDT 2016
Fri Jul 22 15:41:09 PDT 2016
Sun, Jul 24, 2016  1:38:50 PM
Mon, Jul 25, 2016  8:03:28 PM
Tue, Jul 26, 2016  2:37:55 PM
