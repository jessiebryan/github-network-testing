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
Tue Jul 19 12:52:20 PDT 2016
Fri Jul 22 16:12:37 PDT 2016
Sun, Jul 24, 2016  5:35:21 PM
Tue, Jul 26, 2016 12:28:49 AM
