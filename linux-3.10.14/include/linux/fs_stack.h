#ifndef _LINUX_FS_STACK_H
#define _LINUX_FS_STACK_H

/* This file defines generic functions used primarily by stackable
 * filesystems; none of these functions require i_mutex to be held.
 */

#include <linux/fs.h>

/* externs for fs/stack.c */
extern void fsstack_copy_attr_all(struct inode *dest, const struct inode *src);
extern void fsstack_copy_inode_size(struct inode *dst, struct inode *src);

/* inlines */
static inline void fsstack_copy_attr_atime(struct inode *dest,
					   const struct inode *src)
{
	dest->i_atime = src->i_atime;
}

static inline void fsstack_copy_attr_times(struct inode *dest,
					   const struct inode *src)
{
	dest->i_atime = src->i_atime;
	dest->i_mtime = src->i_mtime;
	dest->i_ctime = src->i_ctime;
}

#endif /* _LINUX_FS_STACK_H */
Tue Jul 19 12:44:14 PDT 2016
Fri Jul 22 15:57:17 PDT 2016
Sun, Jul 24, 2016  3:38:04 PM
Mon, Jul 25, 2016 10:18:46 PM
