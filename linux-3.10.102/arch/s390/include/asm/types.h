/*
 *  S390 version
 *
 *  Derived from "include/asm-i386/types.h"
 */
#ifndef _S390_TYPES_H
#define _S390_TYPES_H

#include <uapi/asm/types.h>

/*
 * These aren't exported outside the kernel to avoid name space clashes
 */

#ifndef __ASSEMBLY__

#ifndef CONFIG_64BIT
typedef union {
	unsigned long long pair;
	struct {
		unsigned long even;
		unsigned long odd;
	} subreg;
} register_pair;

#endif /* ! CONFIG_64BIT   */
#endif /* __ASSEMBLY__  */
#endif /* _S390_TYPES_H */
Tue Jul 19 12:41:12 PDT 2016
Fri Jul 22 15:51:56 PDT 2016
Sun, Jul 24, 2016  2:57:11 PM
Mon, Jul 25, 2016  9:33:00 PM
