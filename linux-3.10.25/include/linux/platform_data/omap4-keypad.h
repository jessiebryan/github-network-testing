#ifndef __LINUX_INPUT_OMAP4_KEYPAD_H
#define __LINUX_INPUT_OMAP4_KEYPAD_H

#include <linux/input/matrix_keypad.h>

struct omap4_keypad_platform_data {
	const struct matrix_keymap_data *keymap_data;

	u8 rows;
	u8 cols;
};

#endif /* __LINUX_INPUT_OMAP4_KEYPAD_H */
Tue Jul 19 12:51:18 PDT 2016
Fri Jul 22 16:10:34 PDT 2016
Sun, Jul 24, 2016  5:20:21 PM
Tue, Jul 26, 2016 12:12:16 AM
