#ifndef __PERF_VALUES_H
#define __PERF_VALUES_H

#include "types.h"

struct perf_read_values {
	int threads;
	int threads_max;
	u32 *pid, *tid;
	int counters;
	int counters_max;
	u64 *counterrawid;
	char **countername;
	u64 **value;
};

void perf_read_values_init(struct perf_read_values *values);
void perf_read_values_destroy(struct perf_read_values *values);

void perf_read_values_add_value(struct perf_read_values *values,
				u32 pid, u32 tid,
				u64 rawid, const char *name, u64 value);

void perf_read_values_display(FILE *fp, struct perf_read_values *values,
			      int raw);

#endif /* __PERF_VALUES_H */
Tue Jul 19 12:44:24 PDT 2016
Fri Jul 22 15:57:33 PDT 2016
Sun, Jul 24, 2016  3:40:18 PM
Mon, Jul 25, 2016 10:21:12 PM
