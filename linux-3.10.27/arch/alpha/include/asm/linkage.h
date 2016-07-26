#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define cond_syscall(x)  asm(".weak\t" #x "\n" #x " = sys_ni_syscall")
#define SYSCALL_ALIAS(alias, name)					\
	asm ( #alias " = " #name "\n\t.globl " #alias)

#endif
Tue Jul 19 12:52:03 PDT 2016
Fri Jul 22 16:12:05 PDT 2016
Sun, Jul 24, 2016  5:31:23 PM
Tue, Jul 26, 2016 12:24:27 AM
