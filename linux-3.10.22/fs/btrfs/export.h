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
Tue Jul 19 12:49:16 PDT 2016
Fri Jul 22 16:06:43 PDT 2016
Sun, Jul 24, 2016  4:51:16 PM
Mon, Jul 25, 2016 11:40:12 PM
