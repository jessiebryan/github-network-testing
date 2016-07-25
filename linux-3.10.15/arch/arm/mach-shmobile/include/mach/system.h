#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <asm/system_misc.h>

static inline void arch_reset(char mode, const char *cmd)
{
	soft_restart(0);
}

#endif
Tue Jul 19 12:44:27 PDT 2016
Fri Jul 22 15:57:39 PDT 2016
Sun, Jul 24, 2016  3:41:05 PM
