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
Tue Jul 19 12:35:21 PDT 2016
Fri Jul 22 15:40:32 PDT 2016
Sun, Jul 24, 2016  1:34:27 PM
Mon, Jul 25, 2016  7:58:17 PM
Tue, Jul 26, 2016  2:33:03 PM
