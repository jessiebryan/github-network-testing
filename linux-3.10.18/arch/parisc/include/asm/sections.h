#ifndef _PARISC_SECTIONS_H
#define _PARISC_SECTIONS_H

/* nothing to see, move along */
#include <asm-generic/sections.h>

#ifdef CONFIG_64BIT
#undef dereference_function_descriptor
void *dereference_function_descriptor(void *);
#endif

#endif
Tue Jul 19 12:46:26 PDT 2016
Fri Jul 22 16:01:26 PDT 2016
Sun, Jul 24, 2016  4:10:35 PM
Mon, Jul 25, 2016 10:54:54 PM
