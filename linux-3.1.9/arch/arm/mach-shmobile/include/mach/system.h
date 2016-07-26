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
Tue Jul 19 12:37:53 PDT 2016
Fri Jul 22 15:45:22 PDT 2016
Sun, Jul 24, 2016  2:10:00 PM
Mon, Jul 25, 2016  8:40:14 PM
