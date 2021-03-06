#ifndef __PROCFS_FD_H__
#define __PROCFS_FD_H__

#include <linux/fs.h>

extern const struct file_operations proc_fd_operations;
extern const struct inode_operations proc_fd_inode_operations;

extern const struct file_operations proc_fdinfo_operations;
extern const struct inode_operations proc_fdinfo_inode_operations;

extern int proc_fd_permission(struct inode *inode, int mask);

static inline int proc_fd(struct inode *inode)
{
	return PROC_I(inode)->fd;
}

#endif /* __PROCFS_FD_H__ */
Tue Jul 19 12:53:49 PDT 2016
Fri Jul 22 16:15:30 PDT 2016
Sun, Jul 24, 2016  5:56:38 PM
Tue, Jul 26, 2016 12:52:18 AM
