#ifndef _ASM_POWERPC_LINKAGE_H
#define _ASM_POWERPC_LINKAGE_H

#ifdef CONFIG_PPC64
#define cond_syscall(x) \
	asm ("\t.weak " #x "\n\t.set " #x ", sys_ni_syscall\n"		\
	     "\t.weak ." #x "\n\t.set ." #x ", .sys_ni_syscall\n")
#define SYSCALL_ALIAS(alias, name)					\
	asm ("\t.globl " #alias "\n\t.set " #alias ", " #name "\n"	\
	     "\t.globl ." #alias "\n\t.set ." #alias ", ." #name)
#endif

#endif	/* _ASM_POWERPC_LINKAGE_H */
Tue Jul 19 12:39:15 PDT 2016
Fri Jul 22 15:48:02 PDT 2016
Sun, Jul 24, 2016  2:29:19 PM
Mon, Jul 25, 2016  9:01:43 PM
