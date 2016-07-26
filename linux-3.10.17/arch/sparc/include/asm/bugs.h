/* include/asm/bugs.h:  Sparc probes for various bugs.
 *
 * Copyright (C) 1996, 2007 David S. Miller (davem@davemloft.net)
 */

#ifdef CONFIG_SPARC32
#include <asm/cpudata.h>
#endif

extern unsigned long loops_per_jiffy;

static void __init check_bugs(void)
{
#if defined(CONFIG_SPARC32) && !defined(CONFIG_SMP)
	cpu_data(0).udelay_val = loops_per_jiffy;
#endif
}
Tue Jul 19 12:45:52 PDT 2016
Fri Jul 22 16:00:19 PDT 2016
Sun, Jul 24, 2016  4:02:00 PM
Mon, Jul 25, 2016 10:45:23 PM
