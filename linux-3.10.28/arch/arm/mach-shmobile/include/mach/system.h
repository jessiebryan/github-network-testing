#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <asm/system_misc.h>

static inline void arch_reset(char mode, const char *cmd)
{
	soft_restart(0);
}

#endif
Tue Jul 19 12:52:45 PDT 2016
Fri Jul 22 16:13:27 PDT 2016
Sun, Jul 24, 2016  5:41:25 PM
Tue, Jul 26, 2016 12:35:31 AM
