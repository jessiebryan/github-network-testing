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
Tue Jul 19 12:39:45 PDT 2016
Fri Jul 22 15:49:03 PDT 2016
Sun, Jul 24, 2016  2:36:32 PM
Mon, Jul 25, 2016  9:09:45 PM
