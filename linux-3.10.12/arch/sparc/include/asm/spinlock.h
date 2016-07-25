#ifndef ___ASM_SPARC_SPINLOCK_H
#define ___ASM_SPARC_SPINLOCK_H
#if defined(__sparc__) && defined(__arch64__)
#include <asm/spinlock_64.h>
#else
#include <asm/spinlock_32.h>
#endif
#endif
Tue Jul 19 12:42:42 PDT 2016
Fri Jul 22 15:54:26 PDT 2016
Sun, Jul 24, 2016  3:15:59 PM
