#ifndef ___ASM_SPARC_PROCESSOR_H
#define ___ASM_SPARC_PROCESSOR_H
#if defined(__sparc__) && defined(__arch64__)
#include <asm/processor_64.h>
#else
#include <asm/processor_32.h>
#endif

#define nop() 		__asm__ __volatile__ ("nop")

#endif
Tue Jul 19 12:47:08 PDT 2016
Fri Jul 22 16:02:43 PDT 2016
Sun, Jul 24, 2016  4:20:31 PM
Mon, Jul 25, 2016 11:05:58 PM
