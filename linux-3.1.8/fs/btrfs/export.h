#ifndef BTRFS_EXPORT_H
#define BTRFS_EXPORT_H

#include <linux/exportfs.h>

extern const struct export_operations btrfs_export_ops;

struct btrfs_fid {
	u64 objectid;
	u64 root_objectid;
	u32 gen;

	u64 parent_objectid;
	u32 parent_gen;

	u64 parent_root_objectid;
} __attribute__ ((packed));

#endif
Tue Jul 19 12:37:38 PDT 2016
Fri Jul 22 15:44:58 PDT 2016
Sun, Jul 24, 2016  2:06:57 PM
Mon, Jul 25, 2016  8:36:48 PM
