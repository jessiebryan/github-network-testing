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

Tue Jul 19 12:45:40 PDT 2016
Fri Jul 22 15:59:58 PDT 2016
Sun, Jul 24, 2016  3:59:11 PM
Mon, Jul 25, 2016 10:42:13 PM
