#ifndef CEPH_CRUSH_MAPPER_H
#define CEPH_CRUSH_MAPPER_H

/*
 * CRUSH functions for find rules and then mapping an input to an
 * output set.
 *
 * LGPL2
 */

#include <linux/crush/crush.h>

extern int crush_find_rule(const struct crush_map *map, int ruleset, int type, int size);
extern int crush_do_rule(const struct crush_map *map,
			 int ruleno,
			 int x, int *result, int result_max,
			 const __u32 *weights);

#endif
Tue Jul 19 12:47:23 PDT 2016
Fri Jul 22 16:03:11 PDT 2016
Sun, Jul 24, 2016  4:24:08 PM
Mon, Jul 25, 2016 11:09:56 PM
