/*
 * This file is never included by application software unless
 * explicitly requested (e.g., via linux/types.h) in which case the
 * application is Linux specific so (user-) name space pollution is
 * not a major issue.  However, for interoperability, libraries still
 * need to be careful to avoid a name clashes.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */
#ifndef _ASM_POWERPC_TYPES_H
#define _ASM_POWERPC_TYPES_H

#include <uapi/asm/types.h>

#ifndef __ASSEMBLY__

typedef __vector128 vector128;

typedef struct {
	unsigned long entry;
	unsigned long toc;
	unsigned long env;
} func_descr_t;

#endif /* __ASSEMBLY__ */

#endif /* _ASM_POWERPC_TYPES_H */
Tue Jul 19 12:41:12 PDT 2016
Fri Jul 22 15:51:54 PDT 2016
Sun, Jul 24, 2016  2:57:01 PM
