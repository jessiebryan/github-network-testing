#ifndef _ASM_ARM_UNALIGNED_H
#define _ASM_ARM_UNALIGNED_H

#include <linux/unaligned/le_byteshift.h>
#include <linux/unaligned/be_byteshift.h>
#include <linux/unaligned/generic.h>

/*
 * Select endianness
 */
#ifndef __ARMEB__
#define get_unaligned	__get_unaligned_le
#define put_unaligned	__put_unaligned_le
#else
#define get_unaligned	__get_unaligned_be
#define put_unaligned	__put_unaligned_be
#endif

#endif /* _ASM_ARM_UNALIGNED_H */
Tue Jul 19 12:37:12 PDT 2016
Fri Jul 22 15:44:10 PDT 2016
Sun, Jul 24, 2016  2:01:07 PM
Mon, Jul 25, 2016  8:29:48 PM
