
#ifdef ARCH_X86_64

#define MEMSET_FN(fn, name, desc)		\
	extern void *fn(void *, int, size_t);

#include "mem-memset-x86-64-asm-def.h"

#undef MEMSET_FN

#endif

Tue Jul 19 12:42:27 PDT 2016
Fri Jul 22 15:53:59 PDT 2016
