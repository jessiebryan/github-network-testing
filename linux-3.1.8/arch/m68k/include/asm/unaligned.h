#ifndef _ASM_M68K_UNALIGNED_H
#define _ASM_M68K_UNALIGNED_H


#ifdef CONFIG_COLDFIRE
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
Tue Jul 19 12:37:20 PDT 2016
Fri Jul 22 15:44:24 PDT 2016
Sun, Jul 24, 2016  2:02:55 PM
Mon, Jul 25, 2016  8:31:56 PM
