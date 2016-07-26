#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <asm/system_misc.h>

static inline void arch_reset(char mode, const char *cmd)
{
	soft_restart(0);
}

#endif
Tue Jul 19 12:41:44 PDT 2016
Fri Jul 22 15:52:54 PDT 2016
Sun, Jul 24, 2016  3:04:11 PM
Mon, Jul 25, 2016  9:40:53 PM
