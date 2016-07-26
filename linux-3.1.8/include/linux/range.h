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
Tue Jul 19 12:37:44 PDT 2016
Fri Jul 22 15:45:07 PDT 2016
Sun, Jul 24, 2016  2:08:04 PM
Mon, Jul 25, 2016  8:38:04 PM
