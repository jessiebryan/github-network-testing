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
Tue Jul 19 12:35:46 PDT 2016
Fri Jul 22 15:41:22 PDT 2016
Sun, Jul 24, 2016  1:40:26 PM
Mon, Jul 25, 2016  8:05:21 PM
Tue, Jul 26, 2016  2:39:42 PM
