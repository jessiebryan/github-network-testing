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
Tue Jul 19 12:42:40 PDT 2016
Fri Jul 22 15:54:23 PDT 2016
Sun, Jul 24, 2016  3:15:37 PM
Mon, Jul 25, 2016  9:53:49 PM
