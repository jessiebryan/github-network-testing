#ifndef NILFS_EXPORT_H
#define NILFS_EXPORT_H

#include <linux/exportfs.h>

extern const struct export_operations nilfs_export_ops;

/**
 * struct nilfs_fid - NILFS file id type
 * @cno: checkpoint number
 * @ino: inode number
 * @gen: file generation (version) for NFS
 * @parent_gen: parent generation (version) for NFS
 * @parent_ino: parent inode number
 */
struct nilfs_fid {
	u64 cno;
	u64 ino;
	u32 gen;

	u32 parent_gen;
	u64 parent_ino;
} __attribute__ ((packed));

#endif
Tue Jul 19 12:51:53 PDT 2016
Fri Jul 22 16:11:43 PDT 2016
Sun, Jul 24, 2016  5:28:38 PM
Tue, Jul 26, 2016 12:21:23 AM
