/*
 * arch/arm/mach-ixp4xx/include/mach/timex.h
 * 
 */

#include <mach/hardware.h>

/*
 * We use IXP425 General purpose timer for our timer needs, it runs at 
 * 66.66... MHz. We do a convulted calculation of CLOCK_TICK_RATE b/c the
 * timer register ignores the bottom 2 bits of the LATCH value.
 */
#define IXP4XX_TIMER_FREQ 66666000
#define CLOCK_TICK_RATE \
	(((IXP4XX_TIMER_FREQ / HZ & ~IXP4XX_OST_RELOAD_MASK) + 1) * HZ)

Tue Jul 19 12:52:05 PDT 2016
Fri Jul 22 16:12:08 PDT 2016
Sun, Jul 24, 2016  5:31:47 PM
Tue, Jul 26, 2016 12:24:53 AM
