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
Tue Jul 19 12:35:40 PDT 2016
Fri Jul 22 15:41:09 PDT 2016
Sun, Jul 24, 2016  1:38:48 PM
Mon, Jul 25, 2016  8:03:25 PM
Tue, Jul 26, 2016  2:37:53 PM
