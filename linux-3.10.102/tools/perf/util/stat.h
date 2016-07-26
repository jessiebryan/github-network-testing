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
Tue Jul 19 12:41:40 PDT 2016
Fri Jul 22 15:52:47 PDT 2016
Sun, Jul 24, 2016  3:03:24 PM
Mon, Jul 25, 2016  9:40:00 PM
