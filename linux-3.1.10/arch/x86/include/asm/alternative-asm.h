#ifdef __ASSEMBLY__

#include <asm/asm.h>

#ifdef CONFIG_SMP
	.macro LOCK_PREFIX
1:	lock
	.section .smp_locks,"a"
	.balign 4
	.long 1b - .
	.previous
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
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:57 PDT 2016
Sun, Jul 24, 2016  1:15:04 PM
Mon, Jul 25, 2016  6:22:17 PM
Mon, Jul 25, 2016  7:35:30 PM
Tue, Jul 26, 2016  2:11:30 PM
