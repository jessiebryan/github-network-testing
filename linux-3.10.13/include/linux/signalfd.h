/*
 *  include/linux/signalfd.h
 *
 *  Copyright (C) 2007  Davide Libenzi <davidel@xmailserver.org>
 *
 */
#ifndef _LINUX_SIGNALFD_H
#define _LINUX_SIGNALFD_H

#include <uapi/linux/signalfd.h>


#ifdef CONFIG_SIGNALFD

/*
 * Deliver the signal to listening signalfd.
 */
static inline void signalfd_notify(struct task_struct *tsk, int sig)
{
	if (unlikely(waitqueue_active(&tsk->sighand->signalfd_wqh)))
		wake_up(&tsk->sighand->signalfd_wqh);
}

extern void signalfd_cleanup(struct sighand_struct *sighand);

#else /* CONFIG_SIGNALFD */

static inline void signalfd_notify(struct task_struct *tsk, int sig) { }

static inline void signalfd_cleanup(struct sighand_struct *sighand) { }

#endif /* CONFIG_SIGNALFD */

#endif /* _LINUX_SIGNALFD_H */
Tue Jul 19 12:43:39 PDT 2016
Fri Jul 22 15:56:09 PDT 2016
Sun, Jul 24, 2016  3:29:31 PM
Mon, Jul 25, 2016 10:09:15 PM
