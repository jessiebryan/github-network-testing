#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <asm/system_misc.h>

static inline void arch_reset(char mode, const char *cmd)
{
	soft_restart(0);
}

#endif
Tue Jul 19 12:38:28 PDT 2016
Fri Jul 22 15:46:29 PDT 2016
Sun, Jul 24, 2016  2:18:09 PM
Mon, Jul 25, 2016  8:49:15 PM
