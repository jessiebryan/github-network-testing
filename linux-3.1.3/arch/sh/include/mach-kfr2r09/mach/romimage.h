#ifdef __ASSEMBLY__

/* kfr2r09 board specific boot code:
 * converts the "partner-jet-script.txt" script into assembly
 * the assembly code is the first code to be executed in the romImage
 */

#include <asm/romimage-macros.h>
#include "partner-jet-setup.txt"

	/* execute icbi after enabling cache */
	mov.l	1f, r0
	icbi	@r0

	/* jump to cached area */
	mova	2f, r0
	jmp	@r0
	 nop

	.align 2
1:	.long 0xa8000000
2:

#else /* __ASSEMBLY__ */

static inline void mmcif_update_progress(int nr)
{
}

#endif /* __ASSEMBLY__ */
Tue Jul 19 12:35:01 PDT 2016
Fri Jul 22 15:40:06 PDT 2016
Sun, Jul 24, 2016  1:31:10 PM
Mon, Jul 25, 2016  7:54:23 PM
Tue, Jul 26, 2016  2:29:26 PM
