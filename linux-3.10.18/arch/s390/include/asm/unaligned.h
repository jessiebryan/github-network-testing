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
Tue Jul 19 12:46:28 PDT 2016
Fri Jul 22 16:01:29 PDT 2016
Sun, Jul 24, 2016  4:10:57 PM
Mon, Jul 25, 2016 10:55:19 PM
