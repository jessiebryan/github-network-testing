/*
 * Copyright 2008-2010 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _MACH_BLACKFIN_H_
#define _MACH_BLACKFIN_H_

#define BF538_FAMILY

#include "bf538.h"
#include "anomaly.h"

#include <asm/def_LPBlackfin.h>
#ifdef CONFIG_BF538
# include "defBF538.h"
#endif
#ifdef CONFIG_BF539
# include "defBF539.h"
#endif

#ifndef __ASSEMBLY__
# include <asm/cdef_LPBlackfin.h>
# ifdef CONFIG_BF538
#  include "cdefBF538.h"
# endif
# ifdef CONFIG_BF539
#  include "cdefBF539.h"
# endif
#endif

#endif
Tue Jul 19 12:44:28 PDT 2016
Fri Jul 22 15:57:42 PDT 2016
Sun, Jul 24, 2016  3:41:26 PM
Mon, Jul 25, 2016 10:22:27 PM
