#ifdef __ASSEMBLY__

#include <asm/asm.h>
#include <asm/dwarf2.h>

/* The annotation hides the frame from the unwinder and makes it look
   like a ordinary ebp save/restore. This avoids some special cases for
   frame pointer later */
#ifdef CONFIG_FRAME_POINTER
	.macro FRAME
	__ASM_SIZE(push,_cfi)	%__ASM_REG(bp)
	CFI_REL_OFFSET		__ASM_REG(bp), 0
	__ASM_SIZE(mov)		%__ASM_REG(sp), %__ASM_REG(bp)
	.endm
	.macro ENDFRAME
	__ASM_SIZE(pop,_cfi)	%__ASM_REG(bp)
	CFI_RESTORE		__ASM_REG(bp)
	.endm
#else
	.macro FRAME
	.endm
	.macro ENDFRAME
	.endm
#endif

#endif  /*  __ASSEMBLY__  */
Tue Jul 19 12:33:27 PDT 2016
Fri Jul 22 15:37:57 PDT 2016
Sun, Jul 24, 2016  1:15:06 PM
Mon, Jul 25, 2016  6:22:19 PM
Mon, Jul 25, 2016  7:35:32 PM
Tue, Jul 26, 2016  2:11:33 PM
