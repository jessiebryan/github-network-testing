#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define cond_syscall(x)  asm(".weak\t" #x "\n" #x " = sys_ni_syscall")
#define SYSCALL_ALIAS(alias, name)					\
	asm ( #alias " = " #name "\n\t.globl " #alias)

#endif
Tue Jul 19 12:38:25 PDT 2016
Fri Jul 22 15:46:23 PDT 2016
Sun, Jul 24, 2016  2:17:26 PM
Mon, Jul 25, 2016  8:48:27 PM
