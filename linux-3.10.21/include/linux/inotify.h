/*
 * Inode based directory notification for Linux
 *
 * Copyright (C) 2005 John McCutchan
 */
#ifndef _LINUX_INOTIFY_H
#define _LINUX_INOTIFY_H

#include <linux/sysctl.h>
#include <uapi/linux/inotify.h>

extern struct ctl_table inotify_table[]; /* for sysctl */

#define ALL_INOTIFY_BITS (IN_ACCESS | IN_MODIFY | IN_ATTRIB | IN_CLOSE_WRITE | \
			  IN_CLOSE_NOWRITE | IN_OPEN | IN_MOVED_FROM | \
			  IN_MOVED_TO | IN_CREATE | IN_DELETE | \
			  IN_DELETE_SELF | IN_MOVE_SELF | IN_UNMOUNT | \
			  IN_Q_OVERFLOW | IN_IGNORED | IN_ONLYDIR | \
			  IN_DONT_FOLLOW | IN_EXCL_UNLINK | IN_MASK_ADD | \
			  IN_ISDIR | IN_ONESHOT)

#endif	/* _LINUX_INOTIFY_H */
Tue Jul 19 12:48:40 PDT 2016
Fri Jul 22 16:05:36 PDT 2016
Sun, Jul 24, 2016  4:42:47 PM
Mon, Jul 25, 2016 11:30:40 PM
