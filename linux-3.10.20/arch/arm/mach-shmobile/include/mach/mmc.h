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
Tue Jul 19 12:47:36 PDT 2016
Fri Jul 22 16:03:35 PDT 2016
Sun, Jul 24, 2016  4:27:10 PM
Mon, Jul 25, 2016 11:13:19 PM
