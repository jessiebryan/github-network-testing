#ifndef _ASMAXP_SIGNAL_H
#define _ASMAXP_SIGNAL_H

#include <uapi/asm/signal.h>

/* Digital Unix defines 64 signals.  Most things should be clean enough
   to redefine this at will, if care is taken to make libc match.  */

#define _NSIG		64
#define _NSIG_BPW	64
#define _NSIG_WORDS	(_NSIG / _NSIG_BPW)

typedef unsigned long old_sigset_t;		/* at least 32 bits */

typedef struct {
	unsigned long sig[_NSIG_WORDS];
} sigset_t;

struct osf_sigaction {
	__sighandler_t	sa_handler;
	old_sigset_t	sa_mask;
	int		sa_flags;
};

#define __ARCH_HAS_KA_RESTORER
#include <asm/sigcontext.h>
#endif
Tue Jul 19 12:46:55 PDT 2016
Fri Jul 22 16:02:17 PDT 2016
Sun, Jul 24, 2016  4:17:14 PM
Mon, Jul 25, 2016 11:02:19 PM
