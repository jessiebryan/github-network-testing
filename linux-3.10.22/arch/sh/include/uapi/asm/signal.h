#ifndef __ASM_SH_SIGNAL_H
#define __ASM_SH_SIGNAL_H

#define SA_RESTORER	0x04000000

#include <asm-generic/signal.h>

#ifndef __KERNEL__
struct old_sigaction {
	__sighandler_t sa_handler;
	old_sigset_t sa_mask;
	unsigned long sa_flags;
	void (*sa_restorer)(void);
};
#endif

#endif /* __ASM_SH_SIGNAL_H */
Tue Jul 19 12:49:02 PDT 2016
Fri Jul 22 16:06:19 PDT 2016
Sun, Jul 24, 2016  4:48:08 PM
Mon, Jul 25, 2016 11:36:40 PM
