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
Tue Jul 19 12:51:25 PDT 2016
Fri Jul 22 16:10:47 PDT 2016
Sun, Jul 24, 2016  5:22:01 PM
Tue, Jul 26, 2016 12:14:07 AM
