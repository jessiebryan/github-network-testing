#ifndef _ASM_H8300_UNALIGNED_H
#define _ASM_H8300_UNALIGNED_H

#include <linux/unaligned/be_memmove.h>
#include <linux/unaligned/le_byteshift.h>
#include <linux/unaligned/generic.h>

#define get_unaligned	__get_unaligned_be
#define put_unaligned	__put_unaligned_be

#endif /* _ASM_H8300_UNALIGNED_H */
Tue Jul 19 12:39:48 PDT 2016
Fri Jul 22 15:49:09 PDT 2016
Sun, Jul 24, 2016  2:37:16 PM
Mon, Jul 25, 2016  9:10:34 PM
