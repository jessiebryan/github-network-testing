#ifndef _LINEAR_H
#define _LINEAR_H

struct dev_info {
	mdk_rdev_t	*rdev;
	sector_t	end_sector;
};

typedef struct dev_info dev_info_t;

struct linear_private_data
{
	struct rcu_head		rcu;
	sector_t		array_sectors;
	dev_info_t		disks[0];
};


typedef struct linear_private_data linear_conf_t;

#endif
Tue Jul 19 12:33:29 PDT 2016
Fri Jul 22 15:38:01 PDT 2016
Sun, Jul 24, 2016  1:15:41 PM
Mon, Jul 25, 2016  6:23:00 PM
Mon, Jul 25, 2016  7:36:13 PM
Tue, Jul 26, 2016  2:12:11 PM
