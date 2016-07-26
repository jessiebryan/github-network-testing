/*
 * Copyright 2011 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _MACH_BLACKFIN_H_
#define _MACH_BLACKFIN_H_

#include "bf609.h"
#include "anomaly.h"

#include <asm/def_LPBlackfin.h>
#ifdef CONFIG_BF609
# include "defBF609.h"
#endif

#ifndef __ASSEMBLY__
# include <asm/cdef_LPBlackfin.h>
# ifdef CONFIG_BF609
#  include "cdefBF609.h"
# endif
#endif

#endif
Tue Jul 19 12:47:37 PDT 2016
Fri Jul 22 16:03:38 PDT 2016
Sun, Jul 24, 2016  4:27:34 PM
Mon, Jul 25, 2016 11:13:45 PM
