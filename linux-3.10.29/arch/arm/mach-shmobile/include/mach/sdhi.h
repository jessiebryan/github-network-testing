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
Tue Jul 19 12:53:24 PDT 2016
Fri Jul 22 16:14:42 PDT 2016
Sun, Jul 24, 2016  5:50:45 PM
Tue, Jul 26, 2016 12:45:48 AM
