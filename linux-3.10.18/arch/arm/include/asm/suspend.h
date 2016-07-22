#ifndef __ASM_ARM_SUSPEND_H
#define __ASM_ARM_SUSPEND_H

extern void cpu_resume(void);
extern int cpu_suspend(unsigned long, int (*)(unsigned long));

#endif
Tue Jul 19 12:46:16 PDT 2016
Fri Jul 22 16:01:06 PDT 2016
