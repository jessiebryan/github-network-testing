#ifndef __PERF_VDSO__
#define __PERF_VDSO__

#include <linux/types.h>
#include <string.h>
#include <stdbool.h>

#define VDSO__MAP_NAME "[vdso]"

static inline bool is_vdso_map(const char *filename)
{
	return !strcmp(filename, VDSO__MAP_NAME);
}

struct dso *vdso__dso_findnew(struct list_head *head);
void vdso__exit(void);

#endif /* __PERF_VDSO__ */
Tue Jul 19 12:47:32 PDT 2016
Fri Jul 22 16:03:28 PDT 2016
Sun, Jul 24, 2016  4:26:24 PM
Mon, Jul 25, 2016 11:12:28 PM
