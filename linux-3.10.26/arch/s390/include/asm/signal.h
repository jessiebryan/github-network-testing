/*
 *  S390 version
 *
 *  Derived from "include/asm-i386/signal.h"
 */
#ifndef _ASMS390_SIGNAL_H
#define _ASMS390_SIGNAL_H

#include <uapi/asm/signal.h>

/* Most things should be clean enough to redefine this at will, if care
   is taken to make libc match.  */
#include <asm/sigcontext.h>
#define _NSIG           _SIGCONTEXT_NSIG
#define _NSIG_BPW       _SIGCONTEXT_NSIG_BPW
#define _NSIG_WORDS     _SIGCONTEXT_NSIG_WORDS

typedef unsigned long old_sigset_t;             /* at least 32 bits */

typedef struct {
        unsigned long sig[_NSIG_WORDS];
} sigset_t;

#define __ARCH_HAS_SA_RESTORER
#endif
Tue Jul 19 12:51:37 PDT 2016
Fri Jul 22 16:11:12 PDT 2016
Sun, Jul 24, 2016  5:25:02 PM
Tue, Jul 26, 2016 12:17:27 AM
