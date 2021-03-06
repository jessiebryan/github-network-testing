#ifndef __LINUX_INPUT_OMAP4_KEYPAD_H
#define __LINUX_INPUT_OMAP4_KEYPAD_H

#include <linux/input/matrix_keypad.h>

struct omap4_keypad_platform_data {
	const struct matrix_keymap_data *keymap_data;

	u8 rows;
	u8 cols;
};

#endif /* __LINUX_INPUT_OMAP4_KEYPAD_H */
Tue Jul 19 12:42:20 PDT 2016
Fri Jul 22 15:53:47 PDT 2016
Sun, Jul 24, 2016  3:10:57 PM
Mon, Jul 25, 2016  9:48:32 PM
