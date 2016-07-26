#ifndef __PERF_THREAD_MAP_H
#define __PERF_THREAD_MAP_H

#include <sys/types.h>

struct thread_map {
	int nr;
	int map[];
};

struct thread_map *thread_map__new_by_pid(pid_t pid);
struct thread_map *thread_map__new_by_tid(pid_t tid);
struct thread_map *thread_map__new(pid_t pid, pid_t tid);
void thread_map__delete(struct thread_map *threads);
#endif	/* __PERF_THREAD_MAP_H */
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:46 PDT 2016
Sun, Jul 24, 2016  1:36:09 PM
Mon, Jul 25, 2016  8:00:18 PM
Tue, Jul 26, 2016  2:34:56 PM
