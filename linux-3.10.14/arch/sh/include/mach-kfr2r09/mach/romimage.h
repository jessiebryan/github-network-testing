#ifdef __ASSEMBLY__

/* kfr2r09 board specific boot code:
 * converts the "partner-jet-script.txt" script into assembly
 * the assembly code is the first code to be executed in the romImage
 */

#include <asm/romimage-macros.h>
#include <mach/partner-jet-setup.txt>

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
Tue Jul 19 12:43:59 PDT 2016
Fri Jul 22 15:56:47 PDT 2016
Sun, Jul 24, 2016  3:34:17 PM
Mon, Jul 25, 2016 10:14:33 PM
