#ifndef CEPH_CRUSH_MAPPER_H
#define CEPH_CRUSH_MAPPER_H

/*
 * CRUSH functions for find rules and then mapping an input to an
 * output set.
 *
 * LGPL2
 */

#include "crush.h"

extern int crush_find_rule(struct crush_map *map, int pool, int type, int size);
extern int crush_do_rule(struct crush_map *map,
			 int ruleno,
			 int x, int *result, int result_max,
			 int forcefeed,    /* -1 for none */
			 __u32 *weights);

#endif
Tue Jul 19 12:36:30 PDT 2016
Fri Jul 22 15:42:48 PDT 2016
Sun, Jul 24, 2016  1:50:58 PM
Mon, Jul 25, 2016  8:17:46 PM
