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
Tue Jul 19 12:41:57 PDT 2016
Fri Jul 22 15:53:14 PDT 2016
Sun, Jul 24, 2016  3:06:42 PM
Mon, Jul 25, 2016  9:43:43 PM
