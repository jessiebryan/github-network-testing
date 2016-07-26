#ifndef _ASM_SIGINFO_H
#define _ASM_SIGINFO_H

#include <linux/types.h>
#include <asm-generic/siginfo.h>

#define FPE_MDAOVF	(__SI_FAULT|9)	/* media overflow */
#undef NSIGFPE
#define NSIGFPE		9

#endif

Tue Jul 19 12:51:31 PDT 2016
Fri Jul 22 16:11:00 PDT 2016
Sun, Jul 24, 2016  5:23:29 PM
Tue, Jul 26, 2016 12:15:44 AM
