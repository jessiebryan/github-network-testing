/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1994, 1995, 1996, 1999 by Ralf Baechle
 * Copyright (C) 2008 Wind River Systems,
 *   written by Ralf Baechle
 * Copyright (C) 1999 Silicon Graphics, Inc.
 */
#ifndef _UAPI_ASM_TYPES_H
#define _UAPI_ASM_TYPES_H

/*
 * We don't use int-l64.h for the kernel anymore but still use it for
 * userspace to avoid code changes.
 */
#ifndef __KERNEL__
# if _MIPS_SZLONG == 64
#  include <asm-generic/int-l64.h>
# else
#  include <asm-generic/int-ll64.h>
# endif
#endif


#endif /* _UAPI_ASM_TYPES_H */
Tue Jul 19 12:43:56 PDT 2016
Fri Jul 22 15:56:40 PDT 2016
Sun, Jul 24, 2016  3:33:30 PM
Mon, Jul 25, 2016 10:13:41 PM
