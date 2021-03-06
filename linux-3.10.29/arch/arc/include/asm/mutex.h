/*
 * Copyright (C) 2004, 2007-2010, 2011-2012 Synopsys, Inc. (www.synopsys.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

/*
 * xchg() based mutex fast path maintains a state of 0 or 1, as opposed to
 * atomic dec based which can "count" any number of lock contenders.
 * This ideally needs to be fixed in core, but for now switching to dec ver.
 */
#if defined(CONFIG_SMP) && (CONFIG_NR_CPUS > 2)
#include <asm-generic/mutex-dec.h>
#else
#include <asm-generic/mutex-xchg.h>
#endif
Tue Jul 19 12:53:22 PDT 2016
Fri Jul 22 16:14:37 PDT 2016
Sun, Jul 24, 2016  5:50:06 PM
Tue, Jul 26, 2016 12:45:06 AM
