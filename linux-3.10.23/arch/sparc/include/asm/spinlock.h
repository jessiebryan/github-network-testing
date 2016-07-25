#ifndef ___ASM_SPARC_SPINLOCK_H
#define ___ASM_SPARC_SPINLOCK_H
#if defined(__sparc__) && defined(__arch64__)
#include <asm/spinlock_64.h>
#else
#include <asm/spinlock_32.h>
#endif
#endif
Tue Jul 19 12:49:42 PDT 2016
Fri Jul 22 16:07:32 PDT 2016
Sun, Jul 24, 2016  4:57:29 PM
