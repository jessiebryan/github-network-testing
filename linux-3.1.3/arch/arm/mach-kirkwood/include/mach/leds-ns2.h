/*
 * arch/arm/mach-kirkwood/include/mach/leds-ns2.h
 *
 * Platform data structure for Network Space v2 LED driver
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __MACH_LEDS_NS2_H
#define __MACH_LEDS_NS2_H

struct ns2_led {
	const char	*name;
	const char	*default_trigger;
	unsigned	cmd;
	unsigned	slow;
};

struct ns2_led_platform_data {
	int		num_leds;
	struct ns2_led	*leds;
};

#endif /* __MACH_LEDS_NS2_H */
Tue Jul 19 12:34:42 PDT 2016
Fri Jul 22 15:39:42 PDT 2016
Sun, Jul 24, 2016  1:28:22 PM
Mon, Jul 25, 2016  6:38:13 PM
Mon, Jul 25, 2016  7:51:06 PM
Tue, Jul 26, 2016  2:26:20 PM
