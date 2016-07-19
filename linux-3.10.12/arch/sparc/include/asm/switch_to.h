#ifndef ___ASM_SPARC_SWITCH_TO_H
#define ___ASM_SPARC_SWITCH_TO_H
#if defined(__sparc__) && defined(__arch64__)
#include <asm/switch_to_64.h>
#else
#include <asm/switch_to_32.h>
#endif
#endif
Tue Jul 19 12:42:42 PDT 2016
