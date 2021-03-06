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
Tue Jul 19 12:36:20 PDT 2016
Fri Jul 22 15:42:28 PDT 2016
Sun, Jul 24, 2016  1:48:40 PM
Mon, Jul 25, 2016  8:15:06 PM
