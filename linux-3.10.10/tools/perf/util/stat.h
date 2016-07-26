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
Tue Jul 19 12:39:42 PDT 2016
Fri Jul 22 15:48:57 PDT 2016
Sun, Jul 24, 2016  2:35:45 PM
Mon, Jul 25, 2016  9:08:53 PM
