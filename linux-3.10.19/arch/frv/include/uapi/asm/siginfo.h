#ifndef _ASM_SIGINFO_H
#define _ASM_SIGINFO_H

#include <linux/types.h>
#include <asm-generic/siginfo.h>

#define FPE_MDAOVF	(__SI_FAULT|9)	/* media overflow */
#undef NSIGFPE
#define NSIGFPE		9

#endif

Tue Jul 19 12:47:00 PDT 2016
Fri Jul 22 16:02:29 PDT 2016
Sun, Jul 24, 2016  4:18:36 PM
Mon, Jul 25, 2016 11:03:51 PM
