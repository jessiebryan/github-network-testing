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
Tue Jul 19 12:50:09 PDT 2016
Fri Jul 22 16:08:24 PDT 2016
Sun, Jul 24, 2016  5:04:13 PM
Mon, Jul 25, 2016 11:54:25 PM
