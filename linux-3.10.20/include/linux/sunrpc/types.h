/*
 * linux/include/linux/sunrpc/types.h
 *
 * Generic types and misc stuff for RPC.
 *
 * Copyright (C) 1996, Olaf Kirch <okir@monad.swb.de>
 */

#ifndef _LINUX_SUNRPC_TYPES_H_
#define _LINUX_SUNRPC_TYPES_H_

#include <linux/timer.h>
#include <linux/workqueue.h>
#include <linux/sunrpc/debug.h>
#include <linux/list.h>

/*
 * Shorthands
 */
#define signalled()		(signal_pending(current))

#endif /* _LINUX_SUNRPC_TYPES_H_ */
Tue Jul 19 12:48:05 PDT 2016
Fri Jul 22 16:04:29 PDT 2016
Sun, Jul 24, 2016  4:34:11 PM
