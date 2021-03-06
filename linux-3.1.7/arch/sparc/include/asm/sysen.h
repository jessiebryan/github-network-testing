/*
 * sysen.h:  Bit fields within the "System Enable" register accessed via
 *           the ASI_CONTROL address space at address AC_SYSENABLE.
 *
 * Copyright (C) 1994 David S. Miller (davem@caip.rutgers.edu)
 */

#ifndef _SPARC_SYSEN_H
#define _SPARC_SYSEN_H

#define SENABLE_DVMA   0x20   /* enable dvma transfers */
#define SENABLE_CACHE  0x10   /* enable VAC cache */
#define SENABLE_RESET  0x04   /* reset whole machine, danger Will Robinson */

#endif /* _SPARC_SYSEN_H */
Tue Jul 19 12:36:50 PDT 2016
Fri Jul 22 15:43:29 PDT 2016
Sun, Jul 24, 2016  1:56:03 PM
Mon, Jul 25, 2016  8:23:46 PM
