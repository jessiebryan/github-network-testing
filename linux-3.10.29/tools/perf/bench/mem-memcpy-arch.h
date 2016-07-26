
#ifdef ARCH_X86_64

#define MEMCPY_FN(fn, name, desc)		\
	extern void *fn(void *, const void *, size_t);

#include "mem-memcpy-x86-64-asm-def.h"

#undef MEMCPY_FN

#endif

Tue Jul 19 12:54:00 PDT 2016
Fri Jul 22 16:15:51 PDT 2016
Sun, Jul 24, 2016  5:59:13 PM
Tue, Jul 26, 2016 12:55:09 AM
