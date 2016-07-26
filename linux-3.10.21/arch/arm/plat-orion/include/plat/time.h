/*
 * arch/arm/plat-orion/include/plat/time.h
 *
 * Marvell Orion SoC time handling.
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __PLAT_TIME_H
#define __PLAT_TIME_H

void orion_time_set_base(void __iomem *timer_base);

void orion_time_init(void __iomem *bridge_base, u32 bridge_timer1_clr_mask,
		     unsigned int irq, unsigned int tclk);


#endif
Tue Jul 19 12:48:15 PDT 2016
Fri Jul 22 16:04:46 PDT 2016
Sun, Jul 24, 2016  4:36:29 PM
Mon, Jul 25, 2016 11:23:40 PM
