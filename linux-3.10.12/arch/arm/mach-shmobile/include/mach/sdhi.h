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
Tue Jul 19 12:42:31 PDT 2016
Fri Jul 22 15:54:05 PDT 2016
Sun, Jul 24, 2016  3:13:23 PM
Mon, Jul 25, 2016  9:51:17 PM
