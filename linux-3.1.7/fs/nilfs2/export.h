#ifndef NILFS_EXPORT_H
#define NILFS_EXPORT_H

#include <linux/exportfs.h>

extern const struct export_operations nilfs_export_ops;

struct nilfs_fid {
	u64 cno;
	u64 ino;
	u32 gen;

	u32 parent_gen;
	u64 parent_ino;
} __attribute__ ((packed));

#endif
Tue Jul 19 12:37:02 PDT 2016
Fri Jul 22 15:43:50 PDT 2016
Sun, Jul 24, 2016  1:58:49 PM
Mon, Jul 25, 2016  8:27:04 PM
