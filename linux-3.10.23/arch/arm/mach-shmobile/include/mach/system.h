#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <asm/system_misc.h>

static inline void arch_reset(char mode, const char *cmd)
{
	soft_restart(0);
}

#endif
Tue Jul 19 12:49:31 PDT 2016
Fri Jul 22 16:07:11 PDT 2016
Sun, Jul 24, 2016  4:54:52 PM
