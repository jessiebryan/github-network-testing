
#ifdef ARCH_X86_64

#define MEMSET_FN(fn, name, desc)		\
	extern void *fn(void *, int, size_t);

#include "mem-memset-x86-64-asm-def.h"

#undef MEMSET_FN

#endif

Tue Jul 19 12:50:45 PDT 2016
Fri Jul 22 16:09:31 PDT 2016
Sun, Jul 24, 2016  5:12:39 PM
Tue, Jul 26, 2016 12:03:45 AM
