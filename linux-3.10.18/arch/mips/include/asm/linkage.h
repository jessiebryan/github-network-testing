#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#ifdef __ASSEMBLY__
#include <asm/asm.h>
#endif

#define __weak __attribute__((weak))
#define cond_syscall(x) asm(".weak\t" #x "\n" #x "\t=\tsys_ni_syscall")
#define SYSCALL_ALIAS(alias, name)					\
	asm ( #alias " = " #name "\n\t.globl " #alias)

#endif
Tue Jul 19 12:46:24 PDT 2016
Fri Jul 22 16:01:22 PDT 2016
Sun, Jul 24, 2016  4:10:03 PM
