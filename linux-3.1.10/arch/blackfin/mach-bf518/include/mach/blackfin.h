/*
 * Copyright 2008-2010 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _MACH_BLACKFIN_H_
#define _MACH_BLACKFIN_H_

#include "bf518.h"
#include "anomaly.h"

#include <asm/def_LPBlackfin.h>
#ifdef CONFIG_BF512
# include "defBF512.h"
#endif
#ifdef CONFIG_BF514
# include "defBF514.h"
#endif
#ifdef CONFIG_BF516
# include "defBF516.h"
#endif
#ifdef CONFIG_BF518
# include "defBF518.h"
#endif

#ifndef __ASSEMBLY__
# include <asm/cdef_LPBlackfin.h>
# ifdef CONFIG_BF512
#  include "cdefBF512.h"
# endif
# ifdef CONFIG_BF514
#  include "cdefBF514.h"
# endif
# ifdef CONFIG_BF516
#  include "cdefBF516.h"
# endif
# ifdef CONFIG_BF518
#  include "cdefBF518.h"
# endif
#endif

#endif
Tue Jul 19 12:33:17 PDT 2016
Fri Jul 22 15:37:37 PDT 2016
Sun, Jul 24, 2016  1:12:42 PM
Mon, Jul 25, 2016  6:19:27 PM
Mon, Jul 25, 2016  7:32:43 PM
Tue, Jul 26, 2016  2:08:54 PM
