#ifndef _FS_CEPH_TYPES_H
#define _FS_CEPH_TYPES_H

/* needed before including ceph_fs.h */
#include <linux/in.h>
#include <linux/types.h>
#include <linux/fcntl.h>
#include <linux/string.h>

#include "ceph_fs.h"
#include "ceph_frag.h"
#include "ceph_hash.h"

/*
 * Identify inodes by both their ino AND snapshot id (a u64).
 */
struct ceph_vino {
	u64 ino;
	u64 snap;
};


/* context for the caps reservation mechanism */
struct ceph_cap_reservation {
	int count;
};


#endif
Tue Jul 19 12:33:38 PDT 2016
Fri Jul 22 15:38:20 PDT 2016
Sun, Jul 24, 2016  1:17:56 PM
Mon, Jul 25, 2016  6:25:43 PM
Mon, Jul 25, 2016  7:38:52 PM
Tue, Jul 26, 2016  2:14:45 PM
