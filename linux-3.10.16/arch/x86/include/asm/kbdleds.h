#ifndef _ASM_X86_KBDLEDS_H
#define _ASM_X86_KBDLEDS_H

/*
 * Some laptops take the 789uiojklm,. keys as number pad when NumLock is on.
 * This seems a good reason to start with NumLock off. That's why on X86 we
 * ask the bios for the correct state.
 */

#include <asm/setup.h>

static inline int kbd_defleds(void)
{
	return boot_params.kbd_status & 0x20 ? (1 << VC_NUMLOCK) : 0;
}

#endif /* _ASM_X86_KBDLEDS_H */
Tue Jul 19 12:45:17 PDT 2016
Fri Jul 22 15:59:13 PDT 2016
Sun, Jul 24, 2016  3:53:13 PM
Mon, Jul 25, 2016 10:35:37 PM
