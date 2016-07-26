
#ifdef ARCH_X86_64

#define MEMCPY_FN(fn, name, desc)		\
	extern void *fn(void *, const void *, size_t);

#include "mem-memcpy-x86-64-asm-def.h"

#undef MEMCPY_FN

#endif

Tue Jul 19 12:36:36 PDT 2016
Fri Jul 22 15:43:01 PDT 2016
Sun, Jul 24, 2016  1:52:36 PM
Mon, Jul 25, 2016  8:19:42 PM
