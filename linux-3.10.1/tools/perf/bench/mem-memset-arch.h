
#ifdef ARCH_X86_64

#define MEMSET_FN(fn, name, desc)		\
	extern void *fn(void *, int, size_t);

#include "mem-memset-x86-64-asm-def.h"

#undef MEMSET_FN

#endif

Tue Jul 19 12:39:04 PDT 2016
Fri Jul 22 15:47:38 PDT 2016
Sun, Jul 24, 2016  2:26:31 PM
Mon, Jul 25, 2016  8:58:35 PM
