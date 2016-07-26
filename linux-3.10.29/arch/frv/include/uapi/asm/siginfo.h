#ifndef _ASM_SIGINFO_H
#define _ASM_SIGINFO_H

#include <linux/types.h>
#include <asm-generic/siginfo.h>

#define FPE_MDAOVF	(__SI_FAULT|9)	/* media overflow */
#undef NSIGFPE
#define NSIGFPE		9

#endif

Tue Jul 19 12:53:27 PDT 2016
Fri Jul 22 16:14:48 PDT 2016
Sun, Jul 24, 2016  5:51:26 PM
Tue, Jul 26, 2016 12:46:34 AM
