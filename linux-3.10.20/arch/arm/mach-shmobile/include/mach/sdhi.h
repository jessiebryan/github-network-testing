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
Tue Jul 19 12:47:36 PDT 2016
Fri Jul 22 16:03:35 PDT 2016
Sun, Jul 24, 2016  4:27:11 PM
Mon, Jul 25, 2016 11:13:20 PM
