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
Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:25 PDT 2016
Sun, Jul 24, 2016  1:26:19 PM
Mon, Jul 25, 2016  6:35:46 PM
Mon, Jul 25, 2016  7:48:43 PM
Tue, Jul 26, 2016  2:24:04 PM
