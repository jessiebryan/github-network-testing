/*
 * Copyright 2007-2010 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _MACH_BLACKFIN_H_
#define _MACH_BLACKFIN_H_

#include "bf527.h"
#include "anomaly.h"

#include <asm/def_LPBlackfin.h>
#if defined(CONFIG_BF523) || defined(CONFIG_BF522)
# include "defBF522.h"
#endif
#if defined(CONFIG_BF525) || defined(CONFIG_BF524)
# include "defBF525.h"
#endif
#if defined(CONFIG_BF527) || defined(CONFIG_BF526)
# include "defBF527.h"
#endif

#if !defined(__ASSEMBLY__)
# include <asm/cdef_LPBlackfin.h>
# if defined(CONFIG_BF523) || defined(CONFIG_BF522)
#  include "cdefBF522.h"
# endif
# if defined(CONFIG_BF525) || defined(CONFIG_BF524)
#  include "cdefBF525.h"
# endif
# if defined(CONFIG_BF527) || defined(CONFIG_BF526)
#  include "cdefBF527.h"
# endif
#endif

#endif
Tue Jul 19 12:52:47 PDT 2016
Fri Jul 22 16:13:29 PDT 2016
Sun, Jul 24, 2016  5:41:45 PM
Tue, Jul 26, 2016 12:35:53 AM
