#ifndef _ALPHA_TYPES_H
#define _ALPHA_TYPES_H

/*
 * This file is never included by application software unless
 * explicitly requested (e.g., via linux/types.h) in which case the
 * application is Linux specific so (user-) name space pollution is
 * not a major issue.  However, for interoperability, libraries still
 * need to be careful to avoid a name clashes.
 */

#ifdef __KERNEL__
#include <asm-generic/int-ll64.h>
#else
#include <asm-generic/int-l64.h>
#endif

#ifndef __ASSEMBLY__

typedef unsigned int umode_t;

#endif /* __ASSEMBLY__ */
#endif /* _ALPHA_TYPES_H */
Tue Jul 19 12:36:37 PDT 2016
Fri Jul 22 15:43:02 PDT 2016
Sun, Jul 24, 2016  1:52:44 PM
Mon, Jul 25, 2016  8:19:52 PM
