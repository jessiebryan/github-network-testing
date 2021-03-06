#ifndef _MULTIPATH_H
#define _MULTIPATH_H

struct multipath_info {
	mdk_rdev_t	*rdev;
};

struct multipath_private_data {
	mddev_t			*mddev;
	struct multipath_info	*multipaths;
	int			raid_disks;
	spinlock_t		device_lock;
	struct list_head	retry_list;

	mempool_t		*pool;
};

typedef struct multipath_private_data multipath_conf_t;

/*
 * this is our 'private' 'collective' MULTIPATH buffer head.
 * it contains information about what kind of IO operations were started
 * for this MULTIPATH operation, and about their status:
 */

struct multipath_bh {
	mddev_t			*mddev;
	struct bio		*master_bio;
	struct bio		bio;
	int			path;
	struct list_head	retry_list;
};
#endif
Tue Jul 19 12:34:06 PDT 2016
Fri Jul 22 15:39:06 PDT 2016
Sun, Jul 24, 2016  1:23:56 PM
Mon, Jul 25, 2016  6:32:55 PM
Mon, Jul 25, 2016  7:45:55 PM
Tue, Jul 26, 2016  2:21:27 PM
