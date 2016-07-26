#ifndef _ASM_SIGINFO_H
#define _ASM_SIGINFO_H

#include <linux/types.h>
#include <asm-generic/siginfo.h>

#define FPE_MDAOVF	(__SI_FAULT|9)	/* media overflow */
#undef NSIGFPE
#define NSIGFPE		9

#endif

Tue Jul 19 12:41:06 PDT 2016
Fri Jul 22 15:51:41 PDT 2016
Sun, Jul 24, 2016  2:55:38 PM
Mon, Jul 25, 2016  9:31:15 PM
