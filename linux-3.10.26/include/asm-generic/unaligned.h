#ifndef __ASM_GENERIC_UNALIGNED_H
#define __ASM_GENERIC_UNALIGNED_H

/*
 * This is the most generic implementation of unaligned accesses
 * and should work almost anywhere.
 *
 * If an architecture can handle unaligned accesses in hardware,
 * it may want to use the linux/unaligned/access_ok.h implementation
 * instead.
 */
#include <asm/byteorder.h>

#if defined(__LITTLE_ENDIAN)
# include <linux/unaligned/le_struct.h>
# include <linux/unaligned/be_byteshift.h>
# include <linux/unaligned/generic.h>
# define get_unaligned	__get_unaligned_le
# define put_unaligned	__put_unaligned_le
#elif defined(__BIG_ENDIAN)
# include <linux/unaligned/be_struct.h>
# include <linux/unaligned/le_byteshift.h>
# include <linux/unaligned/generic.h>
# define get_unaligned	__get_unaligned_be
# define put_unaligned	__put_unaligned_be
#else
# error need to define endianess
#endif

#endif /* __ASM_GENERIC_UNALIGNED_H */
Tue Jul 19 12:51:53 PDT 2016
Fri Jul 22 16:11:45 PDT 2016
Sun, Jul 24, 2016  5:28:51 PM
Tue, Jul 26, 2016 12:21:38 AM
