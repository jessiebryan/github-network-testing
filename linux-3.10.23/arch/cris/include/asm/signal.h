#ifndef _ASM_CRIS_SIGNAL_H
#define _ASM_CRIS_SIGNAL_H

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

#endif
Tue Jul 19 12:49:34 PDT 2016
Fri Jul 22 16:07:16 PDT 2016
Sun, Jul 24, 2016  4:55:26 PM
