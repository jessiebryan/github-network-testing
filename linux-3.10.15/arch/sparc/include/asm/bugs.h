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
Tue Jul 19 12:44:37 PDT 2016
Fri Jul 22 15:57:58 PDT 2016
Sun, Jul 24, 2016  3:43:34 PM
Mon, Jul 25, 2016 10:24:52 PM
