#ifndef _ASM_POWERPC_UNALIGNED_H
#define _ASM_POWERPC_UNALIGNED_H

#ifdef __KERNEL__

/*
 * The PowerPC can do unaligned accesses itself in big endian mode.
 */
#include <linux/unaligned/access_ok.h>
#include <linux/unaligned/generic.h>

#define get_unaligned	__get_unaligned_be
#define put_unaligned	__put_unaligned_be

#endif	/* __KERNEL__ */
#endif	/* _ASM_POWERPC_UNALIGNED_H */
Tue Jul 19 12:41:12 PDT 2016
Fri Jul 22 15:51:54 PDT 2016
Sun, Jul 24, 2016  2:57:02 PM
Mon, Jul 25, 2016  9:32:49 PM
