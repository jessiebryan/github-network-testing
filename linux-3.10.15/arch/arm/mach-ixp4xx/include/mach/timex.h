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

Tue Jul 19 12:44:26 PDT 2016
Fri Jul 22 15:57:37 PDT 2016
Sun, Jul 24, 2016  3:40:45 PM
Mon, Jul 25, 2016 10:21:42 PM
