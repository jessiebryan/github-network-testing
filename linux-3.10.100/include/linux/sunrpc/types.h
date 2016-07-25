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
Tue Jul 19 12:40:14 PDT 2016
Fri Jul 22 15:50:01 PDT 2016
Sun, Jul 24, 2016  2:43:32 PM
