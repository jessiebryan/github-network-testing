#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#ifndef __ASSEMBLY__

#define asmlinkage CPP_ASMLINKAGE __attribute__((syscall_linkage))

#else

#include <asm/asmmacro.h>

#endif

#define cond_syscall(x) asm(".weak\t" #x "#\n" #x "#\t=\tsys_ni_syscall#")
#define SYSCALL_ALIAS(alias, name)					\
	asm ( #alias "# = " #name "#\n\t.globl " #alias "#")

#endif
Tue Jul 19 12:39:48 PDT 2016
Fri Jul 22 15:49:10 PDT 2016
Sun, Jul 24, 2016  2:37:22 PM
Mon, Jul 25, 2016  9:10:40 PM
