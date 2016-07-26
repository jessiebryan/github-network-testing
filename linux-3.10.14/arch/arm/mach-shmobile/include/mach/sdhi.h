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
Tue Jul 19 12:43:48 PDT 2016
Fri Jul 22 15:56:27 PDT 2016
Sun, Jul 24, 2016  3:31:49 PM
Mon, Jul 25, 2016 10:11:49 PM
