/*
 * Copyright (C) 2005 Paolo 'Blaisorblade' Giarrusso <blaisorblade@yahoo.it>
 * Licensed under the GPL
 */

#ifndef __UM_MALLOC_H__
#define __UM_MALLOC_H__

#include <generated/asm-offsets.h>

extern void *uml_kmalloc(int size, int flags);
extern void kfree(const void *ptr);

extern void *vmalloc(unsigned long size);
extern void vfree(void *ptr);

#endif /* __UM_MALLOC_H__ */


Tue Jul 19 12:51:40 PDT 2016
Fri Jul 22 16:11:17 PDT 2016
Sun, Jul 24, 2016  5:25:38 PM
Tue, Jul 26, 2016 12:18:07 AM
