#ifndef __PERF_STATS_H
#define __PERF_STATS_H

#include "types.h"

struct stats
{
	double n, mean, M2;
};

void update_stats(struct stats *stats, u64 val);
double avg_stats(struct stats *stats);
double stddev_stats(struct stats *stats);
double rel_stddev_stats(double stddev, double avg);

#endif
Tue Jul 19 12:42:28 PDT 2016
Fri Jul 22 15:53:59 PDT 2016
Sun, Jul 24, 2016  3:12:36 PM
Mon, Jul 25, 2016  9:50:24 PM
