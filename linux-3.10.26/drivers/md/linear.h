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
Tue Jul 19 12:51:44 PDT 2016
Fri Jul 22 16:11:24 PDT 2016
Sun, Jul 24, 2016  5:26:33 PM
Tue, Jul 26, 2016 12:19:07 AM
