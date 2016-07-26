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
Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:01 PDT 2016
Sun, Jul 24, 2016  1:23:19 PM
Mon, Jul 25, 2016  6:32:10 PM
Mon, Jul 25, 2016  7:45:12 PM
Tue, Jul 26, 2016  2:20:46 PM
