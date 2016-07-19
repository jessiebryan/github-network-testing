#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define cond_syscall(x)  asm(".weak\t" #x "\n" #x " = sys_ni_syscall")
#define SYSCALL_ALIAS(alias, name)					\
	asm ( #alias " = " #name "\n\t.globl " #alias)

#endif
Tue Jul 19 12:41:00 PDT 2016
