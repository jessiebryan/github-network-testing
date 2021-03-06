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
Tue Jul 19 12:38:36 PDT 2016
Fri Jul 22 15:46:45 PDT 2016
Sun, Jul 24, 2016  2:19:59 PM
Mon, Jul 25, 2016  8:51:18 PM
