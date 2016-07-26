#ifndef _PARISC_SECTIONS_H
#define _PARISC_SECTIONS_H

/* nothing to see, move along */
#include <asm-generic/sections.h>

#ifdef CONFIG_64BIT
#undef dereference_function_descriptor
void *dereference_function_descriptor(void *);
#endif

#endif
Tue Jul 19 12:41:11 PDT 2016
Fri Jul 22 15:51:51 PDT 2016
Sun, Jul 24, 2016  2:56:49 PM
Mon, Jul 25, 2016  9:32:35 PM
