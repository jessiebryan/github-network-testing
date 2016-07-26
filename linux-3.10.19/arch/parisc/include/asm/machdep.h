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
Tue Jul 19 12:47:05 PDT 2016
Fri Jul 22 16:02:37 PDT 2016
Sun, Jul 24, 2016  4:19:46 PM
Mon, Jul 25, 2016 11:05:08 PM
