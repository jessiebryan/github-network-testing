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
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:46 PDT 2016
Sun, Jul 24, 2016  1:36:10 PM
Mon, Jul 25, 2016  8:00:19 PM
Tue, Jul 26, 2016  2:34:57 PM
