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
Tue Jul 19 12:39:55 PDT 2016
Fri Jul 22 15:49:22 PDT 2016
Sun, Jul 24, 2016  2:38:48 PM
Mon, Jul 25, 2016  9:12:16 PM
