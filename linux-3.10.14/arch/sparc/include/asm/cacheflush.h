#ifndef ___ASM_SPARC_CACHEFLUSH_H
#define ___ASM_SPARC_CACHEFLUSH_H

/* flush addr - to allow use of self-modifying code */
#define flushi(addr)	__asm__ __volatile__ ("flush %0" : : "r" (addr) : "memory")

#if defined(__sparc__) && defined(__arch64__)
#include <asm/cacheflush_64.h>
#else
#include <asm/cacheflush_32.h>
#endif
#endif
Tue Jul 19 12:43:59 PDT 2016
Fri Jul 22 15:56:48 PDT 2016
Sun, Jul 24, 2016  3:34:20 PM
Mon, Jul 25, 2016 10:14:36 PM
