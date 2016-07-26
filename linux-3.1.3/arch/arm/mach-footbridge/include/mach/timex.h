/*
 *  arch/arm/mach-footbridge/include/mach/timex.h
 *
 *  Copyright (C) 1998 Russell King
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *  EBSA285 architecture timex specifications
 */

/*
 * We assume a constant here; this satisfies the maths in linux/timex.h
 * and linux/time.h.  CLOCK_TICK_RATE is actually system dependent, but
 * this must be a constant.
 */
#define CLOCK_TICK_RATE		(50000000/16)
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:41 PDT 2016
Sun, Jul 24, 2016  1:28:16 PM
Mon, Jul 25, 2016  6:38:07 PM
Mon, Jul 25, 2016  7:51:00 PM
