#ifndef __ASM_ARM_SUSPEND_H
#define __ASM_ARM_SUSPEND_H

extern void cpu_resume(void);
extern int cpu_suspend(unsigned long, int (*)(unsigned long));

#endif
Tue Jul 19 12:52:04 PDT 2016
Fri Jul 22 16:12:07 PDT 2016
