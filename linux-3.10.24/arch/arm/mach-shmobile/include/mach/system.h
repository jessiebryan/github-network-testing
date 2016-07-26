#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <asm/system_misc.h>

static inline void arch_reset(char mode, const char *cmd)
{
	soft_restart(0);
}

#endif
Tue Jul 19 12:50:09 PDT 2016
Fri Jul 22 16:08:24 PDT 2016
Sun, Jul 24, 2016  5:04:13 PM
Mon, Jul 25, 2016 11:54:26 PM
