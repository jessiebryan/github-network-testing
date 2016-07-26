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
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:36 PDT 2016
Sun, Jul 24, 2016  1:20:06 PM
Mon, Jul 25, 2016  6:28:19 PM
