/*
 * Copyright 2005-2010 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _MACH_BLACKFIN_H_
#define _MACH_BLACKFIN_H_

#define BF537_FAMILY

#include "bf537.h"
#include "anomaly.h"

#include <asm/def_LPBlackfin.h>
#ifdef CONFIG_BF534
# include "defBF534.h"
#endif
#if defined(CONFIG_BF537) || defined(CONFIG_BF536)
# include "defBF537.h"
#endif

#if !defined(__ASSEMBLY__)
# include <asm/cdef_LPBlackfin.h>
# ifdef CONFIG_BF534
#  include "cdefBF534.h"
# endif
# if defined(CONFIG_BF537) || defined(CONFIG_BF536)
#  include "cdefBF537.h"
# endif
#endif

#endif
Tue Jul 19 12:35:34 PDT 2016
Fri Jul 22 15:40:58 PDT 2016
Sun, Jul 24, 2016  1:37:29 PM
Mon, Jul 25, 2016  8:01:52 PM
Tue, Jul 26, 2016  2:36:25 PM
