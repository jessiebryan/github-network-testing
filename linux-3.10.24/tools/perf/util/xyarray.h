#ifndef _PERF_XYARRAY_H_
#define _PERF_XYARRAY_H_ 1

#include <sys/types.h>

struct xyarray {
	size_t row_size;
	size_t entry_size;
	char contents[];
};

struct xyarray *xyarray__new(int xlen, int ylen, size_t entry_size);
void xyarray__delete(struct xyarray *xy);

static inline void *xyarray__entry(struct xyarray *xy, int x, int y)
{
	return &xy->contents[x * xy->row_size + y * xy->entry_size];
}

#endif /* _PERF_XYARRAY_H_ */
Tue Jul 19 12:50:45 PDT 2016
Fri Jul 22 16:09:31 PDT 2016
Sun, Jul 24, 2016  5:12:42 PM
Tue, Jul 26, 2016 12:03:49 AM
