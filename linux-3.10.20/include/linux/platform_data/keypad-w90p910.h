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
Tue Jul 19 12:48:04 PDT 2016
Fri Jul 22 16:04:27 PDT 2016
Sun, Jul 24, 2016  4:33:57 PM
Mon, Jul 25, 2016 11:20:51 PM
