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
Tue Jul 19 12:48:00 PDT 2016
Fri Jul 22 16:04:20 PDT 2016
Sun, Jul 24, 2016  4:33:01 PM
Mon, Jul 25, 2016 11:19:49 PM
