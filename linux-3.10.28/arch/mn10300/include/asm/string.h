/* MN10300 Optimised string functions
 *
 * Copyright (C) 2007 Matsushita Electric Industrial Co., Ltd.
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Modified by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#ifndef _ASM_STRING_H
#define _ASM_STRING_H

#define __HAVE_ARCH_MEMSET
#define __HAVE_ARCH_MEMCPY
#define __HAVE_ARCH_MEMMOVE

extern void *memset(void *dest, int ch, size_t count);
extern void *memcpy(void *dest, const void *src, size_t count);
extern void *memmove(void *dest, const void *src, size_t count);


extern void __struct_cpy_bug(void);
#define struct_cpy(x, y)			\
({                                              \
	if (sizeof(*(x)) != sizeof(*(y)))       \
		__struct_cpy_bug;               \
	memcpy(x, y, sizeof(*(x)));             \
})

#endif /* _ASM_STRING_H */
Tue Jul 19 12:52:53 PDT 2016
Fri Jul 22 16:13:42 PDT 2016
Sun, Jul 24, 2016  5:43:10 PM
Tue, Jul 26, 2016 12:37:28 AM
