#ifndef _LINUX_ATARI_JOYSTICK_H
#define _LINUX_ATARI_JOYSTICK_H

/*
 * linux/include/linux/atari_joystick.h
 * header file for Atari Joystick driver
 * by Robert de Vries (robert@and.nl) on 19Jul93
 */

void atari_joystick_interrupt(char*);
int atari_joystick_init(void);
extern int atari_mouse_buttons;

struct joystick_status {
	char		fire;
	char		dir;
	int		ready;
	int		active;
	wait_queue_head_t wait;
};

#endif
Tue Jul 19 12:33:56 PDT 2016
Fri Jul 22 15:38:48 PDT 2016
Sun, Jul 24, 2016  1:21:33 PM
Mon, Jul 25, 2016  6:30:03 PM
Mon, Jul 25, 2016  7:43:07 PM
Tue, Jul 26, 2016  2:18:49 PM
