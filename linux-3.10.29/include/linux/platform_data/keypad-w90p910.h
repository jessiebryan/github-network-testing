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
Tue Jul 19 12:53:53 PDT 2016
Fri Jul 22 16:15:37 PDT 2016
Sun, Jul 24, 2016  5:57:34 PM
Tue, Jul 26, 2016 12:53:20 AM
