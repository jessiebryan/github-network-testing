/*
 *  S390 version
 *
 *  Derived from "include/asm-i386/siginfo.h"
 */

#ifndef _S390_SIGINFO_H
#define _S390_SIGINFO_H

#ifdef __s390x__
#define __ARCH_SI_PREAMBLE_SIZE (4 * sizeof(int))
#endif

#include <asm-generic/siginfo.h>

#endif
Tue Jul 19 12:40:33 PDT 2016
Fri Jul 22 15:50:38 PDT 2016
Sun, Jul 24, 2016  2:48:00 PM
