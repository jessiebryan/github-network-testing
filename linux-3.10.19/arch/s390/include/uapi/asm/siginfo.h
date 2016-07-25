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
Tue Jul 19 12:47:07 PDT 2016
Fri Jul 22 16:02:40 PDT 2016
Sun, Jul 24, 2016  4:20:11 PM
