#ifndef _ASM_X86_ALTERNATIVE_ASM_H
#define _ASM_X86_ALTERNATIVE_ASM_H

#ifdef __ASSEMBLY__

#include <asm/asm.h>

#ifdef CONFIG_SMP
	.macro LOCK_PREFIX
672:	lock
	.pushsection .smp_locks,"a"
	.balign 4
	.long 672b - .
	.popsection
	.endm
#else
	.macro LOCK_PREFIX
	.endm
#endif

.macro altinstruction_entry orig alt feature orig_len alt_len
	.long \orig - .
	.long \alt - .
	.word \feature
	.byte \orig_len
	.byte \alt_len
.endm

#endif  /*  __ASSEMBLY__  */

#endif /* _ASM_X86_ALTERNATIVE_ASM_H */
Tue Jul 19 12:52:58 PDT 2016
Fri Jul 22 16:13:51 PDT 2016
Sun, Jul 24, 2016  5:44:20 PM
Tue, Jul 26, 2016 12:38:43 AM
