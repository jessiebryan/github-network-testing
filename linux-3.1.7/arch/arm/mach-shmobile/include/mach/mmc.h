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
Tue Jul 19 12:36:40 PDT 2016
Fri Jul 22 15:43:08 PDT 2016
Sun, Jul 24, 2016  1:53:30 PM
Mon, Jul 25, 2016  8:20:46 PM
