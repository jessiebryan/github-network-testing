#ifndef _H8300_SIGNAL_H
#define _H8300_SIGNAL_H

#include <uapi/asm/signal.h>

/* Most things should be clean enough to redefine this at will, if care
   is taken to make libc match.  */

#define _NSIG		64
#define _NSIG_BPW	32
#define _NSIG_WORDS	(_NSIG / _NSIG_BPW)

typedef unsigned long old_sigset_t;		/* at least 32 bits */

typedef struct {
	unsigned long sig[_NSIG_WORDS];
} sigset_t;

#define __ARCH_HAS_SA_RESTORER

#include <asm/sigcontext.h>
#undef __HAVE_ARCH_SIG_BITOPS

#endif /* _H8300_SIGNAL_H */
Tue Jul 19 12:50:52 PDT 2016
Fri Jul 22 16:09:44 PDT 2016
Sun, Jul 24, 2016  5:14:13 PM
Tue, Jul 26, 2016 12:05:30 AM
