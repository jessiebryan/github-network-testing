#ifndef _PARISC_SECTIONS_H
#define _PARISC_SECTIONS_H

/* nothing to see, move along */
#include <asm-generic/sections.h>

#ifdef CONFIG_64BIT
#undef dereference_function_descriptor
void *dereference_function_descriptor(void *);
#endif

#endif
Tue Jul 19 12:33:59 PDT 2016
Fri Jul 22 15:38:53 PDT 2016
Sun, Jul 24, 2016  1:22:18 PM
Mon, Jul 25, 2016  6:30:57 PM
Mon, Jul 25, 2016  7:44:01 PM
Tue, Jul 26, 2016  2:19:39 PM
