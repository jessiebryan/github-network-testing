#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <asm/system_misc.h>

static inline void arch_reset(char mode, const char *cmd)
{
	soft_restart(0);
}

#endif
Tue Jul 19 12:41:03 PDT 2016
Fri Jul 22 15:51:35 PDT 2016
Sun, Jul 24, 2016  2:54:57 PM
Mon, Jul 25, 2016  9:30:28 PM
