/*
 *  S390 version
 *
 *  Derived from "include/asm-i386/types.h"
 */

#ifndef _UAPI_S390_TYPES_H
#define _UAPI_S390_TYPES_H

#include <asm-generic/int-ll64.h>

#ifndef __ASSEMBLY__

/* A address type so that arithmetic can be done on it & it can be upgraded to
   64 bit when necessary 
*/
typedef unsigned long addr_t; 
typedef __signed__ long saddr_t;

#endif /* __ASSEMBLY__ */

#endif /* _UAPI_S390_TYPES_H */
Tue Jul 19 12:48:23 PDT 2016
Fri Jul 22 16:05:04 PDT 2016
Sun, Jul 24, 2016  4:38:40 PM
Mon, Jul 25, 2016 11:26:07 PM
