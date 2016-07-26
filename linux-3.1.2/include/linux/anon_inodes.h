/*
 *  include/linux/anon_inodes.h
 *
 *  Copyright (C) 2007  Davide Libenzi <davidel@xmailserver.org>
 *
 */

#ifndef _LINUX_ANON_INODES_H
#define _LINUX_ANON_INODES_H

struct file_operations;

struct file *anon_inode_getfile(const char *name,
				const struct file_operations *fops,
				void *priv, int flags);
int anon_inode_getfd(const char *name, const struct file_operations *fops,
		     void *priv, int flags);

#endif /* _LINUX_ANON_INODES_H */

Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:23 PDT 2016
Sun, Jul 24, 2016  1:26:07 PM
Mon, Jul 25, 2016  6:35:32 PM
Mon, Jul 25, 2016  7:48:28 PM
Tue, Jul 26, 2016  2:23:51 PM
