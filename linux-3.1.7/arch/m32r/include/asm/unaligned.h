#ifndef _ASM_M32R_UNALIGNED_H
#define _ASM_M32R_UNALIGNED_H

#if defined(__LITTLE_ENDIAN__)
# include <linux/unaligned/le_memmove.h>
# include <linux/unaligned/be_byteshift.h>
# include <linux/unaligned/generic.h>
# define get_unaligned	__get_unaligned_le
# define put_unaligned	__put_unaligned_le
#else
# include <linux/unaligned/be_memmove.h>
# include <linux/unaligned/le_byteshift.h>
# include <linux/unaligned/generic.h>
# define get_unaligned	__get_unaligned_be
# define put_unaligned	__put_unaligned_be
#endif

#endif /* _ASM_M32R_UNALIGNED_H */
Tue Jul 19 12:36:44 PDT 2016
Fri Jul 22 15:43:17 PDT 2016
Sun, Jul 24, 2016  1:54:32 PM
Mon, Jul 25, 2016  8:21:59 PM
