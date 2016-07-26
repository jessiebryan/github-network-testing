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
Tue Jul 19 12:36:47 PDT 2016
Fri Jul 22 15:43:23 PDT 2016
Sun, Jul 24, 2016  1:55:17 PM
Mon, Jul 25, 2016  8:22:52 PM
