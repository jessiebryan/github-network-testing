/*
 * arch/arm/mach-shark/include/mach/system.h
 *
 * by Alexander Schulz
 */
#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

/* Found in arch/mach-shark/core.c */
extern void arch_reset(char mode, const char *cmd);

static inline void arch_idle(void)
{
}

#endif
Tue Jul 19 12:37:14 PDT 2016
Fri Jul 22 15:44:15 PDT 2016
Sun, Jul 24, 2016  2:01:45 PM
Mon, Jul 25, 2016  8:30:32 PM
