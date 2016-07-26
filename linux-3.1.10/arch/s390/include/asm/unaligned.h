#ifndef _ASM_S390_UNALIGNED_H
#define _ASM_S390_UNALIGNED_H

/*
 * The S390 can do unaligned accesses itself. 
 */
#include <linux/unaligned/access_ok.h>
#include <linux/unaligned/generic.h>

#define get_unaligned	__get_unaligned_be
#define put_unaligned	__put_unaligned_be

#endif /* _ASM_S390_UNALIGNED_H */
Tue Jul 19 12:33:24 PDT 2016
Fri Jul 22 15:37:52 PDT 2016
Sun, Jul 24, 2016  1:14:26 PM
Mon, Jul 25, 2016  6:21:31 PM
Mon, Jul 25, 2016  7:34:45 PM
Tue, Jul 26, 2016  2:10:48 PM
