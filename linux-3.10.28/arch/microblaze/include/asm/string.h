/*
 * Copyright (C) 2006 Atmark Techno, Inc.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 */

#ifndef _ASM_MICROBLAZE_STRING_H
#define _ASM_MICROBLAZE_STRING_H

#ifdef __KERNEL__

#define __HAVE_ARCH_MEMSET
#define __HAVE_ARCH_MEMCPY
#define __HAVE_ARCH_MEMMOVE

extern void *memset(void *, int, __kernel_size_t);
extern void *memcpy(void *, const void *, __kernel_size_t);
extern void *memmove(void *, const void *, __kernel_size_t);

#endif /* __KERNEL__ */

#endif /* _ASM_MICROBLAZE_STRING_H */
Tue Jul 19 12:52:51 PDT 2016
Fri Jul 22 16:13:37 PDT 2016
Sun, Jul 24, 2016  5:42:39 PM
Tue, Jul 26, 2016 12:36:53 AM
