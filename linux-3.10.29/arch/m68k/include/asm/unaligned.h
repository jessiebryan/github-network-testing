#ifndef _ASM_M68K_UNALIGNED_H
#define _ASM_M68K_UNALIGNED_H


#ifdef CONFIG_CPU_HAS_NO_UNALIGNED
#include <linux/unaligned/be_struct.h>
#include <linux/unaligned/le_byteshift.h>
#include <linux/unaligned/generic.h>

#define get_unaligned	__get_unaligned_be
#define put_unaligned	__put_unaligned_be

#else
/*
 * The m68k can do unaligned accesses itself.
 */
#include <linux/unaligned/access_ok.h>
#include <linux/unaligned/generic.h>

#define get_unaligned	__get_unaligned_be
#define put_unaligned	__put_unaligned_be

#endif

#endif /* _ASM_M68K_UNALIGNED_H */
Tue Jul 19 12:53:29 PDT 2016
Fri Jul 22 16:14:51 PDT 2016
Sun, Jul 24, 2016  5:51:53 PM
Tue, Jul 26, 2016 12:47:04 AM
