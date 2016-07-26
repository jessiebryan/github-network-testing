#ifndef _ASM_H8300_UNALIGNED_H
#define _ASM_H8300_UNALIGNED_H

#include <linux/unaligned/be_memmove.h>
#include <linux/unaligned/le_byteshift.h>
#include <linux/unaligned/generic.h>

#define get_unaligned	__get_unaligned_be
#define put_unaligned	__put_unaligned_be

#endif /* _ASM_H8300_UNALIGNED_H */
Tue Jul 19 12:33:18 PDT 2016
Fri Jul 22 15:37:40 PDT 2016
Sun, Jul 24, 2016  1:13:05 PM
Mon, Jul 25, 2016  6:19:54 PM
