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
Tue Jul 19 12:52:31 PDT 2016
Fri Jul 22 16:12:57 PDT 2016
Sun, Jul 24, 2016  5:37:49 PM
Tue, Jul 26, 2016 12:31:32 AM
