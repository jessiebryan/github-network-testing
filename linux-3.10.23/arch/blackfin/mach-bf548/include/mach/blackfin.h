/*
 * Copyright 2007-2010 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _MACH_BLACKFIN_H_
#define _MACH_BLACKFIN_H_

#include "bf548.h"
#include "anomaly.h"

#include <asm/def_LPBlackfin.h>
#ifdef CONFIG_BF542
# include "defBF542.h"
#endif
#ifdef CONFIG_BF544
# include "defBF544.h"
#endif
#ifdef CONFIG_BF547
# include "defBF547.h"
#endif
#ifdef CONFIG_BF548
# include "defBF548.h"
#endif
#ifdef CONFIG_BF549
# include "defBF549.h"
#endif

#ifndef __ASSEMBLY__
# include <asm/cdef_LPBlackfin.h>
# ifdef CONFIG_BF542
#  include "cdefBF542.h"
# endif
# ifdef CONFIG_BF544
#  include "cdefBF544.h"
# endif
# ifdef CONFIG_BF547
#  include "cdefBF547.h"
# endif
# ifdef CONFIG_BF548
#  include "cdefBF548.h"
# endif
# ifdef CONFIG_BF549
#  include "cdefBF549.h"
# endif
#endif

#endif
Tue Jul 19 12:49:33 PDT 2016
Fri Jul 22 16:07:14 PDT 2016
Sun, Jul 24, 2016  4:55:13 PM
Mon, Jul 25, 2016 11:44:35 PM
