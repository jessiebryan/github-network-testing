#ifndef _SPARC_TYPES_H
#define _SPARC_TYPES_H
/*
 * This file is never included by application software unless
 * explicitly requested (e.g., via linux/types.h) in which case the
 * application is Linux specific so (user-) name space pollution is
 * not a major issue.  However, for interoperability, libraries still
 * need to be careful to avoid a name clashes.
 */

#if defined(__sparc__)

#include <asm-generic/int-ll64.h>

#ifndef __ASSEMBLY__

typedef unsigned short umode_t;

#endif /* __ASSEMBLY__ */

#endif /* defined(__sparc__) */

#endif /* defined(_SPARC_TYPES_H) */
Tue Jul 19 12:36:17 PDT 2016
Fri Jul 22 15:42:22 PDT 2016
