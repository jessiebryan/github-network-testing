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
Tue Jul 19 12:46:23 PDT 2016
Fri Jul 22 16:01:19 PDT 2016
Sun, Jul 24, 2016  4:09:43 PM
Mon, Jul 25, 2016 10:53:56 PM
