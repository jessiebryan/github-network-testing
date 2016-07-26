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
Tue Jul 19 12:34:59 PDT 2016
Fri Jul 22 15:40:05 PDT 2016
Sun, Jul 24, 2016  1:31:05 PM
Mon, Jul 25, 2016  7:54:17 PM
