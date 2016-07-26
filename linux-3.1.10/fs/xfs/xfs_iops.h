/*
 * Copyright (c) 2000-2003,2005 Silicon Graphics, Inc.
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it would be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write the Free Software Foundation,
 * Inc.,  51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef __XFS_IOPS_H__
#define __XFS_IOPS_H__

struct xfs_inode;

extern const struct file_operations xfs_file_operations;
extern const struct file_operations xfs_dir_file_operations;

extern ssize_t xfs_vn_listxattr(struct dentry *, char *data, size_t size);

extern void xfs_setup_inode(struct xfs_inode *);

#endif /* __XFS_IOPS_H__ */
Tue Jul 19 12:33:37 PDT 2016
Fri Jul 22 15:38:18 PDT 2016
Sun, Jul 24, 2016  1:17:41 PM
Mon, Jul 25, 2016  6:25:24 PM
Mon, Jul 25, 2016  7:38:34 PM
Tue, Jul 26, 2016  2:14:27 PM
