#ifndef __LINUX_KEYBOARD_H
#define __LINUX_KEYBOARD_H

#include <uapi/linux/keyboard.h>

struct notifier_block;
extern unsigned short *key_maps[MAX_NR_KEYMAPS];
extern unsigned short plain_map[NR_KEYS];

struct keyboard_notifier_param {
	struct vc_data *vc;	/* VC on which the keyboard press was done */
	int down;		/* Pressure of the key? */
	int shift;		/* Current shift mask */
	int ledstate;		/* Current led state */
	unsigned int value;	/* keycode, unicode value or keysym */
};

extern int register_keyboard_notifier(struct notifier_block *nb);
extern int unregister_keyboard_notifier(struct notifier_block *nb);
#endif
Tue Jul 19 12:42:18 PDT 2016
Fri Jul 22 15:53:44 PDT 2016
Sun, Jul 24, 2016  3:10:36 PM
Mon, Jul 25, 2016  9:48:07 PM
