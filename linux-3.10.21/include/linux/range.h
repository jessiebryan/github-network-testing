#ifndef _LINUX_RANGE_H
#define _LINUX_RANGE_H

struct range {
	u64   start;
	u64   end;
};

int add_range(struct range *range, int az, int nr_range,
		u64 start, u64 end);


int add_range_with_merge(struct range *range, int az, int nr_range,
				u64 start, u64 end);

void subtract_range(struct range *range, int az, u64 start, u64 end);

int clean_sort_range(struct range *range, int az);

void sort_range(struct range *range, int nr_range);

#define MAX_RESOURCE ((resource_size_t)~0)
static inline resource_size_t cap_resource(u64 val)
{
	if (val > MAX_RESOURCE)
		return MAX_RESOURCE;

	return val;
}
#endif
Tue Jul 19 12:48:42 PDT 2016
Fri Jul 22 16:05:40 PDT 2016
Sun, Jul 24, 2016  4:43:17 PM
Mon, Jul 25, 2016 11:31:13 PM
