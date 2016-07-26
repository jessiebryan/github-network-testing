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
Tue Jul 19 12:48:10 PDT 2016
Fri Jul 22 16:04:40 PDT 2016
Sun, Jul 24, 2016  4:35:38 PM
Mon, Jul 25, 2016 11:22:43 PM
