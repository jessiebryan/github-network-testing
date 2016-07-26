#ifndef MMC_H
#define MMC_H

/**************************************************
 *
 *		board specific settings
 *
 **************************************************/

#ifdef CONFIG_MACH_AP4EVB
#include "mach/mmc-ap4eb.h"
#elif defined(CONFIG_MACH_MACKEREL)
#include "mach/mmc-mackerel.h"
#else
#error "unsupported board."
#endif

#endif /* MMC_H */
Tue Jul 19 12:36:06 PDT 2016
Fri Jul 22 15:42:00 PDT 2016
Sun, Jul 24, 2016  1:45:16 PM
Mon, Jul 25, 2016  8:11:03 PM
Tue, Jul 26, 2016  2:45:00 PM
