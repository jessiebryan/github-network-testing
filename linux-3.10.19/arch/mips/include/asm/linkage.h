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
Tue Jul 19 12:47:03 PDT 2016
Fri Jul 22 16:02:33 PDT 2016
Sun, Jul 24, 2016  4:19:16 PM
Mon, Jul 25, 2016 11:04:34 PM
