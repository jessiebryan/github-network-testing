#ifndef __ASM_ALPHA_BITSPERLONG_H
#define __ASM_ALPHA_BITSPERLONG_H

#if defined(__sparc__) && defined(__arch64__)
#define __BITS_PER_LONG 64
#else
#define __BITS_PER_LONG 32
#endif

#include <asm-generic/bitsperlong.h>

#endif /* __ASM_ALPHA_BITSPERLONG_H */

Tue Jul 19 12:41:58 PDT 2016
Fri Jul 22 15:53:15 PDT 2016
