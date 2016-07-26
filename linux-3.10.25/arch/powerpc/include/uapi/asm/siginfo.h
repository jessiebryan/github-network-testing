#ifndef _ASM_POWERPC_SIGINFO_H
#define _ASM_POWERPC_SIGINFO_H

/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifdef __powerpc64__
#    define __ARCH_SI_PREAMBLE_SIZE	(4 * sizeof(int))
#endif

#include <asm-generic/siginfo.h>

#undef NSIGTRAP
#define NSIGTRAP	4

#endif	/* _ASM_POWERPC_SIGINFO_H */
Tue Jul 19 12:50:58 PDT 2016
Fri Jul 22 16:09:55 PDT 2016
Sun, Jul 24, 2016  5:15:36 PM
Tue, Jul 26, 2016 12:07:04 AM
