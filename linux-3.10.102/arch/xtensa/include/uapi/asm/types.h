/*
 * include/asm-xtensa/types.h
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001 - 2005 Tensilica Inc.
 */

#ifndef _UAPI_XTENSA_TYPES_H
#define _UAPI_XTENSA_TYPES_H

#include <asm-generic/int-ll64.h>

#ifdef __ASSEMBLY__
# define __XTENSA_UL(x)		(x)
# define __XTENSA_UL_CONST(x)	x
#else
# define __XTENSA_UL(x)		((unsigned long)(x))
# define __XTENSA_UL_CONST(x)	x##UL
#endif

#ifndef __ASSEMBLY__

#endif

#endif /* _UAPI_XTENSA_TYPES_H */
Tue Jul 19 12:41:16 PDT 2016
Fri Jul 22 15:52:04 PDT 2016
Sun, Jul 24, 2016  2:58:09 PM
Mon, Jul 25, 2016  9:34:06 PM
