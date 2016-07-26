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
Tue Jul 19 12:52:12 PDT 2016
Fri Jul 22 16:12:22 PDT 2016
Sun, Jul 24, 2016  5:33:28 PM
Tue, Jul 26, 2016 12:26:45 AM
