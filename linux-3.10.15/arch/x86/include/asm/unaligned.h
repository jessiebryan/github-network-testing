#ifndef _ASM_X86_UNALIGNED_H
#define _ASM_X86_UNALIGNED_H

/*
 * The x86 can do unaligned accesses itself.
 */

#include <linux/unaligned/access_ok.h>
#include <linux/unaligned/generic.h>

#define get_unaligned __get_unaligned_le
#define put_unaligned __put_unaligned_le

#endif /* _ASM_X86_UNALIGNED_H */
Tue Jul 19 12:44:40 PDT 2016
Fri Jul 22 15:58:02 PDT 2016
Sun, Jul 24, 2016  3:44:06 PM
Mon, Jul 25, 2016 10:25:27 PM
