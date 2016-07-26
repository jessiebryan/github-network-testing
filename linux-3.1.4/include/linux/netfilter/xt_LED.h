#ifndef _XT_LED_H
#define _XT_LED_H

#include <linux/types.h>

struct xt_led_info {
	char id[27];        /* Unique ID for this trigger in the LED class */
	__u8 always_blink;  /* Blink even if the LED is already on */
	__u32 delay;        /* Delay until LED is switched off after trigger */

	/* Kernel data used in the module */
	void *internal_data __attribute__((aligned(8)));
};

#endif /* _XT_LED_H */
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:44 PDT 2016
Sun, Jul 24, 2016  1:43:10 PM
Mon, Jul 25, 2016  8:08:35 PM
