#ifndef _ASM_SIGINFO_H
#define _ASM_SIGINFO_H

#include <linux/types.h>
#include <asm-generic/siginfo.h>

#define FPE_MDAOVF	(__SI_FAULT|9)	/* media overflow */
#undef NSIGFPE
#define NSIGFPE		9

#endif

Tue Jul 19 12:49:34 PDT 2016
Fri Jul 22 16:07:17 PDT 2016
Sun, Jul 24, 2016  4:55:32 PM
Mon, Jul 25, 2016 11:44:56 PM
