#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <asm/system_misc.h>

static inline void arch_reset(char mode, const char *cmd)
{
	soft_restart(0);
}

#endif
Tue Jul 19 12:46:18 PDT 2016
Fri Jul 22 16:01:10 PDT 2016
Sun, Jul 24, 2016  4:08:43 PM
Mon, Jul 25, 2016 10:52:50 PM
