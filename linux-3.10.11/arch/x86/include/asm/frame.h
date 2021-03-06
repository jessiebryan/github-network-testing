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
Tue Jul 19 12:41:59 PDT 2016
Fri Jul 22 15:53:17 PDT 2016
Sun, Jul 24, 2016  3:07:06 PM
Mon, Jul 25, 2016  9:44:10 PM
