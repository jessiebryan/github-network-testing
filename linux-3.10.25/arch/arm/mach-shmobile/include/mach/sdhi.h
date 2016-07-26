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
Tue Jul 19 12:50:49 PDT 2016
Fri Jul 22 16:09:38 PDT 2016
Sun, Jul 24, 2016  5:13:29 PM
Tue, Jul 26, 2016 12:04:41 AM
