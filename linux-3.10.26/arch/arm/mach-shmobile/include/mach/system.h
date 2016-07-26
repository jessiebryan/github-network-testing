#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <asm/system_misc.h>

static inline void arch_reset(char mode, const char *cmd)
{
	soft_restart(0);
}

#endif
Tue Jul 19 12:51:28 PDT 2016
Fri Jul 22 16:10:53 PDT 2016
Sun, Jul 24, 2016  5:22:48 PM
Tue, Jul 26, 2016 12:14:59 AM
