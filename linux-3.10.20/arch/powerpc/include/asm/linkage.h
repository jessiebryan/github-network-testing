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
Tue Jul 19 12:47:44 PDT 2016
Fri Jul 22 16:03:50 PDT 2016
Sun, Jul 24, 2016  4:29:10 PM
Mon, Jul 25, 2016 11:15:33 PM
