#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define cond_syscall(x)  asm(".weak\t" #x "\n" #x " = sys_ni_syscall")
#define SYSCALL_ALIAS(alias, name)					\
	asm ( #alias " = " #name "\n\t.globl " #alias)

#endif
Tue Jul 19 12:41:40 PDT 2016
Fri Jul 22 15:52:48 PDT 2016
Sun, Jul 24, 2016  3:03:28 PM
Mon, Jul 25, 2016  9:40:04 PM
