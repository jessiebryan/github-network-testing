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
Tue Jul 19 12:53:40 PDT 2016
Fri Jul 22 16:15:13 PDT 2016
Sun, Jul 24, 2016  5:54:31 PM
Tue, Jul 26, 2016 12:49:59 AM
