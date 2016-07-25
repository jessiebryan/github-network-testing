
#ifdef ARCH_X86_64

#define MEMCPY_FN(fn, name, desc)		\
	extern void *fn(void *, const void *, size_t);

#include "mem-memcpy-x86-64-asm-def.h"

#undef MEMCPY_FN

#endif

Tue Jul 19 12:48:10 PDT 2016
Fri Jul 22 16:04:39 PDT 2016
Sun, Jul 24, 2016  4:35:35 PM
