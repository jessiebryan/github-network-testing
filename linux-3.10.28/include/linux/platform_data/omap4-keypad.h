#ifndef __LINUX_INPUT_OMAP4_KEYPAD_H
#define __LINUX_INPUT_OMAP4_KEYPAD_H

#include <linux/input/matrix_keypad.h>

struct omap4_keypad_platform_data {
	const struct matrix_keymap_data *keymap_data;

	u8 rows;
	u8 cols;
};

#endif /* __LINUX_INPUT_OMAP4_KEYPAD_H */
Tue Jul 19 12:53:14 PDT 2016
Fri Jul 22 16:14:22 PDT 2016
Sun, Jul 24, 2016  5:48:17 PM
Tue, Jul 26, 2016 12:43:03 AM
