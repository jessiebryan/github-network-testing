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
Tue Jul 19 12:52:22 PDT 2016
Fri Jul 22 16:12:42 PDT 2016
Sun, Jul 24, 2016  5:35:52 PM
Tue, Jul 26, 2016 12:29:24 AM
