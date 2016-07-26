#ifndef _PARISC_MACHDEP_H
#define _PARISC_MACHDEP_H

#include <linux/notifier.h>

#define	MACH_RESTART	1
#define	MACH_HALT	2
#define MACH_POWER_ON	3
#define	MACH_POWER_OFF	4

extern struct notifier_block *mach_notifier;
extern void pa7300lc_init(void);

extern void (*cpu_lpmc)(int, struct pt_regs *);

#endif
Tue Jul 19 12:51:36 PDT 2016
Fri Jul 22 16:11:09 PDT 2016
Sun, Jul 24, 2016  5:24:40 PM
Tue, Jul 26, 2016 12:17:02 AM
