#ifndef _RAID0_H
#define _RAID0_H

struct strip_zone {
	sector_t zone_end;	/* Start of the next zone (in sectors) */
	sector_t dev_start;	/* Zone offset in real dev (in sectors) */
	int	 nb_dev;	/* # of devices attached to the zone */
};

struct r0conf {
	struct strip_zone	*strip_zone;
	struct md_rdev		**devlist; /* lists of rdevs, pointed to
					    * by strip_zone->dev */
	int			nr_strip_zones;
	int			has_merge_bvec;	/* at least one member has
						 * a merge_bvec_fn */
};

#endif
Tue Jul 19 12:40:01 PDT 2016
Fri Jul 22 15:49:34 PDT 2016
Sun, Jul 24, 2016  2:40:16 PM
Mon, Jul 25, 2016  9:13:54 PM
