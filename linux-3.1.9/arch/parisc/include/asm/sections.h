#ifndef _PARISC_SECTIONS_H
#define _PARISC_SECTIONS_H

/* nothing to see, move along */
#include <asm-generic/sections.h>

#ifdef CONFIG_64BIT
#undef dereference_function_descriptor
void *dereference_function_descriptor(void *);
#endif

#endif
Tue Jul 19 12:38:01 PDT 2016
Fri Jul 22 15:45:36 PDT 2016
Sun, Jul 24, 2016  2:11:47 PM
Mon, Jul 25, 2016  8:42:13 PM
