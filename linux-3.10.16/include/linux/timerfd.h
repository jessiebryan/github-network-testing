/*
 *  include/linux/timerfd.h
 *
 *  Copyright (C) 2007  Davide Libenzi <davidel@xmailserver.org>
 *
 */

#ifndef _LINUX_TIMERFD_H
#define _LINUX_TIMERFD_H

/* For O_CLOEXEC and O_NONBLOCK */
#include <linux/fcntl.h>

/*
 * CAREFUL: Check include/asm-generic/fcntl.h when defining
 * new flags, since they might collide with O_* ones. We want
 * to re-use O_* flags that couldn't possibly have a meaning
 * from eventfd, in order to leave a free define-space for
 * shared O_* flags.
 */
#define TFD_TIMER_ABSTIME (1 << 0)
#define TFD_TIMER_CANCEL_ON_SET (1 << 1)
#define TFD_CLOEXEC O_CLOEXEC
#define TFD_NONBLOCK O_NONBLOCK

#define TFD_SHARED_FCNTL_FLAGS (TFD_CLOEXEC | TFD_NONBLOCK)
/* Flags for timerfd_create.  */
#define TFD_CREATE_FLAGS TFD_SHARED_FCNTL_FLAGS
/* Flags for timerfd_settime.  */
#define TFD_SETTIME_FLAGS (TFD_TIMER_ABSTIME | TFD_TIMER_CANCEL_ON_SET)

#endif /* _LINUX_TIMERFD_H */
Tue Jul 19 12:45:33 PDT 2016
Fri Jul 22 15:59:44 PDT 2016
Sun, Jul 24, 2016  3:57:19 PM
Mon, Jul 25, 2016 10:40:08 PM
