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
Tue Jul 19 12:43:11 PDT 2016
Fri Jul 22 15:55:19 PDT 2016
Sun, Jul 24, 2016  3:23:00 PM
