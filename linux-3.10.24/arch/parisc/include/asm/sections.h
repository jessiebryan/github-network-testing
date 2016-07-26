#ifndef _PARISC_SECTIONS_H
#define _PARISC_SECTIONS_H

/* nothing to see, move along */
#include <asm-generic/sections.h>

#ifdef CONFIG_64BIT
#undef dereference_function_descriptor
void *dereference_function_descriptor(void *);
#endif

#endif
Tue Jul 19 12:50:17 PDT 2016
Fri Jul 22 16:08:39 PDT 2016
Sun, Jul 24, 2016  5:06:04 PM
Mon, Jul 25, 2016 11:56:30 PM
