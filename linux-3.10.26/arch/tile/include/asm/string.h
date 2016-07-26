/*
 * Copyright 2010 Tilera Corporation. All Rights Reserved.
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 *   NON INFRINGEMENT.  See the GNU General Public License for
 *   more details.
 */

#ifndef _ASM_TILE_STRING_H
#define _ASM_TILE_STRING_H

#define __HAVE_ARCH_MEMCHR
#define __HAVE_ARCH_MEMSET
#define __HAVE_ARCH_MEMCPY
#define __HAVE_ARCH_MEMMOVE
#define __HAVE_ARCH_STRCHR
#define __HAVE_ARCH_STRLEN

extern __kernel_size_t strlen(const char *);
extern char *strchr(const char *s, int c);
extern void *memchr(const void *s, int c, size_t n);
extern void *memset(void *, int, __kernel_size_t);
extern void *memcpy(void *, const void *, __kernel_size_t);
extern void *memmove(void *, const void *, __kernel_size_t);

#endif /* _ASM_TILE_STRING_H */
Tue Jul 19 12:51:40 PDT 2016
Fri Jul 22 16:11:16 PDT 2016
Sun, Jul 24, 2016  5:25:33 PM
Tue, Jul 26, 2016 12:18:01 AM
