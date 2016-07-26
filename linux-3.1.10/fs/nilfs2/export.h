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
Tue Jul 19 12:33:37 PDT 2016
Fri Jul 22 15:38:17 PDT 2016
Sun, Jul 24, 2016  1:17:34 PM
Mon, Jul 25, 2016  6:25:16 PM
Mon, Jul 25, 2016  7:38:26 PM
Tue, Jul 26, 2016  2:14:20 PM
