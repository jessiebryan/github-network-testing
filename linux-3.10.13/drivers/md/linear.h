#ifndef _LINEAR_H
#define _LINEAR_H

struct dev_info {
	struct md_rdev	*rdev;
	sector_t	end_sector;
};

struct linear_conf
{
	struct rcu_head		rcu;
	sector_t		array_sectors;
	struct dev_info		disks[0];
};
#endif
Tue Jul 19 12:43:25 PDT 2016
Fri Jul 22 15:55:45 PDT 2016
Sun, Jul 24, 2016  3:26:20 PM
Mon, Jul 25, 2016 10:05:41 PM
