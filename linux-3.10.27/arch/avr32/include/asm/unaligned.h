#ifndef _ASM_AVR32_UNALIGNED_H
#define _ASM_AVR32_UNALIGNED_H

/*
 * AVR32 can handle some unaligned accesses, depending on the
 * implementation.  The AVR32 AP implementation can handle unaligned
 * words, but halfwords must be halfword-aligned, and doublewords must
 * be word-aligned.
 *
 * However, swapped word loads must be word-aligned so we can't
 * optimize word loads in general.
 */

#include <linux/unaligned/be_struct.h>
#include <linux/unaligned/le_byteshift.h>
#include <linux/unaligned/generic.h>

#define get_unaligned	__get_unaligned_be
#define put_unaligned	__put_unaligned_be

#endif /* _ASM_AVR32_UNALIGNED_H */
Tue Jul 19 12:52:07 PDT 2016
Fri Jul 22 16:12:12 PDT 2016
Sun, Jul 24, 2016  5:32:20 PM
Tue, Jul 26, 2016 12:25:29 AM
