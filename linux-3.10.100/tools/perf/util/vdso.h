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
Tue Jul 19 12:40:21 PDT 2016
Fri Jul 22 15:50:13 PDT 2016
Sun, Jul 24, 2016  2:44:58 PM
Mon, Jul 25, 2016  9:19:10 PM
