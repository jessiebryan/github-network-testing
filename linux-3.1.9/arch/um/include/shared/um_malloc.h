/*
 * Copyright (C) 2005 Paolo 'Blaisorblade' Giarrusso <blaisorblade@yahoo.it>
 * Licensed under the GPL
 */

#ifndef __UM_MALLOC_H__
#define __UM_MALLOC_H__

#include "kern_constants.h"

extern void *uml_kmalloc(int size, int flags);
extern void kfree(const void *ptr);

extern void *vmalloc(unsigned long size);
extern void vfree(void *ptr);

#endif /* __UM_MALLOC_H__ */


Tue Jul 19 12:38:05 PDT 2016
Fri Jul 22 15:45:43 PDT 2016
Sun, Jul 24, 2016  2:12:42 PM
Mon, Jul 25, 2016  8:43:14 PM
