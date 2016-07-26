#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	cpu_reset(0);
}

#endif
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:45 PDT 2016
Sun, Jul 24, 2016  1:28:46 PM
Mon, Jul 25, 2016  6:38:42 PM
Mon, Jul 25, 2016  7:51:35 PM
Tue, Jul 26, 2016  2:26:47 PM
