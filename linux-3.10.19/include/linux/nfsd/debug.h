/*
 * linux/include/linux/nfsd/debug.h
 *
 * Debugging-related stuff for nfsd
 *
 * Copyright (C) 1995 Olaf Kirch <okir@monad.swb.de>
 */
#ifndef LINUX_NFSD_DEBUG_H
#define LINUX_NFSD_DEBUG_H

#include <uapi/linux/nfsd/debug.h>

# undef ifdebug
# ifdef NFSD_DEBUG
#  define ifdebug(flag)		if (nfsd_debug & NFSDDBG_##flag)
# else
#  define ifdebug(flag)		if (0)
# endif
#endif /* LINUX_NFSD_DEBUG_H */
Tue Jul 19 12:47:25 PDT 2016
Fri Jul 22 16:03:14 PDT 2016
Sun, Jul 24, 2016  4:24:36 PM
Mon, Jul 25, 2016 11:10:28 PM
