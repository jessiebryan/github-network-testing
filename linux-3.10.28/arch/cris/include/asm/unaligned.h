#ifndef _ASM_CRIS_UNALIGNED_H
#define _ASM_CRIS_UNALIGNED_H

/*
 * CRIS can do unaligned accesses itself. 
 */
#include <linux/unaligned/access_ok.h>
#include <linux/unaligned/generic.h>

#define get_unaligned	__get_unaligned_le
#define put_unaligned	__put_unaligned_le

#endif /* _ASM_CRIS_UNALIGNED_H */
Tue Jul 19 12:52:48 PDT 2016
Fri Jul 22 16:13:32 PDT 2016
Sun, Jul 24, 2016  5:42:01 PM
Tue, Jul 26, 2016 12:36:10 AM
