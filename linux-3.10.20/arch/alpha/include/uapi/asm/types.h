#ifndef _UAPI_ALPHA_TYPES_H
#define _UAPI_ALPHA_TYPES_H

/*
 * This file is never included by application software unless
 * explicitly requested (e.g., via linux/types.h) in which case the
 * application is Linux specific so (user-) name space pollution is
 * not a major issue.  However, for interoperability, libraries still
 * need to be careful to avoid a name clashes.
 */

#ifndef __KERNEL__
#include <asm-generic/int-l64.h>
#endif

#endif /* _UAPI_ALPHA_TYPES_H */
Tue Jul 19 12:47:33 PDT 2016
Fri Jul 22 16:03:29 PDT 2016
Sun, Jul 24, 2016  4:26:31 PM
Mon, Jul 25, 2016 11:12:36 PM
