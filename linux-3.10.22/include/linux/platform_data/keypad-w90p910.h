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
Tue Jul 19 12:49:21 PDT 2016
Fri Jul 22 16:06:52 PDT 2016
Sun, Jul 24, 2016  4:52:23 PM
Mon, Jul 25, 2016 11:41:26 PM
