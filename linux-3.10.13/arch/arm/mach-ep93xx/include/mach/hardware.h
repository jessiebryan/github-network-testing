/*
 * arch/arm/mach-ep93xx/include/mach/hardware.h
 */

#ifndef __ASM_ARCH_HARDWARE_H
#define __ASM_ARCH_HARDWARE_H

#include <mach/platform.h>

/*
 * The EP93xx has two external crystal oscillators.  To generate the
 * required high-frequency clocks, the processor uses two phase-locked-
 * loops (PLLs) to multiply the incoming external clock signal to much
 * higher frequencies that are then divided down by programmable dividers
 * to produce the needed clocks.  The PLLs operate independently of one
 * another.
 */
#define EP93XX_EXT_CLK_RATE	14745600
#define EP93XX_EXT_RTC_RATE	32768

#define EP93XX_KEYTCHCLK_DIV4	(EP93XX_EXT_CLK_RATE / 4)
#define EP93XX_KEYTCHCLK_DIV16	(EP93XX_EXT_CLK_RATE / 16)

#endif
Tue Jul 19 12:43:08 PDT 2016
Fri Jul 22 15:55:13 PDT 2016
Sun, Jul 24, 2016  3:22:12 PM
Mon, Jul 25, 2016 10:01:06 PM
