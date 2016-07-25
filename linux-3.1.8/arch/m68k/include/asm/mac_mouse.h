#ifndef _ASM_MAC_MOUSE_H
#define _ASM_MAC_MOUSE_H

/*
 * linux/include/asm-m68k/mac_mouse.h
 * header file for Macintosh ADB mouse driver
 * 27-10-97 Michael Schmitz
 * copied from:
 * header file for Atari Mouse driver
 * by Robert de Vries (robert@and.nl) on 19Jul93
 */

struct mouse_status {
	char		buttons;
	short		dx;
	short		dy;
	int		ready;
	int		active;
	wait_queue_head_t wait;
	struct fasync_struct *fasyncptr;
};

#endif
Tue Jul 19 12:37:19 PDT 2016
Fri Jul 22 15:44:24 PDT 2016
Sun, Jul 24, 2016  2:02:52 PM
