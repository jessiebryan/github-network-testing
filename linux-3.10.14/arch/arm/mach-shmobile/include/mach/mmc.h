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
Tue Jul 19 12:43:48 PDT 2016
Fri Jul 22 15:56:26 PDT 2016
Sun, Jul 24, 2016  3:31:49 PM
Mon, Jul 25, 2016 10:11:48 PM
