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
Tue Jul 19 12:49:01 PDT 2016
Fri Jul 22 16:06:17 PDT 2016
Sun, Jul 24, 2016  4:47:53 PM
Mon, Jul 25, 2016 11:36:23 PM
