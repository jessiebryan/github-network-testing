#ifndef ___ASM_SPARC_PROCESSOR_H
#define ___ASM_SPARC_PROCESSOR_H
#if defined(__sparc__) && defined(__arch64__)
#include <asm/processor_64.h>
#else
#include <asm/processor_32.h>
#endif

#define nop() 		__asm__ __volatile__ ("nop")

#endif
Tue Jul 19 12:43:20 PDT 2016
Fri Jul 22 15:55:36 PDT 2016
Sun, Jul 24, 2016  3:25:12 PM
Mon, Jul 25, 2016 10:04:26 PM
