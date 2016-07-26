#ifndef _FS_CEPH_DEBUGFS_H
#define _FS_CEPH_DEBUGFS_H

#include "ceph_debug.h"
#include "types.h"

#define CEPH_DEFINE_SHOW_FUNC(name)					\
static int name##_open(struct inode *inode, struct file *file)		\
{									\
	struct seq_file *sf;						\
	int ret;							\
									\
	ret = single_open(file, name, NULL);				\
	sf = file->private_data;					\
	sf->private = inode->i_private;					\
	return ret;							\
}									\
									\
static const struct file_operations name##_fops = {			\
	.open		= name##_open,					\
	.read		= seq_read,					\
	.llseek		= seq_lseek,					\
	.release	= single_release,				\
};

/* debugfs.c */
extern int ceph_debugfs_init(void);
extern void ceph_debugfs_cleanup(void);
extern int ceph_debugfs_client_init(struct ceph_client *client);
extern void ceph_debugfs_client_cleanup(struct ceph_client *client);

#endif

Tue Jul 19 12:35:21 PDT 2016
Fri Jul 22 15:40:32 PDT 2016
Sun, Jul 24, 2016  1:34:27 PM
Mon, Jul 25, 2016  7:58:16 PM
Tue, Jul 26, 2016  2:33:03 PM
