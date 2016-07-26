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
Tue Jul 19 12:36:40 PDT 2016
Fri Jul 22 15:43:08 PDT 2016
Sun, Jul 24, 2016  1:53:30 PM
Mon, Jul 25, 2016  8:20:46 PM
