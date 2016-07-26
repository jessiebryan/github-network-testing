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
Tue Jul 19 12:47:45 PDT 2016
Fri Jul 22 16:03:52 PDT 2016
Sun, Jul 24, 2016  4:29:25 PM
Mon, Jul 25, 2016 11:15:49 PM
