#ifndef _ASM_H8300_UNALIGNED_H
#define _ASM_H8300_UNALIGNED_H

#include <linux/unaligned/be_memmove.h>
#include <linux/unaligned/le_byteshift.h>
#include <linux/unaligned/generic.h>

#define get_unaligned	__get_unaligned_be
#define put_unaligned	__put_unaligned_be

#endif /* _ASM_H8300_UNALIGNED_H */
Tue Jul 19 12:45:09 PDT 2016
Fri Jul 22 15:58:55 PDT 2016
Sun, Jul 24, 2016  3:51:01 PM
Mon, Jul 25, 2016 10:33:09 PM
