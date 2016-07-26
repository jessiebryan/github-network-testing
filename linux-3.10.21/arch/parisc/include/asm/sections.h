#ifndef _PARISC_SECTIONS_H
#define _PARISC_SECTIONS_H

/* nothing to see, move along */
#include <asm-generic/sections.h>

#ifdef CONFIG_64BIT
#undef dereference_function_descriptor
void *dereference_function_descriptor(void *);
#endif

#endif
Tue Jul 19 12:48:22 PDT 2016
Fri Jul 22 16:05:01 PDT 2016
Sun, Jul 24, 2016  4:38:16 PM
Mon, Jul 25, 2016 11:25:40 PM
