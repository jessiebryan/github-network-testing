#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define cond_syscall(x)  asm(".weak\t" #x "\n" #x " = sys_ni_syscall")
#define SYSCALL_ALIAS(alias, name)					\
	asm ( #alias " = " #name "\n\t.globl " #alias)

#endif
Tue Jul 19 12:44:24 PDT 2016
Fri Jul 22 15:57:34 PDT 2016
Sun, Jul 24, 2016  3:40:22 PM
Mon, Jul 25, 2016 10:21:16 PM
