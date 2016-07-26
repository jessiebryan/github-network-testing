#ifndef __ASM_SH_SIGNAL_H
#define __ASM_SH_SIGNAL_H

#define SA_RESTORER	0x04000000

#include <asm-generic/signal.h>

struct old_sigaction {
	__sighandler_t sa_handler;
	old_sigset_t sa_mask;
	unsigned long sa_flags;
	void (*sa_restorer)(void);
};

#endif /* __ASM_SH_SIGNAL_H */
Tue Jul 19 12:34:01 PDT 2016
Fri Jul 22 15:38:57 PDT 2016
Sun, Jul 24, 2016  1:22:50 PM
Mon, Jul 25, 2016  6:31:34 PM
Mon, Jul 25, 2016  7:44:37 PM
