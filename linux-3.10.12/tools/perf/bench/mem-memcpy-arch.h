
#ifdef ARCH_X86_64

#define MEMCPY_FN(fn, name, desc)		\
	extern void *fn(void *, const void *, size_t);

#include "mem-memcpy-x86-64-asm-def.h"

#undef MEMCPY_FN

#endif

Tue Jul 19 12:43:06 PDT 2016
Fri Jul 22 15:55:09 PDT 2016
Sun, Jul 24, 2016  3:21:46 PM
