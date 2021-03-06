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
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:35 PDT 2016
Sun, Jul 24, 2016  1:12:28 PM
Mon, Jul 25, 2016  6:19:10 PM
Mon, Jul 25, 2016  7:32:26 PM
Tue, Jul 26, 2016  2:08:38 PM
