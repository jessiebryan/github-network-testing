#ifndef _RAID0_H
#define _RAID0_H

struct strip_zone
{
	sector_t zone_end;	/* Start of the next zone (in sectors) */
	sector_t dev_start;	/* Zone offset in real dev (in sectors) */
	int nb_dev;		/* # of devices attached to the zone */
};

struct raid0_private_data
{
	struct strip_zone *strip_zone;
	mdk_rdev_t **devlist; /* lists of rdevs, pointed to by strip_zone->dev */
	int nr_strip_zones;
};

typedef struct raid0_private_data raid0_conf_t;

#endif
Tue Jul 19 12:33:29 PDT 2016
Fri Jul 22 15:38:02 PDT 2016
Sun, Jul 24, 2016  1:15:41 PM
Mon, Jul 25, 2016  6:23:00 PM
Mon, Jul 25, 2016  7:36:13 PM
Tue, Jul 26, 2016  2:12:11 PM
