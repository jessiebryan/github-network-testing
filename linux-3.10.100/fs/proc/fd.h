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
Tue Jul 19 12:40:10 PDT 2016
Fri Jul 22 15:49:52 PDT 2016
Sun, Jul 24, 2016  2:42:21 PM
Mon, Jul 25, 2016  9:16:13 PM
