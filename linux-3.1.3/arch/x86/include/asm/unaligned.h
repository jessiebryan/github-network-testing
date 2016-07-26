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
Tue Jul 19 12:35:10 PDT 2016
Fri Jul 22 15:40:10 PDT 2016
Sun, Jul 24, 2016  1:31:44 PM
Mon, Jul 25, 2016  7:55:04 PM
