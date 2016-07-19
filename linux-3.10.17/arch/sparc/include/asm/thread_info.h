#ifndef ___ASM_SPARC_THREAD_INFO_H
#define ___ASM_SPARC_THREAD_INFO_H
#if defined(__sparc__) && defined(__arch64__)
#include <asm/thread_info_64.h>
#else
#include <asm/thread_info_32.h>
#endif
#endif
Tue Jul 19 12:45:52 PDT 2016
