
#ifdef ARCH_X86_64

#define MEMSET_FN(fn, name, desc)		\
	extern void *fn(void *, int, size_t);

#include "mem-memset-x86-64-asm-def.h"

#undef MEMSET_FN

#endif

Tue Jul 19 12:41:39 PDT 2016
Fri Jul 22 15:52:47 PDT 2016
Sun, Jul 24, 2016  3:03:21 PM
Mon, Jul 25, 2016  9:39:56 PM
