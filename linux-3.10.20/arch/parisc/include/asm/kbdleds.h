#ifndef _ASM_PARISC_KBDLEDS_H
#define _ASM_PARISC_KBDLEDS_H

/*
 * On HIL keyboards of PARISC machines there is no NumLock key and
 * everyone expects the keypad to be used for numbers. That's why
 * we can safely turn on the NUMLOCK bit.
 */

static inline int kbd_defleds(void)
{
#if defined(CONFIG_KEYBOARD_HIL) || defined(CONFIG_KEYBOARD_HIL_OLD)
	return 1 << VC_NUMLOCK;
#else
	return 0;
#endif
}

#endif /* _ASM_PARISC_KBDLEDS_H */
Tue Jul 19 12:47:43 PDT 2016
Fri Jul 22 16:03:49 PDT 2016
Sun, Jul 24, 2016  4:29:01 PM
Mon, Jul 25, 2016 11:15:23 PM
