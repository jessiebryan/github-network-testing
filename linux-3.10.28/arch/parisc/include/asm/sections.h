#ifndef _PARISC_SECTIONS_H
#define _PARISC_SECTIONS_H

/* nothing to see, move along */
#include <asm-generic/sections.h>

#ifdef CONFIG_64BIT
#undef dereference_function_descriptor
void *dereference_function_descriptor(void *);
#endif

#endif
Tue Jul 19 12:52:53 PDT 2016
Fri Jul 22 16:13:43 PDT 2016
Sun, Jul 24, 2016  5:43:17 PM
Tue, Jul 26, 2016 12:37:35 AM
