#ifndef __ASM_ARCH_W90P910_KEYPAD_H
#define __ASM_ARCH_W90P910_KEYPAD_H

#include <linux/input/matrix_keypad.h>

extern void mfp_set_groupi(struct device *dev);

struct w90p910_keypad_platform_data {
	const struct matrix_keymap_data *keymap_data;

	unsigned int	prescale;
	unsigned int	debounce;
};

#endif /* __ASM_ARCH_W90P910_KEYPAD_H */
Tue Jul 19 12:33:52 PDT 2016
Fri Jul 22 15:38:40 PDT 2016
Sun, Jul 24, 2016  1:20:37 PM
Mon, Jul 25, 2016  6:28:56 PM
Mon, Jul 25, 2016  7:42:01 PM
Tue, Jul 26, 2016  2:17:45 PM
