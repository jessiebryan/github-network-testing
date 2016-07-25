#ifndef _ASM_ALPHA_UNALIGNED_H
#define _ASM_ALPHA_UNALIGNED_H

#include <linux/unaligned/le_struct.h>
#include <linux/unaligned/be_byteshift.h>
#include <linux/unaligned/generic.h>

#define get_unaligned __get_unaligned_le
#define put_unaligned __put_unaligned_le

#endif /* _ASM_ALPHA_UNALIGNED_H */
Tue Jul 19 12:49:29 PDT 2016
Fri Jul 22 16:07:06 PDT 2016
Sun, Jul 24, 2016  4:54:10 PM
