
#ifdef ARCH_X86_64

#define MEMCPY_FN(fn, name, desc)		\
	extern void *fn(void *, const void *, size_t);

#include "mem-memcpy-x86-64-asm-def.h"

#undef MEMCPY_FN

#endif

Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:37 PDT 2016
Sun, Jul 24, 2016  1:27:52 PM
Mon, Jul 25, 2016  6:37:38 PM
Mon, Jul 25, 2016  7:50:32 PM
Tue, Jul 26, 2016  2:25:47 PM
