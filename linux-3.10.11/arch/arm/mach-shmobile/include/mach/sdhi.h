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
Tue Jul 19 12:41:44 PDT 2016
Fri Jul 22 15:52:54 PDT 2016
Sun, Jul 24, 2016  3:04:11 PM
Mon, Jul 25, 2016  9:40:52 PM
