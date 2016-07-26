#ifndef _ASM_M32R_SIGNAL_H
#define _ASM_M32R_SIGNAL_H

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

#endif  /* _ASM_M32R_SIGNAL_H */
Tue Jul 19 12:48:56 PDT 2016
Fri Jul 22 16:06:06 PDT 2016
Sun, Jul 24, 2016  4:46:38 PM
Mon, Jul 25, 2016 11:34:59 PM
