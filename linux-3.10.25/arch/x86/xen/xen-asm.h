#ifndef _XEN_XEN_ASM_H
#define _XEN_XEN_ASM_H

#include <linux/linkage.h>

#define RELOC(x, v)	.globl x##_reloc; x##_reloc=v
#define ENDPATCH(x)	.globl x##_end; x##_end=.

/* Pseudo-flag used for virtual NMI, which we don't implement yet */
#define XEN_EFLAGS_NMI	0x80000000

#endif
Tue Jul 19 12:51:02 PDT 2016
Fri Jul 22 16:10:04 PDT 2016
Sun, Jul 24, 2016  5:16:40 PM
Tue, Jul 26, 2016 12:08:14 AM
