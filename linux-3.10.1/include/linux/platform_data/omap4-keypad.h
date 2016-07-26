#ifndef __LINUX_INPUT_OMAP4_KEYPAD_H
#define __LINUX_INPUT_OMAP4_KEYPAD_H

#include <linux/input/matrix_keypad.h>

struct omap4_keypad_platform_data {
	const struct matrix_keymap_data *keymap_data;

	u8 rows;
	u8 cols;
};

#endif /* __LINUX_INPUT_OMAP4_KEYPAD_H */
Tue Jul 19 12:38:57 PDT 2016
Fri Jul 22 15:47:26 PDT 2016
Sun, Jul 24, 2016  2:24:54 PM
Mon, Jul 25, 2016  8:56:48 PM
