#ifndef _ASM_SIGINFO_H
#define _ASM_SIGINFO_H

#include <linux/types.h>
#include <asm-generic/siginfo.h>

#define FPE_MDAOVF	(__SI_FAULT|9)	/* media overflow */
#undef NSIGFPE
#define NSIGFPE		9

#endif

Tue Jul 19 12:52:48 PDT 2016
Fri Jul 22 16:13:33 PDT 2016
Sun, Jul 24, 2016  5:42:06 PM
Tue, Jul 26, 2016 12:36:16 AM
