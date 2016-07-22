#ifndef __ASM_ARM_SUSPEND_H
#define __ASM_ARM_SUSPEND_H

extern void cpu_resume(void);
extern int cpu_suspend(unsigned long, int (*)(unsigned long));

#endif
Tue Jul 19 12:51:26 PDT 2016
Fri Jul 22 16:10:49 PDT 2016
