#ifndef _PARISC_SECTIONS_H
#define _PARISC_SECTIONS_H

/* nothing to see, move along */
#include <asm-generic/sections.h>

#ifdef CONFIG_64BIT
#undef dereference_function_descriptor
void *dereference_function_descriptor(void *);
#endif

#endif
Tue Jul 19 12:39:53 PDT 2016
Fri Jul 22 15:49:19 PDT 2016
Sun, Jul 24, 2016  2:38:24 PM
Mon, Jul 25, 2016  9:11:49 PM
