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
Tue Jul 19 12:36:06 PDT 2016
Fri Jul 22 15:42:00 PDT 2016
Sun, Jul 24, 2016  1:45:16 PM
Mon, Jul 25, 2016  8:11:03 PM
