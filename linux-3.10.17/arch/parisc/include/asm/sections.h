#ifndef _PARISC_SECTIONS_H
#define _PARISC_SECTIONS_H

/* nothing to see, move along */
#include <asm-generic/sections.h>

#ifdef CONFIG_64BIT
#undef dereference_function_descriptor
void *dereference_function_descriptor(void *);
#endif

#endif
Tue Jul 19 12:45:49 PDT 2016
Fri Jul 22 16:00:15 PDT 2016
Sun, Jul 24, 2016  4:01:22 PM
Mon, Jul 25, 2016 10:44:40 PM
