#ifndef __ASM_ARM_SYSTEM_MISC_H
#define __ASM_ARM_SYSTEM_MISC_H

#ifndef __ASSEMBLY__

#include <linux/compiler.h>
#include <linux/linkage.h>
#include <linux/irqflags.h>

extern void cpu_init(void);

void soft_restart(unsigned long);
extern void (*arm_pm_restart)(char str, const char *cmd);
extern void (*arm_pm_idle)(void);

#define UDBG_UNDEFINED	(1 << 0)
#define UDBG_SYSCALL	(1 << 1)
#define UDBG_BADABORT	(1 << 2)
#define UDBG_SEGV	(1 << 3)
#define UDBG_BUS	(1 << 4)

extern unsigned int user_debug;

#endif /* !__ASSEMBLY__ */

#endif /* __ASM_ARM_SYSTEM_MISC_H */
Tue Jul 19 12:52:43 PDT 2016
Fri Jul 22 16:13:22 PDT 2016
Sun, Jul 24, 2016  5:40:55 PM
Tue, Jul 26, 2016 12:34:57 AM
