/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1996, 97, 98, 99, 2000 by Ralf Baechle
 * Copyright (C) 1999, 2000 Silicon Graphics, Inc.
 */
#ifndef _ASM_POSIX_TYPES_H
#define _ASM_POSIX_TYPES_H

#include <asm/sgidefs.h>

/*
 * This file is generally used by user-level software, so you need to
 * be a little careful about namespace pollution etc.  Also, we cannot
 * assume GCC is being used.
 */

typedef long		__kernel_daddr_t;
#define __kernel_daddr_t __kernel_daddr_t

#if (_MIPS_SZLONG == 32)
typedef struct {
	long	val[2];
} __kernel_fsid_t;
#define __kernel_fsid_t __kernel_fsid_t
#endif

#include <asm-generic/posix_types.h>

#endif /* _ASM_POSIX_TYPES_H */
Tue Jul 19 12:50:56 PDT 2016
Fri Jul 22 16:09:52 PDT 2016
Sun, Jul 24, 2016  5:15:10 PM
Tue, Jul 26, 2016 12:06:34 AM
