#ifndef ___ASM_SPARC_ATOMIC_H
#define ___ASM_SPARC_ATOMIC_H
#if defined(__sparc__) && defined(__arch64__)
#include <asm/atomic_64.h>
#else
#include <asm/atomic_32.h>
#endif
#endif
Tue Jul 19 12:50:20 PDT 2016
Fri Jul 22 16:08:44 PDT 2016
