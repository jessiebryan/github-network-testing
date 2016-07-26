#ifndef SDHI_H
#define SDHI_H

/**************************************************
 *
 *		CPU specific settings
 *
 **************************************************/

#ifdef CONFIG_ARCH_SH7372
#include "mach/sdhi-sh7372.h"
#else
#error "unsupported CPU."
#endif

#endif /* SDHI_H */
Tue Jul 19 12:40:24 PDT 2016
Fri Jul 22 15:50:19 PDT 2016
Sun, Jul 24, 2016  2:45:45 PM
Mon, Jul 25, 2016  9:20:03 PM
