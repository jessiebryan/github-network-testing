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
Tue Jul 19 12:48:17 PDT 2016
Fri Jul 22 16:04:51 PDT 2016
Sun, Jul 24, 2016  4:37:00 PM
Mon, Jul 25, 2016 11:24:15 PM
