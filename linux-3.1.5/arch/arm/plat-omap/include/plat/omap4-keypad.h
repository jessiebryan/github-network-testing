#ifndef ARCH_ARM_PLAT_OMAP4_KEYPAD_H
#define ARCH_ARM_PLAT_OMAP4_KEYPAD_H

#include <linux/input/matrix_keypad.h>

struct omap4_keypad_platform_data {
	const struct matrix_keymap_data *keymap_data;

	u8 rows;
	u8 cols;
};

extern int omap4_keyboard_init(struct omap4_keypad_platform_data *,
				struct omap_board_data *);
#endif
Tue Jul 19 12:36:07 PDT 2016
Fri Jul 22 15:42:02 PDT 2016
Sun, Jul 24, 2016  1:45:28 PM
Mon, Jul 25, 2016  8:11:17 PM
Tue, Jul 26, 2016  2:45:14 PM
