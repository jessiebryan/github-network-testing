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
Tue Jul 19 12:50:49 PDT 2016
Fri Jul 22 16:09:38 PDT 2016
Sun, Jul 24, 2016  5:13:29 PM
Tue, Jul 26, 2016 12:04:40 AM
