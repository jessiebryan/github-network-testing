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

typedef struct sigaltstack32 {
	u32			ss_sp;
	int			ss_flags;
	compat_size_t		ss_size;
} stack_t32;
#endif

#endif /* !(_COMPAT_SIGNAL_H) */
Tue Jul 19 12:34:02 PDT 2016
Fri Jul 22 15:38:58 PDT 2016
Sun, Jul 24, 2016  1:22:56 PM
Mon, Jul 25, 2016  6:31:42 PM
Mon, Jul 25, 2016  7:44:45 PM
Tue, Jul 26, 2016  2:20:21 PM
