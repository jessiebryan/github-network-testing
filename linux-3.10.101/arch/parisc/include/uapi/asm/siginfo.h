#ifndef _PARISC_SIGINFO_H
#define _PARISC_SIGINFO_H

#if defined(__LP64__)
#define __ARCH_SI_PREAMBLE_SIZE   (4 * sizeof(int))
#endif

#include <asm-generic/siginfo.h>

#undef NSIGTRAP
#define NSIGTRAP	4

#endif
Tue Jul 19 12:40:32 PDT 2016
Fri Jul 22 15:50:35 PDT 2016
