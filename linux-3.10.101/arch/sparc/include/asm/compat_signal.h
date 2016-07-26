#ifndef _COMPAT_SIGNAL_H
#define _COMPAT_SIGNAL_H

#include <linux/compat.h>
#include <asm/signal.h>

#ifdef CONFIG_COMPAT
struct __new_sigaction32 {
	unsigned		sa_handler;
	unsigned int    	sa_flags;
	unsigned		sa_restorer;     /* not used by Linux/SPARC yet */
	compat_sigset_t 	sa_mask;
};

struct __old_sigaction32 {
	unsigned		sa_handler;
	compat_old_sigset_t  	sa_mask;
	unsigned int    	sa_flags;
	unsigned		sa_restorer;     /* not used by Linux/SPARC yet */
};
#endif

#endif /* !(_COMPAT_SIGNAL_H) */
Tue Jul 19 12:40:35 PDT 2016
Fri Jul 22 15:50:40 PDT 2016
Sun, Jul 24, 2016  2:48:15 PM
Mon, Jul 25, 2016  9:22:55 PM
