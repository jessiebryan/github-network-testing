#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <asm/system_misc.h>

static inline void arch_reset(char mode, const char *cmd)
{
	soft_restart(0);
}

#endif
Tue Jul 19 12:43:48 PDT 2016
Fri Jul 22 15:56:27 PDT 2016
Sun, Jul 24, 2016  3:31:49 PM
Mon, Jul 25, 2016 10:11:49 PM
