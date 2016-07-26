#ifndef _PARISC_SIGINFO_H
#define _PARISC_SIGINFO_H

#if defined(__LP64__)
#define __ARCH_SI_PREAMBLE_SIZE   (4 * sizeof(int))
#endif

#include <asm-generic/siginfo.h>

#undef NSIGTRAP
#define NSIGTRAP	4

#endif
Tue Jul 19 12:41:11 PDT 2016
Fri Jul 22 15:51:52 PDT 2016
Sun, Jul 24, 2016  2:56:51 PM
Mon, Jul 25, 2016  9:32:37 PM
