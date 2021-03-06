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
Tue Jul 19 12:51:25 PDT 2016
Fri Jul 22 16:10:48 PDT 2016
Sun, Jul 24, 2016  5:22:08 PM
Tue, Jul 26, 2016 12:14:15 AM
